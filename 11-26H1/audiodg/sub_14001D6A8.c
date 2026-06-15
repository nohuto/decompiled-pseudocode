/*
 * XREFs of sub_14001D6A8 @ 0x14001D6A8
 * Callers:
 *     sub_140016D5C @ 0x140016D5C (sub_140016D5C.c)
 *     sub_14001D308 @ 0x14001D308 (sub_14001D308.c)
 *     sub_14001D640 @ 0x14001D640 (sub_14001D640.c)
 *     sub_14001DDFC @ 0x14001DDFC (sub_14001DDFC.c)
 *     sub_14001E21C @ 0x14001E21C (sub_14001E21C.c)
 *     sub_1400455D8 @ 0x1400455D8 (sub_1400455D8.c)
 *     sub_140046EA8 @ 0x140046EA8 (sub_140046EA8.c)
 *     sub_14004CD00 @ 0x14004CD00 (sub_14004CD00.c)
 *     sub_14004CF78 @ 0x14004CF78 (sub_14004CF78.c)
 *     sub_1400566C0 @ 0x1400566C0 (sub_1400566C0.c)
 *     sub_140077E38 @ 0x140077E38 (sub_140077E38.c)
 *     sub_140078898 @ 0x140078898 (sub_140078898.c)
 *     sub_1400B0BA2 @ 0x1400B0BA2 (sub_1400B0BA2.c)
 * Callees:
 *     sub_14004F788 @ 0x14004F788 (sub_14004F788.c)
 */

BOOL __fastcall sub_14001D6A8(void *a1)
{
  BOOL result; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = CloseHandle(a1);
  if ( !result )
    sub_14004F788(retaddr, 2530LL);
  return result;
}
