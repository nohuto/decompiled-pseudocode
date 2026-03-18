/*
 * XREFs of ExpSetLicenseTamperState @ 0x1406CD4F4
 * Callers:
 *     ExSetLicenseTamperState @ 0x140837E90 (ExSetLicenseTamperState.c)
 *     sub_140838310 @ 0x140838310 (sub_140838310.c)
 *     sub_140838B04 @ 0x140838B04 (sub_140838B04.c)
 *     SLUpdateLicenseDataInternal @ 0x140839788 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     ntoskrnl_20 @ 0x140A7E0D0 (ntoskrnl_20.c)
 */

__int64 __fastcall ExpSetLicenseTamperState(__int64 a1, int a2)
{
  _DWORD v3[14]; // [rsp+20h] [rbp-38h] BYREF

  *(_DWORD *)(a1 + 46988) = a2;
  memset(v3, 0, 48);
  v3[2] = a2;
  return ntoskrnl_20(a1, v3, 2LL, 0LL);
}
