/*
 * XREFs of HMRemoveHandleForObject @ 0x1401BCC80
 * Callers:
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x140095000 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x140180860 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1401857A0 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     ?RemoveInjectionDevicesForSessionUninitialize@CBaseInput@@SAXXZ @ 0x1402187F4 (-RemoveInjectionDevicesForSessionUninitialize@CBaseInput@@SAXXZ.c)
 * Callees:
 *     _HMPheFromObject @ 0x1400488F0 (_HMPheFromObject.c)
 *     _HMPkheFromObjectWorker @ 0x140094FC8 (_HMPkheFromObjectWorker.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x140095370 (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     HMUnlockObject @ 0x14009B9C0 (HMUnlockObject.c)
 *     EtwTraceUserDestroyHandle @ 0x140118DB8 (EtwTraceUserDestroyHandle.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x140118E28 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     HMRemoveHandleForObjectWorker @ 0x14016FF84 (HMRemoveHandleForObjectWorker.c)
 *     HMCleanupGrantedHandle @ 0x14018D960 (HMCleanupGrantedHandle.c)
 *     ?RemoveHandle@Win32JobObject@@YAXPEAXPEAU_HANDLEENTRY@@@Z @ 0x1401CF4C4 (-RemoveHandle@Win32JobObject@@YAXPEAXPEAU_HANDLEENTRY@@@Z.c)
 */

__int64 __fastcall HMRemoveHandleForObject(_DWORD *a1, int a2, int a3)
{
  __int64 v4; // rbx
  int v5; // edx
  unsigned __int8 *v6; // rdi
  struct _HANDLEENTRY *v7; // r8
  unsigned __int8 v8; // al
  __int64 **v9; // rsi
  int EtwUserHandleType; // eax
  unsigned __int8 v11; // al
  __int64 *v12; // rbx
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // edx
  int v17; // r8d

  v4 = 0LL;
  v6 = (unsigned __int8 *)HMPheFromObject(a1, a2, a3);
  v8 = v6[24];
  if ( v8 == 19 || v8 == 22 )
  {
    v9 = (__int64 **)HMPkheFromObjectWorker(a1, v5, (int)v7);
    EtwUserHandleType = GetEtwUserHandleType(v6[24]);
    EtwTraceUserDestroyHandle(**v9, EtwUserHandleType, 0);
    if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
    {
      Win32JobObject::RemoveHandle((Win32JobObject *)**v9, v6, v7);
    }
    else if ( (v6[25] & 0x20) != 0 )
    {
      HMCleanupGrantedHandle(**v9, v5, (int)v7);
      v6[25] &= ~0x20u;
    }
    v11 = v6[24];
    if ( v11 == 19 )
    {
      v12 = *v9;
      ObfDereferenceObject((PVOID)(*v9)[4]);
      *((_DWORD *)v12 + 20) |= 4u;
      v4 = 0LL;
    }
    else if ( v11 == 22 )
    {
      v4 = (*v9)[2];
      ObfDereferenceObject(*(PVOID *)(v4 + 32));
    }
  }
  HMRemoveHandleForObjectWorker((__int64)v6, v5, (int)v7);
  if ( !*(_DWORD *)(W32GetUserSessionState(v14, v13, v15) + 19792) && v4 )
    HMUnlockObject(v4, v16, v17);
  return 1LL;
}
