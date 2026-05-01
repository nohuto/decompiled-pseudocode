/*
 * XREFs of ??0WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBU?$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@5@AEBUWindowTabDataModel@2UI@345@Uevent_token@5@2@Z @ 0x180190860
 * Callers:
 *     ??$?0V?$tuple@AEB_K@std@@V?$tuple@AEAU?$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAUWindowTabDataModel@Shell@UI@Internal@Windows@2@AEAUevent_token@2@AEAU82@@1@$0A@$$Z$0A@$00$01$02@?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@AEAA@AEAV?$tuple@AEB_K@1@AEAV?$tuple@AEAU?$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAUWindowTabDataModel@Shell@UI@Internal@Windows@2@AEAUevent_token@2@AEAU82@@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$0A@$00$01$02@1@@Z @ 0x180286B7C (--$-0V-$tuple@AEB_K@std@@V-$tuple@AEAU-$com_ptr@UTabProxyWindowFactory@implementation@Shell@Inte.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@@Z @ 0x180136968 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??0?$unordered_map@Uguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@9@V?$allocator@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@9@@std@@QEAA@XZ @ 0x18028668C (--0-$unordered_map@Uguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@U-$hash@Uguid@winrt@@.c)
 *     ??0?$deque@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@QEAA@XZ @ 0x1802BFDCC (--0-$deque@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_clock@chrono@.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowData::WindowData(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5)
{
  __int64 *v8; // rcx
  _QWORD *v9; // rax

  *(_QWORD *)a1 = 0LL;
  v8 = (__int64 *)(a1 + 8);
  *v8 = *a2;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v8);
  *(_QWORD *)(a1 + 16) = *a3;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)(a1 + 16));
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v9 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(40LL);
  *v9 = v9;
  v9[1] = v9;
  *(_QWORD *)(a1 + 32) = v9;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 7LL;
  *(_QWORD *)(a1 + 80) = 8LL;
  *(_DWORD *)(a1 + 24) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>>>>>::_Assign_grow(
    (unsigned __int64 **)(a1 + 48),
    0x10uLL,
    *(_QWORD *)(a1 + 32));
  std::unordered_map<winrt::guid,winrt::Windows::Internal::UI::Shell::WindowTabView>::unordered_map<winrt::guid,winrt::Windows::Internal::UI::Shell::WindowTabView>(a1 + 88);
  std::deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>::deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>(a1 + 152);
  *(_QWORD *)(a1 + 192) = a4;
  *(_QWORD *)(a1 + 200) = a5;
  *(_BYTE *)(a1 + 208) = 0;
  return a1;
}
