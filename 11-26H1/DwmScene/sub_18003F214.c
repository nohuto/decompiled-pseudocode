/*
 * XREFs of sub_18003F214 @ 0x18003F214
 * Callers:
 *     sub_18003F3E4 @ 0x18003F3E4 (sub_18003F3E4.c)
 *     sub_18003F3F0 @ 0x18003F3F0 (sub_18003F3F0.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_18003E9A4 @ 0x18003E9A4 (sub_18003E9A4.c)
 */

__int64 __fastcall sub_18003F214(__int64 *a1)
{
  void *v2; // rcx

  v2 = (void *)a1[3];
  if ( v2 )
  {
    sub_18000E26C(v2, (a1[5] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  sub_18003E9A4((__int64)v2, a1[1]);
  return sub_18000E26C((void *)a1[1], 0x28uLL);
}
