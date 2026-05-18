/*
 * XREFs of sub_180028BA0 @ 0x180028BA0
 * Callers:
 *     sub_180028BD0 @ 0x180028BD0 (sub_180028BD0.c)
 *     sub_180028DF4 @ 0x180028DF4 (sub_180028DF4.c)
 *     sub_18003EC38 @ 0x18003EC38 (sub_18003EC38.c)
 *     sub_18003EE54 @ 0x18003EE54 (sub_18003EE54.c)
 *     sub_180042664 @ 0x180042664 (sub_180042664.c)
 *     sub_18004285C @ 0x18004285C (sub_18004285C.c)
 *     sub_18007AC78 @ 0x18007AC78 (sub_18007AC78.c)
 *     sub_18007AEA8 @ 0x18007AEA8 (sub_18007AEA8.c)
 *     sub_18007D680 @ 0x18007D680 (sub_18007D680.c)
 *     sub_18007D99C @ 0x18007D99C (sub_18007D99C.c)
 *     sub_18009817C @ 0x18009817C (sub_18009817C.c)
 *     sub_1800981BC @ 0x1800981BC (sub_1800981BC.c)
 *     sub_1800BABD4 @ 0x1800BABD4 (sub_1800BABD4.c)
 * Callees:
 *     sub_180012970 @ 0x180012970 (sub_180012970.c)
 */

__int64 __fastcall sub_180028BA0(unsigned __int64 a1)
{
  if ( a1 > 0x666666666666666LL )
    sub_180012970();
  return 40 * a1;
}
