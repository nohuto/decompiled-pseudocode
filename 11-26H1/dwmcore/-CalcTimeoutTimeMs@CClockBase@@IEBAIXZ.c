/*
 * XREFs of ?CalcTimeoutTimeMs@CClockBase@@IEBAIXZ @ 0x180166794
 * Callers:
 *     ?WaitForNextTick@CClockBase@@UEAA?AW4WaitResult@ICompositorClock@@PEAX@Z @ 0x180166730 (-WaitForNextTick@CClockBase@@UEAA-AW4WaitResult@ICompositorClock@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CClockBase::CalcTimeoutTimeMs(CClockBase *this)
{
  int v2; // edx
  __int64 v3; // rcx
  unsigned __int64 v4; // rax
  unsigned int v5; // ecx
  LONGLONG v6; // rax

  if ( !g_pComposition )
  {
LABEL_11:
    if ( !GetSystemMetrics(0x2000) )
      return CScheduler::s_vBlankWaitTimeoutMonitorOffMs;
    goto LABEL_15;
  }
  if ( !*((_BYTE *)g_pComposition + 6465) )
    goto LABEL_18;
  v2 = *((_DWORD *)g_pComposition + 1612);
  if ( v2 == -1 )
  {
LABEL_15:
    v3 = 1LL;
    goto LABEL_8;
  }
  if ( !v2 )
  {
LABEL_18:
    if ( g_pComposition )
    {
      if ( *((_BYTE *)g_pComposition + 6465) )
      {
        v3 = 4LL;
        if ( *((_DWORD *)g_pComposition + 1613) )
          goto LABEL_8;
      }
    }
    goto LABEL_11;
  }
  v3 = 4LL;
  if ( v2 == 1 )
    return 1000LL;
LABEL_8:
  v4 = 1000 * *((_QWORD *)this + 3) * v3;
  v5 = 80;
  v6 = v4 / g_qpcFrequency.QuadPart;
  if ( (unsigned int)v6 < 0x50 )
    return (unsigned int)v6;
  return v5;
}
