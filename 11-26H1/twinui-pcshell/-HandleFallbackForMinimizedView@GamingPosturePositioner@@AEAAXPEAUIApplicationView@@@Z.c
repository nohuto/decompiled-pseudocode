/*
 * XREFs of ?HandleFallbackForMinimizedView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804FD620
 * Callers:
 *     _lambda_61aaaea7faa44b78167a0b42c2312525_::operator() @ 0x1804F7D5C (_lambda_61aaaea7faa44b78167a0b42c2312525_--operator().c)
 *     ?OnShellTrackedWindowPosChanged@GamingPosturePositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x180500E90 (-OnShellTrackedWindowPosChanged@GamingPosturePositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180058064 (--4-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?FindView@GamingApplicationViewCollection@@AEAA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@PEAUIApplicationView@@@Z @ 0x1804F0564 (-FindView@GamingApplicationViewCollection@@AEAA-AV-$_Vector_const_iterator@V-$_Vector_val@U-$_Si.c)
 *     ?erase@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1804F2444 (-erase@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allocator@V-.c)
 *     ??$emplace@AEAPEAUIApplicationView@@@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@1@AEAPEAUIApplicationView@@@Z @ 0x1804F68D8 (--$emplace@AEAPEAUIApplicationView@@@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_pol.c)
 *     ?ReleasePrimaryView@GamingPosturePositioner@@AEAAX_N0@Z @ 0x180502408 (-ReleasePrimaryView@GamingPosturePositioner@@AEAAX_N0@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GamingPosturePositioner::HandleFallbackForMinimizedView(
        GamingPosturePositioner *this,
        struct IUnknown *a2)
{
  struct IUnknown ***v4; // rbx
  struct IUnknown **v5; // [rsp+40h] [rbp+8h] BYREF
  struct IUnknown *v6; // [rsp+48h] [rbp+10h] BYREF
  RTL_SRWLOCK *v7; // [rsp+50h] [rbp+18h] BYREF

  v4 = (struct IUnknown ***)((char *)this + 712);
  v6 = a2;
  wil::AcquireSRWLockExclusive(&v7, (RTL_SRWLOCK *)this + 92);
  GamingApplicationViewCollection::FindView(v4, &v5, a2);
  if ( v5 != v4[1] )
    std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::erase((__int64)v4, &v5, (__int64)v5);
  std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::emplace<IApplicationView * &>(
    (__int64)v4,
    &v5,
    (__int64 *)*v4,
    (__int64 *)&v6);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v7);
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
    (__int64 *)this + 98,
    (__int64)a2);
  GamingPosturePositioner::ReleasePrimaryView(this, 0, 0);
  GamingPosturePositioner::HandleViewFallback(this, 1);
}
