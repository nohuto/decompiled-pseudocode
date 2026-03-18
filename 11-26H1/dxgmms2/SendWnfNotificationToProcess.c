/*
 * XREFs of SendWnfNotificationToProcess @ 0x14010CA18
 * Callers:
 *     ?SendTrimWnf@VIDMM_GLOBAL@@QEBAXPEAVVIDMM_PROCESS@@UD3DDDI_TRIMRESIDENCYSET_FLAGS@@_K@Z @ 0x14010C8F8 (-SendTrimWnf@VIDMM_GLOBAL@@QEBAXPEAVVIDMM_PROCESS@@UD3DDDI_TRIMRESIDENCYSET_FLAGS@@_K@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     SendWnfNotificationToVmProcess @ 0x1400448C4 (SendWnfNotificationToVmProcess.c)
 */

__int64 __fastcall SendWnfNotificationToProcess(__int64 a1, void *a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx
  NTSTATUS v7; // edi
  unsigned int updated; // eax
  struct _CLIENT_ID ClientId; // [rsp+58h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+27h] BYREF
  void *ProcessHandle; // [rsp+B0h] [rbp+6Fh] BYREF

  ProcessHandle = a2;
  v3 = 0;
  v5 = *(_QWORD *)(a1 + 72);
  ProcessHandle = 0LL;
  if ( (*(_DWORD *)(v5 + 408) & 0x100) != 0 )
    return SendWnfNotificationToVmProcess(v5);
  ClientId.UniqueThread = 0LL;
  if ( (*(_BYTE *)(v5 + 408) & 1) != 0 )
    ClientId.UniqueProcess = (HANDLE)*((_QWORD *)g_pVidMmSystemProcess + 3);
  else
    ClientId.UniqueProcess = *(HANDLE *)(a1 + 24);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenProcess(&ProcessHandle, 0x2000000u, &ObjectAttributes, &ClientId);
  if ( v7 < 0 )
  {
    WdLogSingleEntry1(1LL, ClientId.UniqueProcess);
    WdLogGlobalForLineNumber = 24573;
    DxgkLogInternalTriageEvent((__int64)ClientId.UniqueProcess, 0x40000LL);
    return (unsigned int)v7;
  }
  else
  {
    updated = ZwUpdateWnfStateData(&WNF_DX_VIDMM_TRIM_NOTIFICATION, a3, 24LL, 0LL, ProcessHandle, 0, 0);
    if ( updated != -1073741431 )
      v3 = updated;
    ZwClose(ProcessHandle);
    return v3;
  }
}
