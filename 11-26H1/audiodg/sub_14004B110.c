/*
 * XREFs of sub_14004B110 @ 0x14004B110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14004B110(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2 )
    return 2147942487LL;
  *a2 = *(_DWORD *)(a1 + 12);
  return result;
}
