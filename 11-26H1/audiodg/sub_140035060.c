/*
 * XREFs of sub_140035060 @ 0x140035060
 * Callers:
 *     sub_140071E40 @ 0x140071E40 (sub_140071E40.c)
 *     sub_140071F10 @ 0x140071F10 (sub_140071F10.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

_QWORD *__fastcall sub_140035060(_QWORD *a1, __int64 a2)
{
  *a1 = 0LL;
  if ( a2 )
    sub_1400B6010(a2);
  return a1;
}
