/*
 * XREFs of IsXDCOBJ_vSetDefaultFontSupported @ 0x140128318
 * Callers:
 *     GreCreateDisplayDC @ 0x14003DEF0 (GreCreateDisplayDC.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsXDCOBJ_vSetDefaultFontSupported(__int64 a1)
{
  __int64 (*v1)(void); // rax

  v1 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24) + 1456LL);
  if ( v1 )
    return v1();
  else
    return 3221225659LL;
}
