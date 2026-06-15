/*
 * XREFs of sub_140026018 @ 0x140026018
 * Callers:
 *     sub_140025F80 @ 0x140025F80 (sub_140025F80.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140026018(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v3; // ebx

  *a3 = 0LL;
  v3 = sub_1400B6010(a1);
  if ( v3 >= 0 )
    return (unsigned int)-2147023728;
  return (unsigned int)v3;
}
