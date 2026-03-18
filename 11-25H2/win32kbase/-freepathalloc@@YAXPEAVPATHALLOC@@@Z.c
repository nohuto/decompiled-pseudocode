/*
 * XREFs of ?freepathalloc@@YAXPEAVPATHALLOC@@@Z @ 0x14000DAF0
 * Callers:
 *     ?vFreeBlocks@PATH_CORE@@QEAAXXZ @ 0x14000DA60 (-vFreeBlocks@PATH_CORE@@QEAAXXZ.c)
 * Callees:
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001A7F0 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140046390 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall freepathalloc(_QWORD *Buffer)
{
  __int64 v2; // rdi
  HSEMAPHORE v3; // rbx
  struct _GRETHREAD *v4; // rax
  struct _GRETHREAD *v5; // rsi
  __int64 v6; // rcx
  struct _GRETHREAD *v7; // rax
  unsigned __int64 v8; // rdx
  int v9; // r8d
  int v10; // eax

  v2 = *(_QWORD *)(W32GetSessionState() + 88) + 3808LL;
  v3 = *(HSEMAPHORE *)v2;
  GreAcquireSemaphoreInternal(*(HSEMAPHORE *)v2);
  v4 = GreGetCurrentThreadCrossSessionCheck();
  v5 = v4;
  if ( v4 )
  {
    v6 = *(_QWORD *)v4;
    if ( (*(_QWORD *)v4 & 0xFFFFFFF800000000uLL) != 0 && (v6 & 0x800000000LL) == 0 )
    {
      v8 = 0LL;
      v9 = 37;
      do
      {
        v10 = v8;
        if ( !_bittest64(&v6, v8) )
          v10 = v9;
        ++v8;
        v9 = v10;
      }
      while ( v8 < 0x40 );
      if ( v10 > 35 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v8, (unsigned int)v10);
    }
    *(_QWORD *)v5 |= 0x800000000uLL;
  }
  if ( *(_DWORD *)(v2 + 16) >= 4u )
  {
    GreDeleteFastMutex(Buffer);
    --*(_DWORD *)(v2 + 20);
  }
  else
  {
    *Buffer = *(_QWORD *)(v2 + 8);
    ++*(_DWORD *)(v2 + 16);
    *(_QWORD *)(v2 + 8) = Buffer;
  }
  if ( v3 )
  {
    EtwTraceGreLockReleaseSemaphore(L"PATHALLOC_FreeList", v3);
    v7 = GreGetCurrentThreadCrossSessionCheck();
    if ( v7 )
      *(_QWORD *)v7 &= ~0x800000000uLL;
    GreReleaseSemaphoreSharedInternal(v3);
  }
}
