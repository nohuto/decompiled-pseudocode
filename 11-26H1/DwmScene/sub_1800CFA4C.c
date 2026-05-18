/*
 * XREFs of sub_1800CFA4C @ 0x1800CFA4C
 * Callers:
 *     sub_1800CFA1C @ 0x1800CFA1C (sub_1800CFA1C.c)
 *     sub_1800CFA4C @ 0x1800CFA4C (sub_1800CFA4C.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_1800CFA4C @ 0x1800CFA4C (sub_1800CFA4C.c)
 */

__int64 __fastcall sub_1800CFA4C(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  _QWORD *v6; // rcx
  void *v7; // rbx
  __int64 result; // rax

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      sub_1800CFA4C(a1, a2, v3[2]);
      v6 = v3;
      v7 = v3;
      v3 = (_QWORD *)*v3;
      sub_18000F938(v6 + 5);
      result = sub_18000E26C(v7, 0x30uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
  return result;
}
