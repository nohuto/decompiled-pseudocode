/*
 * XREFs of sub_14005BA10 @ 0x14005BA10
 * Callers:
 *     sub_14005BA70 @ 0x14005BA70 (sub_14005BA70.c)
 *     sub_14005BA80 @ 0x14005BA80 (sub_14005BA80.c)
 *     sub_14005BA90 @ 0x14005BA90 (sub_14005BA90.c)
 *     sub_14005BAA0 @ 0x14005BAA0 (sub_14005BAA0.c)
 *     sub_14007FF28 @ 0x14007FF28 (sub_14007FF28.c)
 *     sub_1400ADA90 @ 0x1400ADA90 (sub_1400ADA90.c)
 * Callees:
 *     sub_1400178AC @ 0x1400178AC (sub_1400178AC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14005BA10(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r10

  v1 = sub_1400178AC((volatile signed __int32 *)(a1 + 44));
  if ( !v1 )
  {
    if ( v2 )
      sub_1400B6010(v2);
    if ( qword_1400E84B8 )
      sub_1400B6010(qword_1400E84B8);
  }
  return v1;
}
