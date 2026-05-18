/*
 * XREFs of sub_18005C374 @ 0x18005C374
 * Callers:
 *     sub_18005CCF4 @ 0x18005CCF4 (sub_18005CCF4.c)
 *     sub_18005CDDC @ 0x18005CDDC (sub_18005CDDC.c)
 *     sub_18005CE48 @ 0x18005CE48 (sub_18005CE48.c)
 *     sub_18005DEB0 @ 0x18005DEB0 (sub_18005DEB0.c)
 * Callees:
 *     sub_18005C418 @ 0x18005C418 (sub_18005C418.c)
 */

__int64 __fastcall sub_18005C374(void **a1, __int64 a2)
{
  sub_18005C418(a1, a2, *((_QWORD *)*a1 + 1));
  return sub_18000E26C(*a1, 0x30uLL);
}
