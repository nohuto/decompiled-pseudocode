/*
 * XREFs of ?OnMessage@TouchKeyboardExperienceManager@@UEAAJI_K_J@Z @ 0x1800B88D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateVisibileViewsBorder@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800B875C (-UpdateVisibileViewsBorder@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B8FF8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?OnDisplayChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1802168DC (-OnDisplayChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnMessage(RTL_SRWLOCK *this, __int64 a2, int a3, const WCHAR *a4)
{
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( (_DWORD)a2 == 26 )
  {
    LOBYTE(a2) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_PATKTI>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_PATKTI>::GetImpl'::`2'::impl,
      a2);
    if ( CompareStringOrdinal(a4, -1, L"ImmersiveColorSet", -1, 1) == 2 || a3 == 67 )
    {
      updated = TouchKeyboardExperienceManager::UpdateVisibileViewsBorder(this - 17);
      if ( updated < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x29C,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)updated);
    }
  }
  else if ( (_DWORD)a2 == 126 )
  {
    TouchKeyboardExperienceManager::OnDisplayChanged((TouchKeyboardExperienceManager *)&this[-17]);
  }
  return 0LL;
}
