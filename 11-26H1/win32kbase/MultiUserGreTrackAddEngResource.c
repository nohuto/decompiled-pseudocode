/*
 * XREFs of MultiUserGreTrackAddEngResource @ 0x140045220
 * Callers:
 *     GreCreateSemaphoreInternal @ 0x1400A69FC (GreCreateSemaphoreInternal.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140044440 (EtwTraceGreLockReleaseSemaphore.c)
 *     ??$GrepAcquireLockValidate@$0CA@@@YAXXZ @ 0x140044478 (--$GrepAcquireLockValidate@$0CA@@@YAXXZ.c)
 */

void __fastcall MultiUserGreTrackAddEngResource(__int64 a1, int a2)
{
  _QWORD *v4; // rdi
  struct _ERESOURCE *v5; // rbx
  int v6; // r8d
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  struct _GRETHREAD *v9; // rax

  v4 = *(_QWORD **)(W32GetSessionState(a1) + 88);
  *(_DWORD *)(a1 + 16) = a2;
  v5 = (struct _ERESOURCE *)(*v4 + 1720LL);
  GreAcquireSemaphoreInternal(v5);
  GrepAcquireLockValidate<32>();
  v7 = v4 + 390;
  v8 = (_QWORD *)v7[1];
  if ( (_QWORD *)*v8 != v7 )
    __fastfail(3u);
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = v8;
  *v8 = a1;
  v7[1] = a1;
  if ( v5 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"MultiUserEngAllocListLock", (int)v5, v6);
    v9 = GreGetCurrentThreadCrossSessionCheck();
    if ( v9 )
      *(_QWORD *)v9 &= ~0x100000000uLL;
    GreReleaseSemaphoreSharedInternal(v5);
  }
}
