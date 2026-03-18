/*
 * XREFs of xxxUserPowerCalloutWorker @ 0x1401120B0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ @ 0x1401122D0 (-UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ.c)
 *     IsxxxSetInformationThreadSupported @ 0x140112394 (IsxxxSetInformationThreadSupported.c)
 *     ?NotifyPoRequestCompleted@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1401123CC (-NotifyPoRequestCompleted@@YAXPEAUtagPOWERREQUEST@@@Z.c)
 *     EtwTraceCompletePowerRequest @ 0x140112440 (EtwTraceCompletePowerRequest.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x140112470 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?UserPushPowerStateTransitionRecord@@YAHPEAX@Z @ 0x1401131C0 (-UserPushPowerStateTransitionRecord@@YAHPEAX@Z.c)
 *     ?UserPopPowerStateTransitionRecord@@YAHXZ @ 0x140113240 (-UserPopPowerStateTransitionRecord@@YAHXZ.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1401132A0 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxUserPowerCalloutWorker(int a1, int a2, int a3)
{
  int v3; // r14d
  int v4; // r15d
  __int64 UserSessionState; // rbp
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  __int64 v9; // rcx
  int (__fastcall *v10)(__int64, __int64, __int128 *, __int64); // rax
  struct tagPOWERREQUEST *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct tagPOWERREQUEST *v14; // rbx
  int v15; // esi
  struct tagTHREADINFO *v16; // rax
  struct _WIN32_POWEREVENT_PARAMETERS *v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct tagTHREADINFO *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  void (__fastcall *v26)(__int64, __int64, __int128 *); // rax
  _QWORD v28[3]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v29; // [rsp+48h] [rbp-30h] BYREF
  __int64 v30; // [rsp+58h] [rbp-20h]

  v29 = 0LL;
  v30 = 0LL;
  v3 = 0;
  v4 = 1;
  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  if ( *(_QWORD *)(W32GetUserSessionState(v7, v6, v8) + 19176) )
  {
    if ( (int)IsxxxSetInformationThreadSupported() < 0
      || (v10 = *(int (__fastcall **)(__int64, __int64, __int128 *, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v9)
                                                                                        + 48)
                                                                            + 2104LL)) != 0LL
      && v10(-2LL, 7LL, &v29, 24LL) < 0 )
    {
      v4 = 0;
    }
    else
    {
      v3 = 1;
    }
  }
  *(_QWORD *)(UserSessionState + 536) = KeGetCurrentThread();
  while ( 1 )
  {
    v11 = UnqueuePowerRequest();
    v14 = v11;
    if ( !v11 )
      break;
    v15 = 0;
    if ( v4 )
    {
      if ( *((_BYTE *)v11 + 44) && !*((_QWORD *)v11 + 10) )
        v15 = UserPushPowerStateTransitionRecord((void *)*(unsigned int *)(UserSessionState + 3032));
      v16 = PtiCurrent(v13, v12);
      v28[0] = *((_QWORD *)v16 + 47);
      *((_QWORD *)v16 + 47) = v28;
      *(_QWORD *)(UserSessionState + 488) = v14;
      v17 = (struct _WIN32_POWEREVENT_PARAMETERS *)*((_QWORD *)v14 + 10);
      v28[1] = v14;
      v28[2] = CancelPowerRequest;
      if ( v17 )
        v18 = xxxUserPowerEventCalloutWorker(v17);
      else
        v18 = xxxUserPowerStateCalloutWorker();
      *((_DWORD *)v14 + 10) = v18;
      *(_QWORD *)(UserSessionState + 488) = 0LL;
      v21 = PtiCurrent(v20, v19);
      *((_QWORD *)v21 + 47) = v28[0];
    }
    NotifyPoRequestCompleted(v14);
    if ( *((_BYTE *)v14 + 44) )
    {
      if ( v15 )
        UserPopPowerStateTransitionRecord();
      KeSetEvent((PRKEVENT)((char *)v14 + 16), 1, 0);
    }
    else
    {
      EtwTraceCompletePowerRequest(v14, *((unsigned int *)v14 + 10));
      GreDeleteFastMutex((char *)v14, v22, v23, v24);
    }
  }
  if ( v3 )
  {
    if ( (int)IsxxxSetInformationThreadSupported() >= 0 )
    {
      v26 = *(void (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v25) + 48)
                                                                + 2104LL);
      if ( v26 )
        v26(-2LL, 9LL, &v29);
    }
  }
  return 1LL;
}
