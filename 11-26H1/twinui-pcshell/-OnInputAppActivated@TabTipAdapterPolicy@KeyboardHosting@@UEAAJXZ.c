/*
 * XREFs of ?OnInputAppActivated@TabTipAdapterPolicy@KeyboardHosting@@UEAAJXZ @ 0x1801FDDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?clear@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x1801FDE28 (-clear@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@IU-$hash@I@std@@U-.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::OnInputAppActivated(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi

  v1 = this + 98;
  AcquireSRWLockExclusive(this + 98);
  std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::clear(&this[90]);
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
  return 0LL;
}
