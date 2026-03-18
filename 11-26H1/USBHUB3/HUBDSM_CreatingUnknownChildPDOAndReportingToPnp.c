/*
 * XREFs of HUBDSM_CreatingUnknownChildPDOAndReportingToPnp @ 0x140021770
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_CreateUnknownPdo @ 0x1400824B4 (HUBPDO_CreateUnknownPdo.c)
 */

__int64 __fastcall HUBDSM_CreatingUnknownChildPDOAndReportingToPnp(__int64 a1)
{
  return HUBPDO_CreateUnknownPdo(*(_QWORD *)(a1 + 960));
}
