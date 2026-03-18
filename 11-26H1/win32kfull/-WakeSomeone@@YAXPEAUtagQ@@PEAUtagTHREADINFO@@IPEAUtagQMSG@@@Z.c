/*
 * XREFs of ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1400976DC
 * Callers:
 *     PostInputMessage @ 0x1400904E8 (PostInputMessage.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x140094B10 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     EditionWakeSomeone @ 0x140097690 (EditionWakeSomeone.c)
 *     EditionWakeThreadForInput @ 0x1400976B0 (EditionWakeThreadForInput.c)
 *     ?xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x14014ABAC (-xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     ?_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1401E94B4 (-_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     EditionHandleAndPostKeyEvent @ 0x14027AA50 (EditionHandleAndPostKeyEvent.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     EditionUpdateRawMouseMode @ 0x1400548C0 (EditionUpdateRawMouseMode.c)
 *     IsProcessedByInputService @ 0x140097F80 (IsProcessedByInputService.c)
 *     PtiKbdFromQ @ 0x14009809C (PtiKbdFromQ.c)
 *     PtiMouseFromQ @ 0x1400980BC (PtiMouseFromQ.c)
 *     ?ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z @ 0x1401AEF90 (-ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CancelForegroundActivate@CForegroundLaunch@@QEAAXXZ @ 0x14028F1B4 (-CancelForegroundActivate@CForegroundLaunch@@QEAAXXZ.c)
 */

