/*
 * XREFs of LW_BrushInit @ 0x1401A13F0
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x140135AA0 (-UserInitialize@@YAJXZ.c)
 *     xxxRemoteConnect @ 0x14016C380 (xxxRemoteConnect.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall LW_BrushInit(__int64 a1, __int64 a2))(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 544LL);
  if ( result )
    return (__int64 (*)(void))result();
  return result;
}
