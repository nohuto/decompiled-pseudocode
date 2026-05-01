/*
 * XREFs of _SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1_::_1_::dtor$36 @ 0x1806F92E9
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$pair@PEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ @ 0x1802B8050 (--1-$pair@PEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@.c)
 */

void __fastcall SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__ResumeCoro_1_::_1_::dtor_36(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 720) = *(_QWORD *)(a2 + 800) + 776LL;
  std::pair<HMONITOR__ *,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>::~pair<HMONITOR__ *,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>(*(char **)(a2 + 720));
}
