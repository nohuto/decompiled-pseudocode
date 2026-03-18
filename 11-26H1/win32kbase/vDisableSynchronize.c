/*
 * XREFs of vDisableSynchronize @ 0x140185E78
 * Callers:
 *     bDynamicModeChange @ 0x140030E68 (bDynamicModeChange.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXE@Z @ 0x1401B9140 (-vDisableSurface@PDEVOBJ@@QEAAXE@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall vDisableSynchronize(__int64 a1))(__int64)
{
  __int64 (__fastcall *result)(__int64); // rax

  result = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24) + 1560LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64))result(a1);
  return result;
}
