/*
 * XREFs of IsXDCOBJ_vSetDefaultFontSupported @ 0x1400DE8A4
 * Callers:
 *     GreCreateDisplayDC @ 0x140041200 (GreCreateDisplayDC.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsXDCOBJ_vSetDefaultFontSupported(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax

  v2 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 1496LL);
  if ( v2 )
    return v2();
  else
    return 3221225659LL;
}
