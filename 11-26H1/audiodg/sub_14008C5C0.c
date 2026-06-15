/*
 * XREFs of sub_14008C5C0 @ 0x14008C5C0
 * Callers:
 *     sub_14008C620 @ 0x14008C620 (sub_14008C620.c)
 *     sub_14008C630 @ 0x14008C630 (sub_14008C630.c)
 *     sub_14008C640 @ 0x14008C640 (sub_14008C640.c)
 *     sub_14008C650 @ 0x14008C650 (sub_14008C650.c)
 * Callees:
 *     sub_1400178AC @ 0x1400178AC (sub_1400178AC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14008C5C0(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r10

  v1 = sub_1400178AC((volatile signed __int32 *)(a1 + 84));
  if ( !v1 )
  {
    if ( v2 )
      sub_1400B6010(v2);
    if ( qword_1400E84B8 )
      sub_1400B6010(qword_1400E84B8);
  }
  return v1;
}
