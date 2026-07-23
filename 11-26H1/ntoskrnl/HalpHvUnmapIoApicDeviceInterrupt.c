/*
 * XREFs of HalpHvUnmapIoApicDeviceInterrupt @ 0x140BF0C9C
 * Callers:
 *     HalpInterruptUnmap @ 0x140783D18 (HalpInterruptUnmap.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvUnmapIoApicDeviceInterrupt(char a1, __int64 a2)
{
  __int64 v3; // [rsp+20h] [rbp-28h]
  _QWORD v4[2]; // [rsp+28h] [rbp-20h] BYREF

  v4[0] = 2LL;
  v3 = 0x8000000000000000uLL;
  LOBYTE(v3) = a1;
  v4[1] = *(_QWORD *)(a2 + 40);
  return guard_dispatch_icall_no_overrides(v3, (__int64)v4);
}
