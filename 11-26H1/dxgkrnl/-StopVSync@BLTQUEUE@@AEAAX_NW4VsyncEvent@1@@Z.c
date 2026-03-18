/*
 * XREFs of ?StopVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x140192B40
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x14009A6DC (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x14009B4C0 (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?DisableVSync@BLTQUEUE@@QEAAXXZ @ 0x140192AE8 (-DisableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x140283020 (-DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?GlobalVmBusStatusChangeWorker@BLTQUEUE@@AEAAXXZ @ 0x1402833D4 (-GlobalVmBusStatusChangeWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?HostMonitorPowerStateWorker@BLTQUEUE@@AEAAXXZ @ 0x14028346C (-HostMonitorPowerStateWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x14041C384 (-ResetInternal@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140009790 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x14002EF70 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x140069D80 (McTemplateK0qq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall BLTQUEUE::StopVSync(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // di
  struct _KTHREAD **v5; // rdx
  __int64 v6; // [rsp+20h] [rbp-38h]
  _BYTE v7[40]; // [rsp+30h] [rbp-28h] BYREF

  v3 = a2;
  if ( (*(_DWORD *)(a1 + 1072) & 2) != 0 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      LODWORD(v6) = a3;
      McTemplateK0qq_EtwWriteTransfer(a1, a2, a3, *(_DWORD *)(a1 + 136), v6);
    }
    v5 = 0LL;
    if ( !v3 )
      v5 = (struct _KTHREAD **)(a1 + 424);
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7, v5, 0);
    if ( !v3 )
      DXGAUTOPUSHLOCK::AcquireExclusive((DXGAUTOPUSHLOCK *)v7);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 128) + 40LL))(*(_QWORD *)(a1 + 128));
    *(_DWORD *)(a1 + 1072) &= ~2u;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7);
  }
}
