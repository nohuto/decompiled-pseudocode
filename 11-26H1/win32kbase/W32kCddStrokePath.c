/*
 * XREFs of W32kCddStrokePath @ 0x14014B414
 * Callers:
 *     ?W32kCddStrokePathApiExt@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@KPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x14014B350 (-W32kCddStrokePathApiExt@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall W32kCddStrokePath(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9))(__int64, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64)
{
  __int64 (__fastcall *result)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24) + 536LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64))result(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  return result;
}
