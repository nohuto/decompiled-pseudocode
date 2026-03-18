/*
 * XREFs of ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400489B0
 * Callers:
 *     ?GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z @ 0x14004CC94 (-GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z.c)
 *     LockIntoExclusiveUserCritDeferredUnlockList @ 0x140093494 (LockIntoExclusiveUserCritDeferredUnlockList.c)
 *     UserIsUserCritSecInExclusive @ 0x140167910 (UserIsUserCritSecInExclusive.c)
 *     ?JITThaw@tagPROCESSINFO@@AEAA_NXZ @ 0x140179E6C (-JITThaw@tagPROCESSINFO@@AEAA_NXZ.c)
 *     HMDestroyUnlockedObject @ 0x1401DF3D0 (HMDestroyUnlockedObject.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x140048BE0 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

bool IS_USERCRIT_OWNED_EXCLUSIVE(void)
{
  return (unsigned int)GET_USERCRIT_DISPOSITION() == 2;
}
