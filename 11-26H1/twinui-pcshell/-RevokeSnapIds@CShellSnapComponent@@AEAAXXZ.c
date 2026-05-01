/*
 * XREFs of ?RevokeSnapIds@CShellSnapComponent@@AEAAXXZ @ 0x1805A15BC
 * Callers:
 *     _lambda_3415c00afb736d6d54203eb8c7c58983_$_ResumeCoro$1::operator() @ 0x18059E070 (_lambda_3415c00afb736d6d54203eb8c7c58983_$_ResumeCoro$1--operator().c)
 *     ?UnsubscribeFromServices@CShellSnapComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x1805A35E0 (-UnsubscribeFromServices@CShellSnapComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?UpdateLaunchSnappedBehavior@CShellSnapComponent@@AEAAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805A37B0 (-UpdateLaunchSnappedBehavior@CShellSnapComponent@@AEAAXAEAV-$unique_any_t@V-$unique_storage@U-$r.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@HURect@Foundation@Windows@@V?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@V?$allocator@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x1805A4824 (-clear@-$_Hash@V-$_Umap_traits@HURect@Foundation@Windows@@V-$_Uhash_compare@HU-$hash@H@std@@U-$e.c)
 */

void __fastcall CShellSnapComponent::RevokeSnapIds(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // [rsp+30h] [rbp+8h] BYREF

  wil::AcquireSRWLockExclusive(&v2, this + 191);
  if ( this[226].Ptr )
  {
    std::_Hash<std::_Umap_traits<int,Windows::Foundation::Rect,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>>,std::allocator<std::pair<int const,Windows::Foundation::Rect>>,0>>::clear(&this[193]);
    CShellSnapComponent::UpdateLaunchSnappedBehavior(this);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v2);
}
