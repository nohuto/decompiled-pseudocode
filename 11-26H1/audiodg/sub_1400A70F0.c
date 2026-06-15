/*
 * XREFs of sub_1400A70F0 @ 0x1400A70F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400A70F0(__int64 a1, _OWORD *a2, _QWORD *a3, _DWORD *a4)
{
  if ( !a2 || !a4 || !a3 )
    return 2147942487LL;
  *a2 = *(_OWORD *)(a1 + 1400);
  *a4 = *(_DWORD *)(a1 + 1416);
  *a3 = *(_QWORD *)(a1 + 1424);
  return 0LL;
}
