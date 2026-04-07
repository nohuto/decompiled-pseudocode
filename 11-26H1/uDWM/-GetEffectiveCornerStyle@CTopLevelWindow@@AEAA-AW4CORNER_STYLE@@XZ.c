/*
 * XREFs of ?GetEffectiveCornerStyle@CTopLevelWindow@@AEAA?AW4CORNER_STYLE@@XZ @ 0x180020704
 * Callers:
 *     ?GetRadiusFromCornerStyle@CTopLevelWindow@@AEAAMXZ @ 0x180020FE0 (-GetRadiusFromCornerStyle@CTopLevelWindow@@AEAAMXZ.c)
 *     ?GetShadowStyle@CTopLevelWindow@@AEAA?AW4ShadowStyle@CWindowBorder@@XZ @ 0x180062BF4 (-GetShadowStyle@CTopLevelWindow@@AEAA-AW4ShadowStyle@CWindowBorder@@XZ.c)
 * Callees:
 *     ?HasThinRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x1800202C0 (-HasThinRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x1800202D0 (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_RAIL_ServerWindowRounding@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800CBBA4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_RAIL_ServerWindowRounding@@@details@wil@@.c)
 */

__int64 __fastcall CTopLevelWindow::GetEffectiveCornerStyle(__int64 a1)
{
  __int64 v2; // rdx
  __int64 result; // rax
  char v4; // dl

  v2 = *((unsigned int *)CDesktopManager::s_pDesktopManagerInstance + 8);
  if ( (_DWORD)v2 == 5 )
  {
    LOBYTE(v2) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_RAIL_ServerWindowRounding>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_RAIL_ServerWindowRounding>::GetImpl'::`2'::impl,
      v2);
  }
  else if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 28)
         && !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 29)
         || (unsigned int)v2 > 1 )
  {
    return 1LL;
  }
  result = *(unsigned int *)(*(_QWORD *)(a1 + 696) + 184LL);
  if ( !(_DWORD)result )
  {
    if ( CTopLevelWindow::HasThinRenderedBorder(*(_DWORD *)(a1 + 568)) )
      return 3LL;
    else
      return (unsigned int)CTopLevelWindow::HasRenderedBorder(v4) + 1;
  }
  return result;
}
