/*
 * XREFs of ?AddView@ApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z @ 0x1804DD894
 * Callers:
 *     ?EnterFullScreenForView@KioskPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1804DDE80 (-EnterFullScreenForView@KioskPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?EnterFullScreenForView@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1804E24C0 (-EnterFullScreenForView@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$emplace_back@AEAPEAUIApplicationView@@@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?A_TAEAPEAUIApplicationView@@@Z @ 0x1804DD2EC (--$emplace_back@AEAPEAUIApplicationView@@@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exceptio.c)
 *     ?FindView@ApplicationViewCollection@@AEAA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@PEAUIApplicationView@@@Z @ 0x1804DDF34 (-FindView@ApplicationViewCollection@@AEAA-AV-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_t.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall ApplicationViewCollection::AddView(RTL_SRWLOCK *this, struct IApplicationView *a2)
{
  char v4; // bl
  PVOID v6; // [rsp+30h] [rbp+8h] BYREF
  struct IApplicationView *v7; // [rsp+38h] [rbp+10h] BYREF
  RTL_SRWLOCK *v8; // [rsp+40h] [rbp+18h] BYREF

  v7 = a2;
  wil::AcquireSRWLockExclusive(&v8, this + 3);
  ApplicationViewCollection::FindView(this, &v6, a2);
  if ( v6 == this[1].Ptr )
  {
    v4 = 1;
    std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::emplace_back<IApplicationView * &>(
      (__int64)this,
      (__int64 *)&v7);
  }
  else
  {
    v4 = 0;
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v8);
  return v4;
}
