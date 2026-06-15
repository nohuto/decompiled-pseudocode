/*
 * XREFs of sub_14007FE20 @ 0x14007FE20
 * Callers:
 *     sub_14007CF28 @ 0x14007CF28 (sub_14007CF28.c)
 *     sub_14007FA50 @ 0x14007FA50 (sub_14007FA50.c)
 * Callees:
 *     sub_14004FC0C @ 0x14004FC0C (sub_14004FC0C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14007FE20(__int64 a1)
{
  if ( qword_1400E97B0 )
    return sub_1400B6010(a1);
  qword_1400E97B0 = (__int64)sub_14004FC0C("NtQueryWnfStateData");
  if ( qword_1400E97B0 )
    return sub_1400B6010(a1);
  else
    return 3221225785LL;
}
