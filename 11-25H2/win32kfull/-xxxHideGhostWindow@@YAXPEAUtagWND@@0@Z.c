/*
 * XREFs of ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x140180AB8
 * Callers:
 *     ?xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1401809E0 (-xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxHandleDestroyGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1401813E0 (-xxxHandleDestroyGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z @ 0x14019CC50 (-xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z.c)
 *     ?xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z @ 0x1402AEE5C (-xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1400216D0 (PostShellHookMessagesEx.c)
 *     ?PostIAMShellHookMessage@@YAXI_J@Z @ 0x140023794 (-PostIAMShellHookMessage@@YAXI_J@Z.c)
 *     ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x1400268A8 (-xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x14002EA08 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x14002EA3C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     xxxRedrawWindow @ 0x140030830 (xxxRedrawWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x140044D78 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     xxxSetWindowPos @ 0x14004CAF4 (xxxSetWindowPos.c)
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14005A4E4 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     IsWindowBeingDestroyed @ 0x14005C540 (IsWindowBeingDestroyed.c)
 *     PostInputMessage @ 0x14011FED8 (PostInputMessage.c)
 *     AdjustPwndPtiPqForDelegation @ 0x1401203DC (AdjustPwndPtiPqForDelegation.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14012A960 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     INPUTDEST_FROM_PWND @ 0x140154898 (INPUTDEST_FROM_PWND.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1401701A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@W4LocalActivationOptions@@@Z @ 0x1401BB244 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     DwmAsyncNotifyAnimationChange @ 0x140224764 (DwmAsyncNotifyAnimationChange.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x140225D60 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     ?_CopyWindowCheckpoint@@YA_NPEAUtagWND@@0@Z @ 0x14022FE74 (-_CopyWindowCheckpoint@@YA_NPEAUtagWND@@0@Z.c)
 *     ?Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z @ 0x14026B5C0 (-Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z.c)
 *     ?SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z @ 0x1402DCC18 (-SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall xxxHideGhostWindow(LARGE_INTEGER *a1, struct tagWND *a2)
{
  BOOL v2; // r12d
  int v5; // r14d
  char v6; // cl
  __int128 *v7; // rax
  char v8; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  LARGE_INTEGER v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  LARGE_INTEGER v20; // rdx
  struct tagWND *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  void *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // r13d
  struct tagQ **QuadPart; // rbx
  __int64 v29; // rax
  __int64 v30; // r8
  unsigned int v31; // ebx
  __int64 v32; // rdx
  CHECKPOINT *v33; // rax
  __int64 v34; // rdx
  int v35; // ecx
  __int64 v36; // rdx
  __int64 v37; // rcx
  LARGE_INTEGER v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // r14
  __int128 *v44; // rax
  __int64 v45; // rax
  unsigned __int16 v46; // bx
  void *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  int v50; // [rsp+80h] [rbp-80h] BYREF
  char v51; // [rsp+84h] [rbp-7Ch]
  int v52; // [rsp+88h] [rbp-78h] BYREF
  int v53; // [rsp+8Ch] [rbp-74h]
  struct tagWND *v54; // [rsp+90h] [rbp-70h] BYREF
  __int64 v55; // [rsp+98h] [rbp-68h] BYREF
  struct tagQ *v56; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v57; // [rsp+A8h] [rbp-58h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v59; // [rsp+C0h] [rbp-40h]
  _DWORD v60[28]; // [rsp+C8h] [rbp-38h] BYREF
  struct tagRECT v61; // [rsp+138h] [rbp+38h] BYREF
  __int128 v62; // [rsp+150h] [rbp+50h] BYREF
  __int128 v63; // [rsp+160h] [rbp+60h]
  __int128 v64; // [rsp+170h] [rbp+70h]
  __int128 v65; // [rsp+180h] [rbp+80h]
  __int128 v66; // [rsp+190h] [rbp+90h]
  __int128 v67; // [rsp+1A0h] [rbp+A0h]
  __int128 v68; // [rsp+1B0h] [rbp+B0h]

  v55 = (__int64)a2;
  v50 = 0;
  v2 = 0;
  v53 = 0;
  v61 = 0LL;
  v57 = 0LL;
  v54 = a2;
  v5 = 49185;
  v52 = _InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent((__int64)a1, (__int64)a2) + 132, 0, 0) & 1;
  v6 = *(_BYTE *)(a1[5].QuadPart + 31);
  if ( (v6 & 0x20) != 0 )
    v50 = 1;
  else
    v2 = (v6 & 1) != 0;
  v7 = (__int128 *)INPUTDEST_FROM_PWND(v60, (__int64)a1);
  v62 = *v7;
  v63 = v7[1];
  v64 = v7[2];
  v65 = v7[3];
  v66 = v7[4];
  v67 = v7[5];
  v68 = v7[6];
  v8 = IsCapturedBySystem(&v62);
  v11 = *((_QWORD *)a2 + 2);
  v12 = a1[2];
  v51 = v8;
  if ( v11 && v12.QuadPart )
  {
    v14 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 18888);
    v15 = *(_QWORD *)(v12.QuadPart + 472);
    if ( v15 == v14 && *(LARGE_INTEGER **)(v15 + 128) == a1
      || *(_QWORD *)(W32GetUserSessionState(v14, v13) + 18888)
      && (v19 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 18888), *(_QWORD *)(v19 + 128))
      && *(LARGE_INTEGER **)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v19, v18) + 18888) + 128LL) + 120LL) == a1 )
    {
      tagTHREADINFO::SetForegroundActivate(v11, 8LL);
    }
    else
    {
      v5 = 49201;
    }
  }
  v20 = a1[5];
  v21 = v54;
  v61 = *(struct tagRECT *)(v20.QuadPart + 88);
  if ( (*(_DWORD *)(*((_QWORD *)v54 + 5) + 288LL) & 0xF) != 2 )
  {
    v56 = (struct tagQ *)ValidateHmonitor(*(_QWORD *)(v20.QuadPart + 256));
    PhysicalToLogicalDPIRect(&v61, &v61, *(unsigned int *)(*((_QWORD *)v54 + 5) + 288LL), &v56);
  }
  if ( (unsigned int)IsWindowDesktopComposed(v54) )
  {
    v53 = IsWindowDesktopComposed(v54);
    if ( v53 )
    {
      v24 = (void *)ReferenceDwmApiPort(v23, v22);
      DwmAsyncNotifyAnimationChange(v24);
    }
  }
  v27 = 3;
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)a1) )
  {
    QuadPart = (struct tagQ **)a1[2].QuadPart;
    if ( QuadPart )
    {
      W32GetUserSessionState(v26, v25);
      xxxWindowEvent(0x8003u, (struct tagWND *)a1, 0, 0, 3);
      PostEventMessageEx((struct tagTHREADINFO *)QuadPart, QuadPart[59], 8u, 0LL, 0, *a1, 0LL, 0LL);
    }
  }
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v54) && IsTopLevelWindow((__int64)v54) )
  {
    v29 = *((_QWORD *)v54 + 5);
    v30 = (unsigned int)((v52 << 17) + 17);
    v31 = (v52 << 17) + 1;
    if ( v50 )
    {
      if ( (*(_BYTE *)(v29 + 31) & 0x20) == 0 )
      {
        v30 = v31;
        v32 = 7LL;
LABEL_26:
        xxxMinMaximize((__int64)v54, v32, v30);
      }
    }
    else
    {
      if ( !v2 )
      {
        if ( (*(_BYTE *)(v29 + 31) & 0x21) == 0 )
        {
LABEL_36:
          v34 = *((_QWORD *)v54 + 5);
          v35 = v5 | 0x40;
          if ( (*(_BYTE *)(v34 + 25) & 8) == 0 )
            v35 = v5;
          v5 = v35;
          if ( v61.left == *(_DWORD *)(v34 + 88) && v61.top == *(_DWORD *)(v34 + 92) )
            v5 = v35 | 2;
          goto LABEL_41;
        }
        v33 = CHECKPOINT::Restore(v54, &v61);
        if ( v33 )
          CHECKPOINT::SetNormalRect(v33, v54, &v61, 0);
        xxxMinMaximize((__int64)v54, 9LL, v31);
LABEL_35:
        v5 |= 2u;
        goto LABEL_36;
      }
      if ( (*(_BYTE *)(v29 + 31) & 1) == 0 )
      {
        v32 = 3LL;
        goto LABEL_26;
      }
    }
    _CopyWindowCheckpoint((struct tagWND *)a1, v54);
    goto LABEL_35;
  }
LABEL_41:
  if ( v52 || !(unsigned int)IsWindowBeingDestroyed((__int64)v54) && IsTopLevelWindow((__int64)v54) && (v5 & 0x40) != 0 )
    SetVisible((__int64)a1, 0);
  else
    xxxShowWindowEx((const struct tagWND *)a1, 0LL, 0);
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v54) )
  {
    if ( !IsTopLevelWindow((__int64)v54) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)v54 + 5) + 25LL) & 8) != 0 )
      {
        SetVisible((__int64)v54, 0x11u);
        if ( !*(_DWORD *)(W32GetUserSessionState(v49, v48) + 70600) )
          v27 = 1;
        xxxWindowEvent(0x8002u, v54, 0, 0, v27);
        xxxRedrawWindow(v54, 0LL, 0LL, 1157);
      }
      goto LABEL_75;
    }
    v38 = a1[5];
    BugCheckParameter3[0] = -1LL;
    BugCheckParameter3[1] = 0LL;
    v50 = 0;
    if ( (*(_BYTE *)(v38.QuadPart + 20) & 0x20) != 0 )
    {
      SetOrClrWF(0, (struct tagWND *)a1, 0x420u, 1);
      SetOrClrWF(1, v54, 0x420u, 1);
      v39 = 1LL;
LABEL_58:
      if ( (v5 & 0x40) != 0 )
      {
        SetVisible((__int64)v54, 1u);
        if ( !*(_DWORD *)(W32GetUserSessionState(v41, v40) + 70600) )
          v27 = 1;
        xxxWindowEvent(0x8002u, v54, 0, 0, v27);
      }
      xxxSetWindowPos(v54, v39, (unsigned int)v61.left, (unsigned int)v61.top, 0, 0, v5);
      if ( v50 )
        Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3, v42);
      if ( (v5 & 0x40) != 0 )
        xxxRedrawWindow(v54, 0LL, 0LL, 1157);
      if ( (v5 & 0x10) == 0 && !v52 )
        xxxActivateWindowWithOptions(v54, 0LL, 0LL, 1LL, 0);
      if ( v51 )
      {
        v43 = *(_QWORD *)(v55 + 16);
        v55 = v43;
        if ( v43 )
        {
          v44 = (__int128 *)INPUTDEST_FROM_PWND(v60, (__int64)v54);
          v62 = *v44;
          v63 = v44[1];
          v64 = v44[2];
          v65 = v44[3];
          v66 = v44[4];
          v67 = v44[5];
          v68 = v44[6];
          ForceCapture(0LL, &v62);
          SetSystemInputSource(&v57);
          v45 = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(*((_QWORD *)v54 + 5) + 288LL));
          v52 = 0;
          v46 = v45;
          v59 = v45;
          v56 = *(struct tagQ **)(v43 + 472);
          v50 = 0;
          if ( (unsigned int)AdjustPwndPtiPqForDelegation(
                               (__int64 *)&v56,
                               (__int64 *)&v54,
                               &v55,
                               0x201u,
                               &v57,
                               &v52,
                               &v50) )
          {
            v21 = v54;
            PostInputMessage(
              v56,
              (LARGE_INTEGER *)v54,
              0x201u,
              0LL,
              v46 | (WORD2(v59) << 16),
              0,
              0LL,
              0LL,
              0,
              (struct tagINPUT_MESSAGE_SOURCE *)&v57,
              0LL,
              0LL,
              v52,
              v50,
              v55);
          }
          else
          {
            v21 = v54;
          }
        }
      }
      Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3, v42);
LABEL_75:
      if ( v53 )
      {
        v47 = (void *)ReferenceDwmApiPort(v37, v36);
        DwmAsyncNotifyAnimationChange(v47);
      }
      xxxNotifyShellOfWindowSwap((struct tagWND *)a1, v21);
      return;
    }
    v39 = a1[12].QuadPart;
    if ( v39 )
    {
      if ( (struct tagWND *)v39 == v54 )
      {
        v5 |= 4u;
      }
      else if ( (*(_BYTE *)(*(_QWORD *)(v39 + 40) + 24LL) & 8) == 0
             || (*(_BYTE *)(*((_QWORD *)v54 + 5) + 24LL) & 8) != 0 )
      {
        Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)BugCheckParameter3, a1[12].QuadPart);
        v50 = 1;
        goto LABEL_58;
      }
    }
    v39 = 0LL;
    goto LABEL_58;
  }
  PostShellHookMessagesEx((LastWokenThread *)2, a1->QuadPart);
  PostIAMShellHookMessage(0x12u, a1->QuadPart);
  if ( (*(_BYTE *)(*((_QWORD *)v54 + 5) + 25LL) & 8) != 0 )
    PostIAMShellHookMessage(0x12u, *(_QWORD *)v54);
}
