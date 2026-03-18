/*
 * XREFs of IsDwmActive @ 0x140140458
 * Callers:
 *     pProcessDfbSurfaces2 @ 0x140030400 (pProcessDfbSurfaces2.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140140030 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     DxgkEngIsDwmComposing @ 0x140140410 (DxgkEngIsDwmComposing.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall IsDwmActive(__int64 a1))(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24) + 72LL);
  if ( result )
    return (__int64 (*)(void))result();
  return result;
}
