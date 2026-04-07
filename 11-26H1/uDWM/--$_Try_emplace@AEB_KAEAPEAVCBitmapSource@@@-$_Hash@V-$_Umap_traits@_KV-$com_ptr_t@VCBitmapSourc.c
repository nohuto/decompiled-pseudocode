/*
 * XREFs of ??$_Try_emplace@AEB_KAEAPEAVCBitmapSource@@@?$_Hash@V?$_Umap_traits@_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEB_KAEAPEAVCBitmapSource@@@Z @ 0x18009A4EC
 * Callers:
 *     ?AddSubBitmap@CBitmapSource@@AEBAXPEAV1@AEBUtagRECT@@@Z @ 0x18009A828 (-AddSubBitmap@CBitmapSource@@AEBAXPEAV1@AEBUtagRECT@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000D1E0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@W4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@V?$_Uhash_compare@W4ShellTransitionType@Transitions@Udwm@winrt@@U?$hash@W4ShellTransitionType@Transitions@Udwm@winrt@@@std@@U?$equal_to@W4ShellTransitionType@Transitions@Udwm@winrt@@@6@@std@@V?$allocator@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@@7@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@PEAX@2@_KQEAU32@1@Z @ 0x1800304E4 (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@W4ShellTransitionType@Transitions@Udwm@winrt@@U.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180085D6C (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x180086364 (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_KV-$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@w.c)
 *     ??$?0V?$tuple@AEB_K@std@@V?$tuple@AEAPEAVCBitmapSource@@@1@$0A@$$Z$0A@@?$pair@$$CB_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@AEAA@AEAV?$tuple@AEB_K@1@AEAV?$tuple@AEAPEAVCBitmapSource@@@1@U?$integer_sequence@_K$0A@@1@2@Z @ 0x18009A43C (--$-0V-$tuple@AEB_K@std@@V-$tuple@AEAPEAVCBitmapSource@@@1@$0A@$$Z$0A@@-$pair@$$CB_KV-$com_ptr_t.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18009A76C (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$com_ptr_t@VCBitmapSource.c)
 *     ??R?$_Conditionally_enabled_hash@_K$00@std@@SA_KAEB_K@Z @ 0x18009A81C (--R-$_Conditionally_enabled_hash@_K$00@std@@SA_KAEB_K@Z.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@IEBA_K_K@Z @ 0x18009AE08 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x18009AEAC (-_Forced_rehash@-$_Hash@V-$_Umap_traits@_KV-$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wi.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>,0>>::_Try_emplace<unsigned __int64 const &,CBitmapSource * &>(
        float *a1,
        __int64 a2,
        _QWORD *a3,
        CBaseObject **a4)
{
  __int64 v8; // r15
  _QWORD *v9; // r14
  __int64 v10; // rdx
  float v11; // xmm0_4
  __int64 v12; // rcx
  float v13; // xmm1_4
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v17; // [rsp+30h] [rbp-20h] BYREF
  _QWORD *v18; // [rsp+38h] [rbp-18h]
  __int128 v19; // [rsp+40h] [rbp-10h] BYREF
  CBaseObject **v20; // [rsp+80h] [rbp+30h] BYREF
  _QWORD *v21; // [rsp+90h] [rbp+40h] BYREF

  v8 = std::_Conditionally_enabled_hash<unsigned __int64,1>::operator()(a3);
  std::_Hash<std::_Umap_traits<unsigned __int64,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>,0>>::_Find_last<unsigned __int64>(
    a1,
    &v19,
    a3,
    v8);
  if ( *((_QWORD *)&v19 + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v19 + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( *((_QWORD *)a1 + 2) == 0x7FFFFFFFFFFFFFFLL )
      std::_Dwm_Xlength_error((const char *)0x7FFFFFFFFFFFFFFLL);
    v17 = a1 + 2;
    v9 = std::_Allocate<16,std::_Default_allocate_traits>(0x20uLL);
    v18 = v9;
    v20 = a4;
    v21 = a3;
    ____0V__tuple_AEB_K_std__V__tuple_AEAPEAVCBitmapSource___1__0A___Z_0A____pair___CB_KV__com_ptr_t_VCBitmapSource__Uerr_returncode_policy_wil___wil___std__AEAA_AEAV__tuple_AEB_K_1_AEAV__tuple_AEAPEAVCBitmapSource___1_U__integer_sequence__K_0A__1_2_Z(
      v9 + 2,
      &v21,
      &v20);
    v10 = *((_QWORD *)a1 + 2) + 1LL;
    if ( v10 < 0 )
      v11 = (float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1))
          + (float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1));
    else
      v11 = (float)(int)v10;
    v12 = *((_QWORD *)a1 + 7);
    if ( v12 < 0 )
    {
      v14 = *((_QWORD *)a1 + 7) & 1LL | ((unsigned __int64)v12 >> 1);
      v13 = (float)(int)v14 + (float)(int)v14;
    }
    else
    {
      v13 = (float)(int)v12;
    }
    if ( (float)(v11 / v13) > *a1 )
    {
      v15 = std::_Hash<std::_Umap_traits<_LARGE_INTEGER,CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY>>,0>>::_Desired_grow_bucket_count(a1);
      std::_Hash<std::_Umap_traits<unsigned __int64,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>,0>>::_Forced_rehash(
        a1,
        v15);
      v19 = *(_OWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>,0>>::_Find_last<unsigned __int64>(
                         a1,
                         &v19,
                         v9 + 2,
                         v8);
    }
    v18 = 0LL;
    *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<enum winrt::Udwm::Transitions::ShellTransitionType,winrt::Udwm::Transitions::ITransition,std::_Uhash_compare<enum winrt::Udwm::Transitions::ShellTransitionType,std::hash<enum winrt::Udwm::Transitions::ShellTransitionType>,std::equal_to<enum winrt::Udwm::Transitions::ShellTransitionType>>,std::allocator<std::pair<enum winrt::Udwm::Transitions::ShellTransitionType const,winrt::Udwm::Transitions::ITransition>>,0>>::_Insert_new_node_before(
                      a1,
                      v8,
                      v19,
                      v9);
    *(_BYTE *)(a2 + 8) = 1;
    std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>,void *>>>(&v17);
  }
  return a2;
}
