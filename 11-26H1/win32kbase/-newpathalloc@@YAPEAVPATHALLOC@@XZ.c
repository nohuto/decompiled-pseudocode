/*
 * XREFs of ?newpathalloc@@YAPEAVPATHALLOC@@XZ @ 0x1400452D0
 * Callers:
 *     ?createrec@PATH_CORE@@AEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z @ 0x1400C2068 (-createrec@PATH_CORE@@AEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z.c)
 *     pprFlattenRec @ 0x14011A500 (pprFlattenRec.c)
 *     ?newpathrec@PATH_CORE@@QEAA_NPEAPEAUPATHRECORD@@PEAKK@Z @ 0x14011AFC8 (-newpathrec@PATH_CORE@@QEAA_NPEAPEAUPATHRECORD@@PEAKK@Z.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140044440 (EtwTraceGreLockReleaseSemaphore.c)
 *     ??$GrepAcquireLockValidate@$0CD@@@YAXXZ @ 0x1400453DC (--$GrepAcquireLockValidate@$0CD@@@YAXXZ.c)
 */

struct PATHALLOC *__fastcall newpathalloc(__int64 a1)
{
  __int64 v1; // rsi
  struct _ERESOURCE *v2; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdi
  __int64 v6; // rax
  struct _GRETHREAD *v7; // rax
  struct _GRETHREAD *v9; // rax

  v1 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v2 = *(struct _ERESOURCE **)(v1 + 3912);
  GreAcquireSemaphoreInternal(v2);
  GrepAcquireLockValidate<35>();
  v5 = *(_QWORD *)(v1 + 3920);
  if ( v5 )
  {
    v6 = *(_QWORD *)v5;
    --*(_DWORD *)(v1 + 3928);
    *(_QWORD *)(v1 + 3920) = v6;
LABEL_3:
    *(_QWORD *)v5 = 0LL;
    *(_QWORD *)(v5 + 8) = v5 + 24;
    *(_DWORD *)(v5 + 16) = 4032;
    if ( v2 )
    {
      EtwTraceGreLockReleaseSemaphore((__int64)L"PATHALLOC_FreeList", (int)v2, v3);
      v7 = GreGetCurrentThreadCrossSessionCheck();
      if ( v7 )
        *(_QWORD *)v7 &= ~0x800000000uLL;
      GreReleaseSemaphoreSharedInternal(v2);
    }
    return (struct PATHALLOC *)v5;
  }
  v5 = PALLOCMEM(4032LL, 1952542791LL, v3, v4);
  if ( v5 )
  {
    ++*(_DWORD *)(v1 + 3932);
    goto LABEL_3;
  }
  if ( v2 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"PATHALLOC_FreeList", (int)v2, v3);
    v9 = GreGetCurrentThreadCrossSessionCheck();
    if ( v9 )
      *(_QWORD *)v9 &= ~0x800000000uLL;
    GreReleaseSemaphoreSharedInternal(v2);
  }
  return 0LL;
}
