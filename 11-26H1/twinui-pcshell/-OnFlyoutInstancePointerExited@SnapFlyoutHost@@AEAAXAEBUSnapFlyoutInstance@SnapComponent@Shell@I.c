/*
 * XREFs of ?OnFlyoutInstancePointerExited@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x1805B44B0
 * Callers:
 *     <none>
 * Callees:
 *     ?HideAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@_N@Z @ 0x180269D20 (-HideAsync@SnapFlyoutHost@@QEAA-AUfire_and_forget@winrt@@_N@Z.c)
 */

void __fastcall SnapFlyoutHost::OnFlyoutInstancePointerExited(
        SnapFlyoutHost *this,
        const struct winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance *a2)
{
  char v2; // [rsp+40h] [rbp+18h] BYREF

  SnapFlyoutHost::HideAsync((void (__fastcall *)(char *))this, &v2, 0);
}
