/*
 * XREFs of EditionHandleAndPostKeyEvent @ 0x14024FA10
 * Callers:
 *     <none>
 * Callees:
 *     PostShellHookMessagesEx @ 0x1400216D0 (PostShellHookMessagesEx.c)
 *     PopAndFreeW32ThreadLock @ 0x14002C740 (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsProcessedByInputService @ 0x140067FFC (IsProcessedByInputService.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1400681AC (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     HasHidTable @ 0x14011CE00 (HasHidTable.c)
 *     PostInputMessage @ 0x14011FED8 (PostInputMessage.c)
 *     AdjustPwndPtiPqForDelegation @ 0x1401203DC (AdjustPwndPtiPqForDelegation.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14012A960 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     PtiKbdFromQ @ 0x14014543C (PtiKbdFromQ.c)
 *     ?GetAppcommandQueue@@YAPEAUtagQ@@XZ @ 0x14024F9A0 (-GetAppcommandQueue@@YAPEAUtagQ@@XZ.c)
 *     ?xxxNextWindow@@YAXPEAUtagQ@@K@Z @ 0x1402DCE18 (-xxxNextWindow@@YAXPEAUtagQ@@K@Z.c)
 */

__int64 __fastcall EditionHandleAndPostKeyEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int8 a5,
        char a6,
        unsigned __int16 a7,
        unsigned __int16 a8,
        unsigned __int16 a9,
        unsigned __int16 a10,
        struct tagINPUT_MESSAGE_SOURCE *a11,
        unsigned int a12,
        void *a13,
        unsigned __int64 a14,
        unsigned __int16 a15,
        struct _KEYBOARD_VIRTUAL_DEVICE_INFO *a16)
{
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct tagQ *v21; // rdi
  struct tagTHREADINFO *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct tagTHREADINFO **v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // r15d
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 UserSessionState; // rax
  __int64 KeyboardDelegationTargetQ; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  unsigned __int16 v39; // r12
  int v40; // r14d
  struct tagQ *AppcommandQueue; // rax
  unsigned __int16 MouseKeyFlags; // ax
  __int64 v43; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  _DWORD *v48; // rcx
  int v49; // [rsp+80h] [rbp-39h] BYREF
  int v50; // [rsp+84h] [rbp-35h] BYREF
  __int64 v51; // [rsp+88h] [rbp-31h] BYREF
  __int64 v52; // [rsp+90h] [rbp-29h] BYREF
  struct tagTHREADINFO **v53; // [rsp+98h] [rbp-21h] BYREF
  _QWORD v54[10]; // [rsp+A0h] [rbp-19h] BYREF
  int v55; // [rsp+100h] [rbp+47h]
  unsigned int v56; // [rsp+118h] [rbp+5Fh]

