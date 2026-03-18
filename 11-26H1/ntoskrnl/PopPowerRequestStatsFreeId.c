/*
 * XREFs of PopPowerRequestStatsFreeId @ 0x140A891C0
 * Callers:
 *     PopPowerRequestStatsCreate @ 0x140A89148 (PopPowerRequestStatsCreate.c)
 *     PopPowerRequestStatsGetIdForRequest @ 0x140A891F8 (PopPowerRequestStatsGetIdForRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopPowerRequestStatsFreeId(PVOID *P)
{
  if ( (*(_DWORD *)P & 2) != 0 )
    ExFreePoolWithTag(P[2], 0x54515750u);
  ExFreePoolWithTag(P, 0x54515750u);
}
