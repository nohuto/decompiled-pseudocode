/*
 * XREFs of HalpInterruptInitPowerManagement @ 0x140592834
 * Callers:
 *     HalpInterruptInitSystem @ 0x140BF1450 (HalpInterruptInitSystem.c)
 * Callees:
 *     PoFxActivateComponent @ 0x14037C860 (PoFxActivateComponent.c)
 *     PoFxStartDevicePowerManagement @ 0x1404E3FF0 (PoFxStartDevicePowerManagement.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PoFxRegisterCoreDevice @ 0x1407D0040 (PoFxRegisterCoreDevice.c)
 */

__int64 HalpInterruptInitPowerManagement()
{
  ULONG_PTR *v0; // rdi
  unsigned int v1; // esi
  _DWORD v3[2]; // [rsp+28h] [rbp-19h] BYREF
  __int64 (__fastcall *v4)(); // [rsp+30h] [rbp-11h]
  void *v5; // [rsp+38h] [rbp-9h]
  __int64 (__fastcall *v6)(); // [rsp+40h] [rbp-1h]
  __int64 v7; // [rsp+48h] [rbp+7h]
  ULONG_PTR *v8; // [rsp+50h] [rbp+Fh]
  __int128 v9; // [rsp+58h] [rbp+17h]
  __int64 v10; // [rsp+68h] [rbp+27h]
  _QWORD *v11; // [rsp+70h] [rbp+2Fh]
  _QWORD v12[3]; // [rsp+78h] [rbp+37h] BYREF

  v0 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
  v12[2] = 10LL;
  v1 = 0;
  v12[0] = 0LL;
  v12[1] = 0LL;
  while ( v0 != &HalpRegisteredInterruptControllers )
  {
    v7 = 0LL;
    v11 = v12;
    v10 = 1LL;
    v4 = HalpInterruptPowerComponentActiveCallback;
    v3[0] = 1;
    v5 = &HalpInterruptPowerComponentIdleCallback;
    v3[1] = 1;
    v6 = HalpInterruptPowerCriticalTransitionCallback;
    v9 = 0LL;
    v8 = v0;
    v1 = PoFxRegisterCoreDevice(v0 + 44, v3, v0 + 46);
    PoFxActivateComponent(v0[46], 0LL, 0);
    PoFxStartDevicePowerManagement(v0[46]);
    v0 = (ULONG_PTR *)*v0;
  }
  return v1;
}
