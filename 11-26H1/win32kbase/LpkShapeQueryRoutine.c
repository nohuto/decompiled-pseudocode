/*
 * XREFs of LpkShapeQueryRoutine @ 0x1402F3C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall LpkShapeQueryRoutine(__int64 a1, int a2, _DWORD *a3, __int64 a4, _DWORD *a5)
{
  if ( a2 == 4 )
    *a5 |= 1 << *a3;
  return 0LL;
}
