/*
 * XREFs of zzzDestroyQueue @ 0x1400B8EC0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMAssignmentUnlock @ 0x14009B8C0 (HMAssignmentUnlock.c)
 *     FreeQueue @ 0x1400B7FDC (FreeQueue.c)
 *     ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x1400B9344 (-IsAnyThreadAttached@tagQ@@QEBA_NXZ.c)
 *     ?RemoveThreadFromQSharingLists@tagTHREADINFO@@QEAA_NPEAUtagQ@@@Z @ 0x1400B9364 (-RemoveThreadFromQSharingLists@tagTHREADINFO@@QEAA_NPEAUtagQ@@@Z.c)
 *     IsClearDelegationCaptureSupported @ 0x1400B93EC (IsClearDelegationCaptureSupported.c)
 *     IsFreeMessageListSupported @ 0x1400B9424 (IsFreeMessageListSupported.c)
 *     LockQCursor @ 0x1400B945C (LockQCursor.c)
 *     ?UnlockFocusWnd@tagQ@@QEAAPEAUtagWND@@XZ @ 0x1400B94B0 (-UnlockFocusWnd@tagQ@@QEAAPEAUtagWND@@XZ.c)
 *     FreeMessageList @ 0x1400B94F0 (FreeMessageList.c)
 *     ClearDelegationCapture @ 0x1400B952C (ClearDelegationCapture.c)
 *     RecalculateQueueInfo @ 0x1400B9570 (RecalculateQueueInfo.c)
 *     SetWakeBit @ 0x1400B9C7C (SetWakeBit.c)
 *     xxxWindowEvent @ 0x14011CB00 (xxxWindowEvent.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x140173C54 (ApiSetEditionUpdateRawMouseMode.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x1401BE708 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     ApiSetEditionSystemGenerateMove @ 0x1401C1B74 (ApiSetEditionSystemGenerateMove.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall zzzDestroyQueue(__int64 *a1, tagTHREADINFO *this)
{
  int v4; // ebp
  __int64 v5; // rdx
  CTouchProcessor *v6; // rcx
  int v7; // r8d
  int v8; // edx
  __int64 v9; // rcx
  int v10; // r8d
  int (*v11)(void); // rax
  __int64 v12; // rcx
  void (__fastcall *v13)(__int64 *); // rax
  __int64 i; // rcx
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  int v18; // edx
  __int64 v19; // rcx
  int v20; // r8d
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  void (*v27)(void); // rax
  __int64 v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // r9
  __int64 v31; // r8
  __int64 v32; // r14
  int (*v33)(void); // rax
  __int64 v34; // rax
  int v35; // ecx
  char v36; // r14
  bool v37; // r15
  int v38; // edx
  int v39; // ecx
  int v40; // r8d
  __int64 UserSessionState; // rax
  int v42; // r8d
  int v43; // edx

  v4 = 0;
  if ( this )
    tagTHREADINFO::RemoveThreadFromQSharingLists(this, (struct tagQ *)a1);
  if ( tagQ::IsAnyThreadAttached((tagQ *)a1) )
  {
    if ( (tagTHREADINFO *)a1[9] == this )
    {
      v6 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40000) == 0
        || (v36 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v36 = 0;
      }
      v37 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        PtiCurrent((__int64)WPP_GLOBAL_Control, v5);
        UserSessionState = W32GetUserSessionState(v39, v38, v40);
        LOBYTE(v42) = v37;
        LOBYTE(v43) = v36;
        WPP_RECORDER_AND_TRACE_SF_qqq(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v43,
          v42,
          *(_QWORD *)(UserSessionState + 69136));
      }
      a1[9] = 0LL;
    }
    if ( this && ((tagTHREADINFO *)a1[13] == this || (tagTHREADINFO *)a1[12] == this) )
    {
      v28 = a1[66];
      v29 = 0LL;
      v30 = 0LL;
      v31 = 0LL;
      while ( v28 )
      {
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v28 + 520), 0, 0) & 1) == 0 )
        {
          v29 = v28;
          if ( (*(_DWORD *)(*((_QWORD *)this + 60) + 8LL) & 6) != 0
            && (*(_DWORD *)(*(_QWORD *)(v28 + 480) + 16LL) & 6) != 0 )
          {
            v30 = v28;
          }
          if ( (*(_DWORD *)(*((_QWORD *)this + 60) + 8LL) & 1) != 0
            && (*(_DWORD *)(*(_QWORD *)(v28 + 480) + 16LL) & 1) != 0 )
          {
            v31 = v28;
          }
          v6 = (CTouchProcessor *)*(unsigned int *)(*((_QWORD *)this + 60) + 16LL);
          if ( ((unsigned __int16)v6 & 0x400) != 0 )
          {
            v6 = (CTouchProcessor *)*(unsigned int *)(*(_QWORD *)(v28 + 480) + 16LL);
            if ( ((unsigned __int16)v6 & 0x400) != 0 )
              v31 = v28;
          }
        }
        v28 = *(_QWORD *)(v28 + 1688);
      }
      v32 = v29;
      if ( v30 )
        v32 = v30;
      if ( v31 )
        v29 = v31;
      v33 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 48) + 1112LL);
      if ( v33 && v33() >= 0 )
      {
        if ( v32 )
          SetWakeBit(v32, *(_DWORD *)(*((_QWORD *)this + 60) + 8LL) & 6);
        if ( v29 )
        {
          SetWakeBit(v29, *(_DWORD *)(*((_QWORD *)this + 60) + 8LL) & 1);
          SetWakeBit(v29, *(_DWORD *)(*((_QWORD *)this + 60) + 8LL) & 0x400);
        }
      }
      if ( (tagTHREADINFO *)a1[13] == this )
        a1[13] = v29;
      if ( (tagTHREADINFO *)a1[12] == this )
      {
        a1[12] = v32;
        ApiSetEditionUpdateRawMouseMode(a1);
      }
    }
    RecalculateQueueInfo();
  }
  else
  {
    if ( *(__int64 **)(W32GetUserSessionState((_DWORD)v6, v5, v7) + 18928) == a1 && a1[15] )
    {
      v34 = W32GetUserSessionState(v9, v8, v10);
      v35 = 51;
      if ( !*(_DWORD *)(v34 + 70592) )
        v35 = 49;
      xxxWindowEvent(-2147483645, a1[15], 0, 6, v35);
    }
    v11 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v9) + 48) + 1144LL);
    if ( v11 )
    {
      if ( v11() >= 0 )
      {
        v13 = *(void (__fastcall **)(__int64 *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v12) + 48) + 1152LL);
        if ( v13 )
          v13(a1);
      }
    }
    tagQ::UnlockFocusWnd((tagQ *)a1);
    for ( i = a1[66]; i; i = *(_QWORD *)(i + 1688) )
      *(_QWORD *)(*(_QWORD *)(i + 480) + 40LL) = 0LL;
    HMAssignmentUnlock(a1 + 16);
    HMAssignmentUnlock(a1 + 17);
    if ( (int)IsClearDelegationCaptureSupported() >= 0 )
      ClearDelegationCapture(a1);
    HMAssignmentUnlock(a1 + 43);
    LockQCursor(a1, 0LL);
    if ( (int)IsFreeMessageListSupported() >= 0 )
      FreeMessageList(a1 + 3);
    if ( *(__int64 **)(W32GetUserSessionState(v16, v15, v17) + 18928) == a1 )
    {
      v19 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v19) + 48);
      v27 = *(void (**)(void))(v19 + 1176);
      if ( v27 )
        v27();
    }
    if ( *(__int64 **)(W32GetUserSessionState(v19, v18, v20) + 18936) == a1 )
      *(_QWORD *)(W32GetUserSessionState(v22, v21, v23) + 18936) = 0LL;
    if ( *(__int64 **)(W32GetUserSessionState(v22, v21, v23) + 19208) == a1 )
    {
      v4 = 1;
      *(_QWORD *)(W32GetUserSessionState(v25, v24, v26) + 19208) = 0LL;
    }
    if ( *((_DWORD *)a1 + 110) )
      *((_DWORD *)a1 + 109) |= 0x4000000u;
    else
      FreeQueue(a1, v24, v26);
    if ( v4 )
      ApiSetEditionSystemGenerateMove(2LL);
  }
}
