/*
 * XREFs of sub_140033020 @ 0x140033020
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400330B8 @ 0x1400330B8 (sub_1400330B8.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_140033020(int a1, int a2)
{
  int v5; // [rsp+30h] [rbp-138h]
  int v6; // [rsp+38h] [rbp-130h]
  _BYTE Dst[272]; // [rsp+40h] [rbp-128h] BYREF

  memset_0(Dst, 0, 0x108uLL);
  v6 = 1;
  v5 = 1;
  return sub_1400330B8(a1, a2, (unsigned int)Dst, 264, (__int64)sub_140032250, (__int64)sub_1401B1F60, v5, v6);
}
