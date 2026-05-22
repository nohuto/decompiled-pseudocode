/*
 * XREFs of ?FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ @ 0x1800B0FEC
 * Callers:
 *     _lambda_cd53c665379f6d6b73078d77a45af54d_::_lambda_invoker_cdecl_ @ 0x1800B0BD0 (_lambda_cd53c665379f6d6b73078d77a45af54d_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18000D7E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000DE08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800546FC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180057428 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180091F84 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@std@@@std@@YAXPEAV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@0@QEAV10@AEAV?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@0@@Z @ 0x1800B0BE8 (--$_Destroy_range@V-$allocator@V-$function@$$A6AXAEAV-$ComPtr@VDataProviderPrincipal@@@WRL@Micro.c)
 *     ??$emplace_back@AEAV?$function@$$A6AX_N@Z@std@@@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAAAEAV?$function@$$A6AX_N@Z@1@AEAV21@@Z @ 0x1800B0E54 (--$emplace_back@AEAV-$function@$$A6AX_N@Z@std@@@-$vector@V-$function@$$A6AX_N@Z@std@@V-$allocato.c)
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x1800B0FB0 (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ?MPC3DStateHelper_FireEventsOnInputThread_@ISMTracing@@QEAAX_N0@Z @ 0x1800B11FC (-MPC3DStateHelper_FireEventsOnInputThread_@ISMTracing@@QEAAX_N0@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall MPC3DStateHelper::FireEventsOnInputThread(PSRWLOCK SRWLock)
{
  char v2; // si
  char v3; // r12
  char Ptr_high; // r15
  char v5; // di
  RTL_SRWLOCK *v6; // rdx
  __int64 v7; // rdx
  RTL_SRWLOCK *v8; // rdx
  __int64 v9; // rdx
  __int64 i; // rdi
  __int64 v11; // r14
  __int64 j; // rdi
  __int64 v13; // r14
  void *v14; // rdx
  wil::details *Ptr; // rcx
  ISMTracing *v16; // rcx
  __int128 v17; // [rsp+20h] [rbp-30h] BYREF
  __int64 v18; // [rsp+30h] [rbp-20h]
  __int128 v19; // [rsp+38h] [rbp-18h] BYREF
  __int64 v20; // [rsp+48h] [rbp-8h]
  RTL_SRWLOCK *v21; // [rsp+80h] [rbp+30h] BYREF
  RTL_SRWLOCK *v22; // [rsp+88h] [rbp+38h] BYREF

  v19 = 0LL;
  v20 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  AcquireSRWLockExclusive(SRWLock);
  v22 = SRWLock;
  v2 = BYTE6(SRWLock[2].Ptr);
  v3 = BYTE4(SRWLock[2].Ptr);
  Ptr_high = HIBYTE(SRWLock[2].Ptr);
  v5 = BYTE5(SRWLock[2].Ptr);
  BYTE4(SRWLock[2].Ptr) = v2;
  BYTE5(SRWLock[2].Ptr) = Ptr_high;
  v6 = *(RTL_SRWLOCK **)SRWLock[6].Ptr;
  v21 = v6;
  while ( !BYTE1(v6[3].Ptr) )
  {
    std::vector<std::function<void (bool)>>::emplace_back<std::function<void (bool)> &>(
      (__int64 *)&v19,
      (__int64)&v6[5]);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,unsigned long>>>,std::_Iterator_base0>::operator++(
      (__int64 *)&v21,
      v7);
    v6 = v21;
  }
  v8 = *(RTL_SRWLOCK **)SRWLock[4].Ptr;
  v21 = v8;
  while ( !BYTE1(v8[3].Ptr) )
  {
    std::vector<std::function<void (bool)>>::emplace_back<std::function<void (bool)> &>(
      (__int64 *)&v17,
      (__int64)&v8[5]);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,unsigned long>>>,std::_Iterator_base0>::operator++(
      (__int64 *)&v21,
      v9);
    v8 = v21;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v22);
  if ( Ptr_high != v5 )
  {
    v11 = *((_QWORD *)&v19 + 1);
    for ( i = v19; i != v11; i += 64LL )
      std::_Func_class<void,bool>::operator()(i, Ptr_high);
  }
  if ( v2 != v3 )
  {
    v13 = *((_QWORD *)&v17 + 1);
    for ( j = v17; j != v13; j += 64LL )
      std::_Func_class<void,bool>::operator()(j, v2);
    AcquireSRWLockExclusive(SRWLock);
    v21 = SRWLock;
    if ( v2 )
      Ptr = (wil::details *)SRWLock[8].Ptr;
    else
      Ptr = (wil::details *)SRWLock[9].Ptr;
    wil::details::SetEvent(Ptr, v14);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v21);
  }
  if ( ISMTracing::IsEnabled() )
  {
    ISMTracing::Instance();
    ISMTracing::MPC3DStateHelper_FireEventsOnInputThread_(v16, v2, Ptr_high);
  }
  if ( (_QWORD)v17 )
  {
    std::_Destroy_range<std::allocator<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>>>(
      v17,
      *((__int64 *)&v17 + 1));
    std::_Deallocate<16>((void *)v17, (struct std::nothrow_t *)((v18 - v17) & 0xFFFFFFFFFFFFFFC0uLL));
    v17 = 0LL;
    v18 = 0LL;
  }
  if ( (_QWORD)v19 )
  {
    std::_Destroy_range<std::allocator<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>>>(
      v19,
      *((__int64 *)&v19 + 1));
    std::_Deallocate<16>((void *)v19, (struct std::nothrow_t *)((v20 - v19) & 0xFFFFFFFFFFFFFFC0uLL));
  }
}
