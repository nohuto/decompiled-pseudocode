/*
 * XREFs of sub_14004EF80 @ 0x14004EF80
 * Callers:
 *     <none>
 * Callees:
 *     sub_14004FC0C @ 0x14004FC0C (sub_14004FC0C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14004EF80(unsigned int a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( qword_1400E8420 )
    return (unsigned int)sub_1400B6010(a1);
  qword_1400E8420 = sub_14004FC0C("RtlNtStatusToDosErrorNoTeb");
  if ( qword_1400E8420 )
    return (unsigned int)sub_1400B6010(a1);
  return v2;
}
