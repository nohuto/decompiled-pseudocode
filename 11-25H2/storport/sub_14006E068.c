/*
 * XREFs of sub_14006E068 @ 0x14006E068
 * Callers:
 *     sub_14006DACC @ 0x14006DACC (sub_14006DACC.c)
 *     sub_14018AB38 @ 0x14018AB38 (sub_14018AB38.c)
 * Callees:
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

PVOID __fastcall sub_14006E068(int a1)
{
  _BYTE Dst[4]; // [rsp+20h] [rbp-338h] BYREF
  int v4; // [rsp+24h] [rbp-334h]

  memset_0(Dst, 0, 0x314uLL);
  v4 = a1;
  return RtlLookupElementGenericTable(&Table, Dst);
}
