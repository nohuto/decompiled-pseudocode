/*
 * XREFs of sub_1800BEF34 @ 0x1800BEF34
 * Callers:
 *     sub_1800BEF34 @ 0x1800BEF34 (sub_1800BEF34.c)
 *     sub_1800BF76C @ 0x1800BF76C (sub_1800BF76C.c)
 *     sub_1800C195C @ 0x1800C195C (sub_1800C195C.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_1800BEF34 @ 0x1800BEF34 (sub_1800BEF34.c)
 */

__int64 __fastcall sub_1800BEF34(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  void *v6; // rcx
  __int64 result; // rax

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      sub_1800BEF34(a1, a2, v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      result = sub_18000E26C(v6, 0x48uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
  return result;
}
