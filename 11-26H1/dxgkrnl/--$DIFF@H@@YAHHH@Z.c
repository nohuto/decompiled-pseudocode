/*
 * XREFs of ??$DIFF@H@@YAHHH@Z @ 0x14005793C
 * Callers:
 *     BmlCompareSourceModesWithConstraint @ 0x1402DE9F4 (BmlCompareSourceModesWithConstraint.c)
 *     BmlCompareRegionsWithPivot @ 0x1402DEF28 (BmlCompareRegionsWithPivot.c)
 *     BmlCompareSourceModesWithMonitors @ 0x1402DEFE4 (BmlCompareSourceModesWithMonitors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DIFF<int>(int a1, int a2)
{
  __int64 result; // rax

  result = (unsigned int)(a1 - a2);
  if ( a1 <= a2 )
    return (unsigned int)(a2 - a1);
  return result;
}
