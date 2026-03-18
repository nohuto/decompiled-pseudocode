/*
 * XREFs of ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x14003F5E0
 * Callers:
 *     HMMarkObjectDestroy @ 0x14003E6E0 (HMMarkObjectDestroy.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x14003E824 (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     HMAllocObjectEx @ 0x14003E880 (HMAllocObjectEx.c)
 *     _HMPheFromObject @ 0x14003F320 (_HMPheFromObject.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x14003F3E0 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     _FindProp @ 0x14003F430 (_FindProp.c)
 *     RealGetProp @ 0x14003F4E0 (RealGetProp.c)
 *     DrvEnumDisplaySettings @ 0x14004AE70 (DrvEnumDisplaySettings.c)
 *     ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x14004C39C (-NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 *     ?GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z @ 0x1400D15E8 (-GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1400E1960 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x1400F6C9C (-Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z.c)
 *     UserIsUserCritSecInExclusive @ 0x14012E080 (UserIsUserCritSecInExclusive.c)
 *     LockIntoExclusiveUserCritDeferredUnlockList @ 0x140161960 (LockIntoExclusiveUserCritDeferredUnlockList.c)
 *     LeaveCrit @ 0x1401675A0 (LeaveCrit.c)
 *     HMDestroyUnlockedObject @ 0x1401A5770 (HMDestroyUnlockedObject.c)
 *     ?JITThaw@tagPROCESSINFO@@AEAA_NXZ @ 0x1401A6820 (-JITThaw@tagPROCESSINFO@@AEAA_NXZ.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x1401A5130 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

bool IS_USERCRIT_OWNED_EXCLUSIVE(void)
{
  return (unsigned int)GET_USERCRIT_DISPOSITION() == 2;
}
