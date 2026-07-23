/*
 * XREFs of VslpLiveDumpStart @ 0x1405C6FC8
 * Callers:
 *     HvlPrepareLivedumpDescriptor @ 0x1405C2DE8 (HvlPrepareLivedumpDescriptor.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslpLiveDumpStart(unsigned int a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rbx
  _BYTE v7[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v8; // [rsp+28h] [rbp-80h]
  __int64 v9; // [rsp+30h] [rbp-78h]
  __int64 v10; // [rsp+38h] [rbp-70h]

  v3 = a2;
  v4 = a3;
  v5 = a1;
  memset_0(v7, 0, 0x68uLL);
  v8 = v5;
  v9 = v3;
  v10 = v4;
  return VslpEnterIumSecureMode(2u, 0x3Cu, 0, (__int64)v7);
}
