/*
 * XREFs of ExpInitializeTimeZoneInformation @ 0x140B145E0
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x140B13E1C (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     ExpInitializeTimeChangeWorker @ 0x140B147B8 (ExpInitializeTimeChangeWorker.c)
 */

__int64 __fastcall ExpInitializeTimeZoneInformation(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v6; // r9d
  int v7; // r9d
  __int64 result; // rax

  ExpInitializeTimeChangeWorker(a2 + 448, (unsigned int)ExpTimeZoneDpcRoutine, a1, a4, a1);
  ExpInitializeTimeChangeWorker(a2 + 768, (unsigned int)ExpNextYearDpcRoutine, a1, v6, a1);
  ExpInitializeTimeChangeWorker(a2 + 608, (unsigned int)ExpCenturyDpcRoutine, a1, v7, a1);
  result = 1LL;
  *(_OWORD *)(a2 + 944) = 0LL;
  *(_OWORD *)(a2 + 968) = 0LL;
  *(_DWORD *)(a2 + 946) = 65537;
  *(_WORD *)(a2 + 956) = 1;
  *(_DWORD *)(a2 + 970) = 65537;
  *(_WORD *)(a2 + 980) = 1;
  return result;
}
