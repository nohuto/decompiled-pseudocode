/*
 * XREFs of ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x18022C708
 * Callers:
 *     ?UpdateShellPreferenceBasedOnThemeString@TouchKeyboardExperienceManager@@AEAAXQEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801EB674 (-UpdateShellPreferenceBasedOnThemeString@TouchKeyboardExperienceManager@@AEAAXQEBGAEAV-$basic_st.c)
 *     ?UpdateShellPreferencesBasedOnThemesString@TouchKeyboardExperienceManager@@AEAAXPEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@1@Z @ 0x18024D908 (-UpdateShellPreferencesBasedOnThemesString@TouchKeyboardExperienceManager@@AEAAXPEBGAEAV-$basic_.c)
 *     ??$?MGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0@Z @ 0x18029A9EC (--$-MGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA_NAEBV-$basic_string@GU-$char_traits@G@std@.c)
 *     ?TryUpdateAndReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAX_K@Z @ 0x1803FE6DC (-TryUpdateAndReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Win.c)
 * Callees:
 *     <none>
 */

char __fastcall std::wstring::compare(const wchar_t *a1, const wchar_t *a2)
{
  size_t v2; // r9
  size_t v3; // rax

  v2 = *((_QWORD *)a2 + 2);
  if ( *((_QWORD *)a2 + 3) > 7uLL )
    a2 = *(const wchar_t **)a2;
  v3 = *((_QWORD *)a1 + 2);
  if ( *((_QWORD *)a1 + 3) > 7uLL )
    a1 = *(const wchar_t **)a1;
  return std::_Traits_compare<std::char_traits<unsigned short>>(a1, v3, a2, v2);
}
