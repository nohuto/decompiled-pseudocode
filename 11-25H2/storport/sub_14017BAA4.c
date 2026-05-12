/*
 * XREFs of sub_14017BAA4 @ 0x14017BAA4
 * Callers:
 *     sub_14004534C @ 0x14004534C (sub_14004534C.c)
 *     sub_1400C8EEC @ 0x1400C8EEC (sub_1400C8EEC.c)
 * Callees:
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_14017BAA4(__int64 a1)
{
  __int64 result; // rax

  memset_0((void *)(a1 + 8), 0, 0xE0uLL);
  result = 0LL;
  *(_BYTE *)(a1 + 248) &= 0xF9u;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)a1 = 0LL;
  return result;
}
