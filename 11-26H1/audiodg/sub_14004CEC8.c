/*
 * XREFs of sub_14004CEC8 @ 0x14004CEC8
 * Callers:
 *     sub_14001E21C @ 0x14001E21C (sub_14001E21C.c)
 *     sub_14004EC80 @ 0x14004EC80 (sub_14004EC80.c)
 *     sub_140078898 @ 0x140078898 (sub_140078898.c)
 *     sub_14007D124 @ 0x14007D124 (sub_14007D124.c)
 * Callees:
 *     sub_140046C80 @ 0x140046C80 (sub_140046C80.c)
 */

BOOL __fastcall sub_14004CEC8(void **a1)
{
  void *v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return sub_140046C80(v1);
  return result;
}
