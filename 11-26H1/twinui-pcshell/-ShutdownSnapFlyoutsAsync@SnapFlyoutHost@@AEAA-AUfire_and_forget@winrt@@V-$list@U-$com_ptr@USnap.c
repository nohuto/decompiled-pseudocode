/*
 * XREFs of ?ShutdownSnapFlyoutsAsync@SnapFlyoutHost@@AEAA?AUfire_and_forget@winrt@@V?$list@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@@Z @ 0x1805B4C4C
 * Callers:
 *     SnapFlyoutHost::HideAsync$_ResumeCoro$1 @ 0x1802699D0 (SnapFlyoutHost--HideAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ?_Alloc_sentinel_and_proxy@?$list@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1804F2278 (-_Alloc_sentinel_and_proxy@-$list@V-$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@w.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@PEAX@std@@@std@@@?$_List_node@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@PEAX@std@@@1@PEAU01@@Z @ 0x1805B215C (--$_Freenode@V-$allocator@U-$_List_node@U-$com_ptr@USnapFlyoutInstance@implementation@SnapCompon.c)
 *     SnapFlyoutHost::ShutdownSnapFlyoutsAsync$_ResumeCoro$1 @ 0x1805B4A70 (SnapFlyoutHost--ShutdownSnapFlyoutsAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=3
_BYTE *__fastcall SnapFlyoutHost::ShutdownSnapFlyoutsAsync(void (__fastcall *a1)(char *a1), _BYTE *a2, void **a3)
{
  void (__fastcall *v6)(char *); // rcx
  void (__fastcall *v7)(char *); // rdx
  _QWORD *v8; // rcx
  _QWORD **v9; // rdx
  _QWORD *v10; // rbx
  void (__fastcall **v12)(char *); // [rsp+50h] [rbp+8h]

  v12 = (void (__fastcall **)(char *))operator new(0x60uLL);
  v12[9] = a1;
  v12[10] = 0LL;
  v12[11] = 0LL;
  std::list<wil::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>>::_Alloc_sentinel_and_proxy(v12 + 10);
  v6 = v12[10];
  v12[10] = (void (__fastcall *)(char *))*a3;
  *a3 = v6;
  v7 = v12[11];
  v12[11] = (void (__fastcall *)(char *))a3[1];
  a3[1] = v7;
  *v12 = SnapFlyoutHost::ShutdownSnapFlyoutsAsync__ResumeCoro_1;
  *((_DWORD *)v12 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v12 + 64) = 0;
  SnapFlyoutHost::ShutdownSnapFlyoutsAsync__ResumeCoro_1((char *)v12);
  v8 = *a3;
  **((_QWORD **)*a3 + 1) = 0LL;
  v9 = (_QWORD **)*v8;
  if ( *v8 )
  {
    do
    {
      v10 = *v9;
      std::_List_node<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>,void *>::_Freenode<std::allocator<std::_List_node<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>,void *>>>(
        (__int64)v8,
        v9);
      v9 = (_QWORD **)v10;
    }
    while ( v10 );
  }
  std::_Deallocate<16>(*a3, (struct std::nothrow_t *)0x18);
  return a2;
}
