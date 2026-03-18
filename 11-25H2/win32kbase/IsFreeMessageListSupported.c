/*
 * XREFs of IsFreeMessageListSupported @ 0x140109270
 * Callers:
 *     UserDeleteW32Thread @ 0x140084340 (UserDeleteW32Thread.c)
 *     zzzDestroyQueue @ 0x1401667F0 (zzzDestroyQueue.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x14016A0DC (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsFreeMessageListSupported(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax

  v2 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 1384LL);
  if ( v2 )
    return v2();
  else
    return 3221225659LL;
}
