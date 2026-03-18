/*
 * XREFs of IsInitClipFormatExceptionListSupported @ 0x140249248
 * Callers:
 *     Win32UserInitialize @ 0x1402F23AC (Win32UserInitialize.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsInitClipFormatExceptionListSupported(__int64 a1)
{
  __int64 (*v1)(void); // rax

  v1 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 2992LL);
  if ( v1 )
    return v1();
  else
    return 3221225659LL;
}
