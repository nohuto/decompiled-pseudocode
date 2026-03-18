/*
 * XREFs of ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140021BA8
 * Callers:
 *     _PostMessageExtended @ 0x140020024 (_PostMessageExtended.c)
 *     _PostTransformableMessage @ 0x140020870 (_PostTransformableMessage.c)
 *     _PostTransformableMessageIL @ 0x1400218F0 (_PostTransformableMessageIL.c)
 *     NtUserPostMessage @ 0x140022150 (NtUserPostMessage.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14000A21C (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline @ 0x14003ACCC (Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     IsMiPEnabledForWindow @ 0x140054BA0 (IsMiPEnabledForWindow.c)
 *     SetWakeBit @ 0x140055960 (SetWakeBit.c)
 *     ??0?$ObjectLock@UtagObjLock@@U1@U1@@?$DomainExclusive@$$V@?$DomainShared@VDLT_THREADINFO@@VDLT_QUEUE@@VDLT_POST@@@@QEAA@AEAUtagObjLock@@00@Z @ 0x140056074 (--0-$ObjectLock@UtagObjLock@@U1@U1@@-$DomainExclusive@$$V@-$DomainShared@VDLT_THREADINFO@@VDLT_Q.c)
 *     xxxBroadcastMessage @ 0x1400927F4 (xxxBroadcastMessage.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z @ 0x140099110 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x140099480 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     IsMiPPointerMessage @ 0x1401362D0 (IsMiPPointerMessage.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1401550A0 (TransformMessageBetweenCoordinateSpaces.c)
 *     ??1?$ObjectLock@UtagObjLock@@U1@U1@@?$DomainExclusive@$$V@?$DomainShared@VDLT_THREADINFO@@VDLT_QUEUE@@VDLT_POST@@@@QEAA@XZ @ 0x140159E40 (--1-$ObjectLock@UtagObjLock@@U1@U1@@-$DomainExclusive@$$V@-$DomainShared@VDLT_THREADINFO@@VDLT_Q.c)
 *     ?AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z @ 0x14019C53C (-AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z.c)
 *     _PostThreadMessage @ 0x1401D31A0 (_PostThreadMessage.c)
 *     ?TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@0PEAUtagHIDDATA@@_N@Z @ 0x140262518 (-TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@0PEAUtagHIDDATA@@_N@Z.c)
 *     xxxDDETrackPostHook @ 0x14026E294 (xxxDDETrackPostHook.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Old_TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@PEAUtagHIDDATA@@_N@Z @ 0x14029723C (-Old_TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@PEAUtagHIDDATA@@_N@Z.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x14029D1AC (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 *     ProcessSuspendedPostMessage @ 0x1402A7248 (ProcessSuspendedPostMessage.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

struct tagQMSG *__fastcall _PostTransformableMessageExtended(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        struct tagINPUT_MESSAGE_SOURCE *a5,
        int a6)
{
  struct tagINPUT_MESSAGE_SOURCE *v6; // r13
  __int64 v7; // rbx
  unsigned int v9; // r10d
  int v11; // ecx
  int v12; // r9d
  int v13; // r10d
  struct tagTHREADINFO *v14; // rax
  __int64 v15; // rcx
  struct tagTHREADINFO *v16; // r15
  __int64 v17; // r14
  __int64 CurrentProcessWin32Process; // rax
  __int64 v19; // rdx
  __int64 v20; // rdi
  unsigned int v21; // ecx
  UIPrivilegeIsolation *v22; // rcx
  unsigned int v24; // edi
  __int64 v25; // rdi
  __int64 v26; // r14
  int IsEnabledDeviceUsageNoInline; // eax
  struct tagTHREADINFO *v28; // rax
  bool v29; // r9
  int v30; // r15d
  struct tagQMSG *v31; // r14
  __int64 v32; // rax
  struct _KEVENT *v33; // rcx
  __int64 v34; // rax
  unsigned int v35; // [rsp+70h] [rbp-90h] BYREF
  __int64 v36; // [rsp+78h] [rbp-88h]
  unsigned __int64 v37; // [rsp+80h] [rbp-80h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v39; // [rsp+98h] [rbp-68h] BYREF
  _BYTE Base[112]; // [rsp+A0h] [rbp-60h] BYREF

  v6 = a5;
  v7 = 0LL;
  v35 = a2;
  v37 = a3;
  v9 = a2;
  v36 = a4;
  BugCheckParameter3[1] = 0LL;
  BugCheckParameter3[0] = -1LL;
  v39 = 0LL;
  if ( !a5 )
  {
    SetUnavailableInputSource(&v39);
    v9 = v35;
    v6 = (struct tagINPUT_MESSAGE_SOURCE *)&v39;
  }
  if ( (v9 >= 0x400 || !_bittest16(&MessageTable[v9], 9u) && (v9 != 537 || (a3 & 0x8000) == 0))
    && (v9 != 536 || (a3 & 0x8000) == 0) )
  {
    if ( (unsigned int)IsMiPPointerMessage(v9, a3) )
    {
      if ( !a1 )
        goto LABEL_17;
      if ( !(unsigned int)IsMiPEnabledForWindow(a1) )
      {
        LODWORD(v37) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3734LL);
        goto LABEL_45;
      }
    }
    if ( a1 == (struct tagWND *)-1LL )
    {
      xxxBroadcastMessage(v11, v13, a3, v12, 2u, 0LL, 0);
LABEL_16:
      v7 = 1LL;
      goto LABEL_45;
    }
LABEL_17:
    v14 = PtiCurrent();
    v16 = v14;
    if ( !a1 )
    {
      if ( !(unsigned int)PostThreadMessage(v14, v35, a3, v36) )
        goto LABEL_88;
      goto LABEL_16;
    }
    v17 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15);
    v20 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v19 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v20 = v19 & CurrentProcessWin32Process;
    }
    if ( v17 != v20 )
    {
      v21 = v35;
      if ( v35 > 0xD0 )
      {
        if ( v35 == 272 )
          goto LABEL_44;
        if ( v35 != 353 && v35 != 424 && v35 != 563 && v35 != 648 )
          goto LABEL_47;
      }
      else if ( v35 != 208 && v35 != 12 )
      {
        if ( v35 == 13 )
          goto LABEL_31;
        if ( v35 == 78 )
        {
LABEL_44:
          UserSetLastError(5LL);
          goto LABEL_45;
        }
        if ( v35 != 188 )
        {
          if ( v35 == 196 || v35 == 204 )
          {
LABEL_31:
            v19 = *(_QWORD *)(W32GetUserSessionState(v35, v19) + 19904);
            if ( *(_WORD *)(v19 + 870) == *(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 2LL)
              && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 28LL) & 0x20) != 0 )
            {
              UserSetLastError(5LL);
              goto LABEL_44;
            }
            goto LABEL_46;
          }
LABEL_47:
          if ( v21 - 992 <= 8 )
          {
            Win32HM_LockIntoThread<0>(v16, a1, BugCheckParameter3);
            v24 = xxxDDETrackPostHook(&v35, a1);
            if ( v24 != 2 )
            {
              Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
              return (struct tagQMSG *)v24;
            }
            v21 = v35;
          }
          v25 = *((_QWORD *)a1 + 2);
          if ( v21 - 256 <= 9 )
          {
            PostUpdateKeyStateEvent(*(_QWORD *)(v25 + 464));
LABEL_65:
            DomainShared<DLT_THREADINFO,DLT_QUEUE,DLT_POST>::DomainExclusive<>::ObjectLock<tagObjLock,tagObjLock,tagObjLock>::ObjectLock<tagObjLock,tagObjLock,tagObjLock>(Base);
            AdjustForCoalescing((struct tagMLIST *)(v25 + 840), *(HWND *)a1, v35);
            if ( (struct tagTHREADINFO *)v25 == PtiCurrent()
              || !tagPROCESSINFO::SyncAndTestFreeze(*(tagPROCESSINFO **)(v25 + 456))
              || (unsigned int)ProcessSuspendedPostMessage(v25, a1, v35, a3, v36) )
            {
              v30 = 0;
              v31 = (struct tagQMSG *)AllocQEntryEx(v25 + 840, 0LL, 1LL);
              if ( v31 )
              {
                if ( a6 && (unsigned int)IsWindowDesktopComposed(a1) )
                  TransformMessageBetweenCoordinateSpaces(v35, (__int64)a1, 0LL);
                StoreQMessage(
                  v31,
                  a1,
                  v35,
                  a3,
                  v36,
                  0,
                  0LL,
                  0,
                  0LL,
                  0,
                  v6,
                  *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL),
                  0LL,
                  0LL);
                if ( v35 == 576 || v35 == 281 )
                {
                  v32 = _HMObjectFromHandle(v36);
                  if ( v32 )
                    HMChangeOwnerThread(v32, v25);
                }
                SetWakeBit(v25, 264LL);
                if ( v35 == 786 )
                {
                  if ( (*(_DWORD *)(v25 + 1360) & 0x40000LL) != 0 )
                  {
                    v33 = *(struct _KEVENT **)(v25 + 1576);
                    if ( v33 )
                      KeSetEvent(v33, 1, 0);
                  }
                  SetWakeBit(v25, 128LL);
                }
                v30 = 1;
              }
              v34 = *(_QWORD *)(v25 + 464);
              if ( v25 == *(_QWORD *)(v34 + 72) )
                *(_QWORD *)(v34 + 80) = v31;
              if ( !v30 )
              {
                DomainShared<DLT_THREADINFO,DLT_QUEUE,DLT_POST>::DomainExclusive<>::ObjectLock<tagObjLock,tagObjLock,tagObjLock>::~ObjectLock<tagObjLock,tagObjLock,tagObjLock>(Base);
                goto LABEL_88;
              }
              v7 = (__int64)v31;
            }
            DomainShared<DLT_THREADINFO,DLT_QUEUE,DLT_POST>::DomainExclusive<>::ObjectLock<tagObjLock,tagObjLock,tagObjLock>::~ObjectLock<tagObjLock,tagObjLock,tagObjLock>(Base);
LABEL_45:
            Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
            return (struct tagQMSG *)v7;
          }
          if ( v21 == 576 )
          {
            LOBYTE(v19) = 20;
          }
          else
          {
            if ( v21 != 281 )
            {
              if ( v21 == 255 )
              {
                LOBYTE(v19) = 18;
                v26 = HMValidateHandleNoSecure(v36, v19);
                IsEnabledDeviceUsageNoInline = Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline();
                if ( v26 )
                {
                  if ( IsEnabledDeviceUsageNoInline )
                  {
                    if ( (*(_DWORD *)(v26 + 48) & 1) != 0 )
                    {
                      v28 = PtiCurrent();
                      TrySmuggleHidData(v28, (struct tagTHREADINFO *)v25, (struct tagHIDDATA *)v26, v29);
                    }
                  }
                  else
                  {
                    Old_TrySmuggleHidData((struct tagTHREADINFO *)v25, (struct tagHIDDATA *)v26, 1);
                  }
                }
              }
              goto LABEL_65;
            }
            LOBYTE(v19) = 21;
          }
          if ( !HMValidateHandleWithDescriptor(v36, v19) )
            goto LABEL_88;
          goto LABEL_65;
        }
      }
      if ( !(unsigned int)Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( !UIPrivilegeIsolation::Enforced(v22)
          || (v19 = *(_QWORD *)(W32GetUserGdiSessionState() + 40), *(_QWORD *)v17 == v19) )
        {
          if ( *(_DWORD *)(v17 + 764) != *(_DWORD *)(v20 + 764) || *(_DWORD *)(v17 + 768) != *(_DWORD *)(v20 + 768) )
            goto LABEL_44;
        }
      }
    }
LABEL_46:
    v21 = v35;
    goto LABEL_47;
  }
  UserSetLastError(1159LL);
LABEL_88:
  Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
  return 0LL;
}
