/*
 * XREFs of VslApplySecureImageFixups @ 0x1404B2430
 * Callers:
 *     MiWalkImageApplyRelocationToPage @ 0x14099F950 (MiWalkImageApplyRelocationToPage.c)
 *     MiWalkImageApplyImportOptimizationToPage @ 0x140B1B5E0 (MiWalkImageApplyImportOptimizationToPage.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslApplySecureImageFixups(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rdi
  _BYTE v7[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v8; // [rsp+28h] [rbp-80h]
  __int64 v9; // [rsp+30h] [rbp-78h]
  __int64 v10; // [rsp+38h] [rbp-70h]

  v3 = a2;
  memset_0(v7, 0, 0x68uLL);
  v8 = a1;
  v9 = v3;
  v10 = a3;
  return VslpEnterIumSecureMode(2u, 0x2Du, 0, (__int64)v7);
}
