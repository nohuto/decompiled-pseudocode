/*
 * XREFs of HMRemoveHandleForObject @ 0x140161860
 * Callers:
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x14014B640 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x14018A790 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x14018A890 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RemoveInjectionDevicesForSessionUninitialize@CBaseInput@@SAXXZ @ 0x140210AA4 (-RemoveInjectionDevicesForSessionUninitialize@CBaseInput@@SAXXZ.c)
 * Callees:
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x14003AEB0 (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     EtwTraceUserDestroyHandle @ 0x14003C844 (EtwTraceUserDestroyHandle.c)
 *     _HMPheFromObject @ 0x14003F320 (_HMPheFromObject.c)
 *     _HMPkheFromObjectWorker @ 0x1400E3FE8 (_HMPkheFromObjectWorker.c)
 *     HMRemoveHandleForObjectWorker @ 0x14013956C (HMRemoveHandleForObjectWorker.c)
 *     HMCleanupGrantedHandle @ 0x14014EE04 (HMCleanupGrantedHandle.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1401A53B4 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     ?RemoveHandle@Win32JobObject@@YAXPEAXPEAU_HANDLEENTRY@@@Z @ 0x1401AD354 (-RemoveHandle@Win32JobObject@@YAXPEAXPEAU_HANDLEENTRY@@@Z.c)
 */

__int64 __fastcall HMRemoveHandleForObject(int *a1, __int64 a2)
{
  Win32JobObject *v3; // rbx
  __int64 v4; // rdx
  unsigned __int8 *v5; // rdi
  unsigned __int8 v6; // al
  Win32JobObject ***v7; // rsi
  char EtwUserHandleType; // al
  struct _HANDLEENTRY *v9; // r8
  unsigned __int8 v10; // al
  Win32JobObject **v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx

  v3 = 0LL;
  v5 = (unsigned __int8 *)HMPheFromObject(a1, a2);
  v6 = v5[24];
  if ( v6 == 19 || v6 == 22 )
  {
    v7 = (Win32JobObject ***)HMPkheFromObjectWorker(a1, v4);
    EtwUserHandleType = GetEtwUserHandleType(v5[24]);
    EtwTraceUserDestroyHandle((int)**v7, EtwUserHandleType, 0);
    if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
    {
      Win32JobObject::RemoveHandle(**v7, v5, v9);
    }
    else if ( (v5[25] & 0x20) != 0 )
    {
      HMCleanupGrantedHandle((__int64)**v7);
      v5[25] &= ~0x20u;
    }
    v10 = v5[24];
    if ( v10 == 19 )
    {
      v11 = *v7;
      ObfDereferenceObject((*v7)[4]);
      *((_DWORD *)v11 + 20) |= 4u;
      v3 = 0LL;
    }
    else if ( v10 == 22 )
    {
      v3 = (*v7)[2];
      ObfDereferenceObject(*((PVOID *)v3 + 4));
    }
  }
  HMRemoveHandleForObjectWorker((__int64)v5, v4);
  if ( !*(_DWORD *)(W32GetUserSessionState(v13, v12) + 19760) && v3 )
    HMUnlockObject((int *)v3, v14);
  return 1LL;
}
