/*
 * XREFs of sub_140027CD8 @ 0x140027CD8
 * Callers:
 *     sub_140027AE0 @ 0x140027AE0 (sub_140027AE0.c)
 * Callees:
 *     sub_140028020 @ 0x140028020 (sub_140028020.c)
 */

__int64 __fastcall sub_140027CD8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax

  v5 = o__recalloc(qword_1400E8778, dword_1400E8788 + 1, 8LL);
  if ( !v5 )
    return 0LL;
  qword_1400E8778 = v5;
  v6 = o__recalloc(qword_1400E8780, dword_1400E8788 + 1, 8LL);
  if ( !v6 )
    return 0LL;
  qword_1400E8780 = v6;
  sub_140028020(v7, (unsigned int)dword_1400E8788, a2, a3);
  result = 1LL;
  ++dword_1400E8788;
  return result;
}
