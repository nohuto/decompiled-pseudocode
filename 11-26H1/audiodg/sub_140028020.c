/*
 * XREFs of sub_140028020 @ 0x140028020
 * Callers:
 *     sub_140027CD8 @ 0x140027CD8 (sub_140027CD8.c)
 * Callees:
 *     sub_140028090 @ 0x140028090 (sub_140028090.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140028020(__int64 a1, int a2, __int64 a3, __int64 *a4)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 *v8; // rcx

  v5 = a2;
  v6 = qword_1400E8778 + 8LL * a2;
  if ( v6 )
    sub_140028090(v6, a3);
  result = qword_1400E8780;
  v8 = (__int64 *)(qword_1400E8780 + 8 * v5);
  if ( v8 )
  {
    result = *a4;
    *v8 = *a4;
  }
  return result;
}
