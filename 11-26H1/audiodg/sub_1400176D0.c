/*
 * XREFs of sub_1400176D0 @ 0x1400176D0
 * Callers:
 *     sub_1400392FC @ 0x1400392FC (sub_1400392FC.c)
 *     sub_140062B40 @ 0x140062B40 (sub_140062B40.c)
 *     sub_140062D1C @ 0x140062D1C (sub_140062D1C.c)
 *     sub_140062DC0 @ 0x140062DC0 (sub_140062DC0.c)
 * Callees:
 *     sub_1400178AC @ 0x1400178AC (sub_1400178AC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400176D0(__int64 a1)
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
