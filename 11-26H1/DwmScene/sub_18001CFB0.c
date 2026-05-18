/*
 * XREFs of sub_18001CFB0 @ 0x18001CFB0
 * Callers:
 *     sub_18002C03C @ 0x18002C03C (sub_18002C03C.c)
 *     sub_180033C00 @ 0x180033C00 (sub_180033C00.c)
 *     sub_180055D40 @ 0x180055D40 (sub_180055D40.c)
 *     sub_180058C70 @ 0x180058C70 (sub_180058C70.c)
 *     sub_180063990 @ 0x180063990 (sub_180063990.c)
 *     sub_18006904C @ 0x18006904C (sub_18006904C.c)
 *     sub_18007AB00 @ 0x18007AB00 (sub_18007AB00.c)
 *     sub_1800847C8 @ 0x1800847C8 (sub_1800847C8.c)
 *     sub_1800887D8 @ 0x1800887D8 (sub_1800887D8.c)
 *     sub_1800889A0 @ 0x1800889A0 (sub_1800889A0.c)
 *     sub_180088E28 @ 0x180088E28 (sub_180088E28.c)
 *     sub_180089204 @ 0x180089204 (sub_180089204.c)
 *     sub_1800901F8 @ 0x1800901F8 (sub_1800901F8.c)
 *     sub_18009344C @ 0x18009344C (sub_18009344C.c)
 * Callees:
 *     memcmp @ 0x18000CEC4 (memcmp.c)
 */

bool __fastcall sub_18001CFB0(const void *a1, size_t a2, const void *a3, __int64 a4)
{
  if ( a2 != a4 )
    return 0;
  if ( a2 )
    return memcmp(a1, a3, a2) == 0;
  return 1;
}
