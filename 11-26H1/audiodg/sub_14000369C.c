/*
 * XREFs of sub_14000369C @ 0x14000369C
 * Callers:
 *     sub_140003090 @ 0x140003090 (sub_140003090.c)
 *     sub_140003520 @ 0x140003520 (sub_140003520.c)
 *     sub_1400035E0 @ 0x1400035E0 (sub_1400035E0.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_14000369C(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r8
  _QWORD *result; // rax

  v2 = *(_QWORD **)(a1 + 120);
  while ( v2 )
  {
    result = (_QWORD *)v2[2];
    v2 = (_QWORD *)*v2;
    if ( *result == a2 )
      return result;
  }
  return 0LL;
}
