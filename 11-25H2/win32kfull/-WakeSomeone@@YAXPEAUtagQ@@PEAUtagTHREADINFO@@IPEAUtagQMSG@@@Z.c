/*
 * XREFs of ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1400681AC
 * Callers:
 *     ?xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1400625CC (-xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     ?_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x140063928 (-_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x140065FC8 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     EditionWakeThreadForInput @ 0x140068180 (EditionWakeThreadForInput.c)
 *     EditionWakeSomeone @ 0x140068970 (EditionWakeSomeone.c)
 *     PostInputMessage @ 0x14011FED8 (PostInputMessage.c)
 *     EditionHandleAndPostKeyEvent @ 0x14024FA10 (EditionHandleAndPostKeyEvent.c)
 * Callees:
 *     SetWakeBit @ 0x1400338D0 (SetWakeBit.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     IsProcessedByInputService @ 0x140067FFC (IsProcessedByInputService.c)
 *     PtiMouseFromQ @ 0x14011F4F0 (PtiMouseFromQ.c)
 *     PtiKbdFromQ @ 0x14014543C (PtiKbdFromQ.c)
 *     ?ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z @ 0x14017AABC (-ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z.c)
 *     ?CancelForegroundActivate@ForegroundLaunch@@YAXXZ @ 0x1401DF500 (-CancelForegroundActivate@ForegroundLaunch@@YAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall WakeSomeone(struct tagQ *a1, struct tagTHREADINFO *a2, unsigned int a3, struct tagQMSG *a4)
{
  __int64 v5; // rdx
  struct tagQ *v8; // r13
  unsigned int v9; // esi
  int v10; // r14d
  unsigned int v11; // edi
  struct tagTHREADINFO *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rax
  struct tagTHREADINFO *v17; // rdx
  __int64 v18; // rdx
  struct tagTHREADINFO *v19; // rdi

  v5 = 0LL;
  v8 = a1;
  v9 = 0;
  v10 = 0;
  v11 = 1;
  if ( a3 > 0x208 )
  {
    if ( a3 > 0x245 )
    {
      if ( a3 != 582 && a3 != 583 && a3 != 585 && a3 != 586 && a3 != 593 && a3 - 594 >= 2 )
        goto LABEL_60;
    }
    else if ( a3 != 581 )
    {
      if ( a3 != 521 )
      {
        if ( a3 == 522 )
          goto LABEL_51;
        if ( a3 != 523 )
        {
          if ( a3 == 524 )
            goto LABEL_61;
          if ( a3 != 525 )
          {
            if ( a3 != 526 )
            {
              if ( a3 == 568 )
              {
                v10 = 4096;
                goto LABEL_71;
              }
              if ( a3 != 576 )
                goto LABEL_60;
              goto LABEL_67;
            }
LABEL_51:
            if ( (*((_DWORD *)a1 + 103) & 0x2000000) != 0 )
            {
              v12 = (struct tagTHREADINFO *)PtiMouseFromQ(a1);
              goto LABEL_22;
            }
            goto LABEL_21;
          }
        }
      }
LABEL_32:
      if ( a4 )
        v9 = (~*((_DWORD *)a4 + 25) & 0x20000u) >> 17;
      else
        v9 = 1;
      goto LABEL_60;
    }
    v10 = 4096;
    goto LABEL_67;
  }
  if ( a3 == 520 )
    goto LABEL_61;
  if ( a3 <= 0x11B )
  {
    if ( a3 != 283 )
    {
      if ( a3 != 254 && a3 != 255 )
      {
        if ( a3 != 256 )
        {
          if ( a3 == 257 )
            goto LABEL_21;
          if ( a3 == 258 )
          {
LABEL_20:
            ForegroundLaunch::CancelForegroundActivate(a1);
            goto LABEL_21;
          }
          if ( a3 != 260 )
          {
            if ( a3 != 261 )
            {
              if ( a3 != 262 )
              {
LABEL_60:
                ForegroundLaunch::CancelForegroundActivate(a1);
LABEL_61:
                v14 = *((_QWORD *)v8 + 14);
                if ( v14 && a3 - 512 <= 0xE )
                  a2 = *(struct tagTHREADINFO **)(v14 + 16);
                else
                  a2 = (struct tagTHREADINFO *)*((_QWORD *)v8 + 12);
                v11 = (unsigned int)ShouldAddPointerWakeFlag(a2, a4) != 0 ? 4100 : 4;
                goto LABEL_80;
              }
              goto LABEL_20;
            }
LABEL_21:
            v12 = (struct tagTHREADINFO *)PtiKbdFromQ(v8);
LABEL_22:
            a2 = v12;
            if ( ((a3 - 522) & 0xFFFFFFFB) == 0 )
            {
              v11 = 4;
              if ( (unsigned int)ShouldAddPointerWakeFlag(v12, a4) )
                v11 = 4100;
            }
            goto LABEL_80;
          }
        }
        if ( a4 )
        {
          if ( *((_QWORD *)a4 + 4) != 16LL && (unsigned __int64)(*((_QWORD *)a4 + 4) - 17LL) > 1
            || (a1 = (struct tagQ *)(2 * (*((_BYTE *)a4 + 32) & 3u)),
                ((unsigned __int8)(1 << (2 * (*((_BYTE *)a4 + 32) & 3))) & *((_BYTE *)v8
                                                                           + ((unsigned __int64)*((unsigned __int8 *)a4
                                                                                                + 32) >> 2)
                                                                           + 256)) == 0) )
          {
            v9 = ((*((_DWORD *)a4 + 25) >> 17) & 1) == 0;
          }
        }
        else
        {
          v9 = 1;
        }
        goto LABEL_20;
      }
LABEL_71:
      if ( a3 == 255 )
      {
        LOBYTE(v5) = 18;
        v16 = HMValidateHandleNoSecure(*((_QWORD *)a4 + 5), v5);
      }
      else
      {
        if ( a2 )
          goto LABEL_78;
        v15 = *((_QWORD *)a4 + 2);
        if ( !v15 || (v16 = ValidateHwnd(v15)) == 0 )
        {
          a2 = (struct tagTHREADINFO *)PtiKbdFromQ(v8);
          goto LABEL_78;
        }
      }
      a2 = *(struct tagTHREADINFO **)(v16 + 16);
LABEL_78:
      v11 = v10;
      if ( !v10 )
        v11 = 1024;
      goto LABEL_80;
    }
LABEL_67:
    if ( !PtiCurrent((__int64)a1, 0LL) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5342LL);
    if ( !v10 )
      v10 = 2048;
    goto LABEL_71;
  }
  if ( a3 != 512 )
  {
    if ( a3 != 513 )
    {
      if ( a3 == 514 )
        goto LABEL_61;
      if ( a3 != 515 && a3 != 516 )
      {
        if ( a3 == 517 )
          goto LABEL_61;
        if ( a3 - 518 > 1 )
          goto LABEL_60;
      }
    }
    goto LABEL_32;
  }
  if ( !a2 )
  {
    v13 = *((_QWORD *)a1 + 14);
    if ( v13 )
      a2 = *(struct tagTHREADINFO **)(v13 + 16);
    else
      a2 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 12);
  }
  v11 = (unsigned int)ShouldAddPointerWakeFlag(a2, a4) != 0 ? 4098 : 2;
LABEL_80:
  if ( a2 )
  {
    if ( a4 && *((_QWORD *)a4 + 13) && (IsProcessedByInputService((__int64)a4) || (*((_DWORD *)a4 + 25) & 0x10000) != 0) )
      a2 = v17;
    if ( v11 )
      SetWakeBit((__int64)a2, v11);
    *((_QWORD *)a2 + 170) |= 0x80000000uLL;
    EtwTraceProcessWindowInfo(a2);
    if ( a4 )
    {
      v19 = a2;
      if ( a3 == 255 )
      {
        LOBYTE(v18) = 18;
        v19 = *(struct tagTHREADINFO **)(HMValidateHandleNoSecure(*((_QWORD *)a4 + 5), v18) + 16);
        if ( v19 != a2 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5419LL);
      }
      *((_QWORD *)a4 + 13) = v19;
    }
    if ( v9 )
    {
      if ( a4 )
      {
        if ( (*((_DWORD *)a4 + 25) & 0x20000) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5431LL);
      }
      LastWokenThread::Set(a2, 0LL, 0LL);
      *((_QWORD *)a2 + 170) |= 0x200000000uLL;
      EtwTraceProcessWindowInfo(a2);
    }
  }
}
