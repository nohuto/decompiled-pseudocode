/*
 * XREFs of ??1SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18065556C
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@USwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@EEAAXXZ @ 0x180655980 (-_Destroy@-$_Ref_count_obj2@USwitchProviderActivator@implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801C8264 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@YAXPEAU?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@QEAU12@AEAV?$allocator@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@@0@@Z @ 0x180655050 (--$_Destroy_range@V-$allocator@U-$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop.c)
 *     ??1?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x180655260 (--1-$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator::~SwitchProviderActivator(
        winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator *this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx
  __int64 v4; // rcx

  winrt::event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::~event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>((__int64 *)this + 9);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 8);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  if ( *((_QWORD *)this + 6) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 6);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 5);
  if ( v3 )
    std::_Ref_count_base::_Decwref(v3);
  v4 = *((_QWORD *)this + 1);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<winrt::event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>>>(
      v4,
      *((_QWORD *)this + 2));
    std::_Deallocate<16>(
      *((void **)this + 1),
      (struct std::nothrow_t *)(8 * ((__int64)(*((_QWORD *)this + 3) - *((_QWORD *)this + 1)) >> 3)));
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
  }
}
