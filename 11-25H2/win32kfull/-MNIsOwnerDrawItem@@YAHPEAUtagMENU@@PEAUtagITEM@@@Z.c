/*
 * XREFs of ?MNIsOwnerDrawItem@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x140042B54
 * Callers:
 *     xxxMNInvertItem @ 0x14003E628 (xxxMNInvertItem.c)
 *     xxxDrawMenuItem @ 0x14004086C (xxxDrawMenuItem.c)
 *     xxxMNCompute @ 0x140041D3C (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x140042684 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1401920B4 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x140205BB0 (xxxDrawMenuBarUnderlines.c)
 * Callees:
 *     ?MNIsUAHMenu@@YAHPEAUtagMENU@@@Z @ 0x140048F9C (-MNIsUAHMenu@@YAHPEAUtagMENU@@@Z.c)
 */

__int64 __fastcall MNIsOwnerDrawItem(struct tagMENU *a1, struct tagITEM *a2)
{
  unsigned int v2; // ecx
  int v4; // eax

  if ( (**(_DWORD **)a2 & 0x100) != 0 )
    return 1;
  v4 = MNIsUAHMenu(a1);
  v2 = 0;
  if ( v4 )
    return 1;
  return v2;
}
