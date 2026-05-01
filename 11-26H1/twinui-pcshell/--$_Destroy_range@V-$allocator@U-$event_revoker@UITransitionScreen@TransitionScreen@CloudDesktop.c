/*
 * XREFs of ??$_Destroy_range@V?$allocator@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@YAXPEAU?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@QEAU12@AEAV?$allocator@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@@0@@Z @ 0x180655050
 * Callers:
 *     ??1BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18065538C (--1BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18065556C (--1SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??$_Uninitialized_move@PEAU?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@YAPEAU?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@QEAU12@0PEAU12@AEAV?$allocator@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@@0@@Z @ 0x180667F18 (--$_Uninitialized_move@PEAU-$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shel.c)
 *     ??1_Reallocation_guard@?$vector@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@QEAA@XZ @ 0x18066825C (--1_Reallocation_guard@-$vector@U-$event_revoker@UITransitionScreen@TransitionScreen@CloudDeskto.c)
 *     ?_Change_array@?$vector@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@AEAAXQEAU?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@_K1@Z @ 0x1806699C8 (-_Change_array@-$vector@U-$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@.c)
 *     ?clear@?$vector@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@QEAAXXZ @ 0x180669A98 (-clear@-$vector@U-$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal.c)
 * Callees:
 *     ??1?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x180655260 (--1-$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<winrt::event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = winrt::event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::~event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>(v3);
      v3 += 24LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
