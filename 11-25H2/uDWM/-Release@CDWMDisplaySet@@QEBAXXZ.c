/*
 * XREFs of ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x1800668F4
 * Callers:
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x1800666E0 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180077088 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?ReleaseDCompResources@CDesktopManager@@AEAAXXZ @ 0x1800AD610 (-ReleaseDCompResources@CDesktopManager@@AEAAXXZ.c)
 * Callees:
 *     ??1CDWMDisplaySet@@QEAA@XZ @ 0x180067FA0 (--1CDWMDisplaySet@@QEAA@XZ.c)
 */

void __fastcall CDWMDisplaySet::Release(CDWMDisplaySet *this)
{
  const struct std::nothrow_t *v2; // rdx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this, 0xFFFFFFFF) == 1 )
  {
    if ( this )
    {
      CDWMDisplaySet::~CDWMDisplaySet(this);
      CDisplayBlackCurtainAnimatedVisual::operator delete(this, v2);
    }
  }
}
