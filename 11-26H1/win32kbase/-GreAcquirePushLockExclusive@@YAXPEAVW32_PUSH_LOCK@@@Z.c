/*
 * XREFs of ?GreAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400431F0
 * Callers:
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400151C0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXXZ @ 0x1400156C0 (-vSet@RGNOBJ@@QEAAXXZ.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x140015AE0 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x14001F730 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x14001FB50 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     ?EngTryFreeUserMem@@YA_NPEAX@Z @ 0x140034444 (-EngTryFreeUserMem@@YA_NPEAX@Z.c)
 *     ?GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x14003B040 (-GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 *     ?GreDecodeUserModePointer@@YAPEAXPEAX@Z @ 0x140041EB0 (-GreDecodeUserModePointer@@YAPEAXPEAX@Z.c)
 *     GreSfmGetNotificationTokens @ 0x1400B2E90 (GreSfmGetNotificationTokens.c)
 *     ?AddLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1401563E0 (-AddLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?RemoveLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z @ 0x140156790 (-RemoveLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     NtGdiInit2 @ 0x14015C6D0 (NtGdiInit2.c)
 *     EngAllocUserMemEx @ 0x140163CF8 (EngAllocUserMemEx.c)
 *     NtGdiInit @ 0x1401F2450 (NtGdiInit.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall GreAcquirePushLockExclusive(struct W32_PUSH_LOCK *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 *v5; // rbx
  __int64 v6; // r8
  char v7; // cl
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v10; // edx
  unsigned __int64 i; // rcx
  int v12; // eax

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1, 0LL);
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  v5 = (__int64 *)((v3 + 8) & -(__int64)(v3 != 0));
  if ( v5 )
  {
    v6 = *v5;
    if ( (*v5 & 0xFFFFFFC000000000uLL) != 0 )
    {
      v10 = 38;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v12 = i;
        if ( ((1LL << i) & 0xFFFFFFDFFFFFFFFFuLL & v6) == 0 )
          v12 = v10;
        v10 = v12;
      }
      if ( v12 > 38 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v12, v6);
    }
    v7 = *(_BYTE *)(((v3 + 8) & -(__int64)(v3 != 0)) + 0x1E);
    *(_BYTE *)(((v3 + 8) & -(__int64)(v3 != 0)) + 0x1E) = v7 + 1;
    if ( !v7 )
      *v5 |= 0x2000000000uLL;
  }
}