void __fastcall WakeSomeone(struct tagQ *a1, struct tagTHREADINFO *a2, unsigned int a3, struct tagQMSG *a4)
{
  __int64 v5; // rdx
  struct tagQ *v8; // rbx
  unsigned int v9; // ebp
  int v10; // r14d
  __int64 v11; // rdi
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  unsigned int v15; // ebx
  signed __int32 v16; // r8d
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r12
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  struct tagTHREADINFO *v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // r13
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 *v33; // r12
  struct tagTHREADINFO *v34; // rax
  __int64 v35; // rax
  __int64 v36; // r14
  __int64 v37; // r15
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 *v48; // r12
  struct tagTHREADINFO *v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 UserSessionState; // rax
  __int64 v53; // rdi
  int v54; // eax

  v5 = 0LL;
  v8 = a1;
  v9 = 0;
  v10 = 0;
  if ( a3 <= 0x208 )
  {
    if ( a3 == 520 )
      goto LABEL_118;
    if ( a3 > 0x11B )
    {
      switch ( a3 )
      {
        case 0x200u:
          if ( !a2 )
          {
            v11 = *((_QWORD *)a1 + 14);
            if ( v11 )
              a2 = *(struct tagTHREADINFO **)(v11 + 16);
            else
              a2 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 12);
          }
          if ( !a4
            || (v12 = IsGenuineMouseInput((char *)a4 + 124), v5 = 0LL, !v12)
            || *((_QWORD *)a2 + 80)
            || (*(_BYTE *)(*((_QWORD *)a2 + 57) + 808LL) & 4) == 0 && (*((_DWORD *)a2 + 340) & 0x6000000) == 0
            || (v13 = *((_DWORD *)a4 + 25), (v13 & 0x20) != 0)
            || (v14 = 1, (v13 & 0x8000000) != 0) )
          {
            v14 = 0;
          }
          v15 = (v14 << 12) + 2;
          goto LABEL_16;
        case 0x201u:
          goto LABEL_115;
        case 0x202u:
          goto LABEL_118;
        case 0x203u:
        case 0x204u:
          goto LABEL_115;
        case 0x205u:
LABEL_118:
          v53 = *((_QWORD *)v8 + 14);
          if ( v53 && a3 - 512 <= 0xE )
            a2 = *(struct tagTHREADINFO **)(v53 + 16);
          else
            a2 = (struct tagTHREADINFO *)*((_QWORD *)v8 + 12);
          v15 = (unsigned int)ShouldAddPointerWakeFlag(a2, a4) != 0 ? 4100 : 4;
          goto LABEL_16;
      }
      if ( a3 - 518 >= 2 )
        goto LABEL_117;
LABEL_115:
      if ( a4 )
        v9 = (~*((_DWORD *)a4 + 25) & 0x20000u) >> 17;
      else
        v9 = 1;
      goto LABEL_117;
    }
    if ( a3 != 283 )
    {
      if ( a3 != 254 && a3 != 255 )
      {
        switch ( a3 )
        {
          case 0x100u:
            goto LABEL_71;
          case 0x101u:
            goto LABEL_76;
          case 0x102u:
            break;
          case 0x104u:
LABEL_71:
            if ( a4 )
            {
              if ( *((_QWORD *)a4 + 4) != 16LL && (unsigned __int64)(*((_QWORD *)a4 + 4) - 17LL) >= 2
                || (a1 = (struct tagQ *)(2 * (*((_BYTE *)a4 + 32) & 3u)),
                    v5 = (unsigned int)(1 << (2 * (*((_BYTE *)a4 + 32) & 3))),
                    ((unsigned __int8)v5 & *((_BYTE *)v8 + ((unsigned __int64)*((unsigned __int8 *)a4 + 32) >> 2) + 280)) == 0) )
              {
                v9 = ((*((_DWORD *)a4 + 25) >> 17) & 1) == 0;
              }
            }
            else
            {
              v9 = 1;
            }
            break;
          case 0x105u:
            goto LABEL_76;
          case 0x106u:
            break;
          default:
LABEL_117:
            UserSessionState = W32GetUserSessionState(a1, 0LL);
            CForegroundLaunch::CancelForegroundActivate(*(CForegroundLaunch **)(UserSessionState + 18912));
            goto LABEL_118;
        }
        v35 = W32GetUserSessionState(a1, v5);
        CForegroundLaunch::CancelForegroundActivate(*(CForegroundLaunch **)(v35 + 18912));
        goto LABEL_76;
      }
LABEL_42:
      if ( a3 == 255 )
      {
        v25 = *((_QWORD *)a4 + 5);
        v26 = 0LL;
        PsGetCurrentThreadWin32Thread(a1);
        a1 = *(struct tagQ **)(W32GetUserSessionState(v28, v27) + 19904);
        if ( (unsigned __int64)(unsigned __int16)v25 < *((_QWORD *)a1 + 1) )
        {
          v29 = W32GetUserSessionState(a1, v5);
          v32 = *(_DWORD *)(W32GetUserSessionState(v31, v30) + 19928) * (unsigned int)(unsigned __int16)v25
              + *(_QWORD *)(v29 + 19920);
          v33 = (__int64 *)HMPkheFromPhe(v32);
          LOWORD(v25) = WORD1(v25) & 0x7FFF;
          if ( ((WORD1(v25) & 0x7FFF) == *(_WORD *)(v32 + 26)
             || (_WORD)v25 == 0x7FFF
             || !(_WORD)v25 && PsGetCurrentProcessWow64Process(a1, v5))
            && (*(_BYTE *)(v32 + 25) & 1) == 0
            && *(_BYTE *)(v32 + 24) == 18 )
          {
            v26 = *v33;
          }
        }
        a2 = *(struct tagTHREADINFO **)(v26 + 16);
      }
      else if ( !a2 )
      {
        v50 = *((_QWORD *)a4 + 2);
        if ( v50 && (v51 = ValidateHwnd(v50)) != 0 )
          a2 = *(struct tagTHREADINFO **)(v51 + 16);
        else
          a2 = (struct tagTHREADINFO *)PtiKbdFromQ(v8);
      }
      v16 = 0;
      v15 = v10;
      if ( !v10 )
        v15 = 1024;
      goto LABEL_17;
    }
    goto LABEL_96;
  }
  if ( a3 > 0x245 )
  {
    if ( a3 != 582 && a3 != 583 && a3 != 585 && a3 != 586 && a3 != 593 && a3 - 594 > 1 )
      goto LABEL_117;
    goto LABEL_95;
  }
  if ( a3 == 581 )
  {
LABEL_95:
    v10 = 4096;
    goto LABEL_96;
  }
  if ( a3 == 521 )
    goto LABEL_115;
  if ( a3 != 522 )
  {
    switch ( a3 )
    {
      case 0x20Bu:
        goto LABEL_115;
      case 0x20Cu:
        goto LABEL_118;
      case 0x20Du:
        goto LABEL_115;
    }
    if ( a3 != 526 )
    {
      if ( a3 == 568 )
      {
        v10 = 4096;
        goto LABEL_42;
      }
      if ( a3 != 576 )
        goto LABEL_117;
LABEL_96:
      v49 = PtiCurrent((__int64)a1);
      v5 = 0LL;
      if ( !v49 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5399LL);
        v5 = 0LL;
      }
      if ( !v10 )
        v10 = 2048;
      goto LABEL_42;
    }
  }
  if ( (*((_DWORD *)a1 + 109) & 0x2000000) == 0 )
  {
LABEL_76:
    v34 = (struct tagTHREADINFO *)PtiKbdFromQ(v8);
    goto LABEL_67;
  }
  v34 = (struct tagTHREADINFO *)PtiMouseFromQ(a1);
