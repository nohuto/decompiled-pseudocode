/*
 * XREFs of sub_140023AC0 @ 0x140023AC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000B280 @ 0x14000B280 (sub_14000B280.c)
 *     sub_14000D0D0 @ 0x14000D0D0 (sub_14000D0D0.c)
 *     sub_14000D250 @ 0x14000D250 (sub_14000D250.c)
 *     sub_1400286F4 @ 0x1400286F4 (sub_1400286F4.c)
 *     sub_140029F2C @ 0x140029F2C (sub_140029F2C.c)
 */

__int64 __fastcall sub_140023AC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r9

  sub_1400286F4(a1);
  sub_140029F2C(a1);
  sub_14000B280(a1, 1u);
  sub_14000D250(a1, 1u);
  sub_14000D0D0(a1, 1u);
  return StorPortExtendedFunction(31LL, a1, a3, v5);
}
