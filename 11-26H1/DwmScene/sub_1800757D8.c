/*
 * XREFs of sub_1800757D8 @ 0x1800757D8
 * Callers:
 *     sub_1800757D8 @ 0x1800757D8 (sub_1800757D8.c)
 *     sub_180075A08 @ 0x180075A08 (sub_180075A08.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800757D8 @ 0x1800757D8 (sub_1800757D8.c)
 */

__int64 __fastcall sub_1800757D8(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 v6; // rcx
  void *v7; // rdi
  __int64 result; // rax

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      sub_1800757D8(a1, a2, v3[2]);
      v6 = v3[6];
      v7 = v3;
      v3 = (_QWORD *)*v3;
      if ( v6 )
        sub_180010EC8(v6);
      result = sub_18000E26C(v7, 0x38uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
  return result;
}
