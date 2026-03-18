/*
 * XREFs of zzzDestroyQueue @ 0x1401667F0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x140164194 (xxxDestroyThreadInfo.c)
 * Callees:
 *     HMAssignmentUnlock @ 0x1400379C0 (HMAssignmentUnlock.c)
 *     SetWakeBit @ 0x1400948E8 (SetWakeBit.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     FreeMessageList @ 0x140100A30 (FreeMessageList.c)
 *     LockQCursor @ 0x140104650 (LockQCursor.c)
 *     ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x140106F84 (-IsAnyThreadAttached@tagQ@@QEBA_NXZ.c)
 *     ?RemoveThreadFromQSharingLists@tagTHREADINFO@@QEAA_NPEAUtagQ@@@Z @ 0x140106FA4 (-RemoveThreadFromQSharingLists@tagTHREADINFO@@QEAA_NPEAUtagQ@@@Z.c)
 *     IsFreeMessageListSupported @ 0x140109270 (IsFreeMessageListSupported.c)
 *     FreeQueue @ 0x14010EDC4 (FreeQueue.c)
 *     ClearDelegationCapture @ 0x14010FA38 (ClearDelegationCapture.c)
 *     ?UnlockFocusWnd@tagQ@@QEAAPEAUtagWND@@XZ @ 0x140110260 (-UnlockFocusWnd@tagQ@@QEAAPEAUtagWND@@XZ.c)
 *     IsClearDelegationCaptureSupported @ 0x140110F90 (IsClearDelegationCaptureSupported.c)
 *     xxxWindowEvent @ 0x1401455A4 (xxxWindowEvent.c)
 *     RecalculateQueueInfo @ 0x140167210 (RecalculateQueueInfo.c)
 *     ApiSetEditionSystemGenerateMove @ 0x140196BF8 (ApiSetEditionSystemGenerateMove.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x140196E80 (ApiSetEditionUpdateRawMouseMode.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x14019ED70 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     ?SetActiveWindow@tagQ@@QEAAPEAUtagWND@@PEAU2@@Z @ 0x1401A6AE0 (-SetActiveWindow@tagQ@@QEAAPEAUtagWND@@PEAU2@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall zzzDestroyQueue(tagQ *this, tagTHREADINFO *a2)
{
  int v4; // ebp
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // r14
  bool v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r14
  int (*v19)(void); // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // ecx
  int (*v24)(void); // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  void (__fastcall *v27)(tagQ *); // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  void (*v37)(void); // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx

  v4 = 0;
  if ( a2 )
    tagTHREADINFO::RemoveThreadFromQSharingLists(a2, this);
  if ( tagQ::IsAnyThreadAttached(this) )
  {
    if ( *((tagTHREADINFO **)this + 9) == a2 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40000) == 0
        || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v7 = 0;
      }
      v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        PtiCurrent();
        UserSessionState = W32GetUserSessionState(v10, v9);
        LOBYTE(v12) = v8;
        LOBYTE(v13) = v7;
        WPP_RECORDER_AND_TRACE_SF_qqq(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v13,
          v12,
          *(_QWORD *)(UserSessionState + 69144));
      }
      *((_QWORD *)this + 9) = 0LL;
    }
    if ( a2 && (*((tagTHREADINFO **)this + 13) == a2 || *((tagTHREADINFO **)this + 12) == a2) )
    {
      v14 = *((_QWORD *)this + 63);
      v15 = 0LL;
      v16 = 0LL;
      v17 = 0LL;
      while ( v14 )
      {
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v14 + 528), 0, 0) & 1) == 0 )
        {
          v15 = v14;
          if ( (*(_DWORD *)(*((_QWORD *)a2 + 61) + 8LL) & 6) != 0
            && (*(_DWORD *)(*(_QWORD *)(v14 + 488) + 16LL) & 6) != 0 )
          {
            v16 = v14;
          }
          if ( (*(_DWORD *)(*((_QWORD *)a2 + 61) + 8LL) & 1) != 0
            && (*(_DWORD *)(*(_QWORD *)(v14 + 488) + 16LL) & 1) != 0 )
          {
            v17 = v14;
          }
          if ( (*(_DWORD *)(*((_QWORD *)a2 + 61) + 16LL) & 0x400) != 0
            && (*(_DWORD *)(*(_QWORD *)(v14 + 488) + 16LL) & 0x400) != 0 )
          {
            v17 = v14;
          }
        }
        v14 = *(_QWORD *)(v14 + 1688);
      }
      v18 = v15;
      if ( v16 )
        v18 = v16;
      if ( v17 )
        v15 = v17;
      v19 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(0LL, v17) + 48) + 1336LL);
      if ( v19 && v19() >= 0 )
      {
        if ( v18 )
          SetWakeBit(v18, *(_DWORD *)(*((_QWORD *)a2 + 61) + 8LL) & 6);
        if ( v15 )
        {
          SetWakeBit(v15, *(_DWORD *)(*((_QWORD *)a2 + 61) + 8LL) & 1);
          SetWakeBit(v15, *(_DWORD *)(*((_QWORD *)a2 + 61) + 8LL) & 0x400);
        }
      }
      if ( *((tagTHREADINFO **)this + 13) == a2 )
        *((_QWORD *)this + 13) = v15;
      if ( *((tagTHREADINFO **)this + 12) == a2 )
      {
        *((_QWORD *)this + 12) = v18;
        ApiSetEditionUpdateRawMouseMode(this);
      }
    }
    RecalculateQueueInfo();
  }
  else
  {
    if ( *(tagQ **)(W32GetUserSessionState(v6, v5) + 18888) == this && *((_QWORD *)this + 15) )
    {
      v22 = W32GetUserSessionState(v21, v20);
      v23 = 51;
      if ( !*(_DWORD *)(v22 + 70600) )
        v23 = 49;
      xxxWindowEvent(2147483651LL, *((_QWORD *)this + 15), 0, 6u, v23);
    }
    v24 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v21, v20) + 48) + 1368LL);
    if ( v24 )
    {
      if ( v24() >= 0 )
      {
        v27 = *(void (__fastcall **)(tagQ *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v26, v25) + 48) + 1376LL);
        if ( v27 )
          v27(this);
      }
    }
    tagQ::UnlockFocusWnd(this);
    tagQ::SetActiveWindow(this, 0LL);
    HMAssignmentUnlock((__int64 *)this + 17);
    if ( (int)IsClearDelegationCaptureSupported(v29, v28) >= 0 )
      ClearDelegationCapture((__int64)this, v30);
    HMAssignmentUnlock((__int64 *)this + 40);
    LockQCursor((__int64)this, 0LL);
    if ( (int)IsFreeMessageListSupported(v32, v31) >= 0 )
      FreeMessageList((__int64)this + 24, v33);
    if ( *(tagQ **)(W32GetUserSessionState(v34, v33) + 18888) == this )
    {
      v36 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v36, v35) + 48);
      v37 = *(void (**)(void))(v36 + 1400);
      if ( v37 )
        v37();
    }
    if ( *(tagQ **)(W32GetUserSessionState(v36, v35) + 18896) == this )
      *(_QWORD *)(W32GetUserSessionState(v39, v38) + 18896) = 0LL;
    if ( *(tagQ **)(W32GetUserSessionState(v39, v38) + 19176) == this )
    {
      v4 = 1;
      *(_QWORD *)(W32GetUserSessionState(v41, v40) + 19176) = 0LL;
    }
    if ( *((_DWORD *)this + 104) )
      *((_DWORD *)this + 103) |= 0x4000000u;
    else
      FreeQueue((char *)this, v40);
    if ( v4 )
      ApiSetEditionSystemGenerateMove(2LL);
  }
}
