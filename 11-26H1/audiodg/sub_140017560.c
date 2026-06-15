/*
 * XREFs of sub_140017560 @ 0x140017560
 * Callers:
 *     sub_14001714C @ 0x14001714C (sub_14001714C.c)
 *     sub_1400176AC @ 0x1400176AC (sub_1400176AC.c)
 *     sub_14003ED9C @ 0x14003ED9C (sub_14003ED9C.c)
 *     sub_140067618 @ 0x140067618 (sub_140067618.c)
 *     sub_140092C78 @ 0x140092C78 (sub_140092C78.c)
 * Callees:
 *     sub_1400178AC @ 0x1400178AC (sub_1400178AC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140017560(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r10

  v1 = sub_1400178AC(a1 + 12);
  if ( !v1 )
  {
    if ( v2 )
      sub_1400B6010(v2);
    if ( qword_1400E84B8 )
      sub_1400B6010(qword_1400E84B8);
  }
  return v1;
}
