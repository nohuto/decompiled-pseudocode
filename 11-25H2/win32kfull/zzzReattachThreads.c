/*
 * XREFs of zzzReattachThreads @ 0x14023FD24
 * Callers:
 *     xxxRealInternalGetMessage @ 0x14011559C (xxxRealInternalGetMessage.c)
 *     zzzAttachThreadInput @ 0x1401E910C (zzzAttachThreadInput.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ @ 0x14005E594 (-GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14005F888 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1400677E0 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14012A960 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x140151AA8 (-zzzRecalcThreadAttachment@@YAXXZ.c)
 *     ?InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z @ 0x140151B94 (-InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z.c)
 *     ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x140151D70 (-PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z.c)
 *     UnpackAffectedThreadList @ 0x140151F1C (UnpackAffectedThreadList.c)
 *     ?_GetNextQueueWindow@@YAPEAUtagWND@@PEAU1@HH@Z @ 0x140169118 (-_GetNextQueueWindow@@YAPEAUtagWND@@PEAU1@HH@Z.c)
 *     ?IsSingleThreadAttached@tagQ@@QEBA_NXZ @ 0x1401E8B98 (-IsSingleThreadAttached@tagQ@@QEBA_NXZ.c)
 *     ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x140207CAC (-IsAnyThreadAttached@tagQ@@QEBA_NXZ.c)
 *     ?SetNewForegroundQueue@@YAXPEAUtagQ@@@Z @ 0x14023A398 (-SetNewForegroundQueue@@YAXPEAUtagQ@@@Z.c)
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x14023F6D4 (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x140245078 (zzzInputFocusReceivedWindowEvent.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x140271C68 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?ResetForegroundQueue@@YAXW4SetFgQueueOption@@@Z @ 0x1402786A8 (-ResetForegroundQueue@@YAXW4SetFgQueueOption@@@Z.c)
 *     ?SetNewForegroundQueue2@@YAXPEAUtagQ@@W4SetFgQueueOption@@@Z @ 0x1402787E8 (-SetNewForegroundQueue2@@YAXPEAUtagQ@@W4SetFgQueueOption@@@Z.c)
 *     Feature_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsageNoInline @ 0x14027A134 (Feature_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z @ 0x14027CD00 (-GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z.c)
 */

void __fastcall zzzReattachThreads(__int64 a1, const struct tagTHREADINFO *a2, const struct tagTHREADINFO *a3)
{
  char v5; // di
  __int64 v6; // rdx
  int v7; // edi
  __int64 v8; // r13
  __int64 v9; // rcx
  __int64 v10; // r8
  struct tagTHREADINFO *v11; // r12
  __int64 UserSessionState; // rax
  int v13; // r15d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  const struct tagWND **v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rbp
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  struct _LIST_ENTRY *RecalcHeadPtiListEntry; // r14
  struct _LIST_ENTRY *i; // rsi
  struct tagTHREADINFO *RecalcPtiFromListEntry; // rax
  tagQ *v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  struct tagQMSG *v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  struct tagWND *NextQueueWindow; // rax
  _BYTE v60[8]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v61; // [rsp+48h] [rbp-40h]
  struct tagTHREADINFO *v62; // [rsp+98h] [rbp+10h]

  v5 = a1;
  v62 = PtiCurrent(a1, (__int64)a2);
  v7 = v5 & 2;
  v8 = 0LL;
  v9 = *((_QWORD *)v62 + 59);
  v10 = *(_QWORD *)(v9 + 120);
  if ( v10 )
    v11 = *(struct tagTHREADINFO **)(v10 + 16);
  else
    v11 = *(struct tagTHREADINFO **)(v9 + 104);
  UserSessionState = W32GetUserSessionState(v9, v6);
  v13 = 1;
  v60[0] = 0;
  v61 = 0LL;
  ++*(_DWORD *)(UserSessionState + 70600);
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v60);
  if ( a2 && a3 )
  {
    PackAffectedThreadList(a2, a3);
  }
  else if ( !v7 && !a3 )
  {
    UnpackAffectedThreadList(v15, v14);
  }
  zzzRecalcThreadAttachment();
  v18 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 18888);
  if ( !v18 )
    v18 = *((_QWORD *)v62 + 59);
  if ( tagQ::IsSingleThreadAttached((tagQ *)v18) )
    v18 = 0LL;
  else
    ++*(_DWORD *)(v18 + 416);
  v21 = 0LL;
  if ( *(_QWORD *)(W32GetUserSessionState(v20, v19) + 18888)
    && (v23 = *(_QWORD *)(W32GetUserSessionState(v23, v22) + 18888), *(_QWORD *)(v23 + 128)) )
  {
    v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v23, v22) + 18888) + 128LL) + 16LL);
    v21 = *(const struct tagWND ***)(v25 + 696);
    if ( !v21 )
    {
      v26 = W32GetUserSessionState(v25, v24);
      if ( !InAffectedThreadList(
              *(const struct tagTHREADINFO **)(*(_QWORD *)(*(_QWORD *)(v26 + 18888) + 128LL) + 16LL),
              v27) )
      {
        v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v25, v24) + 18888) + 128LL) + 16LL);
        v21 = *(const struct tagWND ***)(v25 + 472);
      }
    }
    v23 = *(_QWORD *)(W32GetUserSessionState(v25, v24) + 18888);
    if ( *(_QWORD *)(v23 + 120) )
    {
      v23 = *(_QWORD *)(W32GetUserSessionState(v23, v22) + 18888);
      if ( *(_QWORD *)(v23 + 120) )
      {
        v23 = *(_QWORD *)(W32GetUserSessionState(v23, v22) + 18888);
        v8 = **(_QWORD **)(v23 + 120);
      }
    }
  }
  else
  {
    v13 = 0;
  }
  v28 = 0LL;
  if ( *(_QWORD *)(W32GetUserSessionState(v23, v22) + 18896) )
  {
    v32 = *(_QWORD *)(W32GetUserSessionState(v30, v29) + 18896);
    if ( *(_QWORD *)(v32 + 136) )
    {
      v34 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v32, v31) + 18896) + 136LL) + 16LL);
      v28 = *(_QWORD *)(v34 + 696);
      if ( !v28 )
      {
        v35 = W32GetUserSessionState(v34, v33);
        if ( !InAffectedThreadList(
                *(const struct tagTHREADINFO **)(*(_QWORD *)(*(_QWORD *)(v35 + 18896) + 136LL) + 16LL),
                v36) )
          v28 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v38, v37) + 18896) + 136LL) + 16LL)
                          + 472LL);
      }
    }
  }
  RecalcHeadPtiListEntry = GetRecalcHeadPtiListEntry();
  for ( i = RecalcHeadPtiListEntry->Flink; i != RecalcHeadPtiListEntry; i = i->Flink )
  {
    RecalcPtiFromListEntry = GetRecalcPtiFromListEntry(i);
    if ( RecalcPtiFromListEntry )
    {
      v42 = (tagQ *)*((_QWORD *)RecalcPtiFromListEntry + 87);
      if ( v42 == *((tagQ **)RecalcPtiFromListEntry + 59) )
      {
        tagTHREADINFO::AssignAttachQueue(RecalcPtiFromListEntry, 0LL);
      }
      else if ( v42 )
      {
        tagQ::zzzAttachToQueue(v42, RecalcPtiFromListEntry, (struct tagQ *)v18, v21 == (const struct tagWND **)v42);
      }
    }
  }
  RecalculateQueueInfo();
  if ( v18 )
  {
    if ( !*(_DWORD *)(v18 + 416) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12183LL);
    v45 = *(struct tagQMSG **)(v18 + 24);
    --*(_DWORD *)(v18 + 416);
    *(_QWORD *)(v18 + 24) = 0LL;
    *(_QWORD *)(v18 + 32) = 0LL;
    *(_QWORD *)(v18 + 56) = 0LL;
    *(_DWORD *)(v18 + 40) = 0;
    RedistributeInput(v45, (struct tagQ *)v18, v11);
    if ( !tagQ::IsAnyThreadAttached((tagQ *)v18) )
    {
      v43 = 0LL;
LABEL_47:
      zzzDestroyQueue(v44, v43);
      goto LABEL_48;
    }
    v46 = *(_QWORD *)(v18 + 96);
    if ( v46 && v18 != *(_QWORD *)(v46 + 472) )
      zzzDestroyQueue(v44, v46);
    v43 = *(_QWORD *)(v18 + 104);
    if ( v43 && v18 != *(_QWORD *)(v43 + 472) )
    {
      v44 = v18;
      goto LABEL_47;
    }
  }
