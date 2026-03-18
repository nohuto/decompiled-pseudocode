/*
 * XREFs of FreeQueue @ 0x1400B7FDC
 * Callers:
 *     UserDeleteW32Thread @ 0x140091290 (UserDeleteW32Thread.c)
 *     zzzDestroyQueue @ 0x1400B8EC0 (zzzDestroyQueue.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x14019A350 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     UnlockQueue @ 0x1401CAD60 (UnlockQueue.c)
 * Callees:
 *     ?Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z @ 0x1400B80E4 (-Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z.c)
 */

void __fastcall FreeQueue(void *a1, int a2, int a3)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, a3);
  Win32FreeToPagedLookasideListImpl(*(void **)(UserSessionState + 16856), a1);
}
