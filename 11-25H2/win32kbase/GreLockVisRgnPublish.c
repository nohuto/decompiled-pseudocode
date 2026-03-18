/*
 * XREFs of GreLockVisRgnPublish @ 0x1400F9C50
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x14001A650 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001A7F0 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$0L@@@YAXXZ @ 0x14001C20C (--$GrepAcquireLockValidate@$0L@@@YAXXZ.c)
 */

__int64 __fastcall GreLockVisRgnPublish(__int64 a1)
{
  struct _ERESOURCE *v1; // rbx

  v1 = **(struct _ERESOURCE ***)(W32GetSessionState(a1) + 88);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"VisRgnPublish", (_DWORD)v1 + 1248, 0);
  GreAcquireSemaphoreInternal(v1 + 12);
  return GrepAcquireLockValidate<11>();
}
