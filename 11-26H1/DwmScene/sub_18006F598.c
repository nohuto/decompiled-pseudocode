/*
 * XREFs of sub_18006F598 @ 0x18006F598
 * Callers:
 *     sub_18006F538 @ 0x18006F538 (sub_18006F538.c)
 * Callees:
 *     memset @ 0x18000CEDC (memset.c)
 */

__int64 __fastcall sub_18006F598(__int64 a1, void *a2)
{
  memset(a2, 0, 0x98uLL);
  return sub_18002B27C((__int64)a2);
}
