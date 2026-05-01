/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync$_ResumeCoro$1_::_1_::dtor$4 @ 0x1806D7A4A
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$producer_ref@USearchAppHost@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEAA@XZ @ 0x1802D00B0 (--1-$producer_ref@USearchAppHost@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync__ResumeCoro_1_::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 152) = *(_QWORD *)(a2 + 240) + 80LL;
  winrt::impl::producer_ref<winrt::WindowsUdk::UI::Shell::SearchAppHost>::~producer_ref<winrt::WindowsUdk::UI::Shell::SearchAppHost>(*(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(a2 + 152));
}
