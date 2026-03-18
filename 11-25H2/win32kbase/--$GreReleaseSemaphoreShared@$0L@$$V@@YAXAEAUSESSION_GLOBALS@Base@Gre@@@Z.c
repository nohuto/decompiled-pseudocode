/*
 * XREFs of ??$GreReleaseSemaphoreShared@$0L@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400F7538
 * Callers:
 *     GreUnlockVisRgnPublish @ 0x1400F7510 (GreUnlockVisRgnPublish.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140046390 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 */

void __fastcall GreReleaseSemaphoreShared<11,>(struct _ERESOURCE **a1)
{
  struct _ERESOURCE *v1; // rbx
  struct _GRETHREAD *v2; // rax

  v1 = *a1;
  EtwTraceGreLockReleaseSemaphore((__int64)L"VisRgnPublish", (unsigned int)*a1 + 1248);
  v2 = GreGetCurrentThreadCrossSessionCheck();
  if ( v2 )
  {
    if ( (*((_BYTE *)v2 + 19))-- == 1 )
      *(_QWORD *)v2 &= ~0x800uLL;
  }
  GreReleaseSemaphoreSharedInternal(v1 + 12);
}
