/*
 * XREFs of ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x1800570E0
 * Callers:
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180056DE8 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18007EE08 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?ReleaseDCompResources@CDesktopManager@@AEAAXXZ @ 0x1800AC730 (-ReleaseDCompResources@CDesktopManager@@AEAAXXZ.c)
 * Callees:
 *     ??1CDWMDisplaySet@@QEAA@XZ @ 0x18000845C (--1CDWMDisplaySet@@QEAA@XZ.c)
 */

void __fastcall CDWMDisplaySet::Release(CDWMDisplaySet *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this, 0xFFFFFFFF) == 1 )
  {
    if ( this )
    {
      CDWMDisplaySet::~CDWMDisplaySet(this);
      operator delete(this, 0x70uLL);
    }
  }
}
