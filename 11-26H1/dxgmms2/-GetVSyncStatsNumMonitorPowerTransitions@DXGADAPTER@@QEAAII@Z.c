/*
 * XREFs of ?GetVSyncStatsNumMonitorPowerTransitions@DXGADAPTER@@QEAAII@Z @ 0x14002F638
 * Callers:
 *     ?VidSchiLogAggregatedTelemetry@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x14002F0E4 (-VidSchiLogAggregatedTelemetry@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGADAPTER::GetVSyncStatsNumMonitorPowerTransitions(DXGADAPTER *this, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v6; // rcx

  v2 = *((unsigned int *)this + 474);
  v3 = a2;
  if ( a2 >= (unsigned int)v2 )
  {
    WdLogSingleEntry2(2LL, a2, v2);
    WdLogGlobalForLineNumber = 2493;
    DxgkLogInternalTriageEvent(v6, 0x40000LL);
    return 0LL;
  }
  v4 = *((_QWORD *)this + 557);
  if ( !v4 )
    return 0LL;
  if ( (*((_DWORD *)this + 754) & 0x10) != 0 )
    return *(unsigned int *)(112 * v3 + v4 + 8);
  else
    return *(unsigned int *)(v4 + 8);
}
