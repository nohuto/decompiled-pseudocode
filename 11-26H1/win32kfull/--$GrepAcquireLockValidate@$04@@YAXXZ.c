/*
 * XREFs of ??$GrepAcquireLockValidate@$04@@YAXXZ @ 0x1400C5C60
 * Callers:
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@HK@Z @ 0x1400C3E98 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@HK@Z.c)
 *     ?vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z @ 0x1400C3EF0 (-vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z.c)
 *     ?vDelayedReclaim@RFONTOBJ@@QEAAXXZ @ 0x1400C5A78 (-vDelayedReclaim@RFONTOBJ@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400C5C18 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 GrepAcquireLockValidate<5>()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // rdi
  __int64 *ThreadWin32Thread; // rax
  unsigned __int64 i; // rcx
  __int64 result; // rax
  _QWORD *v5; // rbx
  int v6; // edx
  int v7; // eax
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

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
  v5 = (_QWORD *)((v1 + 8) & -(__int64)(v1 != 0));
  if ( v5 )
  {
    if ( (*v5 & 0xFFFFFFDFFFFFFFE0uLL) != 0 && (*v5 & 0x20) == 0 )
    {
      v6 = 38;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v7 = i;
        if ( ((1LL << i) & 0xFFFFFFDFFFFFFFFFuLL & *v5) == 0 )
          v7 = v6;
        v6 = v7;
      }
      if ( v7 > 5 && v7 != 38 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v7);
    }
    LOBYTE(i) = *(_BYTE *)(((v1 + 8) & -(__int64)(v1 != 0)) + 0xD);
    result = (unsigned int)(i + 1);
    *(_BYTE *)(((v1 + 8) & -(__int64)(v1 != 0)) + 0xD) = i + 1;
    if ( !(_BYTE)i )
      *v5 |= 0x20uLL;
  }
  return result;
}
