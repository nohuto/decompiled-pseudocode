/*
 * XREFs of ??$emplace_back@AEAURect@Foundation@Windows@@@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@QEAAAEAURect@Foundation@Windows@@AEAU234@@Z @ 0x180466390
 * Callers:
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x1800278A0 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?Show@TouchKeyboardExperienceManager@@UEAAJIURect@Foundation@Windows@@PEAUIViewOptions@Text@Shell@Internal@4@@Z @ 0x1801D9C30 (-Show@TouchKeyboardExperienceManager@@UEAAJIURect@Foundation@Windows@@PEAUIViewOptions@Text@Shel.c)
 *     ?GetGuidedSnapAssistRegions@SnapFlyoutHost@@QEAA?AV?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@XZ @ 0x1805B3D38 (-GetGuidedSnapAssistRegions@SnapFlyoutHost@@QEAA-AV-$vector@URect@Foundation@Windows@@V-$allocat.c)
 *     ?SnapWindow@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAX_KAEBURect@Foundation@67@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@7@@Z @ 0x1805BB31C (-SnapWindow@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ??$_Emplace_reallocate@UtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAPEAUtagRECT@@QEAU2@$$QEAU2@@Z @ 0x1802199B4 (--$_Emplace_reallocate@UtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAPEAU.c)
 */

_OWORD *__fastcall std::vector<Windows::Foundation::Rect>::emplace_back<Windows::Foundation::Rect &>(
        _QWORD *a1,
        __int128 *a2)
{
  __int128 *v3; // rdx
  __int64 v4; // rdx

  v3 = (__int128 *)a1[1];
  if ( v3 == (__int128 *)a1[2] )
    return std::vector<tagRECT>::_Emplace_reallocate<tagRECT>(a1, (__int64)v3, a2);
  *v3 = *a2;
  v4 = a1[1];
  a1[1] = v4 + 16;
  return (_OWORD *)v4;
}
