/*
 * XREFs of ?KeepAlive@CSingleViewShellExperience@@QEAAJXZ @ 0x1802B69E4
 * Callers:
 *     ?OnViewCreated@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803828E0 (-OnViewCreated@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?KeepAlive@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ @ 0x1803B5B00 (-KeepAlive@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Navigate@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x1801D3A20 (-Navigate@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManage.c)
 */

__int64 __fastcall CSingleViewShellExperience::KeepAlive(CSingleViewShellExperience *this)
{
  ExperienceManagerUtils *v1; // rdx
  int v2; // eax
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (ExperienceManagerUtils *)*((_QWORD *)this + 3);
  if ( (*((_BYTE *)this + 132) & 0x40) != 0 )
  {
    v2 = ShellExperienceHelpers::NavigationLevelOverrideHelper::Navigate((unsigned int *)this + 18, v1, 3u);
    if ( v2 < 0 )
    {
      v3 = 949LL;
LABEL_6:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v3,
        (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v2);
    }
  }
  else
  {
    v2 = ShellExperienceHelpers::NavigationLevelOverrideHelper::Navigate((unsigned int *)this + 18, v1, 4u);
    if ( v2 < 0 )
    {
      v3 = 953LL;
      goto LABEL_6;
    }
  }
  return 0LL;
}
