/*
 * XREFs of ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x14003F600
 * Callers:
 *     HMMarkObjectDestroy @ 0x14003E6E0 (HMMarkObjectDestroy.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x14003E824 (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     HMAllocObjectEx @ 0x14003E880 (HMAllocObjectEx.c)
 *     _HMPheFromObject @ 0x14003F320 (_HMPheFromObject.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x14003F3E0 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     _FindProp @ 0x14003F430 (_FindProp.c)
 *     RealGetProp @ 0x14003F4E0 (RealGetProp.c)
 *     ReferenceDwmApiPort @ 0x14003F9B0 (ReferenceDwmApiPort.c)
 *     UserIsUserCritSecIn @ 0x14003FA40 (UserIsUserCritSecIn.c)
 *     CheckOrAcquireDwmStateLock @ 0x140057B20 (CheckOrAcquireDwmStateLock.c)
 *     ?ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ @ 0x14005E70C (-ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ.c)
 *     DrvSessionHasAnyGraphicsDevice @ 0x14006D6B0 (DrvSessionHasAnyGraphicsDevice.c)
 *     DrvNotifySessionStateChange @ 0x14006DAB0 (DrvNotifySessionStateChange.c)
 *     ?GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z @ 0x14008A5F0 (-GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z.c)
 *     DrvIsNotUsingGraphicsDevice @ 0x14014B420 (DrvIsNotUsingGraphicsDevice.c)
 *     DrvCleanupRemoteGraphicsDevices @ 0x1401CCDBC (DrvCleanupRemoteGraphicsDevices.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1401CFD88 (DrvUpdateRemoteGraphicsDeviceList.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x1401A5130 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

bool IS_USERCRIT_OWNED_AT_ALL(void)
{
  return (unsigned int)GET_USERCRIT_DISPOSITION() != 0;
}
