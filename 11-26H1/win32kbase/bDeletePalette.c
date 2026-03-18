/*
 * XREFs of bDeletePalette @ 0x14017D940
 * Callers:
 *     ?GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z @ 0x140023DBC (-GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z.c)
 *     GrepThreadCallout @ 0x14011A030 (GrepThreadCallout.c)
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1401FA56C (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     ?HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140019830 (-HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions.c)
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     PushThreadGuardedObject @ 0x140030350 (PushThreadGuardedObject.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140044440 (EtwTraceGreLockReleaseSemaphore.c)
 *     ??$GrepAcquireLockValidate@$0N@@@YAXXZ @ 0x1400C33B0 (--$GrepAcquireLockValidate@$0N@@@YAXXZ.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1400C49EC (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 */

__int64 __fastcall bDeletePalette(__int64 a1)
{
  unsigned int v1; // ebx
  struct _ERESOURCE *v2; // rdi
  __int64 v3; // rcx
  __int64 SessionState; // rax
  unsigned int *v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // r8d
  struct _GRETHREAD *v10; // rax
  unsigned int *v13; // [rsp+20h] [rbp-38h] BYREF
  _OWORD v14[3]; // [rsp+28h] [rbp-30h] BYREF

  v1 = a1;
  v2 = (struct _ERESOURCE *)(**(_QWORD **)(W32GetSessionState(a1) + 88) + 312LL);
  GreAcquireSemaphoreInternal(v2);
  GrepAcquireLockValidate<13>();
  v13 = 0LL;
  memset(v14, 0, 32);
  PushThreadGuardedObject(
    v14,
    (__int64)&v13,
    (__int64)UnexpectedThreadTerminationHandler<XEPALOBJ2>::OnUnexpectedThreadTerminationStatic);
  SessionState = W32GetSessionState(v3);
  v5 = (unsigned int *)HmgShareLock(*(_QWORD *)(SessionState + 88), v1, 8, 0);
  v6 = 0;
  v13 = v5;
  if ( v5 )
  {
    v6 = XEPALOBJ::bDeletePalette((XEPALOBJ *)&v13, 0);
    if ( v13 )
    {
      v8 = W32GetSessionState(v7);
      HmgDecrementShareReferenceCount(*(_QWORD *)(v8 + 88), v13);
      v13 = 0LL;
    }
  }
  PopThreadGuardedObject(v14);
  if ( v2 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Palette", (int)v2, v9);
    v10 = GreGetCurrentThreadCrossSessionCheck();
    if ( v10 )
    {
      if ( (*((_BYTE *)v10 + 21))-- == 1 )
        *(_QWORD *)v10 &= ~0x2000uLL;
    }
    GreReleaseSemaphoreSharedInternal(v2);
  }
  return v6;
}
