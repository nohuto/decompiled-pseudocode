/*
 * XREFs of _SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1_::_1_::dtor$32 @ 0x1806D0B72
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$pair@PEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ @ 0x1802C0F00 (--1-$pair@PEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@.c)
 */

void __fastcall SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__ResumeCoro_1_::_1_::dtor_32(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 1200) = *(_QWORD *)(a2 + 1280) + 728LL;
  std::pair<HMONITOR__ *,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>::~pair<HMONITOR__ *,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>(*(char **)(a2 + 1200));
}
