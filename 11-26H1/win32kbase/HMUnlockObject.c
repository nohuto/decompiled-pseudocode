/*
 * XREFs of HMUnlockObject @ 0x14009B9C0
 * Callers:
 *     ?UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z @ 0x14004A560 (-UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x140068490 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1400685B8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     DCompHitTest @ 0x140070590 (DCompHitTest.c)
 *     ?SpeedHitTest@CSpatialProcessor@@SA?AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x140070610 (-SpeedHitTest@CSpatialProcessor@@SA-AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestRes.c)
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x14007122C (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA-AVCInputDest@@AEBU_InputHitTestResul.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x140071D30 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??1?$Win32HMThreadLockBase@UtagMONITOR@@$0A@$00@@QEAA@XZ @ 0x140086F48 (--1-$Win32HMThreadLockBase@UtagMONITOR@@$0A@$00@@QEAA@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400874A8 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     rimDispatchCompleteFrames @ 0x140096874 (rimDispatchCompleteFrames.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x14009A480 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     HMAssignmentUnlock @ 0x14009B8C0 (HMAssignmentUnlock.c)
 *     HMAssignmentLock @ 0x14009B8F0 (HMAssignmentLock.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14009C7BC (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     DestroyThreadsObjects @ 0x1400D0690 (DestroyThreadsObjects.c)
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1400D0E14 (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1400E5830 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     HMUnlockDestroyObject @ 0x140118670 (HMUnlockDestroyObject.c)
 *     HMFreeObject @ 0x1401187F0 (HMFreeObject.c)
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1401857A0 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     _lambda_003a05ce5104f89dcc953024da4d9dc6_::operator() @ 0x140191374 (_lambda_003a05ce5104f89dcc953024da4d9dc6_--operator().c)
 *     HMRemoveHandleForObject @ 0x1401BCC80 (HMRemoveHandleForObject.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1401BF728 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1401D6B70 (-DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     ?RemoveInjectionDevicesForSessionUninitialize@CBaseInput@@SAXXZ @ 0x1402187F4 (-RemoveInjectionDevicesForSessionUninitialize@CBaseInput@@SAXXZ.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x140048BE0 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     LockIntoExclusiveUserCritDeferredUnlockList @ 0x140093494 (LockIntoExclusiveUserCritDeferredUnlockList.c)
 *     LockIntoSharedUserCritDeferredUnlockList @ 0x1400935C0 (LockIntoSharedUserCritDeferredUnlockList.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1400D096C (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400EAF04 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_THREADLOCK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall HMUnlockObject(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbx
  int v4; // esi
  __int64 UserSessionState; // rdi
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  char v12; // al
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // edx
  int v20; // r8d
  PERESOURCE *v21; // [rsp+20h] [rbp-48h] BYREF
  char v22; // [rsp+48h] [rbp-20h]

  v3 = a1;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 8), 0xFFFFFFFF) == 1 )
  {
    v4 = (unsigned __int16)*(_DWORD *)a1;
    UserSessionState = W32GetUserSessionState(a1, a2, a3);
    v10 = (unsigned int)(*(_DWORD *)(W32GetUserSessionState(v7, v6, v8) + 19928) * v4);
    v11 = v10 + *(_QWORD *)(UserSessionState + 19920);
    v12 = *(_BYTE *)(v11 + 25);
    if ( (v12 & 1) != 0 && (v12 & 2) == 0 )
    {
      if ( (unsigned int)GET_USERCRIT_DISPOSITION(v10, v9) == 1 )
      {
        DomainShared<>::DomainExclusive<DLT_THREADLOCK>::ObjectLock<>::ObjectLock<>(&v21);
        LockIntoSharedUserCritDeferredUnlockList(v3, v19, v20);
        if ( v22 && v21 )
        {
          ExReleaseResourceAndLeaveCriticalRegion(*v21);
          return 0LL;
        }
      }
      else
      {
        v17 = W32GetUserSessionState(v15, v14, v16);
        v18 = *(_QWORD *)(v17 + 19800);
        if ( v18 && v11 != v18 && !*(_DWORD *)(v17 + 19796) )
        {
          ++*(_DWORD *)(v17 + 19808);
          LockIntoExclusiveUserCritDeferredUnlockList(v3);
          return 0LL;
        }
        HMDestroyUnlockedObjectWorker((struct _HANDLEENTRY *)v11);
      }
      return 0LL;
    }
  }
  return v3;
}
