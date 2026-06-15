/*
 * XREFs of sub_140038A48 @ 0x140038A48
 * Callers:
 *     sub_14003DE30 @ 0x14003DE30 (sub_14003DE30.c)
 *     sub_140045678 @ 0x140045678 (sub_140045678.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

_QWORD *__fastcall sub_140038A48(__int64 a1, char a2)
{
  _QWORD *v2; // rbx
  _QWORD *result; // rax

  v2 = off_1400E74C0;
  result = off_1400E74C8;
  while ( v2 < result )
  {
    if ( *v2 )
    {
      LOBYTE(a1) = a2;
      sub_1400B6010(a1);
      result = off_1400E74C8;
    }
    ++v2;
  }
  return result;
}
