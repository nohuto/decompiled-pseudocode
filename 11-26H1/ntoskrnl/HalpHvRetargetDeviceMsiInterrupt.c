/*
 * XREFs of HalpHvRetargetDeviceMsiInterrupt @ 0x1404331D0
 * Callers:
 *     HalpInterruptSetRemappedDestinationHv @ 0x14043306C (HalpInterruptSetRemappedDestinationHv.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvRetargetDeviceMsiInterrupt(__int64 a1)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp-38h] BYREF
  int v7; // [rsp+38h] [rbp-30h]
  int v8; // [rsp+3Ch] [rbp-2Ch]
  __int128 v9; // [rsp+40h] [rbp-28h]

  v1 = *(_DWORD *)(a1 + 48);
  v6 = 1LL;
  v7 = v1;
  v2 = *(_DWORD *)(a1 + 4);
  v9 = 0LL;
  LODWORD(v9) = v2;
  v3 = *(_DWORD *)(a1 + 52);
  v4 = *(_QWORD *)(a1 + 64);
  v8 = v3;
  return guard_dispatch_icall_no_overrides(v4, &v6);
}
