/*
 * XREFs of ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x140048BE0
 * Callers:
 *     ?GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z @ 0x14003B980 (-GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1400477E4 (RIMProcessAnyPointerDeviceInput.c)
 *     UserIsUserCritSecIn @ 0x1400486A0 (UserIsUserCritSecIn.c)
 *     ReferenceDwmApiPort @ 0x1400486C0 (ReferenceDwmApiPort.c)
 *     HMMarkObjectDestroy @ 0x140048740 (HMMarkObjectDestroy.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x140048890 (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     _HMPheFromObject @ 0x1400488F0 (_HMPheFromObject.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400489B0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1400489D0 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     _FindProp @ 0x140048A20 (_FindProp.c)
 *     RealGetProp @ 0x140048AE0 (RealGetProp.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x1400491B4 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1400494CC (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x140049540 (-Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z.c)
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140049888 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14007DB18 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     RIMFreeSpecificDev @ 0x14009270C (RIMFreeSpecificDev.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x140098420 (rimHandleAnyPnpRemovePendingDevices.c)
 *     HMUnlockObject @ 0x14009B9C0 (HMUnlockObject.c)
 *     rimProcessHidInput @ 0x1400A19E0 (rimProcessHidInput.c)
 *     CheckOrAcquireDwmStateLock @ 0x1400B2E60 (CheckOrAcquireDwmStateLock.c)
 *     HMUnlockObjectInternal @ 0x1400D04F0 (HMUnlockObjectInternal.c)
 *     ?ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ @ 0x1400D1194 (-ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x140111814 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     RIMRemoveFromActiveDevices @ 0x140131468 (RIMRemoveFromActiveDevices.c)
 *     RIMAddToActiveDevices @ 0x1401317B0 (RIMAddToActiveDevices.c)
 *     DrvNotifySessionStateChange @ 0x1401804C0 (DrvNotifySessionStateChange.c)
 *     DrvIsNotUsingGraphicsDevice @ 0x140188780 (DrvIsNotUsingGraphicsDevice.c)
 *     DrvSessionHasAnyGraphicsDevice @ 0x140190660 (DrvSessionHasAnyGraphicsDevice.c)
 *     DrvCleanupRemoteGraphicsDevices @ 0x1401F6734 (DrvCleanupRemoteGraphicsDevices.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1401F96EC (DrvUpdateRemoteGraphicsDeviceList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GET_USERCRIT_DISPOSITION(__int64 a1, __int64 a2)
{
  return (*(_DWORD *)(PsGetCurrentThreadWin32Thread(a1, a2) + 24) >> 2) & 3;
}
