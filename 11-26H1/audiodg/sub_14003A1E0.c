/*
 * XREFs of sub_14003A1E0 @ 0x14003A1E0
 * Callers:
 *     sub_140017AF0 @ 0x140017AF0 (sub_140017AF0.c)
 *     sub_140019060 @ 0x140019060 (sub_140019060.c)
 *     sub_140050370 @ 0x140050370 (sub_140050370.c)
 *     sub_1400601B0 @ 0x1400601B0 (sub_1400601B0.c)
 *     sub_140065B20 @ 0x140065B20 (sub_140065B20.c)
 *     sub_14007AE70 @ 0x14007AE70 (sub_14007AE70.c)
 *     sub_14007AF20 @ 0x14007AF20 (sub_14007AF20.c)
 *     sub_14007AFC0 @ 0x14007AFC0 (sub_14007AFC0.c)
 *     sub_14007B060 @ 0x14007B060 (sub_14007B060.c)
 *     sub_140088620 @ 0x140088620 (sub_140088620.c)
 *     sub_140089C20 @ 0x140089C20 (sub_140089C20.c)
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_14003A1E0(__int64 a1, char a2)
{
  *(_QWORD *)a1 = off_1400B86B0;
  *(_DWORD *)(a1 + 16) = -1073741823;
  *(_DWORD *)(a1 + 12) = -1073741823;
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 32LL);
  return a1;
}
