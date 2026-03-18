/*
 * XREFs of _lambda_3e10a6c53a076eca3525754a494039ed_::operator() @ 0x140081630
 * Callers:
 *     ?SendHostMonitorPowerMsg@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IE@Z @ 0x1400604B8 (-SendHostMonitorPowerMsg@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IE@Z.c)
 * Callees:
 *     McTemplateK0xqpp_EtwWriteTransfer @ 0x140081D18 (McTemplateK0xqpp_EtwWriteTransfer.c)
 *     ?VmBusSendHostMonitorPower@DXG_HOST_GLOBAL_VMBUS@@SAJPEAXU_LUID@@IE@Z @ 0x140084A20 (-VmBusSendHostMonitorPower@DXG_HOST_GLOBAL_VMBUS@@SAJPEAXU_LUID@@IE@Z.c)
 */

char __fastcall lambda_3e10a6c53a076eca3525754a494039ed_::operator()(__int64 a1, __int64 a2)
{
  struct _LUID *v4; // rdx
  unsigned int v5; // r8d
  int v6; // ecx
  void *v7; // rcx
  int v8; // ecx
  int v9; // r8d

  v4 = *(struct _LUID **)a1;
  if ( *(_DWORD *)(a2 + 16) == **(_DWORD **)a1 && *(_DWORD *)(a2 + 20) == v4->HighPart )
  {
    v5 = *(_DWORD *)(a2 + 24);
    v6 = **(_DWORD **)(a1 + 8);
    if ( v5 == v6 || v6 == -1 )
    {
      v7 = *(void **)(a2 + 32);
      if ( v7 )
      {
        if ( *(_DWORD *)(a2 + 40) >= 0x25u )
        {
          DXG_HOST_GLOBAL_VMBUS::VmBusSendHostMonitorPower(v7, *v4, v5, **(_BYTE **)(a1 + 16));
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
            McTemplateK0xqpp_EtwWriteTransfer(
              v8,
              (unsigned int)&RemoteMonitorVSyncTrigger,
              v9,
              *(_QWORD *)(a2 + 16),
              *(_DWORD *)(a2 + 24),
              *(_QWORD *)(a2 + 48),
              *(_QWORD *)(a2 + 32));
        }
      }
    }
  }
  return 1;
}
