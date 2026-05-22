/*
 * XREFs of ??1HotKeyProcessor@@UEAA@XZ @ 0x1801CEFCC
 * Callers:
 *     ??_GHotKeyProcessor@@UEAAPEAXI@Z @ 0x1801CF660 (--_GHotKeyProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BB00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEAX@std@@@std@@@?$_List_node@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEAX@std@@@1@PEAU01@@Z @ 0x1801CE374 (--$_Freenode@V-$allocator@U-$_List_node@V-$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEA.c)
 *     ??1?$_Tree@V?$_Tmap_traits@KV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x1801CED70 (--1-$_Tree@V-$_Tmap_traits@KV-$list@V-$shared_ptr@UHotKeyInfo@@@std@@V-$allocator@V-$shared_ptr@.c)
 *     ??1?$_Tree@V?$_Tmap_traits@_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x1801CEDD0 (--1-$_Tree@V-$_Tmap_traits@_KV-$set@V-$shared_ptr@UHotKeyInfo@@@std@@U-$less@V-$shared_ptr@UHotK.c)
 *     ?Release@SharedMessagePortRefPtr@@QEAAXXZ @ 0x1801D2070 (-Release@SharedMessagePortRefPtr@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall HotKeyProcessor::~HotKeyProcessor(HotKeyProcessor *this)
{
  std::_Ref_count_base *v2; // rcx
  __int64 v3; // rcx
  __int64 *v4; // rdx
  __int64 v5; // rbx

  *(_QWORD *)this = &HotKeyProcessor::`vftable'{for `IRemoteHotKeyProcessor'};
  *((_QWORD *)this + 1) = &HotKeyProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMessageProxyListener>'};
  SharedMessagePortRefPtr::Release((HotKeyProcessor *)((char *)this + 376));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 46);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 45);
  std::_Tree<std::_Tmap_traits<unsigned __int64,std::set<std::shared_ptr<HotKeyInfo>>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::set<std::shared_ptr<HotKeyInfo>>>>,0>>::~_Tree<std::_Tmap_traits<unsigned __int64,std::set<std::shared_ptr<HotKeyInfo>>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::set<std::shared_ptr<HotKeyInfo>>>>,0>>((void **)this + 42);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 41);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  std::_Tree<std::_Tmap_traits<unsigned long,std::list<std::shared_ptr<HotKeyInfo>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::list<std::shared_ptr<HotKeyInfo>>>>,0>>::~_Tree<std::_Tmap_traits<unsigned long,std::list<std::shared_ptr<HotKeyInfo>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::list<std::shared_ptr<HotKeyInfo>>>>,0>>((void **)this + 5);
  v3 = *((_QWORD *)this + 3);
  **(_QWORD **)(v3 + 8) = 0LL;
  v4 = *(__int64 **)v3;
  if ( *(_QWORD *)v3 )
  {
    do
    {
      v5 = *v4;
      std::_List_node<Microsoft::WRL::ComPtr<HotkeyClientRegistration>,void *>::_Freenode<std::allocator<std::_List_node<Microsoft::WRL::ComPtr<HotkeyClientRegistration>,void *>>>(
        v3,
        v4);
      v4 = (__int64 *)v5;
    }
    while ( v5 );
  }
  std::_Deallocate<16>(*((void **)this + 3), (struct std::nothrow_t *)0x18);
  *((_DWORD *)this + 5) = -1073741823;
}
