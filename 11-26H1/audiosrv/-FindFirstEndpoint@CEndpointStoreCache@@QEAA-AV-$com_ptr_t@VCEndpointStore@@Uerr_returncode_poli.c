/*
 * XREFs of ?FindFirstEndpoint@CEndpointStoreCache@@QEAA?AV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$function@$$A6A_NAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x180104ABC
 * Callers:
 *     ?FindSaDeviceByResourceId@DeviceGraphStore@@YAJ_KPEAPEAUISaDeviceProxy@@@Z @ 0x1801018A4 (-FindSaDeviceByResourceId@DeviceGraphStore@@YAJ_KPEAPEAUISaDeviceProxy@@@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800160D4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??$_Freenode@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@SAXAEAV?$allocator@U?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@1@PEAU01@@Z @ 0x18001D0C0 (--$_Freenode@V-$allocator@U-$_Flist_node@V-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wi.c)
 *     ??$_Assign_unchecked@V?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@std@@U_Default_sentinel@2@@?$forward_list@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXV?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@1@U_Default_sentinel@1@@Z @ 0x18001D564 (--$_Assign_unchecked@V-$_Flist_unchecked_const_iterator@V-$_Flist_val@U-$_Flist_simple_types@V-$.c)
 *     ??0?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18001D6C8 (--0-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??0?$forward_list@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18001E360 (--0-$forward_list@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDevicePr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CEndpointStoreCache::FindFirstEndpoint(char *a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rcx
  char *i; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  char *v9; // rdx
  char *v10; // rbx
  char *v11; // rdx
  char *v12; // rbx
  char *v14; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v15; // [rsp+68h] [rbp+20h] BYREF

  v14 = a1;
  std::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>(&v14);
  std::forward_list<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>>::_Assign_unchecked<std::_Flist_unchecked_const_iterator<std::_Flist_val<std::_Flist_simple_types<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>>>,std::_Iterator_base0>,std::_Default_sentinel>(
    (__int64)&v14,
    (volatile int *)qword_1801D6640);
  AcquireSRWLockShared(&SRWLock);
  v15 = &SRWLock;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v15);
  for ( i = v14; i; i = *(char **)i )
  {
    v7 = *(_QWORD *)(a3 + 56);
    if ( !v7 )
    {
      std::_Xbad_function_call();
      __debugbreak();
      break;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64, char *))(*(_QWORD *)v7 + 16LL))(v7, i + 8) )
    {
      wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::com_ptr_t<CEndpointStore,wil::err_returncode_policy>(
        a2,
        (volatile int *)i + 2);
      v9 = v14;
      v14 = 0LL;
      if ( v9 )
      {
        do
        {
          v10 = *(char **)v9;
          std::_Flist_node<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,void *>::_Freenode<std::allocator<std::_Flist_node<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,void *>>>(
            v8,
            v9);
          v9 = v10;
        }
        while ( v10 );
      }
      return a2;
    }
  }
  *a2 = 0LL;
  v11 = v14;
  v14 = 0LL;
  if ( v11 )
  {
    do
    {
      v12 = *(char **)v11;
      std::_Flist_node<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,void *>::_Freenode<std::allocator<std::_Flist_node<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,void *>>>(
        v5,
        v11);
      v11 = v12;
    }
    while ( v12 );
  }
  return a2;
}
