/*
 * XREFs of FreeMessageList @ 0x1400B94F0
 * Callers:
 *     UserDeleteW32Thread @ 0x140091290 (UserDeleteW32Thread.c)
 *     zzzDestroyQueue @ 0x1400B8EC0 (zzzDestroyQueue.c)
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x14019A350 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall FreeMessageList(__int64 a1))(__int64)
{
  __int64 (__fastcall *result)(__int64); // rax

  result = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 1168LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64))result(a1);
  return result;
}
