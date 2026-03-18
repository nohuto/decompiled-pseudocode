/*
 * XREFs of NtUserCreateWindowStation @ 0x14014DBA0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionCreateWindowStationEntryPoint @ 0x14014DBE0 (ApiSetEditionCreateWindowStationEntryPoint.c)
 */

__int64 __fastcall NtUserCreateWindowStation(int a1, int a2, int a3, int a4, int a5, __int64 a6, __int64 a7, int a8)
{
  return ApiSetEditionCreateWindowStationEntryPoint(a1, a2, a3, a4, a5, a6, a7, a8);
}
