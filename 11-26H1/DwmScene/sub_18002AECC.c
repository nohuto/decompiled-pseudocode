/*
 * XREFs of sub_18002AECC @ 0x18002AECC
 * Callers:
 *     sub_18002B27C @ 0x18002B27C (sub_18002B27C.c)
 *     sub_18009A08C @ 0x18009A08C (sub_18009A08C.c)
 *     sub_18009A710 @ 0x18009A710 (sub_18009A710.c)
 * Callees:
 *     sub_18002A23C @ 0x18002A23C (sub_18002A23C.c)
 */

__int64 *__fastcall sub_18002AECC(__int64 *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  *a1 = sub_18002A23C();
  return a1;
}
