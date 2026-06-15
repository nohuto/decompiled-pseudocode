/*
 * XREFs of ?CleanupMonitorRestartTimer@CMonitorManager@@AEAAXXZ @ 0x18011C154
 * Callers:
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x18011DC34 (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?Shutdown@CMonitorManager@@QEAAXXZ @ 0x18012007C (-Shutdown@CMonitorManager@@QEAAXXZ.c)
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180060CEC (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18006110C (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     WPP_SF_q @ 0x1800CFD20 (WPP_SF_q.c)
 */

void __fastcall CMonitorManager::CleanupMonitorRestartTimer(CMonitorManager *this)
{
  struct _TP_TIMER *v2; // rdi
  LPCRITICAL_SECTION v3[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x39u,
      (__int64)&WPP_72c9fd82aa603dc17c55ee7407a1fef9_Traceguids,
      this);
  }
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v3, (struct _RTL_CRITICAL_SECTION *)((char *)this + 256));
  v2 = (struct _TP_TIMER *)*((_QWORD *)this + 37);
  *((_QWORD *)this + 37) = 0LL;
  ATL::CCritSecLock::~CCritSecLock(v3);
  if ( v2 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x3Au,
        (__int64)&WPP_72c9fd82aa603dc17c55ee7407a1fef9_Traceguids,
        this);
    }
    SetThreadpoolTimer(v2, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v2, 1);
    CloseThreadpoolTimer(v2);
  }
}
