/*
 * XREFs of ??$_Assign_unchecked@V?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@std@@U_Default_sentinel@2@@?$forward_list@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXV?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@1@U_Default_sentinel@1@@Z @ 0x18001D564
 * Callers:
 *     ?ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV?$function@$$A6AJAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x18001D138 (-ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV-$function@$$A6AJAEAV-$com_ptr_t@VCEndpointStor.c)
 *     ?FindFirstEndpoint@CEndpointStoreCache@@QEAA?AV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$function@$$A6A_NAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x180104ABC (-FindFirstEndpoint@CEndpointStoreCache@@QEAA-AV-$com_ptr_t@VCEndpointStore@@Uerr_returncode_poli.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Freenode@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@SAXAEAV?$allocator@U?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@1@PEAU01@@Z @ 0x18001D0C0 (--$_Freenode@V-$allocator@U-$_Flist_node@V-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wi.c)
 *     ??0?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18001D6C8 (--0-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18001DE40 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E2F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::forward_list<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>>::_Assign_unchecked<std::_Flist_unchecked_const_iterator<std::_Flist_val<std::_Flist_simple_types<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>>>,std::_Iterator_base0>,std::_Default_sentinel>(
        __int64 a1,
        volatile int *a2)
{
  volatile int *v2; // rbx
  _QWORD *v3; // r14
  _QWORD *v4; // rdi
  __int64 v5; // r8
  _QWORD *v6; // rdi
  _QWORD *i; // rsi
  char *v8; // rax
  _QWORD *v9; // r9
  _QWORD *v10; // rbx

  v2 = a2;
  v3 = (_QWORD *)a1;
  while ( 1 )
  {
    v4 = (_QWORD *)*v3;
    if ( !v2 )
      break;
    if ( !v4 )
    {
      v6 = std::_Allocate<16,std::_Default_allocate_traits>(0x10uLL);
      wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::com_ptr_t<CEndpointStore,wil::err_returncode_policy>(
        v6 + 1,
        v2 + 2);
      for ( i = v6; ; i = v9 )
      {
        v2 = *(volatile int **)v2;
        if ( !v2 )
          break;
        v8 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(0x10uLL);
        wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::com_ptr_t<CEndpointStore,wil::err_returncode_policy>(
          v8 + 8,
          v2 + 2);
        *i = v9;
      }
      if ( i )
      {
        *i = *v3;
        *v3 = v6;
      }
      return;
    }
    v5 = v4[1];
    a1 = *((_QWORD *)v2 + 1);
    v4[1] = a1;
    if ( a1 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 12), a2);
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v5);
    v3 = v4;
    v2 = *(volatile int **)v2;
  }
  *v3 = 0LL;
  if ( v4 )
  {
    do
    {
      v10 = (_QWORD *)*v4;
      std::_Flist_node<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,void *>::_Freenode<std::allocator<std::_Flist_node<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,void *>>>(
        a1,
        (char *)v4);
      v4 = v10;
    }
    while ( v10 );
  }
}
