/*
 * XREFs of ?IsPrimaryViewShown@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAE@Z @ 0x18015D320
 * Callers:
 *     <none>
 * Callees:
 *     ?find@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@2@AEBI@Z @ 0x180485A78 (-find@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@IU-$hash@I@std@@U-$.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::IsPrimaryViewShown(
        KeyboardHosting::TabTipAdapterPolicy *this,
        unsigned __int8 *a2)
{
  RTL_SRWLOCK *v2; // rdi
  unsigned __int8 v5; // bl
  int v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = (RTL_SRWLOCK *)((char *)this + 784);
  v7 = *((_DWORD *)this + 226);
  AcquireSRWLockShared((PSRWLOCK)this + 98);
  std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::find(
    (char *)this + 720,
    &v8,
    &v7);
  if ( v8 == *((_QWORD *)this + 91) )
  {
    if ( v2 )
      ReleaseSRWLockShared(v2);
    v5 = 0;
  }
  else
  {
    v5 = *(_BYTE *)(v8 + 20);
    if ( v2 )
      ReleaseSRWLockShared(v2);
  }
  *a2 = v5;
  return 0LL;
}
