/*
 * XREFs of GetDesktopHeapSize @ 0x14019AF60
 * Callers:
 *     ?ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z @ 0x14019AE6C (-ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall GetDesktopHeapSize(__int64 a1, __int64 a2))(_QWORD)
{
  unsigned __int16 v2; // bx
  __int64 (__fastcall *result)(_QWORD); // rax

  v2 = a1;
  result = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 3096LL);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD))result(v2);
  return result;
}
