/*
 * XREFs of IsCreateBitmapStripSupported @ 0x14007F288
 * Callers:
 *     xxxResetDisplayDevice @ 0x14007F460 (xxxResetDisplayDevice.c)
 *     xxxSetSysColors @ 0x1401B7328 (xxxSetSysColors.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsCreateBitmapStripSupported(__int64 a1)
{
  __int64 (*v1)(void); // rax

  v1 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 3312LL);
  if ( v1 )
    return v1();
  else
    return 3221225659LL;
}
