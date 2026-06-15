/*
 * XREFs of sub_14004F9C4 @ 0x14004F9C4
 * Callers:
 *     sub_14004EC80 @ 0x14004EC80 (sub_14004EC80.c)
 *     sub_14007D124 @ 0x14007D124 (sub_14007D124.c)
 * Callees:
 *     sub_14001FC40 @ 0x14001FC40 (sub_14001FC40.c)
 *     sub_1400257E4 @ 0x1400257E4 (sub_1400257E4.c)
 *     sub_140046C80 @ 0x140046C80 (sub_140046C80.c)
 */

void __fastcall sub_14004F9C4(void **a1, void *a2)
{
  void *v2; // rdi
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *a1 )
  {
    sub_1400257E4((__int64)&v5);
    sub_140046C80(v2);
    sub_14001FC40((__int64)&v5);
  }
  *a1 = a2;
}
