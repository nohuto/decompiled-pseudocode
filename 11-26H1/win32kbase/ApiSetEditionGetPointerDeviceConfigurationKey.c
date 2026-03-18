/*
 * XREFs of ApiSetEditionGetPointerDeviceConfigurationKey @ 0x1400F060C
 * Callers:
 *     ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1400EE59C (-LoadPointerDeviceTouchSettings@@YAHXZ.c)
 *     AccessPTPEnabledStatus @ 0x1400F0360 (AccessPTPEnabledStatus.c)
 *     GetDWORDSettingValuesEx @ 0x1400F04A0 (GetDWORDSettingValuesEx.c)
 *     GetDWORDSettingValues @ 0x1400F0570 (GetDWORDSettingValues.c)
 *     ?UpdateWakeOnInputDeviceTypesFromRegistry@CInputGlobals@@QEAAXXZ @ 0x140179630 (-UpdateWakeOnInputDeviceTypesFromRegistry@CInputGlobals@@QEAAXXZ.c)
 *     ?SetWakeableInputTypesToRegistry@CInputGlobals@@QEAA_NKK@Z @ 0x1401B77D8 (-SetWakeableInputTypesToRegistry@CInputGlobals@@QEAA_NKK@Z.c)
 *     ReadInputHapticSettings @ 0x1401DF5F0 (ReadInputHapticSettings.c)
 *     WritePointerDeviceSettings @ 0x1401DF9A0 (WritePointerDeviceSettings.c)
 *     WriteSettingValues @ 0x1401DFD70 (WriteSettingValues.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionGetPointerDeviceConfigurationKey(__int64 a1, unsigned int a2)
{
  unsigned int v3; // esi
  __int64 v4; // rbx
  int (*v5)(void); // rax
  __int64 v6; // rcx
  __int64 (__fastcall *v7)(_QWORD, _QWORD); // rax

  v3 = a1;
  v4 = 0LL;
  v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 6760LL);
  if ( v5 )
  {
    if ( v5() >= 0 )
    {
      v7 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 48) + 6768LL);
      if ( v7 )
        return v7(v3, a2);
    }
  }
  return v4;
}
