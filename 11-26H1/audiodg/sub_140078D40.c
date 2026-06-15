/*
 * XREFs of sub_140078D40 @ 0x140078D40
 * Callers:
 *     <none>
 * Callees:
 *     sub_14007EEE4 @ 0x14007EEE4 (sub_14007EEE4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140078D40(__int64 a1)
{
  if ( (unsigned __int8)sub_14007EEE4(a1, 2LL) )
  {
    sub_1400B6010(a1);
    if ( qword_1400E8978 )
      sub_1400B6010(qword_1400E8978);
  }
  return 0LL;
}
