/*
 * XREFs of VidSchNotifyDeviceRemoved @ 0x140046610
 * Callers:
 *     VidSchiNotifyDeviceRemoved @ 0x140046508 (VidSchiNotifyDeviceRemoved.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 */

void __fastcall VidSchNotifyDeviceRemoved(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  int updated; // eax
  __int64 v5; // rcx
  _CLIENT_ID ClientId; // [rsp+50h] [rbp+7h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+17h] BYREF
  int v8; // [rsp+B8h] [rbp+6Fh] BYREF
  void *ProcessHandle; // [rsp+C0h] [rbp+77h] BYREF

  ClientId.UniqueProcess = Context;
  ProcessHandle = 0LL;
  ClientId.UniqueThread = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenProcess(&ProcessHandle, 0x2000000u, &ObjectAttributes, &ClientId) < 0 )
  {
    WdLogSingleEntry1(1LL, ClientId.UniqueProcess);
    WdLogGlobalForLineNumber = 4700;
  }
  else
  {
    v8 = 1;
    updated = ZwUpdateWnfStateData(&WNF_DX_DEVICE_REMOVAL, &v8, 4LL, 0LL, ProcessHandle, 0, 0);
    if ( updated >= 0 )
      goto LABEL_3;
    WdLogSingleEntry1(1LL, updated);
    WdLogGlobalForLineNumber = 4717;
  }
  DxgkLogInternalTriageEvent(v5, 0x40000LL);
LABEL_3:
  if ( ProcessHandle )
    ZwClose(ProcessHandle);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
