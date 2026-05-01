/*
 * XREFs of _lambda_56bc88237345be46eea563c70201c1d4_::operator() @ 0x1804175D4
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_56bc88237345be46eea563c70201c1d4___::Run @ 0x1804196D0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_56bc88237345be46eea563c7_ea_1804196D0.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?GetCachedView@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@UUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x1800FCE00 (-GetCachedView@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowWrapperInter_ea_1800FCE00.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??4?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801574A8 (--4-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?CompareNewValues@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAUIUwpWindowWrapperInternal@@@Z @ 0x1801CC4A0 (-CompareNewValues@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAUIUwpWindowWrappe.c)
 *     ?CollectOriginalValues@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAUIUwpWindowWrapperInternal@@@Z @ 0x1801E30BC (-CollectOriginalValues@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAUIUwpWindowW.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_56bc88237345be46eea563c70201c1d4_::operator()(RTL_SRWLOCK **a1)
{
  __int64 *CachedView; // rax
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  const char *v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v10; // [rsp+38h] [rbp+10h] BYREF

  wil::AcquireSRWLockExclusive(&v10, *a1 + 61);
  try
  {
    CachedView = UwpWindowEventDispatcher::GetCachedView((__int64)*a1, &v9, (int)a1[2]->Ptr);
    v3 = *wil::com_ptr_t<IAgileReference,wil::err_exception_policy>::operator=((__int64 *)a1[1], CachedView);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v9);
    if ( v3 )
    {
      UwpWindowEventDispatcher::WindowIdChangedEventHelper::CollectOriginalValues(
        (UwpWindowEventDispatcher::WindowIdChangedEventHelper *)a1[3],
        (struct IUwpWindowWrapperInternal *)a1[1]->Ptr);
      (*(void (__fastcall **)(PVOID, PVOID))(*(_QWORD *)a1[1]->Ptr + 192LL))(a1[1]->Ptr, a1[4]->Ptr);
      UwpWindowEventDispatcher::WindowIdChangedEventHelper::CompareNewValues(
        (std::_Ref_count_base **)a1[3],
        (struct IUwpWindowWrapperInternal *)a1[1]->Ptr,
        v4,
        v5);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v10);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1AF,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                           v6);
  }
  return result;
}