  v55 = a1;
  if ( a4
    || (*(_BYTE *)(W32GetUserSessionState(a1, a2) + 14340) & 0x10) == 0
    || (a5 != 9 || (a6 & 1) != 0) && (a5 != 27 || (a6 & 2) != 0) )
  {
    if ( !*(_QWORD *)(W32GetUserSessionState(a1, a2) + 18888) )
    {
      if ( !a4 && !*(_QWORD *)(W32GetUserSessionState(v25, v24) + 18888) )
      {
        v48 = *(_DWORD **)(W32GetUserSessionState(v46, v45) + 19872);
        if ( ((*v48 & 0x2000) != 0 || (**(_DWORD **)(W32GetUserSessionState(v48, v47) + 19872) & 0x4000) != 0)
          && (unsigned __int8)(a5 + 83) <= 6u )
        {
          PostShellHookMessagesEx((LastWokenThread *)0xC, (unsigned __int64)(unsigned __int16)(a5 - 165) << 16);
        }
      }
      return 0LL;
    }
    v26 = *(struct tagTHREADINFO ***)(W32GetUserSessionState(v25, v24) + 18888);
    v29 = a5;
    v56 = a5;
    v30 = *(_QWORD *)(W32GetUserSessionState(v28, v27) + 18888);
    v31 = *(_QWORD *)(v30 + 32);
    UserSessionState = W32GetUserSessionState(v30, v32);
    if ( (unsigned __int8)IsKeyboardDelegationEnabledForThread(*(_QWORD *)(*(_QWORD *)(UserSessionState + 18888) + 104LL)) )
    {
      KeyboardDelegationTargetQ = GetKeyboardDelegationTargetQ();
      if ( KeyboardDelegationTargetQ )
      {
        v31 = *(_QWORD *)(KeyboardDelegationTargetQ + 32);
        v26 = (struct tagTHREADINFO **)KeyboardDelegationTargetQ;
      }
    }
    v35 = PtiKbdFromQ((__int64)v26);
    if ( (unsigned int)HasHidTable(v35)
      && (v37 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ((__int64)v26) + 464) + 824LL) + 100LL),
          (v37 & 0x20) != 0) )
    {
      v38 = PtiKbdFromQ((__int64)v26);
      if ( !(unsigned int)HasHidTable(v38) )
        return 1LL;
      v37 = *(_QWORD *)(PtiKbdFromQ((__int64)v26) + 464);
      if ( (*(_DWORD *)(*(_QWORD *)(v37 + 824) + 100LL) & 0x400) == 0 || (unsigned __int8)(a5 + 90) > 0x11u )
        return 1LL;
    }
    else if ( a5 == 0xE7 && (a8 & 0x1000) != 0 )
    {
      v39 = 0;
      v29 = (a7 << 16) | a5;
      v56 = v29;
LABEL_21:
      v40 = ((a9 | v39) << 16) | 1;
      if ( v31 )
      {
        if ( *(_DWORD *)(v31 + 24) == a15 )
        {
          v37 = 65531LL;
          if ( ((a15 - 256) & 0xFFFB) == 0
            && *(_QWORD *)(v31 + 32) == v29
            && !IsProcessedByInputService(v31)
            && *(_WORD *)(v31 + 42) == HIWORD(v40) )
          {
            if ( (unsigned int)GetKeyboardInputRoutingPolicy() == 1 )
              CKeyboardProcessor::ForwardInputToISM(v55 != 0, v39, a8, a10, a13, a12, 1, a14, a16);
            *(_QWORD *)(v31 + 40) = (HIWORD(v40) << 16) | (unsigned __int16)(*(_WORD *)(v31 + 40) + 1);
            WakeSomeone((struct tagQ *)v26, 0LL, a15, (struct tagQMSG *)v31);
            return 0LL;
          }
        }
      }
      if ( (unsigned __int8)(a5 + 90) > 0x11u || a4 || !v26 )
        goto LABEL_43;
      if ( (unsigned __int8)(a5 + 83) <= 2u )
      {
        AppcommandQueue = GetAppcommandQueue(v37, v36);
        if ( AppcommandQueue )
        {
          MouseKeyFlags = GetMouseKeyFlags(AppcommandQueue);
          PostShellHookMessagesEx(
            (LastWokenThread *)0xC,
            ((unsigned __int64)(unsigned __int16)(a5 - 165) << 16) | MouseKeyFlags);
        }
      }
      else
      {
        PostEventMessageEx(v26[13], (struct tagQ *)v26, 0xFu, 0LL, 0, 0LL, a5, a11);
      }
      v43 = PtiKbdFromQ((__int64)v26);
      if ( !(unsigned int)HasHidTable(v43)
        || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ((__int64)v26) + 464) + 824LL) + 100LL) & 0x20) == 0 )
      {
LABEL_43:
        if ( (unsigned int)GetKeyboardInputRoutingPolicy() == 1 )
          CKeyboardProcessor::ForwardInputToISM(v55 != 0, v39, a8, a10, a13, a12, 1, a14, a16);
        PostPendingMouseMove(v26);
        v52 = 0LL;
        v51 = 0LL;
        v50 = 0;
        v49 = 0;
        v53 = v26;
        if ( (unsigned int)AdjustPwndPtiPqForDelegation((__int64 *)&v53, &v52, &v51, a15, a11, &v50, &v49) )
          PostInputMessage((struct tagQ *)v26, 0LL, a15, v56, v40, a12, 0LL, a14, 0, a11, a13, 0LL, v50, v49, v51);
        return 0LL;
      }
      return 1LL;
    }
    v39 = a7;
    goto LABEL_21;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18888) )
  {
    v21 = *(struct tagQ **)(W32GetUserSessionState(v18, v17) + 18888);
  }
  else
  {
    v20 = *(_QWORD *)(W32GetUserSessionState(v18, v17) + 18648);
    v21 = *(struct tagQ **)(v20 + 472);
  }
  ++*((_DWORD *)v21 + 104);
  v22 = PtiCurrent(v20, v19);
  v54[0] = *((_QWORD *)v22 + 48);
  *((_QWORD *)v22 + 48) = v54;
  v54[2] = UnlockQueue;
  v54[1] = v21;
  xxxNextWindow(v21, a5);
  PopAndFreeW32ThreadLock((__int64)v54, v23);
  return 0LL;
}
