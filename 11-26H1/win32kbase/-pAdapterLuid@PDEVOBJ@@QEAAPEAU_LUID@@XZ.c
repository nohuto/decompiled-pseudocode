/*
 * XREFs of ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x140165780
 * Callers:
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1401656D8 (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 *     DrvDxgkUpgradeLegacyDpiSettings @ 0x1401F79B0 (DrvDxgkUpgradeLegacyDpiSettings.c)
 *     DxgkEngFindViewDesktopPosition @ 0x1401F9D30 (DxgkEngFindViewDesktopPosition.c)
 * Callees:
 *     <none>
 */

struct _LUID *__fastcall PDEVOBJ::pAdapterLuid(PDEVOBJ *this)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // r8

  v1 = *(_QWORD *)this;
  v2 = 0LL;
  v3 = *(_QWORD *)(v1 + 2568);
  if ( v3 == -4 )
  {
    if ( _bittest((const signed __int32 *)(v1 + 40), 0x11u) )
      return (struct _LUID *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 1784) + 40LL) + 2568LL) + 240LL);
  }
  else if ( !v3 )
  {
    return 0LL;
  }
  if ( !_bittest((const signed __int32 *)(v1 + 40), 0x11u) )
    return (struct _LUID *)(v3 + 240);
  return (struct _LUID *)v2;
}
