/*
 * XREFs of PopEtEnergyTrackerDelete @ 0x1407DC270
 * Callers:
 *     <none>
 * Callees:
 *     PopEtEnergyTrackerCleanup @ 0x1407DBD60 (PopEtEnergyTrackerCleanup.c)
 */

__int64 __fastcall PopEtEnergyTrackerDelete(__int64 *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  return PopEtEnergyTrackerCleanup(a1, a2, a3, a4);
}
