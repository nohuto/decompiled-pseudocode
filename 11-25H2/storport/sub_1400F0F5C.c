/*
 * XREFs of sub_1400F0F5C @ 0x1400F0F5C
 * Callers:
 *     sub_1400F045C @ 0x1400F045C (sub_1400F045C.c)
 *     sub_1400F1128 @ 0x1400F1128 (sub_1400F1128.c)
 *     sub_140130818 @ 0x140130818 (sub_140130818.c)
 * Callees:
 *     sub_1400E7BF8 @ 0x1400E7BF8 (sub_1400E7BF8.c)
 *     sub_1400F75BC @ 0x1400F75BC (sub_1400F75BC.c)
 */

void *__fastcall sub_1400F0F5C(__int64 a1)
{
  void *result; // rax
  unsigned int v3; // edi
  unsigned int v4; // esi

  sub_1400F75BC(a1, *(_QWORD *)(a1 + 712));
  result = sub_1400E7BF8(a1, *(_QWORD *)(a1 + 856));
  v3 = 0;
  v4 = 0;
  if ( *(_WORD *)(a1 + 22) )
  {
    do
    {
      sub_1400F75BC(a1, *(_QWORD *)(a1 + 728) + 192LL * v4);
      result = (void *)*(unsigned __int16 *)(a1 + 22);
      ++v4;
    }
    while ( v4 < (unsigned int)result );
  }
  if ( *(_WORD *)(a1 + 26) )
  {
    do
    {
      sub_1400E7BF8(a1, *(_QWORD *)(a1 + 864) + ((unsigned __int64)v3 << 7));
      result = (void *)*(unsigned __int16 *)(a1 + 26);
      ++v3;
    }
    while ( v3 < (unsigned int)result );
  }
  return result;
}
