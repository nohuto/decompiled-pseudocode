/*
 * XREFs of sub_1400BEB00 @ 0x1400BEB00
 * Callers:
 *     sub_1400BEB50 @ 0x1400BEB50 (sub_1400BEB50.c)
 *     sub_1400BEE3C @ 0x1400BEE3C (sub_1400BEE3C.c)
 * Callees:
 *     sub_140014B38 @ 0x140014B38 (sub_140014B38.c)
 */

__int64 __fastcall sub_1400BEB00(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  sub_140014B38(a1 + 8);
  v2 = *(void **)(a1 + 48);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x434E6152u);
  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  return result;
}
