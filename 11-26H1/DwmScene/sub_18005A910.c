/*
 * XREFs of sub_18005A910 @ 0x18005A910
 * Callers:
 *     sub_18001B41C @ 0x18001B41C (sub_18001B41C.c)
 *     sub_18001B4F8 @ 0x18001B4F8 (sub_18001B4F8.c)
 *     sub_1800596B4 @ 0x1800596B4 (sub_1800596B4.c)
 *     sub_18005A6E8 @ 0x18005A6E8 (sub_18005A6E8.c)
 *     sub_18005A750 @ 0x18005A750 (sub_18005A750.c)
 *     sub_18005A85C @ 0x18005A85C (sub_18005A85C.c)
 *     sub_18005A88C @ 0x18005A88C (sub_18005A88C.c)
 *     sub_18005A8BC @ 0x18005A8BC (sub_18005A8BC.c)
 *     sub_18005A92C @ 0x18005A92C (sub_18005A92C.c)
 *     sub_18005A980 @ 0x18005A980 (sub_18005A980.c)
 *     sub_18005AB0C @ 0x18005AB0C (sub_18005AB0C.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18005A910(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 544) |= a2;
  if ( (a2 & 4) != 0 )
    *(_BYTE *)(a1 + 1612) = 1;
}
