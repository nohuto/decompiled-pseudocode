/*
 * XREFs of ??1InteractionSourceManager@@QEAA@XZ @ 0x18013C898
 * Callers:
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x18013CCDC (--1CInteractionTracker@@UEAA@XZ.c)
 *     ??1CInteractionTracker2@@UEAA@XZ @ 0x180271474 (--1CInteractionTracker2@@UEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?ClearAllConfigurations@CChainingHelper@@QEAAXXZ @ 0x18013C910 (-ClearAllConfigurations@CChainingHelper@@QEAAXXZ.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@V?$_Uhash_compare@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x18013C97C (-clear@-$_Hash@V-$_Umap_traits@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-.c)
 *     ?ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x18013D67C (-ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 *     ??1?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18013D750 (--1-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com_pt.c)
 */

void __fastcall InteractionSourceManager::~InteractionSourceManager(__int64 ****this)
{
  __int64 ***v2; // rdi
  __int64 **i; // rbx

  InteractionSourceManager::ClearActiveManipulations((InteractionSourceManager *)this);
  v2 = this[2];
  for ( i = *v2; i != (__int64 **)v2; i = (__int64 **)*i )
  {
    CChainingHelper::ClearAllConfigurations((CChainingHelper *)i[3]);
    CResource::UnRegisterNotifierInternal((CResource *)*this, (struct CResource *)i[2]);
  }
  std::_Hash<std::_Umap_traits<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>,std::_Uhash_compare<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>,std::allocator<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>,0>>::clear(this + 1);
  std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::~deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>(this + 9);
  std::_Hash<std::_Umap_traits<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>,std::_Uhash_compare<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>,std::allocator<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>,0>>::~_Hash<std::_Umap_traits<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>,std::_Uhash_compare<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>,std::allocator<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>,0>>(this + 1);
}
