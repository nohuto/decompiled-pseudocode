/*
 * XREFs of ?IsViewPartOfForegroundApplication@ViewHelper@@SA_NAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1801A3728
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180014BD0 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ?TryActivate@ActivationProcessor@@QEAA_NUActivationInformation@@@Z @ 0x1801A9350 (-TryActivate@ActivationProcessor@@QEAA_NUActivationInformation@@@Z.c)
 * Callees:
 *     ?GetTopLevelHostView@ViewHierarchyWithWindowManager@@QEAAII@Z @ 0x1800AC3C4 (-GetTopLevelHostView@ViewHierarchyWithWindowManager@@QEAAII@Z.c)
 *     ?GetActiveViewInstanceId@ViewHierarchyWithWindowManager@@QEAAIXZ @ 0x180161ABC (-GetActiveViewInstanceId@ViewHierarchyWithWindowManager@@QEAAIXZ.c)
 */

bool __fastcall ViewHelper::IsViewPartOfForegroundApplication(struct ViewHierarchyWithWindowManager *this, int a2)
{
  int ActiveViewInstanceId; // eax
  int TopLevelHostView; // ebx

  ActiveViewInstanceId = ViewHierarchyWithWindowManager::GetActiveViewInstanceId(this);
  TopLevelHostView = ViewHierarchyWithWindowManager::GetTopLevelHostView(this, ActiveViewInstanceId);
  return (unsigned int)ViewHierarchyWithWindowManager::GetTopLevelHostView(this, a2) == TopLevelHostView;
}
