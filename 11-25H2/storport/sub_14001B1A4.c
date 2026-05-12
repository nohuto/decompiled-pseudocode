/*
 * XREFs of sub_14001B1A4 @ 0x14001B1A4
 * Callers:
 *     sub_14001B870 @ 0x14001B870 (sub_14001B870.c)
 * Callees:
 *     sub_1401AD970 @ 0x1401AD970 (sub_1401AD970.c)
 */

__int64 __fastcall sub_14001B1A4(__int64 a1, __int64 a2)
{
  struct _UNICODE_STRING v4; // [rsp+30h] [rbp-18h] BYREF
  int KeyHandle; // [rsp+50h] [rbp+8h] BYREF
  __int64 v6; // [rsp+58h] [rbp+10h] BYREF

  v6 = a2;
  KeyHandle = 4;
  v4 = 0LL;
  RtlInitUnicodeString(&v4, L"DeviceDumpVendorGPLogAddress");
  return sub_1401AD970(*(_QWORD *)(a1 + 8), 0, (int)&v4, 4, (__int64)&v6, &KeyHandle);
}
