/*
 * XREFs of ??$_Emplace@AEAW4WindowingEnvironmentType@@AEAV?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@?$_Tree@V?$_Tmap_traits@W4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@U?$less@W4WindowingEnvironmentType@@@std@@V?$allocator@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEAW4WindowingEnvironmentType@@AEAV?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180138E28
 * Callers:
 *     _lambda_68022f0d3b489cdc066e60d642ae628d_::operator() @ 0x180138C54 (_lambda_68022f0d3b489cdc066e60d642ae628d_--operator().c)
 * Callees:
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800CD100 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800CF550 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1803151E4 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Tree<std::_Tmap_traits<enum WindowingEnvironmentType,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>,std::less<enum WindowingEnvironmentType>,std::allocator<std::pair<enum WindowingEnvironmentType const,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>>>,0>>::_Emplace<enum WindowingEnvironmentType &,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy> &>(
        _QWORD *a1,
        __int64 a2,
        int *a3,
        __int64 *a4)
{
  __int64 *v8; // rbp
  __int64 *v9; // rax
  __int64 *v10; // rdx
  int v11; // ecx
  __int64 v12; // rbx
  __int128 v14; // [rsp+20h] [rbp-48h] BYREF
  __int128 v15; // [rsp+30h] [rbp-38h]

  v8 = (__int64 *)*a1;
  v9 = *(__int64 **)(*a1 + 8LL);
  v15 = (unsigned __int64)v9;
  v10 = v8;
  if ( !*((_BYTE *)v9 + 25) )
  {
    v11 = *a3;
    do
    {
      *(_QWORD *)&v15 = v9;
      if ( *((_DWORD *)v9 + 8) < v11 )
      {
        DWORD2(v15) = 0;
        v9 += 2;
      }
      else
      {
        DWORD2(v15) = 1;
        v10 = v9;
      }
      v9 = (__int64 *)*v9;
    }
    while ( !*((_BYTE *)v9 + 25) );
  }
  if ( *((_BYTE *)v10 + 25) || *a3 < *((_DWORD *)v10 + 8) )
  {
    if ( a1[1] == 0x555555555555555LL )
      std::_Throw_tree_length_error();
    v14 = (unsigned __int64)a1;
    v12 = std::_Allocate<16,std::_Default_allocate_traits>(48LL);
    *(_DWORD *)(v12 + 32) = *a3;
    wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
      (__int64 *)(v12 + 40),
      a4);
    *(_QWORD *)v12 = v8;
    *(_QWORD *)(v12 + 8) = v8;
    *(_QWORD *)(v12 + 16) = v8;
    *(_WORD *)(v12 + 24) = 0;
    v14 = v15;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v14,
                      v12);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
