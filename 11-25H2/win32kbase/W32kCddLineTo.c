/*
 * XREFs of W32kCddLineTo @ 0x14012CDDC
 * Callers:
 *     ?W32kCddLineToApiExt@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@KPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x14012CD10 (-W32kCddLineToApiExt@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@KPEAU_W32KCD.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall W32kCddLineTo(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        __int64 a10)
{
  __int64 (__fastcall *v14)(__int64, __int64, __int64, _QWORD, int, int, int, __int64, int, __int64); // r11

  v14 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, int, int, __int64, int, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 520LL);
  if ( v14 )
    return v14(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  else
    return 0LL;
}
