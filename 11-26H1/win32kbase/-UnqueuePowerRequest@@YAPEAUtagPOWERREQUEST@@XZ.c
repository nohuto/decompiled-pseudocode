/*
 * XREFs of ?UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ @ 0x1401122D0
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1401120B0 (xxxUserPowerCalloutWorker.c)
 *     CleanupPowerRequestList @ 0x140193020 (CleanupPowerRequestList.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140113150 (McTemplateK0pq_EtwWriteTransfer.c)
 */

struct tagPOWERREQUEST *__fastcall UnqueuePowerRequest(int a1, int a2, int a3)
{
  _QWORD *v3; // rbx
  __int64 UserSessionState; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 *v13; // rax
  __int64 v14; // rax

  v3 = 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)(UserSessionState + 512));
  v8 = W32GetUserSessionState(v6, v5, v7);
  if ( *(_QWORD *)(v8 + 496) != v8 + 496 )
  {
    v12 = W32GetUserSessionState(v10, v9, v11);
    v10 = v12 + 496;
    v3 = *(_QWORD **)(v12 + 504);
    if ( *v3 != v12 + 496 || (v13 = (__int64 *)v3[1], (_QWORD *)*v13 != v3) )
      __fastfail(3u);
    *(_QWORD *)(v10 + 8) = v13;
    *v13 = v10;
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
      McTemplateK0pq_EtwWriteTransfer(v10, &RemovePowerRequestFromQueue, v11, v3, -1);
  }
  v14 = W32GetUserSessionState(v10, v9, v11);
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)(v14 + 512));
  return (struct tagPOWERREQUEST *)v3;
}
