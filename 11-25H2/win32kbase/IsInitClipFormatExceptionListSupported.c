/*
 * XREFs of IsInitClipFormatExceptionListSupported @ 0x14023EEE8
 * Callers:
 *     Win32UserInitialize @ 0x1402EB804 (Win32UserInitialize.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsInitClipFormatExceptionListSupported(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax

  v2 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 3392LL);
  if ( v2 )
    return v2();
  else
    return 3221225659LL;
}