LABEL_48:
  v48 = *(_QWORD *)(W32GetUserSessionState(v44, v43) + 19144);
  if ( *((_QWORD *)v62 + 62) == v48 )
  {
    if ( *(const struct tagWND ***)(W32GetUserSessionState(v48, v47) + 18888) != v21 )
    {
      if ( (unsigned int)Feature_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( v21 )
          SetNewForegroundQueue2(v21, 0LL);
        else
          ResetForegroundQueue(0LL);
      }
      else
      {
        SetNewForegroundQueue(v21, v51);
      }
      *(_QWORD *)(W32GetUserSessionState(v53, v52) + 18896) = v28;
      if ( *(_QWORD *)(W32GetUserSessionState(v55, v54) + 18888) )
      {
        v50 = *(_QWORD *)(W32GetUserSessionState(v50, v49) + 18888);
        if ( *(_QWORD *)(v50 + 120) )
        {
          v50 = *(_QWORD *)(W32GetUserSessionState(v50, v49) + 18888);
          if ( *(_QWORD *)(v50 + 120) )
          {
            v50 = *(_QWORD *)(W32GetUserSessionState(v50, v49) + 18888);
            v56 = **(_QWORD **)(v50 + 120);
          }
          else
          {
            v56 = 0LL;
          }
          if ( v8 != v56 )
            zzzInputFocusReceivedWindowEvent(4LL);
        }
      }
    }
    UnpackAffectedThreadList(v50, v49);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v60);
    zzzEndDeferWinEventNotify();
    if ( !*(_QWORD *)(W32GetUserSessionState(v58, v57) + 18888) && v13 )
    {
      NextQueueWindow = _GetNextQueueWindow(
                          *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v62 + 62) + 8LL) + 24LL) + 112LL),
                          0LL,
                          0);
      if ( NextQueueWindow )
        PostEventMessageEx(
          *((struct tagTHREADINFO **)NextQueueWindow + 2),
          *(struct tagQ **)(*((_QWORD *)NextQueueWindow + 2) + 472LL),
          6u,
          0LL,
          0,
          0LL,
          *(_QWORD *)NextQueueWindow,
          0LL);
    }
    GenerateMouseMove(0LL);
  }
  else
  {
    UnpackAffectedThreadList(v48, v47);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v60);
    zzzEndDeferWinEventNotify();
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v60);
  }
}
