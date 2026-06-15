/*
 * XREFs of sub_14002F0F4 @ 0x14002F0F4
 * Callers:
 *     sub_140045A9C @ 0x140045A9C (sub_140045A9C.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 */

__int64 __fastcall sub_14002F0F4(__int64 a1)
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
      sub_140003238(v1 + 1);
      result = sub_1400453E4(v1, 16LL);
      v1 = v2;
    }
    while ( v2 );
  }
  return result;
}
