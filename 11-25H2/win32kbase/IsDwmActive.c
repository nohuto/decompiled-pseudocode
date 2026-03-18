/*
 * XREFs of IsDwmActive @ 0x1400FC134
 * Callers:
 *     pProcessDfbSurfaces2 @ 0x140070C90 (pProcessDfbSurfaces2.c)
 *     DxgkEngIsDwmComposing @ 0x1400FC0F0 (DxgkEngIsDwmComposing.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1401CBA50 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall IsDwmActive(__int64 a1, __int64 a2))(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 72LL);
  if ( result )
    return (__int64 (*)(void))result();
  return result;
}
