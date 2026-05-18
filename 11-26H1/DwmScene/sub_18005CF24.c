/*
 * XREFs of sub_18005CF24 @ 0x18005CF24
 * Callers:
 *     sub_18005C3A4 @ 0x18005C3A4 (sub_18005C3A4.c)
 *     sub_18005CD18 @ 0x18005CD18 (sub_18005CD18.c)
 * Callees:
 *     sub_18003F2F4 @ 0x18003F2F4 (sub_18003F2F4.c)
 *     sub_18005C470 @ 0x18005C470 (sub_18005C470.c)
 */

__int64 __fastcall sub_18005CF24(__int64 a1)
{
  __int64 v2; // rcx

  sub_18003F2F4((void **)(a1 + 16));
  sub_18005C470(v2, *(_QWORD *)a1);
  return sub_18000E26C(*(void **)a1, 0x20uLL);
}
