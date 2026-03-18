/*
 * XREFs of DxgkEngVisRgnUniq @ 0x1400F3650
 * Callers:
 *     <none>
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphoreShared @ 0x140045A70 (EngAcquireSemaphoreShared.c)
 *     ??$GrepAcquireLockValidate@$0O@@@YAXXZ @ 0x1400462A4 (--$GrepAcquireLockValidate@$0O@@@YAXXZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140046390 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 */

__int64 __fastcall DxgkEngVisRgnUniq(__int64 a1)
{
  __int64 v1; // rbx
  struct _ERESOURCE *v2; // rdi
  unsigned int v3; // esi
  struct _GRETHREAD *v4; // rax

  v1 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v2 = (struct _ERESOURCE *)(*(_QWORD *)v1 + 832LL);
  EngAcquireSemaphoreShared((HSEMAPHORE)v2);
  GrepAcquireLockValidate<14>();
  v3 = *(_DWORD *)(v1 + 4240) + *(_DWORD *)(v1 + 4280);
  EtwTraceGreLockReleaseSemaphore((__int64)L"VisRgnUniqueness", (int)v2);
  v4 = GreGetCurrentThreadCrossSessionCheck();
  if ( v4 )
  {
    if ( (*((_BYTE *)v4 + 22))-- == 1 )
      *(_QWORD *)v4 &= ~0x4000uLL;
  }
  GreReleaseSemaphoreSharedInternal(v2);
  return v3;
}
