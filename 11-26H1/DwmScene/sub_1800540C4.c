/*
 * XREFs of sub_1800540C4 @ 0x1800540C4
 * Callers:
 *     sub_180028480 @ 0x180028480 (sub_180028480.c)
 *     sub_1800537DC @ 0x1800537DC (sub_1800537DC.c)
 *     sub_18006AD9C @ 0x18006AD9C (sub_18006AD9C.c)
 *     sub_1800C4100 @ 0x1800C4100 (sub_1800C4100.c)
 *     sub_1800C4B58 @ 0x1800C4B58 (sub_1800C4B58.c)
 *     sub_1800C50F4 @ 0x1800C50F4 (sub_1800C50F4.c)
 *     sub_1800C68A0 @ 0x1800C68A0 (sub_1800C68A0.c)
 *     sub_1800C8130 @ 0x1800C8130 (sub_1800C8130.c)
 *     sub_1800C8650 @ 0x1800C8650 (sub_1800C8650.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800540C4(__int64 a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *(__int64 **)(a1 + 112);
  result = 0LL;
  if ( v1 )
  {
    v3 = *v1;
    if ( v3 )
      return *(unsigned int *)(v3 + 16);
  }
  return result;
}
