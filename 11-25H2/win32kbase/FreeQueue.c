/*
 * XREFs of FreeQueue @ 0x14010EDC4
 * Callers:
 *     UserDeleteW32Thread @ 0x140084340 (UserDeleteW32Thread.c)
 *     zzzDestroyQueue @ 0x1401667F0 (zzzDestroyQueue.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x14016A0DC (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     UnlockQueue @ 0x1401A74E0 (UnlockQueue.c)
 * Callees:
 *     ?Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z @ 0x140010398 (-Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z.c)
 */

void __fastcall FreeQueue(char *a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  Win32FreeToPagedLookasideListImpl(*(char **)(UserSessionState + 16864), a1);
}
