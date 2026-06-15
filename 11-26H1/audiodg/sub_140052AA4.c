/*
 * XREFs of sub_140052AA4 @ 0x140052AA4
 * Callers:
 *     sub_1400AFA1F @ 0x1400AFA1F (sub_1400AFA1F.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 */

__int64 __fastcall sub_140052AA4(_QWORD **a1)
{
  _QWORD *v1; // rdi
  _QWORD *v2; // rbx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    do
    {
      v2 = (_QWORD *)*v1;
      sub_140003238(v1 + 1);
      result = sub_1400453E4((__int64)v1, 0x10uLL);
      v1 = v2;
    }
    while ( v2 );
  }
  return result;
}
