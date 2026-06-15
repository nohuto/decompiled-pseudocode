/*
 * XREFs of sub_140010994 @ 0x140010994
 * Callers:
 *     sub_140010650 @ 0x140010650 (sub_140010650.c)
 *     sub_140010920 @ 0x140010920 (sub_140010920.c)
 *     sub_140017ED8 @ 0x140017ED8 (sub_140017ED8.c)
 *     sub_140018E74 @ 0x140018E74 (sub_140018E74.c)
 *     sub_1400346B4 @ 0x1400346B4 (sub_1400346B4.c)
 *     sub_14004229C @ 0x14004229C (sub_14004229C.c)
 *     sub_140043088 @ 0x140043088 (sub_140043088.c)
 *     sub_14004C84C @ 0x14004C84C (sub_14004C84C.c)
 *     sub_14004ED0C @ 0x14004ED0C (sub_14004ED0C.c)
 *     sub_140069B3C @ 0x140069B3C (sub_140069B3C.c)
 *     sub_14006CF50 @ 0x14006CF50 (sub_14006CF50.c)
 *     sub_14006D1D0 @ 0x14006D1D0 (sub_14006D1D0.c)
 *     sub_14006E320 @ 0x14006E320 (sub_14006E320.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

_QWORD *__fastcall sub_140010994(_QWORD *a1, __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    sub_1400B6010(a2);
  return a1;
}
