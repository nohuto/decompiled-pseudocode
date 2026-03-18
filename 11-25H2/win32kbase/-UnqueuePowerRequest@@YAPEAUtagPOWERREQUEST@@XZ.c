/*
 * XREFs of ?UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ @ 0x1400E9540
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1400E9120 (xxxUserPowerCalloutWorker.c)
 *     CleanupPowerRequestList @ 0x140155E20 (CleanupPowerRequestList.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1400E0D04 (McTemplateK0pq_EtwWriteTransfer.c)
 *     EnterPowerCrit @ 0x1400E95D0 (EnterPowerCrit.c)
 *     LeavePowerCrit @ 0x1400E9600 (LeavePowerCrit.c)
 */

struct tagPOWERREQUEST *UnqueuePowerRequest(void)
{
  _QWORD *v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 *v9; // rax
  int v11; // [rsp+20h] [rbp-18h]

  v0 = 0LL;
  EnterPowerCrit();
  UserSessionState = W32GetUserSessionState(v2, v1);
  if ( *(_QWORD *)(UserSessionState + 496) != UserSessionState + 496 )
  {
    v6 = W32GetUserSessionState(v5, v4);
    v8 = v6 + 496;
    v0 = *(_QWORD **)(v6 + 504);
    if ( *v0 != v6 + 496 || (v9 = (__int64 *)v0[1], (_QWORD *)*v9 != v0) )
      __fastfail(3u);
    *(_QWORD *)(v8 + 8) = v9;
    *v9 = v8;
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    {
      v11 = -1;
      McTemplateK0pq_EtwWriteTransfer(v8, &RemovePowerRequestFromQueue, v7, v0, v11);
    }
  }
  LeavePowerCrit();
  return (struct tagPOWERREQUEST *)v0;
}
