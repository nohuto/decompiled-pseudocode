/*
 * XREFs of ?freepathalloc@@YAXPEAVPATHALLOC@@@Z @ 0x1400454D0
 * Callers:
 *     ?vFreeBlocks@PATH_CORE@@QEAAXXZ @ 0x140045470 (-vFreeBlocks@PATH_CORE@@QEAAXXZ.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140044440 (EtwTraceGreLockReleaseSemaphore.c)
 *     ??$GrepAcquireLockValidate@$0CD@@@YAXXZ @ 0x1400453DC (--$GrepAcquireLockValidate@$0CD@@@YAXXZ.c)
 */

void __fastcall freepathalloc(char *Buffer)
{
  __int64 v2; // rdi
  struct _ERESOURCE *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _GRETHREAD *v7; // rax

  v2 = *(_QWORD *)(W32GetSessionState(Buffer) + 88);
  v3 = *(struct _ERESOURCE **)(v2 + 3912);
  GreAcquireSemaphoreInternal(v3);
  GrepAcquireLockValidate<35>();
  if ( *(_DWORD *)(v2 + 3928) >= 4u )
  {
    GreDeleteFastMutex(Buffer, v4, v5, v6);
    --*(_DWORD *)(v2 + 3932);
  }
  else
  {
    *(_QWORD *)Buffer = *(_QWORD *)(v2 + 3920);
    ++*(_DWORD *)(v2 + 3928);
    *(_QWORD *)(v2 + 3920) = Buffer;
  }
  if ( v3 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"PATHALLOC_FreeList", (int)v3, v5);
    v7 = GreGetCurrentThreadCrossSessionCheck();
    if ( v7 )
      *(_QWORD *)v7 &= ~0x800000000uLL;
    GreReleaseSemaphoreSharedInternal(v3);
  }
}
