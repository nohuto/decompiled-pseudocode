/*
 * XREFs of ?get_PrevChainLink@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UEAAJPEAPEAUIChainLink@2345@@Z @ 0x180305940
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180101060 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??0CAutoSRWSharedLock@@QEAA@AEAVCSRWLock@@@Z @ 0x18013DE68 (--0CAutoSRWSharedLock@@QEAA@AEAVCSRWLock@@@Z.c)
 */

__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::get_PrevChainLink(
        __int64 a1,
        _QWORD *a2)
{
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  CAutoSRWSharedLock::CAutoSRWSharedLock((CAutoSRWSharedLock *)&v5, CApplicationManagerUtility::g_pIAMGlobals);
  if ( *(_QWORD *)(a1 + 56) )
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 56));
    *a2 = *(_QWORD *)(a1 + 56);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v5);
  return 0LL;
}
