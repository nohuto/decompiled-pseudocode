/*
 * XREFs of HalpTimerGetClockRates @ 0x1405838F8
 * Callers:
 *     HalpTimerWatchdogTriggerSystemReset @ 0x140220C90 (HalpTimerWatchdogTriggerSystemReset.c)
 *     HalpTimerFindIdealWatchdog @ 0x140579950 (HalpTimerFindIdealWatchdog.c)
 *     HalpTimerGetClockConfiguration @ 0x140583850 (HalpTimerGetClockConfiguration.c)
 *     HalpTimerInitializeSystemWatchdog @ 0x140587924 (HalpTimerInitializeSystemWatchdog.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HalpTimerGetClockRates(__int64 a1, unsigned __int64 *a2, _DWORD *a3)
{
  unsigned __int64 v3; // r10
  unsigned int v5; // ecx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 192);
  v5 = *(_DWORD *)(a1 + 220);
  if ( v5 <= 0x28 )
    v6 = 10000000 * (1LL << v5) - 10000000;
  else
    v6 = 0x9896800000000000uLL;
  v7 = v6 / v3;
  if ( (*(_DWORD *)(a1 + 224) & 0x80u) == 0 )
  {
    result = 0x989680 / v3;
  }
  else
  {
    result = (unsigned int)v7;
    v7 = (unsigned int)v7 * (unsigned __int64)*(unsigned int *)(a1 + 216);
  }
  *a2 = v7;
  *a3 = result;
  return result;
}
