/*
 * XREFs of ?get@?$weak_ref@UIListViewBase@Controls@Xaml@UI@Windows@winrt@@@winrt@@QEBA@XZ @ 0x180101790
 * Callers:
 *     ?v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ @ 0x1801018C0 (-v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ.c)
 *     ??1?$event_revoker@UIListViewBase@Controls@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIListViewBase@Controls@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BNA@AA@impl@winrt@@QEAA@XZ @ 0x180684AEC (--1-$event_revoker@UIListViewBase@Controls@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIListViewBase@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::weak_ref<winrt::Windows::UI::Xaml::Controls::IListViewBase>::get(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v2 + 24LL))(
      v2,
      &winrt::impl::guid_v<winrt::Windows::UI::Xaml::Controls::IListViewBase>,
      &v5);
    *a2 = v5;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
