/*
 * XREFs of sub_180011088 @ 0x180011088
 * Callers:
 *     sub_18000E8A4 @ 0x18000E8A4 (sub_18000E8A4.c)
 *     sub_1800100C4 @ 0x1800100C4 (sub_1800100C4.c)
 *     sub_180011004 @ 0x180011004 (sub_180011004.c)
 * Callees:
 *     sub_18000E4B4 @ 0x18000E4B4 (sub_18000E4B4.c)
 *     sub_18000E768 @ 0x18000E768 (sub_18000E768.c)
 *     sub_18000EB40 @ 0x18000EB40 (sub_18000EB40.c)
 */

void __fastcall sub_180011088(void **a1, void *a2)
{
  void *v2; // rdi
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *a1 )
  {
    sub_18000E4B4((__int64)&v5);
    sub_18000EB40(v2);
    sub_18000E768((__int64)&v5);
  }
  *a1 = a2;
}
