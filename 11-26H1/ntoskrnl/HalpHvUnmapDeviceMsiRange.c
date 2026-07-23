/*
 * XREFs of HalpHvUnmapDeviceMsiRange @ 0x140C134AC
 * Callers:
 *     HalpInterruptUnmap @ 0x140783D18 (HalpInterruptUnmap.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpHvBuildDeviceId @ 0x140BEF42C (HalpHvBuildDeviceId.c)
 */

__int64 __fastcall HalpHvUnmapDeviceMsiRange(unsigned int a1, unsigned int a2, int *a3, char a4, __int64 a5)
{
  _BYTE v6[2]; // [rsp+20h] [rbp-30h] BYREF
  __int16 v7; // [rsp+22h] [rbp-2Eh]
  __int64 v8; // [rsp+28h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-20h] BYREF
  int v10; // [rsp+38h] [rbp-18h]
  int v11; // [rsp+3Ch] [rbp-14h]

  v7 = a1 >> 8;
  v6[1] = a1;
  v8 = 0LL;
  v6[0] = (8 * a2) | (a2 >> 5) & 7;
  HalpHvBuildDeviceId((__int64)v6, a3, a4, (__int64)&v8);
  v10 = *(_DWORD *)(a5 + 48);
  v11 = *(_DWORD *)(a5 + 52);
  v9 = 1LL;
  return guard_dispatch_icall_no_overrides(v8, (__int64)&v9);
}
