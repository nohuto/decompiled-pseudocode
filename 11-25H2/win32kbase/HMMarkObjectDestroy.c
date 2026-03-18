/*
 * XREFs of HMMarkObjectDestroy @ 0x14003E6E0
 * Callers:
 *     DestroyKF @ 0x1400F6304 (DestroyKF.c)
 *     DestroyMonitor @ 0x1400F63A0 (DestroyMonitor.c)
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x14014B640 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     _lambda_003a05ce5104f89dcc953024da4d9dc6_::operator() @ 0x14014CA0C (_lambda_003a05ce5104f89dcc953024da4d9dc6_--operator().c)
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x14018A790 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x14018A890 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RemoveInjectionDevicesForSessionUninitialize@CBaseInput@@SAXXZ @ 0x140210AA4 (-RemoveInjectionDevicesForSessionUninitialize@CBaseInput@@SAXXZ.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x140212EE0 (-xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 * Callees:
 *     ?HMMarkObjectDestroyWorker@@YAHPEAU_HEAD@@@Z @ 0x14003E754 (-HMMarkObjectDestroyWorker@@YAHPEAU_HEAD@@@Z.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x14003F5E0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x14003F600 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1400BAD30 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 */

__int64 __fastcall HMMarkObjectDestroy(struct _HEAD *a1, __int64 a2)
{
  __int64 UserSessionState; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( !*(_DWORD *)(W32GetUserSessionState(v5, v4) + 19760)
    && !IS_USERCRIT_OWNED_EXCLUSIVE()
    && (!IS_USERCRIT_OWNED_AT_ALL() || !tagDomLock::IsLockedExclusive((tagDomLock *)(UserSessionState + 42336))) )
  {
    __int2c();
  }
  return HMMarkObjectDestroyWorker(a1);
}
