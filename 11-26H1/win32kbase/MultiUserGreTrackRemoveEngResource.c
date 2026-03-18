/*
 * XREFs of MultiUserGreTrackRemoveEngResource @ 0x140044510
 * Callers:
 *     GreDeleteSemaphore @ 0x1400C6C70 (GreDeleteSemaphore.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140044440 (EtwTraceGreLockReleaseSemaphore.c)
 *     ??$GrepAcquireLockValidate@$0CA@@@YAXXZ @ 0x140044478 (--$GrepAcquireLockValidate@$0CA@@@YAXXZ.c)
 */

void __fastcall MultiUserGreTrackRemoveEngResource(_QWORD *a1)
{
  struct _ERESOURCE *v2; // rbx
  int v3; // r8d
  __int64 v4; // rcx
  _QWORD *v5; // rax
  struct _GRETHREAD *v6; // rax

  v2 = (struct _ERESOURCE *)(**(_QWORD **)(W32GetSessionState(a1) + 88) + 1720LL);
  GreAcquireSemaphoreInternal(v2);
  GrepAcquireLockValidate<32>();
  v4 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v5 = (_QWORD *)a1[1], (_QWORD *)*v5 != a1) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  if ( v2 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"MultiUserEngAllocListLock", (int)v2, v3);
    v6 = GreGetCurrentThreadCrossSessionCheck();
    if ( v6 )
      *(_QWORD *)v6 &= ~0x100000000uLL;
    GreReleaseSemaphoreSharedInternal(v2);
  }
}
