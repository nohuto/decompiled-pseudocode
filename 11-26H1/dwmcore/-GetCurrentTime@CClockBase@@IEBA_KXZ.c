/*
 * XREFs of ?GetCurrentTime@CClockBase@@IEBA_KXZ @ 0x180186B64
 * Callers:
 *     ?UpdateTiming@CDefaultClock@@UEAA_KXZ @ 0x180186960 (-UpdateTiming@CDefaultClock@@UEAA_KXZ.c)
 *     ?UpdateTiming@CMonitorClock@@UEAA_KXZ @ 0x1801869C0 (-UpdateTiming@CMonitorClock@@UEAA_KXZ.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

LARGE_INTEGER __fastcall CClockBase::GetCurrentTime(CClockBase *this)
{
  void *retaddr; // [rsp+28h] [rbp+0h]
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  if ( PerformanceCount.QuadPart < CClockBase::s_prevClockSetTime )
  {
    if ( 1000 * (CClockBase::s_prevClockSetTime - PerformanceCount.QuadPart) / g_qpcFrequency.QuadPart > CClockBase::s_allowableTimeDriftMs )
      ModuleFailFastForHRESULT(-2003304438, retaddr);
    return (LARGE_INTEGER)CClockBase::s_prevClockSetTime;
  }
  else
  {
    return PerformanceCount;
  }
}
