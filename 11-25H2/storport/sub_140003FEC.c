/*
 * XREFs of sub_140003FEC @ 0x140003FEC
 * Callers:
 *     sub_1400033B0 @ 0x1400033B0 (sub_1400033B0.c)
 *     sub_140003D0C @ 0x140003D0C (sub_140003D0C.c)
 *     sub_140025E00 @ 0x140025E00 (sub_140025E00.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140003FEC(__int64 a1)
{
  return (*(__int64 *)(a1 + 88) >> 2) & 0x3FFFFFFF;
}
