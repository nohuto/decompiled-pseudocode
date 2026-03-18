/*
 * XREFs of ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x140283020
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x14009A6DC (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z @ 0x1402837AC (-ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140009790 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x14002EF70 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x14018F994 (-RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 *     ?StopVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x140192B40 (-StopVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 *     ?StartVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x140283D74 (-StartVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 */

void __fastcall BLTQUEUE::DisableHwVSyncWorker(struct _KTHREAD **this)
{
  __int64 v2; // rdx
  int v3; // edi
  __int64 v4; // rdx
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5, this + 53, 0);
  DXGAUTOPUSHLOCK::AcquireExclusive((DXGAUTOPUSHLOCK *)v5);
  if ( *((_DWORD *)this + 34) == 1 )
  {
    v3 = (_DWORD)this[134] & 2;
    if ( v3 )
    {
      LOBYTE(v2) = 1;
      BLTQUEUE::StopVSync((__int64)this, v2, 7LL);
    }
    *((_DWORD *)this + 34) = 2;
    BLTQUEUE::RecreateVsyncSource((__int64)this, 0, 7);
    if ( v3 )
    {
      LOBYTE(v4) = 1;
      BLTQUEUE::StartVSync(this, v4, 7LL);
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5);
}
