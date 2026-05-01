/*
 * XREFs of ?LoadStreamAsync@MeetAndChatFallbackProp@implementation@Shell@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@56@XZ @ 0x1805DA224
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync$_ResumeCoro$1 @ 0x1805D9310 (winrt--Windows--Internal--Shell--implementation--MeetAndChatIris--GetFallbackContentAsync$_Resum.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp::LoadStreamAsync$_InitCoro$2 @ 0x1805D9EE4 (winrt--Windows--Internal--Shell--implementation--MeetAndChatFallbackProp--LoadStreamAsync$_InitC.c)
 */

__int64 *__fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp::LoadStreamAsync(
        __int64 a1,
        __int64 *a2)
{
  void *v4; // rax
  int v6; // [rsp+138h] [rbp+10h] BYREF

  v4 = operator new(0x100uLL);
  v6 = 0;
  winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp::LoadStreamAsync__InitCoro_2(
    &v6,
    (__int64)v4 + 112,
    a2,
    a1);
  return a2;
}
