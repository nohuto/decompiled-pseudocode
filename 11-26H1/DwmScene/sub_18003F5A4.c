/*
 * XREFs of sub_18003F5A4 @ 0x18003F5A4
 * Callers:
 *     sub_18003F2A4 @ 0x18003F2A4 (sub_18003F2A4.c)
 *     sub_180041A10 @ 0x180041A10 (sub_180041A10.c)
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_18003F3F0 @ 0x18003F3F0 (sub_18003F3F0.c)
 */

LPVOID __fastcall sub_18003F5A4(LPVOID lpMem)
{
  sub_18003F3F0((__int64)lpMem);
  sub_18000C444(lpMem);
  return lpMem;
}
