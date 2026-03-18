/*
 * XREFs of ?VmBusWnfNotification@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140234920
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

unsigned __int8 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusWnfNotification(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rdi
  struct _CLIENT_ID ClientId; // [rsp+50h] [rbp+7h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+17h] BYREF
  void *ProcessHandle; // [rsp+B0h] [rbp+67h] BYREF

  v1 = *((_QWORD *)a1 + 17);
  ClientId.UniqueProcess = *(HANDLE *)(v1 + 32);
  ClientId.UniqueThread = 0LL;
  ProcessHandle = 0LL;
  if ( *(_QWORD *)(v1 + 32)
    && (*(_QWORD *)&ObjectAttributes.Length = 48LL,
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL,
        ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.ObjectName = 0LL,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        ZwOpenProcess(&ProcessHandle, 0x2000000u, &ObjectAttributes, &ClientId) < 0) )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 14570;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to open process handle for process id 0x%I64x",
      (__int64)ClientId.UniqueProcess,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    v2 = (_QWORD *)(v1 + 44);
    ZwUpdateWnfStateData(v1 + 24, v1 + 44, *(unsigned int *)(v1 + 40));
    if ( RtlCompareMemory((const void *)(v1 + 24), &WNF_DX_VIDMM_TRIM_NOTIFICATION, 8uLL) == 8
      && *(_DWORD *)v2 == *((_DWORD *)DXGGLOBAL::GetGlobal() + 254)
      && *(_DWORD *)(v1 + 48) == *((_DWORD *)DXGGLOBAL::GetGlobal() + 255) )
    {
      *v2 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 128);
      ZwUpdateWnfStateData(v1 + 24, v1 + 44, *(unsigned int *)(v1 + 40));
    }
    if ( ProcessHandle )
      ZwClose(ProcessHandle);
  }
  return 0;
}
