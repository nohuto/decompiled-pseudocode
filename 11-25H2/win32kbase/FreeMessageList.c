/*
 * XREFs of FreeMessageList @ 0x140100A30
 * Callers:
 *     UserDeleteW32Thread @ 0x140084340 (UserDeleteW32Thread.c)
 *     xxxDestroyThreadInfo @ 0x140164194 (xxxDestroyThreadInfo.c)
 *     zzzDestroyQueue @ 0x1401667F0 (zzzDestroyQueue.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x14016A0DC (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall FreeMessageList(__int64 a1, __int64 a2))(__int64)
{
  __int64 (__fastcall *result)(__int64); // rax

  result = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 1392LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64))result(a1);
  return result;
}
