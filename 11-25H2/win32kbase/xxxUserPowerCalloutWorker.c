/*
 * XREFs of xxxUserPowerCalloutWorker @ 0x1400E9120
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ @ 0x1400E9540 (-UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ.c)
 *     ?NotifyPoRequestCompleted@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1400E9630 (-NotifyPoRequestCompleted@@YAXPEAUtagPOWERREQUEST@@@Z.c)
 *     EtwTraceCompletePowerRequest @ 0x1400E96A4 (EtwTraceCompletePowerRequest.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E96D0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     IsxxxSetInformationThreadSupported @ 0x1400EA374 (IsxxxSetInformationThreadSupported.c)
 *     ?UserPopPowerStateTransitionRecord@@YAHXZ @ 0x1400EA588 (-UserPopPowerStateTransitionRecord@@YAHXZ.c)
 *     ?UserPushPowerStateTransitionRecord@@YAHPEAX@Z @ 0x1400EA5E8 (-UserPushPowerStateTransitionRecord@@YAHPEAX@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1400EA660 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxUserPowerCalloutWorker(__int64 a1, __int64 a2)
{
  int v2; // r15d
  __int64 UserSessionState; // r14
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int (__fastcall *v9)(__int64, __int64, __int128 *, __int64); // rax
  struct tagPOWERREQUEST *v10; // rax
  struct tagPOWERREQUEST *v11; // rbx
  int v12; // ebp
  struct tagTHREADINFO *v13; // rax
  struct _WIN32_POWEREVENT_PARAMETERS *v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  void (__fastcall *v18)(__int64, __int64, __int128 *); // rax
  _QWORD v20[3]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v21; // [rsp+48h] [rbp-30h] BYREF
  __int64 v22; // [rsp+58h] [rbp-20h]

  v21 = 0LL;
  v22 = 0LL;
  v2 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = 1LL;
  if ( *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19144) )
  {
    if ( (int)IsxxxSetInformationThreadSupported() < 0
      || (v9 = *(int (__fastcall **)(__int64, __int64, __int128 *, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(
                                                                                           v8,
                                                                                           v7)
                                                                                       + 48)
                                                                           + 2448LL)) != 0LL
      && v9(-2LL, 7LL, &v21, 24LL) < 0 )
    {
      v4 = 0LL;
    }
    else
    {
      v2 = 1;
    }
  }
  *(_QWORD *)(UserSessionState + 536) = KeGetCurrentThread();
  while ( 1 )
  {
    v10 = UnqueuePowerRequest();
    v11 = v10;
    if ( !v10 )
      break;
    v12 = 0;
    if ( v4 )
    {
      if ( *((_BYTE *)v10 + 44) && !*((_QWORD *)v10 + 10) )
        v12 = UserPushPowerStateTransitionRecord((void *)*(unsigned int *)(UserSessionState + 3032));
      v13 = PtiCurrent();
      v20[0] = *((_QWORD *)v13 + 48);
      *((_QWORD *)v13 + 48) = v20;
      *(_QWORD *)(UserSessionState + 488) = v11;
      v14 = (struct _WIN32_POWEREVENT_PARAMETERS *)*((_QWORD *)v11 + 10);
      v20[1] = v11;
      v20[2] = CancelPowerRequest;
      if ( v14 )
        v15 = xxxUserPowerEventCalloutWorker(v14);
      else
        v15 = xxxUserPowerStateCalloutWorker();
      *((_DWORD *)v11 + 10) = v15;
      *(_QWORD *)(UserSessionState + 488) = 0LL;
      *((_QWORD *)PtiCurrent() + 48) = v20[0];
    }
    NotifyPoRequestCompleted(v11);
    if ( *((_BYTE *)v11 + 44) )
    {
      if ( v12 )
        UserPopPowerStateTransitionRecord();
      KeSetEvent((PRKEVENT)((char *)v11 + 16), 1, 0);
    }
    else
    {
      EtwTraceCompletePowerRequest(v11, *((unsigned int *)v11 + 10));
      GreDeleteFastMutex((char *)v11);
    }
  }
  if ( v2 )
  {
    if ( (int)IsxxxSetInformationThreadSupported() >= 0 )
    {
      v18 = *(void (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v17, v16) + 48)
                                                                + 2448LL);
      if ( v18 )
        v18(-2LL, 9LL, &v21);
    }
  }
  return 1LL;
}
