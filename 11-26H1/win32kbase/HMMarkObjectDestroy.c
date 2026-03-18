/*
 * XREFs of HMMarkObjectDestroy @ 0x140048740
 * Callers:
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x140095000 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     DestroyMonitor @ 0x1401181C0 (DestroyMonitor.c)
 *     DestroyKF @ 0x140118D3C (DestroyKF.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x140180860 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1401857A0 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     _lambda_003a05ce5104f89dcc953024da4d9dc6_::operator() @ 0x140191374 (_lambda_003a05ce5104f89dcc953024da4d9dc6_--operator().c)
 *     ?xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1401BBA70 (-xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ?RemoveInjectionDevicesForSessionUninitialize@CBaseInput@@SAXXZ @ 0x1402187F4 (-RemoveInjectionDevicesForSessionUninitialize@CBaseInput@@SAXXZ.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x140048BE0 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1400EAEE0 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     Feature_Servicing_HMDoubleFree_resilience__private_IsEnabledDeviceUsageNoInline @ 0x14016E984 (Feature_Servicing_HMDoubleFree_resilience__private_IsEnabledDeviceUsageNoInline.c)
 *     ?CheckForDoubleFree@@YAXPEAU_HANDLEENTRY@@PEAU_HEAD@@@Z @ 0x1401B34C0 (-CheckForDoubleFree@@YAXPEAU_HANDLEENTRY@@PEAU_HEAD@@@Z.c)
 *     Feature_HandleManagerHardening__private_IsEnabledDeviceUsageNoInline @ 0x1401B34F8 (Feature_HandleManagerHardening__private_IsEnabledDeviceUsageNoInline.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall HMMarkObjectDestroy(struct _HEAD *a1, int a2, int a3)
{
  __int64 UserSessionState; // rbx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  unsigned int v11; // esi
  int v12; // edi
  __int64 v13; // rbx
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  __int64 v17; // rbx
  char v18; // al

  UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, a3);
  v11 = 0;
  if ( !*(_DWORD *)(W32GetUserSessionState(v6, v5, v7) + 19792)
    && (unsigned int)GET_USERCRIT_DISPOSITION() != 2
    && (!(unsigned int)GET_USERCRIT_DISPOSITION()
     || !tagDomLock::IsLockedExclusive((tagDomLock *)(UserSessionState + 42360))) )
  {
    __int2c();
  }
  v12 = (unsigned __int16)*(_DWORD *)a1;
  v13 = W32GetUserSessionState(v9, v8, v10);
  v17 = (unsigned int)(*(_DWORD *)(W32GetUserSessionState(v15, v14, v16) + 19928) * v12) + *(_QWORD *)(v13 + 19920);
  if ( (unsigned int)Feature_HandleManagerHardening__private_IsEnabledDeviceUsageNoInline() )
  {
    CheckForDoubleFree((struct _HANDLEENTRY *)v17, a1);
  }
  else if ( (unsigned int)Feature_Servicing_HMDoubleFree_resilience__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !*(_BYTE *)(v17 + 24) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 3056LL);
    if ( (HIWORD(*(_DWORD *)a1) & 0x7FFF) != *(_WORD *)(v17 + 26) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 3057LL);
  }
  v18 = *(_BYTE *)(v17 + 25) | 1;
  *(_BYTE *)(v17 + 25) = v18;
  if ( *((_DWORD *)a1 + 2) )
    *(_BYTE *)(v17 + 25) = v18 & 0xFD;
  else
    return 1;
  return v11;
}
