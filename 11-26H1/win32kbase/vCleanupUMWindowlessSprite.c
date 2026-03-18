/*
 * XREFs of vCleanupUMWindowlessSprite @ 0x140023BB4
 * Callers:
 *     ?GrepCloseCurrentProcessPreserveObjectReference@@YAHXZ @ 0x140025730 (-GrepCloseCurrentProcessPreserveObjectReference@@YAHXZ.c)
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1401FA56C (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall vCleanupUMWindowlessSprite(__int64 a1))(_QWORD)
{
  unsigned int v1; // ebx
  __int64 (__fastcall *result)(_QWORD); // rax

  v1 = a1;
  result = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24) + 2344LL);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD))result(v1);
  return result;
}
