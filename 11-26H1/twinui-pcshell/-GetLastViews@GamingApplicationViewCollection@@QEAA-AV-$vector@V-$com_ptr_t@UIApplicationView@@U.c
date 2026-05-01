/*
 * XREFs of ?GetLastViews@GamingApplicationViewCollection@@QEAA?AV?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@I@Z @ 0x1804FD108
 * Callers:
 *     ?GetSecondaryView@GamingPosturePositioner@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1804FD420 (-GetSecondaryView@GamingPosturePositioner@@AEAA-AV-$com_ptr_t@UIApplicationView@@Uerr_exception_.c)
 *     ?TryGetTopTwoApplicationViews@GamingPosturePositioner@@UEAAXPEAPEAUIApplicationView@@0@Z @ 0x180503950 (-TryGetTopTwoApplicationViews@GamingPosturePositioner@@UEAAXPEAPEAUIApplicationView@@0@Z.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180058064 (--4-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$_Construct_n@$$V@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAX_K@Z @ 0x1804F66B8 (--$_Construct_n@$$V@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V-.c)
 */

// Hidden C++ exception states: #wind=1
RTL_SRWLOCK *__fastcall GamingApplicationViewCollection::GetLastViews(
        RTL_SRWLOCK *a1,
        RTL_SRWLOCK *a2,
        unsigned int a3)
{
  unsigned __int64 v6; // rsi
  __int64 *Ptr; // rbx
  unsigned __int64 v8; // rax
  __int64 *v9; // rdi
  __int64 *v10; // rsi
  RTL_SRWLOCK *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  wil::AcquireSRWLockExclusive(&v12, a1 + 3);
  a2->Ptr = 0LL;
  a2[1].Ptr = 0LL;
  a2[2].Ptr = 0LL;
  v6 = a3;
  std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Construct_n<>(a2, a3);
  Ptr = (__int64 *)a1[1].Ptr;
  v8 = ((char *)Ptr - (char *)a1->Ptr) >> 3;
  if ( v8 )
  {
    v9 = (__int64 *)a2->Ptr;
    if ( v6 < v8 )
      v8 = v6;
    v10 = &Ptr[-v8];
    while ( Ptr != v10 )
      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(v9++, *--Ptr);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v12);
  return a2;
}
