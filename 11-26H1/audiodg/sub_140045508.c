/*
 * XREFs of sub_140045508 @ 0x140045508
 * Callers:
 *     sub_14004EC80 @ 0x14004EC80 (sub_14004EC80.c)
 *     sub_1400582D0 @ 0x1400582D0 (sub_1400582D0.c)
 *     sub_140079F14 @ 0x140079F14 (sub_140079F14.c)
 *     sub_14007C690 @ 0x14007C690 (sub_14007C690.c)
 *     sub_14007CA54 @ 0x14007CA54 (sub_14007CA54.c)
 *     sub_14007D124 @ 0x14007D124 (sub_14007D124.c)
 *     sub_14007E8FC @ 0x14007E8FC (sub_14007E8FC.c)
 *     sub_1400B4550 @ 0x1400B4550 (sub_1400B4550.c)
 *     sub_1400B48E0 @ 0x1400B48E0 (sub_1400B48E0.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

char __fastcall sub_140045508(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( byte_1400E83D0 || qword_1400E8390 && (unsigned __int8)sub_1400B6010(a1) )
    return 1;
  return v1;
}
