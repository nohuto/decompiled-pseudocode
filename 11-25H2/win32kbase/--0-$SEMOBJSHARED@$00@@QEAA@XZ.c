/*
 * XREFs of ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140046948
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x140013640 (NtGdiDeleteObjectApp.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x140013CA0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     GreCreateDisplayDC @ 0x140041200 (GreCreateDisplayDC.c)
 *     GreGetDeviceCaps @ 0x140043070 (GreGetDeviceCaps.c)
 *     NtGdiGetDeviceCaps @ 0x140043D20 (NtGdiGetDeviceCaps.c)
 *     DrvEnumDisplaySettings @ 0x14004AE70 (DrvEnumDisplaySettings.c)
 *     GreSuspendDirectDraw @ 0x140072B40 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x140072CEC (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 *     GdiUnmapGDIW32PIDLockedBitmaps @ 0x140084B10 (GdiUnmapGDIW32PIDLockedBitmaps.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1400853A8 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?vCleanupSurfaces@@YAXK@Z @ 0x140086260 (-vCleanupSurfaces@@YAXK@Z.c)
 *     GreCreatePatternBrushInternal @ 0x140086E10 (GreCreatePatternBrushInternal.c)
 *     NtGdiGetDeviceCapsAll @ 0x1400E76C0 (NtGdiGetDeviceCapsAll.c)
 *     GreSetMagicColors @ 0x14014DDBC (GreSetMagicColors.c)
 *     DrvFunctionalizeDisplayConfig @ 0x140157D40 (DrvFunctionalizeDisplayConfig.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z @ 0x140159390 (-iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x140177330 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140177760 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401D1680 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     EngAcquireSemaphoreShared @ 0x140045A70 (EngAcquireSemaphoreShared.c)
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

HSEMAPHORE *__fastcall SEMOBJSHARED<1>::SEMOBJSHARED<1>(HSEMAPHORE *a1)
{
  HSEMAPHORE v2; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 *v6; // rbx
  __int64 v7; // rdx
  char v8; // cl
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  unsigned __int64 v12; // rcx
  int v13; // r8d
  int v14; // eax

  v2 = (HSEMAPHORE)(**(_QWORD **)(W32GetSessionState(a1) + 88) + 624LL);
  *a1 = v2;
  EngAcquireSemaphoreShared(v2);
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  v6 = (__int64 *)((v4 + 8) & -(__int64)(v4 != 0));
  if ( v6 )
  {
    v7 = *v6;
    if ( (*v6 & 0xFFFFFFFFFFFFFFFEuLL) != 0 && (*v6 & 2) == 0 )
    {
      v12 = 0LL;
      v13 = 37;
      do
      {
        v14 = v12;
        if ( !_bittest64(&v7, v12) )
          v14 = v13;
        ++v12;
        v13 = v14;
      }
      while ( v12 < 0x40 );
      if ( v14 > 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v7, (unsigned int)v14);
    }
    v8 = *(_BYTE *)(((v4 + 8) & -(__int64)(v4 != 0)) + 9);
    *(_BYTE *)(((v4 + 8) & -(__int64)(v4 != 0)) + 9) = v8 + 1;
    if ( !v8 )
      *v6 |= 2uLL;
  }
  return a1;
}
