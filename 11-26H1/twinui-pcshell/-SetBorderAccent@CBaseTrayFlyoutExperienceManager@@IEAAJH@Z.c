/*
 * XREFs of ?SetBorderAccent@CBaseTrayFlyoutExperienceManager@@IEAAJH@Z @ 0x1803C55C8
 * Callers:
 *     ?OnViewCloaking@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803C3A30 (-OnViewCloaking@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewUncloaking@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803C46B0 (-OnViewUncloaking@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x1801F02F4 (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     ?GetBorderFlagFromStuckEdge@CBaseTrayFlyoutExperienceManager@@QEAA?AW4Border@CSingleViewShellExperience@@W4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x1803C2378 (-GetBorderFlagFromStuckEdge@CBaseTrayFlyoutExperienceManager@@QEAA-AW4Border@CSingleViewShellExp.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::SetBorderAccent(CBaseTrayFlyoutExperienceManager *this, int a2)
{
  CBaseTrayFlyoutExperienceManager *v2; // r10
  unsigned int BorderFlagFromStuckEdge; // eax

  v2 = this;
  if ( a2 )
    BorderFlagFromStuckEdge = CBaseTrayFlyoutExperienceManager::GetBorderFlagFromStuckEdge(this, *((_DWORD *)this + 92));
  else
    BorderFlagFromStuckEdge = 0;
  CSingleViewShellExperience::ShowBorder((__int64)v2 + 72, BorderFlagFromStuckEdge);
  return 0LL;
}
