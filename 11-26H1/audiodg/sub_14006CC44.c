/*
 * XREFs of sub_14006CC44 @ 0x14006CC44
 * Callers:
 *     sub_14006C9F4 @ 0x14006C9F4 (sub_14006C9F4.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 */

__int64 __fastcall sub_14006CC44(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *v2; // rbx
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 8);
  if ( v1 )
  {
    do
    {
      v2 = (_QWORD *)*v1;
      sub_140003238(v1 + 2);
      result = sub_1400453E4((__int64)v1, 0x18uLL);
      v1 = v2;
    }
    while ( v2 );
  }
  return result;
}
