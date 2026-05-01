/*
 * XREFs of ?HasSnapId@CShellSnapComponent@@UEAAJPEAE@Z @ 0x18057C520
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180101060 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18012BBCC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ??$HasSnapId@_K@CSnapComponentTelemetry@@SAX$$QEA_K@Z @ 0x1802333AC (--$HasSnapId@_K@CSnapComponentTelemetry@@SAX$$QEA_K@Z.c)
 */

__int64 __fastcall CShellSnapComponent::HasSnapId(RTL_SRWLOCK *this, bool *a2)
{
  PVOID Ptr; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v6; // [rsp+38h] [rbp+10h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v6, this + 175);
  *a2 = this[179].Ptr != 0LL;
  Ptr = this[179].Ptr;
  CSnapComponentTelemetry::HasSnapId<unsigned __int64>((__int64 *)&Ptr);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v6);
  return 0LL;
}
