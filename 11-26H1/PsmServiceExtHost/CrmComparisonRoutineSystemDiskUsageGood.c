/*
 * XREFs of CrmComparisonRoutineSystemDiskUsageGood @ 0x180061BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmComparisonRoutineSystemDiskUsageGood(__int64 a1, _DWORD *a2)
{
  if ( *a2 >= 0x14u )
    return *a2 < 0x28u;
  else
    return 2LL;
}
