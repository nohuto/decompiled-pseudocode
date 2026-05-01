/*
 * XREFs of ?GetMaxAppCount@CAppLayout@@UEAAIXZ @ 0x1806C68C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x18067F8D8 (-ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::GetMaxAppCount(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rbx
  enum DEVICE_SCALE_FACTOR v2; // r8d
  ImmersiveApplicationLayout *v4; // [rsp+30h] [rbp+8h]
  RTL_SRWLOCK *v5; // [rsp+38h] [rbp+10h] BYREF

  v1 = this;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v5, this + 2);
  LODWORD(v4) = LODWORD(v1[4].Ptr) - LODWORD(v1[3].Ptr);
  HIDWORD(v4) = HIDWORD(v1[4].Ptr) - HIDWORD(v1[3].Ptr);
  LODWORD(v1) = ImmersiveApplicationLayout::ComputeLayoutEnvMaxApps(v4, (struct tagSIZE)LODWORD(v1[5].Ptr), v2);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v5);
  return (unsigned int)v1;
}
