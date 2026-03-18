/*
 * XREFs of GreSfmDwmShutdown @ 0x140158FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140044440 (EtwTraceGreLockReleaseSemaphore.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x1400B31BC (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     ?DeInitialize@SfmTokenArray@@QEAAXXZ @ 0x1401590C0 (-DeInitialize@SfmTokenArray@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall GreSfmDwmShutdown(__int64 a1)
{
  struct _ERESOURCE **v1; // rbx
  struct _ERESOURCE *v2; // rdi
  __int64 v3; // rcx
  int (*v4)(void); // rax
  int v5; // r8d
  __int64 v6; // rcx
  void (*v7)(void); // rax
  struct _GRETHREAD *v8; // rax

  v1 = *(struct _ERESOURCE ***)(W32GetSessionState(a1) + 88);
  v2 = *v1 + 5;
  GreAcquireSemaphoreInternal(v2);
  GrepAcquireLockValidate<7>();
  SfmTokenArray::DeInitialize((SfmTokenArray *)&v1[543]->SystemResourcesList.Blink);
  v4 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3) + 24) + 2496LL);
  if ( v4 )
  {
    if ( v4() >= 0 )
    {
      v7 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 24) + 2504LL);
      if ( v7 )
        v7();
    }
  }
  if ( v2 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"DwmState", (int)v2, v5);
    v8 = GreGetCurrentThreadCrossSessionCheck();
    if ( v8 )
    {
      if ( (*((_BYTE *)v8 + 15))-- == 1 )
        *(_QWORD *)v8 &= ~0x80uLL;
    }
    GreReleaseSemaphoreSharedInternal(v2);
  }
}
