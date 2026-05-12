/*
 * XREFs of sub_1400E7BF8 @ 0x1400E7BF8
 * Callers:
 *     sub_1400F0F5C @ 0x1400F0F5C (sub_1400F0F5C.c)
 * Callees:
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

void *__fastcall sub_1400E7BF8(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  *(_WORD *)(a2 + 36) = 0;
  *(_WORD *)(a2 + 34) = 0;
  if ( *(_WORD *)(a2 + 32) )
    v2 = *(unsigned int *)(a1 + 8);
  else
    v2 = *(unsigned __int16 *)(a1 + 6);
  return memset_0(*(void **)a2, 0, 16 * v2);
}
