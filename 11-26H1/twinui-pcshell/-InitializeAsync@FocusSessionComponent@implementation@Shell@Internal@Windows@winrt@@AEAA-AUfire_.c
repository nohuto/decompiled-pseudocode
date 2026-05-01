/*
 * XREFs of ?InitializeAsync@FocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x1802188B0
 * Callers:
 *     ?perform_delayed_initialization@FocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x180218890 (-perform_delayed_initialization@FocusSessionComponent@implementation@Shell@Internal@Windows@winr.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::InitializeAsync$_ResumeCoro$1 @ 0x180233090 (winrt--Windows--Internal--Shell--implementation--FocusSessionComponent--InitializeAsync$_ResumeC.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::InitializeAsync(
        __int64 a1,
        _BYTE *a2)
{
  _QWORD *v5; // [rsp+40h] [rbp+8h]

  v5 = operator new(0x70uLL);
  v5[13] = a1;
  *v5 = winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::InitializeAsync__ResumeCoro_1;
  *((_DWORD *)v5 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v5 + 96) = 0;
  winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::InitializeAsync__ResumeCoro_1();
  return a2;
}
