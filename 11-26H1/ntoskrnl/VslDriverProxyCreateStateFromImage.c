/*
 * XREFs of VslDriverProxyCreateStateFromImage @ 0x1405C5470
 * Callers:
 *     MiConfigureDriverProxyState @ 0x14086AD90 (MiConfigureDriverProxyState.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslDriverProxyCreateStateFromImage(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE v7[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v8; // [rsp+28h] [rbp-80h]
  __int64 v9; // [rsp+30h] [rbp-78h]
  __int64 v10; // [rsp+38h] [rbp-70h]

  memset_0(v7, 0, 0x68uLL);
  v8 = a1;
  v9 = a2;
  v10 = a3;
  return VslpEnterIumSecureMode(2u, 0xF0u, 0, (__int64)v7);
}
