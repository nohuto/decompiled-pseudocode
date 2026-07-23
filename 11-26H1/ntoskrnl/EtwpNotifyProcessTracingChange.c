/*
 * XREFs of EtwpNotifyProcessTracingChange @ 0x14082E6CC
 * Callers:
 *     EtwpUpdateProcessTracingCallback @ 0x14082E870 (EtwpUpdateProcessTracingCallback.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenProcess @ 0x140728480 (ZwOpenProcess.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall EtwpNotifyProcessTracingChange(void *a1)
{
  NTSTATUS updated; // ebx
  CLIENT_ID ClientId; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE ProcessHandle; // [rsp+90h] [rbp+10h] BYREF

  ClientId.UniqueProcess = a1;
  ProcessHandle = 0LL;
  ClientId.UniqueThread = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  updated = ZwOpenProcess(&ProcessHandle, 0, &ObjectAttributes, &ClientId);
  if ( updated >= 0 )
    updated = ZwUpdateWnfStateData(&WNF_ETW_UMGL_TRACING_CHANGE, 0LL, 0, 0LL, ProcessHandle, 0, 0);
  if ( ProcessHandle )
    ZwClose(ProcessHandle);
  return (unsigned int)updated;
}
