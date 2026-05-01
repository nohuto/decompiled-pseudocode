/*
 * XREFs of ?IsViewFullScreen@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x1804F0FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?FindView@GamingApplicationViewCollection@@AEAA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@PEAUIApplicationView@@@Z @ 0x1804F0564 (-FindView@GamingApplicationViewCollection@@AEAA-AV-$_Vector_const_iterator@V-$_Vector_val@U-$_Si.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KioskPositioner::IsViewFullScreen(RTL_SRWLOCK *this, struct IUnknown *a2, int *a3)
{
  struct IUnknown ***v5; // rdi
  struct IUnknown ***View; // rax
  struct IUnknown **v7; // rdi
  struct IUnknown **v8; // rbx
  const char *v9; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v12; // [rsp+30h] [rbp+8h] BYREF
  struct IUnknown **v13; // [rsp+48h] [rbp+20h] BYREF

  v5 = (struct IUnknown ***)&this[63];
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v12, this + 66);
  try
  {
    View = GamingApplicationViewCollection::FindView(v5, &v13, a2);
    v7 = v5[1];
    v8 = *View;
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v12);
    *a3 = v8 != v7;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x363,
                           (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           v9);
  }
  return result;
}
