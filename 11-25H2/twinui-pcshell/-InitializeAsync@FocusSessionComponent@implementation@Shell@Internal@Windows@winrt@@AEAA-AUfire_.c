/*
 * XREFs of ?InitializeAsync@FocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x180217910
 * Callers:
 *     ?perform_delayed_initialization@FocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1802178F0 (-perform_delayed_initialization@FocusSessionComponent@implementation@Shell@Internal@Windows@winr.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::InitializeAsync$_InitCoro$2 @ 0x180241F38 (winrt--Windows--Internal--Shell--implementation--FocusSessionComponent--InitializeAsync$_InitCor.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::InitializeAsync(
        __int64 a1,
        __int64 a2)
{
  void *v4; // rax
  int v6; // [rsp+A8h] [rbp+10h] BYREF

  v4 = operator new(0x70uLL);
  v6 = 0;
  winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::InitializeAsync__InitCoro_2(&v6, v4, a2, a1);
  return a2;
}
