/*
 * XREFs of ?get_PendingViewAction@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAW4PendingViewAction@CSingleViewShellExperience@@@Z @ 0x1803B6690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::get_PendingViewAction(
        TwinUI::Cortana::ShellExperienceView *this,
        enum CSingleViewShellExperience::PendingViewAction *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 24);
  return 0LL;
}
