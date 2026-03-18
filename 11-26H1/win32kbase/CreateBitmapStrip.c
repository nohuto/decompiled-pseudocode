/*
 * XREFs of CreateBitmapStrip @ 0x140190818
 * Callers:
 *     xxxResetDisplayDevice @ 0x14007F460 (xxxResetDisplayDevice.c)
 *     xxxSetSysColors @ 0x1401B7328 (xxxSetSysColors.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall CreateBitmapStrip(__int64 a1))(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 3320LL);
  if ( result )
    return (__int64 (*)(void))result();
  return result;
}
