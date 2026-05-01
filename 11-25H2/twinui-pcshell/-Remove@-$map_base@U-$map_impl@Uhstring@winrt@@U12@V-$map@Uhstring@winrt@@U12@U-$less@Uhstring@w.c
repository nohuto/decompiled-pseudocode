/*
 * XREFs of ?Remove@?$map_base@U?$map_impl@Uhstring@winrt@@U12@V?$map@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@U43@@winrt@@QEAAXAEBUhstring@2@@Z @ 0x1803394E4
 * Callers:
 *     ?Remove@?$produce@U?$map_impl@Uhstring@winrt@@U12@V?$map@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAX@Z @ 0x1803395B0 (-Remove@-$produce@U-$map_impl@Uhstring@winrt@@U12@V-$map@Uhstring@winrt@@U12@U-$less@Uhstring@wi.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DEC34 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??$_Find@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@1@AEBUhstring@winrt@@@Z @ 0x180337CB0 (--$_Find@Uhstring@winrt@@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@U12@U-$less@Uhstring@winrt@@@s.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x180338588 (--0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??4?$_Node_handle@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@2@U_Node_handle_map_base@2@Uhstring@winrt@@U56@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1803386F8 (--4-$_Node_handle@U-$_Tree_node@U-$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@V-$allocator@U-$.c)
 *     ?_Clear@?$_Node_handle@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@2@U_Node_handle_map_base@2@Uhstring@winrt@@U56@@std@@AEAAXXZ @ 0x18033A088 (-_Clear@-$_Node_handle@U-$_Tree_node@U-$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@V-$allocato.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18033A0C0 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@QE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::map_base<winrt::impl::map_impl<winrt::hstring,winrt::hstring,std::map<winrt::hstring,winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::hstring,winrt::hstring>::Remove(
        volatile signed __int32 *a1,
        __int64 a2)
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
  v4 = std::_Tree<std::_Tmap_traits<winrt::hstring,winrt::hstring,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,winrt::hstring>>,0>>::_Find<winrt::hstring>(
         v3,
         a2);
  if ( v4 == *(_QWORD *)v3 )
  {
    v6 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v7);
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject, v6);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  _InterlockedIncrement(a1);
  pExceptionObject[0] = (void *)std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>::_Extract(
                                  v3,
                                  v4);
  std::_Node_handle<std::_Tree_node<std::pair<winrt::hstring const,winrt::hstring>,void *>,std::allocator<std::pair<winrt::hstring const,winrt::hstring>>,std::_Node_handle_map_base,winrt::hstring,winrt::hstring>::operator=(
    &v8,
    pExceptionObject);
  std::_Node_handle<std::_Tree_node<std::pair<winrt::hstring const,winrt::hstring>,void *>,std::allocator<std::pair<winrt::hstring const,winrt::hstring>>,std::_Node_handle_map_base,winrt::hstring,winrt::hstring>::_Clear(pExceptionObject);
  return std::_Node_handle<std::_Tree_node<std::pair<winrt::hstring const,winrt::hstring>,void *>,std::allocator<std::pair<winrt::hstring const,winrt::hstring>>,std::_Node_handle_map_base,winrt::hstring,winrt::hstring>::_Clear(&v8);
}
