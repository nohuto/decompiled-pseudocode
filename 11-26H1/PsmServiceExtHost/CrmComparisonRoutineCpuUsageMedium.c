/*
 * XREFs of CrmComparisonRoutineCpuUsageMedium @ 0x180062770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmComparisonRoutineCpuUsageMedium(__int64 a1, _DWORD *a2)
{
  if ( *a2 >= 0x32u )
    return *a2 < 0x4Bu;
  else
    return 2LL;
}
