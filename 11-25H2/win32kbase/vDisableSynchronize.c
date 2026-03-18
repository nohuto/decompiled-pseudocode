/*
 * XREFs of vDisableSynchronize @ 0x140093254
 * Callers:
 *     ?vDisableSurface@PDEVOBJ@@QEAAXE@Z @ 0x140092BB0 (-vDisableSurface@PDEVOBJ@@QEAAXE@Z.c)
 *     bDynamicModeChange @ 0x1401793D8 (bDynamicModeChange.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall vDisableSynchronize(__int64 a1))(__int64)
{
  __int64 (__fastcall *result)(__int64); // rax

  result = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1600LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64))result(a1);
  return result;
}
