/*
 * XREFs of ?Close@?$produce@VWindowRegistration@@UIClosable@Foundation@Windows@winrt@@@impl@winrt@@UEAAHXZ @ 0x1805FB800
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?CloseNoLock@WindowRegistration@@AEAAXXZ @ 0x1805FB87C (-CloseNoLock@WindowRegistration@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<WindowRegistration,winrt::Windows::Foundation::IClosable>::Close(__int64 a1)
{
  __int64 v1; // rdi
  char v2; // bl
  RTL_SRWLOCK *v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (a1 - 16) & -(__int64)(a1 != 0);
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v4, (RTL_SRWLOCK *)(v1 + 40));
  v2 = *(_BYTE *)(v1 + 48);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v4);
  if ( v2 )
  {
    wil::AcquireSRWLockExclusive(&v4, (RTL_SRWLOCK *)(v1 + 40));
    try
    {
      WindowRegistration::CloseNoLock((WindowRegistration *)v1);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v4);
    }
    catch ( ... )
    {
      return (unsigned int)*winrt::to_hresult(&v4);
    }
  }
  return 0LL;
}
