/*
 * XREFs of ??$GreReleaseSemaphoreCommon@$0CE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140024A94
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z @ 0x1400126D0 (-bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z.c)
 *     GdiUnmapGDIW32PIDLockedBitmaps @ 0x140024580 (GdiUnmapGDIW32PIDLockedBitmaps.c)
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@XZ @ 0x1400246B0 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@XZ.c)
 *     ?vUnlock@?$SEMOBJ@$0CE@@@QEAAXXZ @ 0x140024A68 (-vUnlock@-$SEMOBJ@$0CE@@@QEAAXXZ.c)
 *     ?bUnMapImmediate@SURFACE@@QEAAHXZ @ 0x14002FF8C (-bUnMapImmediate@SURFACE@@QEAAHXZ.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1401A1F74 (McTemplateK0pz_EtwWriteTransfer.c)
 */

void __fastcall GreReleaseSemaphoreCommon<36,void (*)(HSEMAPHORE__ *)>(int a1, struct _ERESOURCE *a2, int a3)
{
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v7; // rcx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  v3 = 0LL;
  if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(a1, (unsigned int)&LockRelease, a3, (_DWORD)a2, (__int64)L"MapRot");
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  v7 = (_QWORD *)((v3 + 8) & -(__int64)(v3 != 0));
  if ( v7 )
    *v7 &= ~0x1000000000uLL;
  GreReleaseSemaphoreSharedInternal(a2);
}
