/*
 * XREFs of HalpDmaInitPowerManagement @ 0x14058DFA4
 * Callers:
 *     HalpDmaInitSystem @ 0x140BF1A70 (HalpDmaInitSystem.c)
 * Callees:
 *     PoFxActivateComponent @ 0x14037C860 (PoFxActivateComponent.c)
 *     PoFxStartDevicePowerManagement @ 0x1404E3FF0 (PoFxStartDevicePowerManagement.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PoFxRegisterCoreDevice @ 0x1407D0040 (PoFxRegisterCoreDevice.c)
 */

__int64 HalpDmaInitPowerManagement()
{
  __int64 v0; // rdi
  unsigned int v1; // esi
  int v2; // eax
  ULONG_PTR v3; // rcx
  _DWORD v5[6]; // [rsp+28h] [rbp-19h] BYREF
  __int64 (__fastcall *v6)(); // [rsp+40h] [rbp-1h]
  __int64 v7; // [rsp+50h] [rbp+Fh]
  int v8; // [rsp+68h] [rbp+27h]
  _QWORD *v9; // [rsp+70h] [rbp+2Fh]
  _QWORD v10[3]; // [rsp+78h] [rbp+37h] BYREF

  v0 = HalpDmaControllers;
  v10[2] = 10LL;
  v1 = 0;
  v10[0] = 0LL;
  v10[1] = 0LL;
  while ( (__int64 *)v0 != &HalpDmaControllers )
  {
    memset_0(v5, 0, 0x50uLL);
    v5[0] = 1;
    v9 = v10;
    v5[1] = 1;
    v6 = HalpDmaPowerCriticalTransitionCallback;
    v8 = 1;
    v7 = v0;
    v2 = PoFxRegisterCoreDevice(v0 + 192, v5, v0 + 208);
    if ( v2 < 0 )
      v1 = v2;
    PoFxActivateComponent(*(_QWORD *)(v0 + 208), 0LL, 1);
    v3 = *(_QWORD *)(v0 + 208);
    *(_BYTE *)(v0 + 216) = 1;
    PoFxStartDevicePowerManagement(v3);
    v0 = *(_QWORD *)v0;
  }
  return v1;
}
