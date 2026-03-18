/*
 * XREFs of _HMPkheFromObjectWorker @ 0x1400E3FE8
 * Callers:
 *     ?CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_KPEAU_LUID@@@Z @ 0x1400E3C64 (-CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_K.c)
 *     HMSDCheck @ 0x1400E3ED0 (HMSDCheck.c)
 *     _HMPkheFromObject @ 0x1400E3FD0 (_HMPkheFromObject.c)
 *     HMFreeObject @ 0x1400F67F0 (HMFreeObject.c)
 *     HMRemoveHandleForObject @ 0x140161860 (HMRemoveHandleForObject.c)
 *     LockIntoExclusiveUserCritDeferredUnlockList @ 0x140161960 (LockIntoExclusiveUserCritDeferredUnlockList.c)
 *     HMChangeOwnerThreadWorker @ 0x1401A5428 (HMChangeOwnerThreadWorker.c)
 *     LockIntoSharedUserCritDeferredUnlockList @ 0x1401A5878 (LockIntoSharedUserCritDeferredUnlockList.c)
 *     ?Get@tagUNIQUE_WINDOW_HANDLE@@QEBAPEAUtagWND@@XZ @ 0x1401AA460 (-Get@tagUNIQUE_WINDOW_HANDLE@@QEBAPEAUtagWND@@XZ.c)
 *     ?Set@tagUNIQUE_WINDOW_HANDLE@@QEAAXPEBUtagWND@@@Z @ 0x1401AA520 (-Set@tagUNIQUE_WINDOW_HANDLE@@QEAAXPEBUtagWND@@@Z.c)
 *     NtMITPostWindowEventMessage @ 0x1401BB1F0 (NtMITPostWindowEventMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMPkheFromObjectWorker(int *a1, __int64 a2)
{
  int v2; // ebx

  v2 = *a1;
  return *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19832) + 40LL * (unsigned __int16)v2;
}
