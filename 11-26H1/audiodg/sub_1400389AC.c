/*
 * XREFs of sub_1400389AC @ 0x1400389AC
 * Callers:
 *     sub_140059318 @ 0x140059318 (sub_140059318.c)
 *     sub_14008041C @ 0x14008041C (sub_14008041C.c)
 * Callees:
 *     sub_14001FC40 @ 0x14001FC40 (sub_14001FC40.c)
 *     sub_1400257E4 @ 0x1400257E4 (sub_1400257E4.c)
 */

void __fastcall sub_1400389AC(void **a1, void *a2)
{
  void *v2; // rdi
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *a1 )
  {
    sub_1400257E4((__int64)&v5);
    LocalFree(v2);
    sub_14001FC40((__int64)&v5);
  }
  *a1 = a2;
}
