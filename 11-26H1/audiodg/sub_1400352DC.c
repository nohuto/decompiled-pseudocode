/*
 * XREFs of sub_1400352DC @ 0x1400352DC
 * Callers:
 *     sub_140043B74 @ 0x140043B74 (sub_140043B74.c)
 *     sub_1400574A0 @ 0x1400574A0 (sub_1400574A0.c)
 * Callees:
 *     sub_14003534C @ 0x14003534C (sub_14003534C.c)
 */

__int64 __fastcall sub_1400352DC(__int64 a1)
{
  __int64 result; // rax

  if ( !a1 )
    return 2147500035LL;
  result = sub_14003534C(*(_QWORD *)(a1 + 8));
  if ( (int)result < 0 )
    return result;
  if ( !*(_QWORD *)(a1 + 56) )
    return 2147500035LL;
  if ( *(_DWORD *)(a1 + 72) > 1u )
    return 2147942487LL;
  else
    return 0LL;
}
