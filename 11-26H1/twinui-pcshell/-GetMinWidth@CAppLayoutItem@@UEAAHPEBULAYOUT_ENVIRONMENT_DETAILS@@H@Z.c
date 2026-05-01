/*
 * XREFs of ?GetMinWidth@CAppLayoutItem@@UEAAHPEBULAYOUT_ENVIRONMENT_DETAILS@@H@Z @ 0x1806C8930
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?_GetMinWidth@CAppLayoutItem@@AEAAHPEBULAYOUT_ENVIRONMENT_DETAILS@@H@Z @ 0x1806C9084 (-_GetMinWidth@CAppLayoutItem@@AEAAHPEBULAYOUT_ENVIRONMENT_DETAILS@@H@Z.c)
 */

__int64 __fastcall CAppLayoutItem::GetMinWidth(RTL_SRWLOCK *this, const struct LAYOUT_ENVIRONMENT_DETAILS *a2, int a3)
{
  RTL_SRWLOCK *v5; // rbx
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v7, this + 3);
  LODWORD(v5) = CAppLayoutItem::_GetMinWidth((CAppLayoutItem *)&v5[-1], a2, a3);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v7);
  return (unsigned int)v5;
}
