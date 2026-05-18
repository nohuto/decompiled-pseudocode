/*
 * XREFs of sub_180024F78 @ 0x180024F78
 * Callers:
 *     sub_180024F78 @ 0x180024F78 (sub_180024F78.c)
 *     sub_1800259A4 @ 0x1800259A4 (sub_1800259A4.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180013494 @ 0x180013494 (sub_180013494.c)
 *     sub_180024F78 @ 0x180024F78 (sub_180024F78.c)
 */

__int64 __fastcall sub_180024F78(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  _QWORD *v6; // rcx
  void *v7; // rbx
  __int64 v8; // rdx
  __int64 result; // rax

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      sub_180024F78(a1, a2, v3[2]);
      v6 = v3;
      v7 = v3;
      v3 = (_QWORD *)*v3;
      sub_180013494((__int64)(v6 + 5), v8);
      result = sub_18000E26C(v7, 0x68uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
  return result;
}
