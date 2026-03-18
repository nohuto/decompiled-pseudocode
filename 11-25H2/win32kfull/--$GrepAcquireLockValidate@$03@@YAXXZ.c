/*
 * XREFs of ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x14008D8A4
 * Callers:
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x14007695C (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     GreOnCURSINFODestroy @ 0x14007A94C (GreOnCURSINFODestroy.c)
 *     ?vMovePointer@@YAXPEAUHDEV__@@HHJ@Z @ 0x14008D568 (-vMovePointer@@YAXPEAUHDEV__@@HHJ@Z.c)
 *     ??0?$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14008D870 (--0-$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     GreMovePointer @ 0x14008E890 (GreMovePointer.c)
 *     EngpMovePointer @ 0x14008F2A8 (EngpMovePointer.c)
 *     GreSetPointer @ 0x140092DBC (GreSetPointer.c)
 *     GreHidePointer @ 0x140094C3C (GreHidePointer.c)
 *     GreSfmCloseCompositorRef @ 0x140095930 (GreSfmCloseCompositorRef.c)
 *     GreRemoveDisplayDriverRealizations @ 0x140122EA8 (GreRemoveDisplayDriverRealizations.c)
 *     GreTransferDwmStateToSpriteState @ 0x14012313C (GreTransferDwmStateToSpriteState.c)
 *     GreTransferSpriteStateToDwmState @ 0x140172718 (GreTransferSpriteStateToDwmState.c)
 *     EngSetPointerShape @ 0x140173990 (EngSetPointerShape.c)
 *     GreDwmStartup @ 0x1401D500C (GreDwmStartup.c)
 *     ??0NEEDPDEVPOINTERLOCK@@QEAA@PEAUHDEV__@@@Z @ 0x1401E2734 (--0NEEDPDEVPOINTERLOCK@@QEAA@PEAUHDEV__@@@Z.c)
 *     GreDesktopSwitch @ 0x1401E887C (GreDesktopSwitch.c)
 *     GreRealizeDefaultPalette @ 0x1401ED05C (GreRealizeDefaultPalette.c)
 *     ?GreHidePointerInternal@@YAXPEAUHDEV__@@@Z @ 0x14020DBE4 (-GreHidePointerInternal@@YAXPEAUHDEV__@@@Z.c)
 *     GreDwmShutdown @ 0x140267064 (GreDwmShutdown.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400D8AF0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 */

__int64 GrepAcquireLockValidate<4>()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 result; // rax
  __int64 *v4; // rbx
  __int64 v5; // rcx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  unsigned __int64 v8; // rdx
  int v9; // r8d
  int v10; // eax

  CurrentThread = KeGetCurrentThread();
  v1 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v1 = *ThreadWin32Thread;
  }
  result = v1 + 8;
  v4 = (__int64 *)((v1 + 8) & -(__int64)(v1 != 0));
  if ( v4 )
  {
    v5 = *v4;
    if ( (*v4 & 0xFFFFFFFFFFFFFFF0uLL) != 0 && (v5 & 0x10) == 0 )
    {
      v8 = 0LL;
      v9 = 37;
      do
      {
        v10 = v8;
        if ( !_bittest64(&v5, v8) )
          v10 = v9;
        ++v8;
        v9 = v10;
      }
      while ( v8 < 0x40 );
      if ( v10 > 4 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v8, (unsigned int)v10);
    }
    LOBYTE(v5) = *(_BYTE *)(((v1 + 8) & -(__int64)(v1 != 0)) + 0xC);
    result = (unsigned int)(v5 + 1);
    *(_BYTE *)(((v1 + 8) & -(__int64)(v1 != 0)) + 0xC) = v5 + 1;
    if ( !(_BYTE)v5 )
      *v4 |= 0x10uLL;
  }
  return result;
}
