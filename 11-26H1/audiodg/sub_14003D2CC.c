/*
 * XREFs of sub_14003D2CC @ 0x14003D2CC
 * Callers:
 *     sub_14005A234 @ 0x14005A234 (sub_14005A234.c)
 *     sub_14005F8C8 @ 0x14005F8C8 (sub_14005F8C8.c)
 *     sub_14008B568 @ 0x14008B568 (sub_14008B568.c)
 *     sub_140092F58 @ 0x140092F58 (sub_140092F58.c)
 * Callees:
 *     sub_140047AFC @ 0x140047AFC (sub_140047AFC.c)
 */

__int64 __fastcall sub_14003D2CC(unsigned __int64 a1)
{
  if ( a1 > 0xFFFFFFFFFFFFFFFLL )
    sub_140047AFC();
  return 16 * a1;
}
