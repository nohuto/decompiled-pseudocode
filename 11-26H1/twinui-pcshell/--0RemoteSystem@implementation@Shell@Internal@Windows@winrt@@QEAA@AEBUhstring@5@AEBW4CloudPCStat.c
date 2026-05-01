/*
 * XREFs of ??0RemoteSystem@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBUhstring@5@AEBW4CloudPCState@2345@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x1806653AC
 * Callers:
 *     ??$make@URemoteSystem@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@W4CloudPCState@3456@AEAV?$duration@HU?$ratio@$0DM@$00@std@@@chrono@std@@@winrt@@YA?A_PAEBUhstring@0@$$QEAW4CloudPCState@Shell@Internal@Windows@0@AEAV?$duration@HU?$ratio@$0DM@$00@std@@@chrono@std@@@Z @ 0x180646888 (--$make@URemoteSystem@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@W4CloudPCState@.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$create_and_initialize@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@impl@winrt@@YAPEAU?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@01@$$QEAV?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@Z @ 0x18066501C (--$create_and_initialize@U-$vector_impl@UWindowId@UI@Windows@winrt@@V-$vector@UWindowId@UI@Windo.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSystem::RemoteSystem(
        __int64 a1,
        const struct winrt::hstring *a2,
        _DWORD *a3,
        _QWORD *a4)
{
  _QWORD *v7; // rax
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  *(_QWORD *)(a1 + 16) = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSystem,winrt::Windows::Internal::Shell::IRemoteSystem>::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)(a1 + 8) = 1LL;
  *(_QWORD *)a1 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::RemoteSystem>::`vftable';
  winrt::hstring::hstring((winrt::hstring *)(a1 + 24), a2, (unsigned int)a3);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 40) = *a3;
  *(_QWORD *)(a1 + 48) = *a4;
  v9 = 0LL;
  v10 = 0LL;
  v7 = winrt::impl::create_and_initialize<winrt::impl::vector_impl<winrt::Windows::UI::WindowId,std::vector<winrt::Windows::UI::WindowId>,winrt::impl::single_threaded_collection_base>,std::vector<winrt::Windows::UI::WindowId>>((__int64 *)&v9);
  *(_QWORD *)(a1 + 56) = (unsigned __int64)(v7 + 2) & -(__int64)(v7 != 0LL);
  if ( (_QWORD)v9 )
    std::_Deallocate<16>((void *)v9, (struct std::nothrow_t *)((v10 - v9) & 0xFFFFFFFFFFFFFFF8uLL));
  return a1;
}
