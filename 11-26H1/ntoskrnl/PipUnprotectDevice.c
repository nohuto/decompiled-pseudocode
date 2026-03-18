/*
 * XREFs of PipUnprotectDevice @ 0x1407B4EF8
 * Callers:
 *     PiProcessDriversLoadedOnSecureDevice @ 0x140AA8BB8 (PiProcessDriversLoadedOnSecureDevice.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PnpQueryInterface @ 0x140AA8480 (PnpQueryInterface.c)
 */

__int64 __fastcall PipUnprotectDevice(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rdx
  _OWORD v6[2]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v7; // [rsp+50h] [rbp-98h]
  _BYTE v8[8]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v9; // [rsp+68h] [rbp-80h]

  v1 = *(void **)(a1 + 32);
  v7 = 0LL;
  memset(v6, 0, sizeof(v6));
  result = PnpQueryInterface(v1, 0LL, v6);
  if ( (int)result >= 0 )
  {
    v4 = guard_dispatch_icall_no_overrides(*((__int64 *)&v6[0] + 1), v3);
    guard_dispatch_icall_no_overrides(*((__int64 *)&v6[0] + 1), v5);
    memset_0(v8, 0, 0x68uLL);
    v9 = v4;
    return VslpEnterIumSecureMode(2u, 0x48u, 0, (__int64)v8);
  }
  return result;
}
