/*
 * XREFs of ?put_StoreCampaignId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x180045A80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180029E44 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18003AE24 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall ContentManagement::AppInstallInfoRecordImpl::put_StoreCampaignId(
        ContentManagement::AppInstallInfoRecordImpl *this,
        HSTRING a2)
{
  RTL_SRWLOCK *v2; // rbx
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF
  HSTRING v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v2 = (RTL_SRWLOCK *)((char *)this + 24);
  AcquireSRWLockExclusive((PSRWLOCK)this + 3);
  v5 = v2;
  LODWORD(v2) = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)this + 6, &v6);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v5);
  return (unsigned int)v2;
}
