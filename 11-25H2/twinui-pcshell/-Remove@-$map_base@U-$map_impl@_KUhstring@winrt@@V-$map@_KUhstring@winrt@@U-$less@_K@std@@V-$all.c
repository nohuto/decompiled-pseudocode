/*
 * XREFs of ?Remove@?$map_base@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@_KUhstring@3@@winrt@@QEAAXAEB_K@Z @ 0x18062A76C
 * Callers:
 *     ?Remove@?$produce@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@_KUhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAH_K@Z @ 0x18062A8C0 (-Remove@-$produce@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$less@_K@std@@V-$allo.c)
 * Callees:
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1801134D8 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositio.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DEC34 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x180338588 (--0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$_Find@_K@?$_Tree@V?$_Tmap_traits@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CB_KUhstring@winrt@@@std@@PEAX@1@AEB_K@Z @ 0x18061F2B8 (--$_Find@_K@-$_Tree@V-$_Tmap_traits@_KUhstring@winrt@@U-$less@_K@std@@V-$allocator@U-$pair@$$CB_.c)
 *     ??4?$_Node_handle@U?$_Tree_node@U?$pair@$$CB_KUhstring@winrt@@@std@@PEAX@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@2@U_Node_handle_map_base@2@_KUhstring@winrt@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180624714 (--4-$_Node_handle@U-$_Tree_node@U-$pair@$$CB_KUhstring@winrt@@@std@@PEAX@std@@V-$allocator@U-$pa.c)
 *     ?_Clear@?$_Node_handle@U?$_Tree_node@U?$pair@$$CB_KUhstring@winrt@@@std@@PEAX@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@2@U_Node_handle_map_base@2@_KUhstring@winrt@@@std@@AEAAXXZ @ 0x18062D190 (-_Clear@-$_Node_handle@U-$_Tree_node@U-$pair@$$CB_KUhstring@winrt@@@std@@PEAX@std@@V-$allocator@.c)
 */

__int64 __fastcall winrt::map_base<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>,unsigned __int64,winrt::hstring>::Remove(
        volatile signed __int32 *a1,
        _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  const struct winrt::impl::slim_source_location *v6; // rax
  _BYTE v7[24]; // [rsp+20h] [rbp-58h] BYREF
  void *v8; // [rsp+38h] [rbp-40h] BYREF
  char v9; // [rsp+40h] [rbp-38h]
  void *pExceptionObject[3]; // [rsp+48h] [rbp-30h] BYREF

  v8 = 0LL;
  v9 = 0;
  v3 = (__int64)(a1 + 2);
  if ( !a1 )
    v3 = 48LL;
  v4 = std::_Tree<std::_Tmap_traits<unsigned __int64,winrt::hstring,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,winrt::hstring>>,0>>::_Find<unsigned __int64>(
         (__int64 *)v3,
         a2);
  if ( v4 == *(_QWORD *)v3 )
  {
    v6 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v7);
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject, v6);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  _InterlockedIncrement(a1);
  pExceptionObject[0] = (void *)std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>>::_Extract(
                                  (_QWORD *)v3,
                                  v4);
  std::_Node_handle<std::_Tree_node<std::pair<unsigned __int64 const,winrt::hstring>,void *>,std::allocator<std::pair<unsigned __int64 const,winrt::hstring>>,std::_Node_handle_map_base,unsigned __int64,winrt::hstring>::operator=(
    &v8,
    pExceptionObject);
  std::_Node_handle<std::_Tree_node<std::pair<unsigned __int64 const,winrt::hstring>,void *>,std::allocator<std::pair<unsigned __int64 const,winrt::hstring>>,std::_Node_handle_map_base,unsigned __int64,winrt::hstring>::_Clear(pExceptionObject);
  return std::_Node_handle<std::_Tree_node<std::pair<unsigned __int64 const,winrt::hstring>,void *>,std::allocator<std::pair<unsigned __int64 const,winrt::hstring>>,std::_Node_handle_map_base,unsigned __int64,winrt::hstring>::_Clear(&v8);
}
