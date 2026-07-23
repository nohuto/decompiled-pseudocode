/*
 * XREFs of ExpSetLicenseTamperState @ 0x1406D1524
 * Callers:
 *     ExSetLicenseTamperState @ 0x14083E0D0 (ExSetLicenseTamperState.c)
 *     sub_14083E550 @ 0x14083E550 (sub_14083E550.c)
 *     sub_14083ED44 @ 0x14083ED44 (sub_14083ED44.c)
 *     SLUpdateLicenseDataInternal @ 0x14083F9C8 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     ntoskrnl_20 @ 0x140A83F40 (ntoskrnl_20.c)
 */

__int64 __fastcall ExpSetLicenseTamperState(__int64 a1, int a2)
{
  _DWORD v3[14]; // [rsp+20h] [rbp-38h] BYREF

  *(_DWORD *)(a1 + 46988) = a2;
  memset(v3, 0, 48);
  v3[2] = a2;
  return ntoskrnl_20(a1, v3, 2LL, 0LL);
}
