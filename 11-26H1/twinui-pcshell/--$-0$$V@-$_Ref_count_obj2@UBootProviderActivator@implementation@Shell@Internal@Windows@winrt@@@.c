/*
 * XREFs of ??$?0$$V@?$_Ref_count_obj2@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ @ 0x1802A3C9C
 * Callers:
 *     ??$make_shared@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA?AV?$shared_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@0@XZ @ 0x1802A3BE4 (--$make_shared@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA-A.c)
 * Callees:
 *     ??0TransitionScreenId@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18066818C (--0TransitionScreenId@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::BootProviderActivator>::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::BootProviderActivator>(
        __int64 a1)
{
  __int64 v1; // rdx

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::BootProviderActivator>::`vftable';
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 16) = &winrt::Windows::Internal::Shell::implementation::BootProviderActivator::`vftable';
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_BYTE *)(a1 + 80) = 0;
  winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId::TransitionScreenId((winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId *)(a1 + 84));
  return v1;
}
