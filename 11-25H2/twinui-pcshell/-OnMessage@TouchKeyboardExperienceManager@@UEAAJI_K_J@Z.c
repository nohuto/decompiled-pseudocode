/*
 * XREFs of ?OnMessage@TouchKeyboardExperienceManager@@UEAAJI_K_J@Z @ 0x1801C13E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800352AC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateVisibileViewsBorder@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1801C1490 (-UpdateVisibileViewsBorder@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?OnDisplayChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180225A74 (-OnDisplayChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnMessage(
        TouchKeyboardExperienceManager *this,
        int a2,
        int a3,
        const WCHAR *a4)
{
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 == 26 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_PATKTI>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_PATKTI>::GetImpl'::`2'::impl,
      1u,
      a3,
      (__int64)a4);
    if ( CompareStringOrdinal(a4, -1, L"ImmersiveColorSet", -1, 1) == 2 || a3 == 67 )
    {
      updated = TouchKeyboardExperienceManager::UpdateVisibileViewsBorder((TouchKeyboardExperienceManager *)((char *)this - 136));
      if ( updated < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x28F,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)updated);
    }
  }
  else if ( a2 == 126 )
  {
    TouchKeyboardExperienceManager::OnDisplayChanged((TouchKeyboardExperienceManager *)((char *)this - 136));
  }
  return 0LL;
}
