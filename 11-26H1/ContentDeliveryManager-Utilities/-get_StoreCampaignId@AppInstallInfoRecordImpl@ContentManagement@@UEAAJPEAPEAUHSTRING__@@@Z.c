/*
 * XREFs of ?get_StoreCampaignId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180045950
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180029E68 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 */

__int64 __fastcall ContentManagement::AppInstallInfoRecordImpl::get_StoreCampaignId(RTL_SRWLOCK *this, HSTRING *a2)
{
  RTL_SRWLOCK *v2; // rbx
  HSTRING Ptr; // rcx
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = this + 3;
  AcquireSRWLockShared(this + 3);
  Ptr = (HSTRING)this[6].Ptr;
  v7 = v2;
  LODWORD(v2) = WindowsDuplicateString(Ptr, a2);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v7);
  return (unsigned int)v2;
}
