/*
 * XREFs of _HMPkheFromObjectWorker @ 0x140094FC8
 * Callers:
 *     LockIntoExclusiveUserCritDeferredUnlockList @ 0x140093494 (LockIntoExclusiveUserCritDeferredUnlockList.c)
 *     LockIntoSharedUserCritDeferredUnlockList @ 0x1400935C0 (LockIntoSharedUserCritDeferredUnlockList.c)
 *     ?Set@tagUNIQUE_WINDOW_HANDLE@@QEAAXPEBUtagWND@@@Z @ 0x1400936C0 (-Set@tagUNIQUE_WINDOW_HANDLE@@QEAAXPEBUtagWND@@@Z.c)
 *     HMChangeOwnerThreadWorker @ 0x140094AC0 (HMChangeOwnerThreadWorker.c)
 *     HMSDCheck @ 0x140094EB0 (HMSDCheck.c)
 *     _HMPkheFromObject @ 0x140094FB0 (_HMPkheFromObject.c)
 *     HMFreeObject @ 0x1401187F0 (HMFreeObject.c)
 *     ?Get@tagUNIQUE_WINDOW_HANDLE@@QEBAPEAUtagWND@@XZ @ 0x14017FCF0 (-Get@tagUNIQUE_WINDOW_HANDLE@@QEBAPEAUtagWND@@XZ.c)
 *     HMRemoveHandleForObject @ 0x1401BCC80 (HMRemoveHandleForObject.c)
 *     NtMITPostWindowEventMessage @ 0x1401E1450 (NtMITPostWindowEventMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMPkheFromObjectWorker(_DWORD *a1, int a2, int a3)
{
  __int64 v3; // rbx

  v3 = (unsigned __int16)*a1;
  return *(_QWORD *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 19864) + 40 * v3;
}
