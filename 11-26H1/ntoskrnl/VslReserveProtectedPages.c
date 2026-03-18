/*
 * XREFs of VslReserveProtectedPages @ 0x140B1C3CC
 * Callers:
 *     KeReservePrivilegedPages @ 0x1404F64F4 (KeReservePrivilegedPages.c)
 *     MiFreeKernelPadSections @ 0x140CFFD44 (MiFreeKernelPadSections.c)
 *     MiInitializeLoadedModuleList @ 0x140D00470 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall VslReserveProtectedPages(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rsi
  __int64 v6; // rbp
  _BYTE v9[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v10; // [rsp+28h] [rbp-80h]
  __int64 v11; // [rsp+30h] [rbp-78h]
  __int64 v12; // [rsp+38h] [rbp-70h]
  __int64 v13; // [rsp+40h] [rbp-68h]

  v5 = a3;
  v6 = a4;
  memset_0(v9, 0, 0x68uLL);
  v10 = a1;
  v11 = a2;
  v12 = v5;
  v13 = v6;
  return VslpEnterIumSecureMode(2u, 0xD3u, 0, (__int64)v9);
}
