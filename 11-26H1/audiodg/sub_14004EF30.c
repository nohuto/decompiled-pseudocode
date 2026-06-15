/*
 * XREFs of sub_14004EF30 @ 0x14004EF30
 * Callers:
 *     <none>
 * Callees:
 *     sub_14004FC0C @ 0x14004FC0C (sub_14004FC0C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

char __fastcall sub_14004EF30(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( qword_1400E8498 )
    return sub_1400B6010(a1);
  qword_1400E8498 = sub_14004FC0C("RtlDllShutdownInProgress");
  if ( qword_1400E8498 )
    return sub_1400B6010(a1);
  return v1;
}
