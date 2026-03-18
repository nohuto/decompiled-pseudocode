/*
 * XREFs of ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x140127250
 * Callers:
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1401271A0 (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 *     DrvDxgkUpgradeLegacyDpiSettings @ 0x1401CE0F0 (DrvDxgkUpgradeLegacyDpiSettings.c)
 *     DxgkEngFindViewDesktopPosition @ 0x1401D06A0 (DxgkEngFindViewDesktopPosition.c)
 * Callees:
 *     <none>
 */

struct _LUID *__fastcall PDEVOBJ::pAdapterLuid(PDEVOBJ *this)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  struct _LUID *result; // rax

  v1 = *(_QWORD *)this;
  v2 = *(_QWORD *)(*(_QWORD *)this + 2568LL);
  if ( v2 == -4 && _bittest((const signed __int32 *)(v1 + 40), 0x11u) )
    return (struct _LUID *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 1784) + 40LL) + 2568LL) + 240LL);
  result = 0LL;
  if ( v2 )
  {
    if ( !_bittest((const signed __int32 *)(v1 + 40), 0x11u) )
      return (struct _LUID *)(v2 + 240);
  }
  return result;
}
