/*
 * XREFs of HMUnlockObject @ 0x140037A30
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x140036A78 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x140037980 (--1CInputDest@@QEAA@XZ.c)
 *     HMAssignmentUnlock @ 0x1400379C0 (HMAssignmentUnlock.c)
 *     ??1CHMRefHwndByHandle@@QEAA@XZ @ 0x1400379F0 (--1CHMRefHwndByHandle@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14003821C (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     DCompHitTest @ 0x1400382D0 (DCompHitTest.c)
 *     DestroyThreadsObjects @ 0x140038840 (DestroyThreadsObjects.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14009F95C (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     HMAssignmentLock @ 0x1400F4780 (HMAssignmentLock.c)
 *     HMFreeObject @ 0x1400F67F0 (HMFreeObject.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1401212A8 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     VideoPortCallout @ 0x1401241D0 (VideoPortCallout.c)
 *     ?W32kEtwEnableCallbackWorker@@YAXPEBU_GUID@@K_K@Z @ 0x140140BD8 (-W32kEtwEnableCallbackWorker@@YAXPEBU_GUID@@K_K@Z.c)
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x14014B640 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     HMUnlockDestroyObject @ 0x14014BE40 (HMUnlockDestroyObject.c)
 *     _lambda_003a05ce5104f89dcc953024da4d9dc6_::operator() @ 0x14014CA0C (_lambda_003a05ce5104f89dcc953024da4d9dc6_--operator().c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140157870 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1401614EC (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1401616B8 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     HMRemoveHandleForObject @ 0x140161860 (HMRemoveHandleForObject.c)
 *     NtUserInitializeGenericHidInjection @ 0x140171340 (NtUserInitializeGenericHidInjection.c)
 *     UserProcessTimerDelayCallout @ 0x1401A750C (UserProcessTimerDelayCallout.c)
 *     UserProcessTimerStatisticsCallout @ 0x1401A76B0 (UserProcessTimerStatisticsCallout.c)
 *     NtMapVisualRelativePoints @ 0x1401AE6E0 (NtMapVisualRelativePoints.c)
 *     ?DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1401B3110 (-DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     NtMITAccessibilityTimerNotification @ 0x1401BA3D0 (NtMITAccessibilityTimerNotification.c)
 *     NtMITConfigureVirtualTouchpad @ 0x1401BA4F0 (NtMITConfigureVirtualTouchpad.c)
 *     NtMITDeactivateInputProcessing @ 0x1401BA740 (NtMITDeactivateInputProcessing.c)
 *     NtMITDisableMouseIntercept @ 0x1401BA850 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1401BA980 (NtMITEnableMouseIntercept.c)
 *     NtMITInitMinuserThread @ 0x1401BAAD0 (NtMITInitMinuserThread.c)
 *     NtMITMinuserWindowDestroyed @ 0x1401BAD40 (NtMITMinuserWindowDestroyed.c)
 *     NtMITPostMouseInputMessage @ 0x1401BAEA0 (NtMITPostMouseInputMessage.c)
 *     NtMITPostThreadEventMessage @ 0x1401BB050 (NtMITPostThreadEventMessage.c)
 *     NtMITPostWindowEventMessage @ 0x1401BB1F0 (NtMITPostWindowEventMessage.c)
 *     NtMITSynthesizeMouseInput @ 0x1401BB5D0 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1401BB800 (NtMITSynthesizeTouchInput.c)
 *     NtMITUninitMinuserThread @ 0x1401BB9D0 (NtMITUninitMinuserThread.c)
 *     NtSetCursorInputSpace @ 0x1401BBB70 (NtSetCursorInputSpace.c)
 *     NtSetPointerDeviceInputSpace @ 0x1401BBD50 (NtSetPointerDeviceInputSpace.c)
 *     NtUserCreateBaseWindow @ 0x1401BC060 (NtUserCreateBaseWindow.c)
 *     NtUserCreatePalmRejectionDelayZone @ 0x1401BC1D0 (NtUserCreatePalmRejectionDelayZone.c)
 *     NtUserDestroyPalmRejectionDelayZone @ 0x1401BD1E0 (NtUserDestroyPalmRejectionDelayZone.c)
 *     NtUserEnableTouchPad @ 0x1401BD300 (NtUserEnableTouchPad.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1401BDD90 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserPostKeyboardInputMessage @ 0x1401BF660 (NtUserPostKeyboardInputMessage.c)
 *     NtUserSetForegroundRedirectionForActivationObject @ 0x1401BFEA0 (NtUserSetForegroundRedirectionForActivationObject.c)
 *     NtUserSetProcessMousewheelRoutingMode @ 0x1401C0B10 (NtUserSetProcessMousewheelRoutingMode.c)
 *     NtUserStopAndEndInertia @ 0x1401C1050 (NtUserStopAndEndInertia.c)
 *     NtUserUnloadKeyboardLayout @ 0x1401C1180 (NtUserUnloadKeyboardLayout.c)
 *     NtUserUnregisterSessionPort @ 0x1401C12B0 (NtUserUnregisterSessionPort.c)
 *     NtRIMEnableMonitorMappingForDevice @ 0x1401D7E80 (NtRIMEnableMonitorMappingForDevice.c)
 *     NtRIMOnTimerNotification @ 0x1401D80C0 (NtRIMOnTimerNotification.c)
 *     NtRIMUnregisterForInput @ 0x1401D8690 (NtRIMUnregisterForInput.c)
 *     ?RemoveInjectionDevicesForSessionUninitialize@CBaseInput@@SAXXZ @ 0x140210AA4 (-RemoveInjectionDevicesForSessionUninitialize@CBaseInput@@SAXXZ.c)
 *     ?ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z @ 0x14021AC00 (-ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z.c)
 *     IVWorkerThread @ 0x14021B528 (IVWorkerThread.c)
 * Callees:
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1400395B0 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140040DDC (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400BAE08 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_THREADLOCK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     LockIntoExclusiveUserCritDeferredUnlockList @ 0x140161960 (LockIntoExclusiveUserCritDeferredUnlockList.c)
 *     LockIntoSharedUserCritDeferredUnlockList @ 0x1401A5878 (LockIntoSharedUserCritDeferredUnlockList.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

int *__fastcall HMUnlockObject(int *a1, __int64 a2)
{
  int v3; // edi
  __int64 UserSessionState; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  char v8; // al
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  PERESOURCE *v14; // [rsp+20h] [rbp-48h] BYREF
  char v15; // [rsp+48h] [rbp-20h]

  if ( _InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF) != 1 )
    return a1;
  v3 = *a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v7 = *(_QWORD *)(UserSessionState + 19888)
     + *(_DWORD *)(W32GetUserSessionState(v6, v5) + 19896) * (unsigned int)(unsigned __int16)v3;
  v8 = *(_BYTE *)(v7 + 25);
  if ( (v8 & 1) != 0 && (v8 & 2) == 0 )
  {
    if ( IS_USERCRIT_OWNED_SHAREDONLY() )
    {
      DomainShared<>::DomainExclusive<DLT_THREADLOCK>::ObjectLock<>::ObjectLock<>(&v14);
      LockIntoSharedUserCritDeferredUnlockList(a1);
      if ( v15 && v14 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(*v14);
        return 0LL;
      }
    }
    else
    {
      v12 = W32GetUserSessionState(v11, v10);
      v13 = *(_QWORD *)(v12 + 19768);
      if ( v13 && v7 != v13 && !*(_DWORD *)(v12 + 19764) )
      {
        ++*(_DWORD *)(v12 + 19776);
        LockIntoExclusiveUserCritDeferredUnlockList(a1);
        return 0LL;
      }
      HMDestroyUnlockedObjectWorker((struct _HANDLEENTRY *)v7);
    }
    return 0LL;
  }
  return a1;
}
