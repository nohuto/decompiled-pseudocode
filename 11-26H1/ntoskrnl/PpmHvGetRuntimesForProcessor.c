/*
 * XREFs of PpmHvGetRuntimesForProcessor @ 0x1406149D0
 * Callers:
 *     PpmUpdatePerformanceFeedback @ 0x1402F7CD0 (PpmUpdatePerformanceFeedback.c)
 * Callees:
 *     PpmConvertTimeFrom @ 0x1402F3288 (PpmConvertTimeFrom.c)
 *     HvlGetPpmStatsForProcessor @ 0x1405C1970 (HvlGetPpmStatsForProcessor.c)
 */

__int64 __fastcall PpmHvGetRuntimesForProcessor(struct _KPRCB *a1, __int64 *a2, __int64 *a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r11
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = 0LL;
  v9 = 0LL;
  HvlGetPpmStatsForProcessor(a1, &v9, &v10);
  v5 = PpmConvertTimeFrom(v9, 10000000LL);
  v6 = v10;
  *a2 = v5;
  *a3 = PpmConvertTimeFrom(v6, 10000000LL);
  return PpmConvertTimeFrom(v7, 10000000LL);
}
