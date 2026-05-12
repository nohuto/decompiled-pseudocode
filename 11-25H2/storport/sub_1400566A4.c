/*
 * XREFs of sub_1400566A4 @ 0x1400566A4
 * Callers:
 *     sub_140022688 @ 0x140022688 (sub_140022688.c)
 * Callees:
 *     sub_1400566DC @ 0x1400566DC (sub_1400566DC.c)
 */

__int64 sub_1400566A4()
{
  if ( (dword_1401696C0 & 0x10) != 0 )
    return dword_1401696C0 & 1;
  else
    return sub_1400566DC((unsigned int)dword_1401696C0, 3LL);
}
