/*
 * XREFs of ?RemoveRuleAndBuildRefreshList@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY05_N@Z @ 0x18012B620
 * Callers:
 *     wil::details::lambda_call__lambda_ce709892295bd7b0448627fa06a7afa0___::_lambda_call__lambda_ce709892295bd7b0448627fa06a7afa0___ @ 0x180129504 (wil--details--lambda_call__lambda_ce709892295bd7b0448627fa06a7afa0___--_lambda_call__lambda_ce70.c)
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z @ 0x1801297BC (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY05_N@Z @ 0x18012B2FC (-RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY05_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180056074 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$function.c)
 *     ?_Erase_unchecked@?$_Tree@V?$_Tmap_traits@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@AEAAPEAU?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800ACADC (-_Erase_unchecked@-$_Tree@V-$_Tmap_traits@_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@U-$less@_J@std@.c)
 *     ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY05_N@Z @ 0x1800AD8F0 (-VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY05_N@Z.c)
 *     ??$com_query_to_nothrow@UIPolicyRule@@AEAPEAUIUnknown@@@wil@@YAJAEAPEAUIUnknown@@PEAPEAUIPolicyRule@@@Z @ 0x180129368 (--$com_query_to_nothrow@UIPolicyRule@@AEAPEAUIUnknown@@@wil@@YAJAEAPEAUIUnknown@@PEAPEAUIPolicyR.c)
 *     ?Find@?$CAtlList@V?$CComQIPtr@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@2@@ATL@@QEBAPEAU__POSITION@@PEAUIPolicyRule@@PEAU3@@Z @ 0x18012A7A8 (-Find@-$CAtlList@V-$CComQIPtr@UIPolicyRule@@$1-_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s.c)
 *     ?RemoveAt@?$CAtlList@V?$CComQIPtr@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@2@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x18012B1A0 (-RemoveAt@-$CAtlList@V-$CComQIPtr@UIPolicyRule@@$1-_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DynamicAudioEndpointManager::RemoveRuleAndBuildRefreshList(
        DynamicAudioEndpointManager *this,
        struct IAudioProcess *a2,
        struct IUnknown *a3,
        char a4,
        bool (*const a5)[6])
{
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  _QWORD *v14; // rbx
  __int64 v15; // r15
  bool *v16; // r13
  __int64 v17; // r12
  __int64 v18; // r14
  _QWORD *v19; // rax
  __int64 v20; // rdx
  struct IUnknown *v21; // r13
  __int64 v22; // rax
  char v24; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v25[7]; // [rsp+31h] [rbp-1Fh] BYREF
  __int64 v26; // [rsp+38h] [rbp-18h] BYREF
  __int64 v27; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  struct IUnknown *v29; // [rsp+A0h] [rbp+50h] BYREF
  char v30; // [rsp+A8h] [rbp+58h]

  v30 = a4;
  v29 = a3;
  v24 = 0;
  v25[0] = 0;
  v26 = 0LL;
  v8 = wil::com_query_to_nothrow<IPolicyRule,IUnknown * &>(&v29, (__int64)&v26);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 662LL;
LABEL_5:
    v12 = (unsigned int)v8;
    goto LABEL_6;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 64LL))(v26);
  v8 = (*(__int64 (__fastcall **)(__int64, struct IAudioProcess *, _BYTE *, char *))(*(_QWORD *)v26 + 80LL))(
         v26,
         a2,
         v25,
         &v24);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 668LL;
    goto LABEL_5;
  }
  if ( v25[0] )
  {
    v8 = (*(__int64 (__fastcall **)(struct IAudioProcess *, DynamicAudioEndpointManager *, struct IUnknown *))(*(_QWORD *)a2 + 408LL))(
           a2,
           this,
           a3);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 674LL;
      goto LABEL_5;
    }
  }
  v13 = 0LL;
  v14 = (_QWORD *)((char *)this + 24);
  v15 = 2LL;
  v16 = (bool *)a5;
  do
  {
    v17 = 6LL;
    v18 = v13;
    do
    {
      v19 = ATL::CAtlList<ATL::CComQIPtr<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>,ATL::CComQIPtrElementTraits<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>>::Find(
              v14,
              v26,
              v11);
      if ( v19 )
      {
        v16[v18] = 1;
        if ( v24 )
          ATL::CAtlList<ATL::CComQIPtr<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>,ATL::CComQIPtrElementTraits<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>>::RemoveAt(
            v14,
            v19);
      }
      v14 += 6;
      --v17;
      ++v18;
    }
    while ( v17 );
    v13 += 6LL;
    --v15;
  }
  while ( v15 );
  v21 = v29;
  if ( v24 )
  {
    v22 = **((_QWORD **)this + 81);
LABEL_19:
    v27 = v22;
    while ( v22 != *((_QWORD *)this + 81) )
    {
      if ( *(struct IUnknown **)(v22 + 40) == v21 )
      {
        v22 = std::_Tree<std::_Tmap_traits<__int64,Microsoft::WRL::ComPtr<IUnknown>,std::less<__int64>,std::allocator<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>,0>>::_Erase_unchecked(
                (__int64)this + 648,
                v22);
        goto LABEL_19;
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>,std::_Iterator_base0>::operator++(
        &v27,
        v20);
      v22 = v27;
    }
  }
  if ( !v30 || DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies(this, a5) )
  {
    v9 = 0;
    goto LABEL_28;
  }
  v9 = -2147467259;
  v12 = 2147500037LL;
  v10 = 726LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
    (const char *)v12);
LABEL_28:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v26);
  return v9;
}
