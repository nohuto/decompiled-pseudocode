/*
 * XREFs of sub_180054278 @ 0x180054278
 * Callers:
 *     sub_180028520 @ 0x180028520 (sub_180028520.c)
 *     sub_1800537DC @ 0x1800537DC (sub_1800537DC.c)
 *     sub_18006AD9C @ 0x18006AD9C (sub_18006AD9C.c)
 *     sub_1800C3100 @ 0x1800C3100 (sub_1800C3100.c)
 *     sub_1800C4100 @ 0x1800C4100 (sub_1800C4100.c)
 *     sub_1800C50F4 @ 0x1800C50F4 (sub_1800C50F4.c)
 *     sub_1800C68A0 @ 0x1800C68A0 (sub_1800C68A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180054278(__int64 a1)
{
  unsigned int **v1; // rcx
  __int64 result; // rax
  unsigned int *v3; // rcx

  v1 = *(unsigned int ***)(a1 + 112);
  result = 0LL;
  if ( v1 )
  {
    v3 = *v1;
    if ( v3 )
      return *v3;
  }
  return result;
}
