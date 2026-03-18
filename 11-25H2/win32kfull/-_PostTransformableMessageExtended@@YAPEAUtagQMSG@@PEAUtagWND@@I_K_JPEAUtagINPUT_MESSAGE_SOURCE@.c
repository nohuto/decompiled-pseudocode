/*
 * XREFs of ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140020958
 * Callers:
 *     _PostMessageExtended @ 0x1400208EC (_PostMessageExtended.c)
 *     _PostTransformableMessage @ 0x140020914 (_PostTransformableMessage.c)
 *     PostIAMShellHookMessageEx @ 0x1400237D0 (PostIAMShellHookMessageEx.c)
 *     _PostTransformableMessageIL @ 0x14012A580 (_PostTransformableMessageIL.c)
 *     NtUserPostMessage @ 0x1401421C0 (NtUserPostMessage.c)
 *     xxxMNLoop @ 0x14015A654 (xxxMNLoop.c)
 *     TrackMouseEvent @ 0x1401A5CD4 (TrackMouseEvent.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x14023B7E4 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     TryDetachShellFrame @ 0x14023FB5C (TryDetachShellFrame.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxDDETrackWindowDying @ 0x1402B2AA4 (xxxDDETrackWindowDying.c)
 *     xxxFreeDdeConv @ 0x1402B2CE4 (xxxFreeDdeConv.c)
 *     xxxSysCommand @ 0x1402B6EB4 (xxxSysCommand.c)
 *     ?xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z @ 0x1402CA6B4 (-xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?EnsureGreTrailsTimer@CursorApiRouter@@AEBAXXZ @ 0x1402DB7F4 (-EnsureGreTrailsTimer@CursorApiRouter@@AEBAXXZ.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14001BAD0 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     SetWakeBit @ 0x1400338D0 (SetWakeBit.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     HMValidateHandleWithDescriptor @ 0x14007AE48 (HMValidateHandleWithDescriptor.c)
 *     ??0?$ObjectLock@UtagObjLock@@U1@U1@@?$DomainExclusive@$$V@?$DomainShared@VDLT_THREADINFO@@VDLT_QUEUE@@VDLT_POST@@@@QEAA@AEAUtagObjLock@@00@Z @ 0x1401103E4 (--0-$ObjectLock@UtagObjLock@@U1@U1@@-$DomainExclusive@$$V@-$DomainShared@VDLT_THREADINFO@@VDLT_Q.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z @ 0x1401196C0 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x140119D60 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     xxxBroadcastMessage @ 0x1401293B0 (xxxBroadcastMessage.c)
 *     IsMiPPointerMessage @ 0x140138FC0 (IsMiPPointerMessage.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x140142CF0 (TransformMessageBetweenCoordinateSpaces.c)
 *     ??1?$ObjectLock@UtagObjLock@@U1@U1@@?$DomainExclusive@$$V@?$DomainShared@VDLT_THREADINFO@@VDLT_QUEUE@@VDLT_POST@@@@QEAA@XZ @ 0x14014AF28 (--1-$ObjectLock@UtagObjLock@@U1@U1@@-$DomainExclusive@$$V@-$DomainShared@VDLT_THREADINFO@@VDLT_Q.c)
 *     IsMiPEnabledForWindow @ 0x14015DEA0 (IsMiPEnabledForWindow.c)
 *     ?AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z @ 0x140169610 (-AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z.c)
 *     ProcessSuspendedPostMessage @ 0x14019D8D8 (ProcessSuspendedPostMessage.c)
 *     _PostThreadMessage @ 0x1401AAC30 (_PostThreadMessage.c)
 *     xxxDDETrackPostHook @ 0x140255D80 (xxxDDETrackPostHook.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Old_TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@PEAUtagHIDDATA@@_N@Z @ 0x1402745CC (-Old_TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@PEAUtagHIDDATA@@_N@Z.c)
 *     ?TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@0PEAUtagHIDDATA@@_N@Z @ 0x140274EA8 (-TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@0PEAUtagHIDDATA@@_N@Z.c)
 *     Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline @ 0x140275110 (Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline @ 0x1402771F4 (Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

struct tagQMSG *__fastcall _PostTransformableMessageExtended(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        struct tagINPUT_MESSAGE_SOURCE *a5,
        int a6)
{
  __int64 v6; // rbx
  struct tagINPUT_MESSAGE_SOURCE *v7; // r13
  unsigned int v9; // r10d
  int v11; // eax
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // r9d
  int v15; // r10d
  struct tagTHREADINFO *v16; // rax
  __int64 v17; // rcx
  struct tagTHREADINFO *v18; // r15
  __int64 v19; // r14
  __int64 CurrentProcessWin32Process; // rax
  __int64 v21; // rdx
  __int64 v22; // rdi
  unsigned int v23; // ecx
  UIPrivilegeIsolation *v24; // rcx
  unsigned int v26; // edi
  __int64 v27; // rdi
  __int64 v28; // r14
  struct tagTHREADINFO *v29; // rax
  bool v30; // r9
  int v31; // r15d
  struct tagQMSG *v32; // r14
  __int64 v33; // rax
  struct _KEVENT *v34; // rcx
  __int64 v35; // rax
  unsigned int v36; // [rsp+70h] [rbp-90h] BYREF
  __int64 v37; // [rsp+78h] [rbp-88h]
  unsigned __int64 v38; // [rsp+80h] [rbp-80h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v40; // [rsp+98h] [rbp-68h] BYREF
  _BYTE Base[112]; // [rsp+A0h] [rbp-60h] BYREF

  BugCheckParameter3[0] = -1LL;
  v6 = 0LL;
  v7 = a5;
  v36 = a2;
  v9 = a2;
  v38 = a3;
  v37 = a4;
  BugCheckParameter3[1] = 0LL;
  v40 = 0LL;
  if ( !a5 )
  {
    SetUnavailableInputSource(&v40);
    v9 = v36;
    v7 = (struct tagINPUT_MESSAGE_SOURCE *)&v40;
  }
  if ( v9 >= 0x400
    || (_bittest16(&MessageTable[v9], 9u) || v9 == 537 && (a3 & 0x8000) != 0 ? (v11 = 1) : (v11 = 0), !v11) )
  {
    if ( v9 != 536 || (a3 & 0x8000) == 0 )
    {
      if ( (unsigned int)IsMiPPointerMessage(v9, a3) )
      {
        if ( !a1 )
          goto LABEL_20;
        if ( !(unsigned int)IsMiPEnabledForWindow(a1) )
        {
          LODWORD(v38) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3737LL);
          goto LABEL_48;
        }
      }
      if ( a1 == (struct tagWND *)-1LL )
      {
        xxxBroadcastMessage(v13, v15, a3, v14, 2u, 0LL, 0);
LABEL_19:
        v6 = 1LL;
        goto LABEL_48;
      }
LABEL_20:
      v16 = PtiCurrent();
      v18 = v16;
      if ( !a1 )
      {
        if ( !(unsigned int)PostThreadMessage(v16, v36, a3, v37) )
          goto LABEL_92;
        goto LABEL_19;
      }
      v19 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL);
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17);
      v22 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
      {
        v21 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
        v22 = v21 & CurrentProcessWin32Process;
      }
      if ( v19 != v22 )
      {
        v23 = v36;
        if ( v36 > 0xD0 )
        {
          if ( v36 == 272 )
            goto LABEL_47;
          if ( v36 != 353 && v36 != 424 && v36 != 563 && v36 != 648 )
            goto LABEL_50;
        }
        else if ( v36 != 208 && v36 != 12 )
        {
          if ( v36 == 13 )
            goto LABEL_34;
          if ( v36 == 78 )
          {
LABEL_47:
            UserSetLastError(5);
            goto LABEL_48;
          }
          if ( v36 != 188 )
          {
            if ( v36 == 196 || v36 == 204 )
            {
LABEL_34:
              v21 = *(_QWORD *)(W32GetUserSessionState(v36, v21) + 19872);
              if ( *(_WORD *)(v21 + 870) == *(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 2LL)
                && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 28LL) & 0x20) != 0 )
              {
                UserSetLastError(5);
                goto LABEL_47;
              }
              goto LABEL_49;
            }
LABEL_50:
            if ( v23 - 992 <= 8 )
            {
              Win32HM_LockIntoThread<0>(v18, a1, BugCheckParameter3);
              v26 = xxxDDETrackPostHook(&v36, a1);
              if ( v26 != 2 )
              {
                Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(
                  BugCheckParameter3,
                  v21);
                return (struct tagQMSG *)v26;
              }
              v23 = v36;
            }
            v27 = *((_QWORD *)a1 + 2);
            if ( v23 - 256 <= 9 )
            {
              PostUpdateKeyStateEvent(*(_QWORD *)(v27 + 472));
LABEL_69:
              DomainShared<DLT_THREADINFO,DLT_QUEUE,DLT_POST>::DomainExclusive<>::ObjectLock<tagObjLock,tagObjLock,tagObjLock>::ObjectLock<tagObjLock,tagObjLock,tagObjLock>(Base);
              AdjustForCoalescing((struct tagMLIST *)(v27 + 848), *(HWND *)a1, v36);
              if ( (struct tagTHREADINFO *)v27 == PtiCurrent()
                || !tagPROCESSINFO::SyncAndTestFreeze(*(tagPROCESSINFO **)(v27 + 464))
                || (unsigned int)ProcessSuspendedPostMessage(v27, a1, v36, a3, v37) )
              {
                v31 = 0;
                v32 = (struct tagQMSG *)AllocQEntryEx(v27 + 848, 0LL, 1LL);
                if ( v32 )
                {
                  if ( a6 && (unsigned int)IsWindowDesktopComposed(a1) )
                    TransformMessageBetweenCoordinateSpaces(v36, (__int64)a1, 0LL);
                  StoreQMessage(
                    v32,
                    a1,
                    v36,
                    a3,
                    v37,
                    0,
                    0LL,
                    0,
                    0LL,
                    0,
                    v7,
                    *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL),
                    0LL,
                    0LL);
                  if ( v36 == 576 || v36 == 281 )
                  {
                    v33 = _HMObjectFromHandle(v37);
                    if ( v33 )
                      HMChangeOwnerThread(v33, v27);
                  }
                  SetWakeBit(v27, 264LL);
                  if ( v36 == 786 )
                  {
                    if ( (*(_DWORD *)(v27 + 1360) & 0x40000LL) != 0 )
                    {
                      v34 = *(struct _KEVENT **)(v27 + 1576);
                      if ( v34 )
                        KeSetEvent(v34, 1, 0);
                    }
                    SetWakeBit(v27, 128LL);
                  }
                  v31 = 1;
                }
                v35 = *(_QWORD *)(v27 + 472);
                if ( v27 == *(_QWORD *)(v35 + 72) )
                  *(_QWORD *)(v35 + 80) = v32;
                if ( !v31 )
                {
                  DomainShared<DLT_THREADINFO,DLT_QUEUE,DLT_POST>::DomainExclusive<>::ObjectLock<tagObjLock,tagObjLock,tagObjLock>::~ObjectLock<tagObjLock,tagObjLock,tagObjLock>(Base);
                  goto LABEL_92;
                }
                v6 = (__int64)v32;
              }
              DomainShared<DLT_THREADINFO,DLT_QUEUE,DLT_POST>::DomainExclusive<>::ObjectLock<tagObjLock,tagObjLock,tagObjLock>::~ObjectLock<tagObjLock,tagObjLock,tagObjLock>(Base);
LABEL_48:
              Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(
                BugCheckParameter3,
                v12);
              return (struct tagQMSG *)v6;
            }
            if ( v23 == 576 )
            {
              LOBYTE(v21) = 20;
            }
            else
            {
              if ( v23 != 281 )
              {
                if ( v23 == 255 )
                {
                  LOBYTE(v21) = 18;
                  v28 = HMValidateHandleNoSecure(v37, v21);
                  if ( (unsigned int)Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline() )
                  {
                    if ( v28 && (*(_DWORD *)(v28 + 48) & 1) != 0 )
                    {
                      v29 = PtiCurrent();
                      TrySmuggleHidData(v29, (struct tagTHREADINFO *)v27, (struct tagHIDDATA *)v28, v30);
                    }
                  }
                  else if ( v28 )
                  {
                    Old_TrySmuggleHidData((struct tagTHREADINFO *)v27, (struct tagHIDDATA *)v28, 1);
                  }
                }
                goto LABEL_69;
              }
              LOBYTE(v21) = 21;
            }
            if ( !HMValidateHandleWithDescriptor(v37, v21) )
              goto LABEL_92;
            goto LABEL_69;
          }
        }
        if ( !(unsigned int)Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline() )
        {
          if ( !UIPrivilegeIsolation::Enforced(v24)
            || (v21 = *(_QWORD *)(W32GetUserGdiSessionState() + 40), *(_QWORD *)v19 == v21) )
          {
            if ( *(_DWORD *)(v19 + 764) != *(_DWORD *)(v22 + 764) || *(_DWORD *)(v19 + 768) != *(_DWORD *)(v22 + 768) )
              goto LABEL_47;
          }
        }
      }
LABEL_49:
      v23 = v36;
      goto LABEL_50;
    }
  }
  UserSetLastError(1159);
LABEL_92:
  Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3, v12);
  return 0LL;
}
