/*
 * XREFs of CleanupIAMAccess @ 0x14023E70C
 * Callers:
 *     DestroyProcessInfo @ 0x140162224 (DestroyProcessInfo.c)
 *     xxxDestroyThreadInfo @ 0x140164194 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall CleanupIAMAccess(__int64 a1, __int64 a2))(__int64)
{
  __int64 (__fastcall *result)(__int64); // rax

  result = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 1416LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64))result(a1);
  return result;
}
