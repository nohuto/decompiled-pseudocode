/*
 * XREFs of ?RemoveView@GamingApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z @ 0x1804F1BC4
 * Callers:
 *     ?ExitFullScreenForView@KioskPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1804F04E0 (-ExitFullScreenForView@KioskPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1804F1440 (-OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@.c)
 *     ?ControlLost@GamingPosturePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1804FA010 (-ControlLost@GamingPosturePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUn.c)
 *     ?ExitFullScreenForView@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1804FAAF0 (-ExitFullScreenForView@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?HandleViewNoLongerTracked@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@PEAUHWND__@@@Z @ 0x1804FDAE0 (-HandleViewNoLongerTracked@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@PEAUHWND__@@@Z.c)
 *     ?OnApplicationViewChanged@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180500130 (-OnApplicationViewChanged@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?FindView@GamingApplicationViewCollection@@AEAA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@PEAUIApplicationView@@@Z @ 0x1804F0564 (-FindView@GamingApplicationViewCollection@@AEAA-AV-$_Vector_const_iterator@V-$_Vector_val@U-$_Si.c)
 *     ?erase@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1804F2444 (-erase@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allocator@V-.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall GamingApplicationViewCollection::RemoveView(RTL_SRWLOCK *this, struct IUnknown *a2)
{
  char v4; // bl
  struct IUnknown **v6; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v7; // [rsp+40h] [rbp+18h] BYREF

  wil::AcquireSRWLockExclusive(&v7, this + 3);
  GamingApplicationViewCollection::FindView((struct IUnknown ***)this, &v6, a2);
  if ( v6 == this[1].Ptr )
  {
    v4 = 0;
  }
  else
  {
    v4 = 1;
    std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::erase(this, &v6);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v7);
  return v4;
}
