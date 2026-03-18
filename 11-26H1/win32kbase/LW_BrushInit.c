/*
 * XREFs of LW_BrushInit @ 0x1401C4FFC
 * Callers:
 *     xxxRemoteConnect @ 0x14007DC00 (xxxRemoteConnect.c)
 *     ?UserInitialize@@YAJXZ @ 0x140170DB4 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall LW_BrushInit(__int64 a1))(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 536LL);
  if ( result )
    return (__int64 (*)(void))result();
  return result;
}