LABEL_67:
  a2 = v34;
  if ( ((a3 - 522) & 0xFFFFFFFB) != 0 )
  {
    v15 = 1;
LABEL_16:
    v16 = 0;
    goto LABEL_17;
  }
  v15 = 4;
  v54 = ShouldAddPointerWakeFlag(v34, a4);
  v16 = 0;
  if ( v54 )
    v15 = 4100;
LABEL_17:
  if ( a2 )
  {
    if ( a4 )
    {
      v5 = *((_QWORD *)a4 + 13);
      if ( v5 )
      {
        if ( (unsigned int)IsProcessedByInputService(a4, v5, 0LL) || (*((_DWORD *)a4 + 25) & 0x10000) != 0 )
          a2 = (struct tagTHREADINFO *)v5;
      }
    }
    if ( v15 && (_InterlockedCompareExchange((volatile signed __int32 *)a2 + 130, v16, 0) & 1) == 0 )
    {
      if ( (v15 & 6) != 0 )
      {
        *(_QWORD *)(*((_QWORD *)a2 + 58) + 96LL) = a2;
        EditionUpdateRawMouseMode(*((_QWORD *)a2 + 58), v5);
      }
      if ( (v15 & 2) != 0 )
        CaptureLogicalCursorPosToQMouseMove(*((_QWORD *)a2 + 58));
      if ( (v15 & 0x401) != 0 )
        *(_QWORD *)(*((_QWORD *)a2 + 58) + 104LL) = a2;
      _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)a2 + 60) + 8LL), v15);
      _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)a2 + 60) + 4LL), v15);
      v17 = W32GetUserSessionState(a1, v5);
      v19 = *((_QWORD *)a2 + 57);
      v20 = v17;
      if ( (*(_DWORD *)(v19 + 12) & 0x400000) != 0 )
      {
        if ( (v15 & 2) == 0
          || (v22 = *(_QWORD *)(W32GetUserSessionState(v19, v18) + 19904),
              *(_DWORD *)(v22 + 4960) != *(_DWORD *)(v20 + 36256))
          || *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v22, v21) + 19904) + 4964LL) != *(_DWORD *)(v20 + 36260) )
        {
          *(_DWORD *)(*((_QWORD *)a2 + 57) + 12LL) &= ~0x400000u;
          ForegroundBoost::SetForegroundPriority(a2, 1LL, 8LL);
        }
      }
      if ( (*(_DWORD *)(*((_QWORD *)a2 + 60) + 16LL) & v15) != 0 )
        KeSetEvent(*((PRKEVENT *)a2 + 95), 2, 0);
    }
    *((_QWORD *)a2 + 170) |= 0x80000000uLL;
    EtwTraceProcessWindowInfo(a2);
    if ( a4 )
    {
      v24 = a2;
      if ( a3 == 255 )
      {
        v36 = *((_QWORD *)a4 + 5);
        v37 = 0LL;
        PsGetCurrentThreadWin32Thread(v23);
        v41 = *(_QWORD *)(W32GetUserSessionState(v39, v38) + 19904);
        if ( (unsigned __int64)(unsigned __int16)v36 < *(_QWORD *)(v41 + 8) )
        {
          v42 = W32GetUserSessionState(v41, v40);
          v45 = *(_DWORD *)(W32GetUserSessionState(v44, v43) + 19928) * (unsigned int)(unsigned __int16)v36
              + *(_QWORD *)(v42 + 19920);
          v48 = (__int64 *)HMPkheFromPhe(v45);
          LOWORD(v36) = WORD1(v36) & 0x7FFF;
          if ( ((WORD1(v36) & 0x7FFF) == *(_WORD *)(v45 + 26)
             || (_WORD)v36 == 0x7FFF
             || !(_WORD)v36 && PsGetCurrentProcessWow64Process(v47, v46))
            && (*(_BYTE *)(v45 + 25) & 1) == 0
            && *(_BYTE *)(v45 + 24) == 18 )
          {
            v37 = *v48;
          }
        }
        v24 = *(struct tagTHREADINFO **)(v37 + 16);
        if ( v24 != a2 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5476LL);
      }
      *((_QWORD *)a4 + 13) = v24;
    }
    if ( v9 )
    {
      if ( a4 )
      {
        if ( (*((_DWORD *)a4 + 25) & 0x20000) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5488LL);
      }
      LastWokenThread::Set(a2, 0LL, 0LL);
      *((_QWORD *)a2 + 170) |= 0x200000000uLL;
      EtwTraceProcessWindowInfo(a2);
    }
  }
}
