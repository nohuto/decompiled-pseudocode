/*
 * XREFs of _HMPheFromObjectWorker @ 0x14003B3B0
 * Callers:
 *     HMChangeOwnerProcessWorker @ 0x14003B380 (HMChangeOwnerProcessWorker.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAU_HEAD@@@Z @ 0x14003E754 (-HMMarkObjectDestroyWorker@@YAHPEAU_HEAD@@@Z.c)
 *     HMAssignmentLock @ 0x1400F4780 (HMAssignmentLock.c)
 *     DestroyKF @ 0x1400F6304 (DestroyKF.c)
 *     DestroyMonitor @ 0x1400F63A0 (DestroyMonitor.c)
 *     DestroyKL @ 0x1400F6658 (DestroyKL.c)
 *     HMDestroyObject @ 0x1400F6780 (HMDestroyObject.c)
 *     HMFreeObject @ 0x1400F67F0 (HMFreeObject.c)
 *     HMChangeOwnerThreadWorker @ 0x1401A5428 (HMChangeOwnerThreadWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMPheFromObjectWorker(int *a1, __int64 a2)
{
  int v2; // ebx
  __int64 UserSessionState; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = *a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  return *(_DWORD *)(W32GetUserSessionState(v5, v4) + 19896) * (unsigned int)(unsigned __int16)v2
       + *(_QWORD *)(UserSessionState + 19888);
}
