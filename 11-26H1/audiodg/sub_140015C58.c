/*
 * XREFs of sub_140015C58 @ 0x140015C58
 * Callers:
 *     sub_140014350 @ 0x140014350 (sub_140014350.c)
 *     sub_140015070 @ 0x140015070 (sub_140015070.c)
 *     sub_1400156A0 @ 0x1400156A0 (sub_1400156A0.c)
 *     sub_140015E30 @ 0x140015E30 (sub_140015E30.c)
 *     sub_140016980 @ 0x140016980 (sub_140016980.c)
 *     sub_14001DD58 @ 0x14001DD58 (sub_14001DD58.c)
 *     sub_14003EDD0 @ 0x14003EDD0 (sub_14003EDD0.c)
 *     sub_14003F2C0 @ 0x14003F2C0 (sub_14003F2C0.c)
 *     sub_140059318 @ 0x140059318 (sub_140059318.c)
 * Callees:
 *     sub_14004F788 @ 0x14004F788 (sub_14004F788.c)
 */

BOOL __fastcall sub_140015C58(void *a1)
{
  BOOL result; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = SetEvent(a1);
  if ( !result )
    sub_14004F788(retaddr, 2520LL);
  return result;
}
