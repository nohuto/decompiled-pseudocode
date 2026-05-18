/*
 * XREFs of sub_18005C3A4 @ 0x18005C3A4
 * Callers:
 *     sub_18005C3A4 @ 0x18005C3A4 (sub_18005C3A4.c)
 *     sub_18005CCA0 @ 0x18005CCA0 (sub_18005CCA0.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_18005C3A4 @ 0x18005C3A4 (sub_18005C3A4.c)
 *     sub_18005CF24 @ 0x18005CF24 (sub_18005CF24.c)
 */

__int64 __fastcall sub_18005C3A4(__int64 a1, __int64 a2, __int64 a3)
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
      sub_18005C3A4(a1, a2, v3[2]);
      v6 = v3;
      v7 = v3;
      v3 = (_QWORD *)*v3;
      sub_18005CF24(v6 + 5);
      result = sub_18000E26C(v7, 0x48uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
  return result;
}
