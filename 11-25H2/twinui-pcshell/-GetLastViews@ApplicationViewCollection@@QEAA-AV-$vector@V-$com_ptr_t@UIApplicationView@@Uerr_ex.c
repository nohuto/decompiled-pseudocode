/*
 * XREFs of ?GetLastViews@ApplicationViewCollection@@QEAA?AV?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@I@Z @ 0x1804E28C4
 * Callers:
 *     ?TryGetTopTwoApplicationViews@GamingPosturePositioner@@UEAAXPEAPEAUIApplicationView@@0@Z @ 0x1804E5090 (-TryGetTopTwoApplicationViews@GamingPosturePositioner@@UEAAXPEAPEAUIApplicationView@@0@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180074CD0 (--4-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800FE32C (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18017FF24 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ??1?$_Tidy_guard@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@QEAA@XZ @ 0x1804E15BC (--1-$_Tidy_guard@V-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$a.c)
 */

// Hidden C++ exception states: #wind=1
__int64 **__fastcall ApplicationViewCollection::GetLastViews(RTL_SRWLOCK *a1, __int64 **a2)
{
  size_t size_of; // rax
  __int64 *v5; // rax
  __int64 *v6; // rbx
  __int64 *Ptr; // rbx
  unsigned __int64 v8; // rax
  __int64 *v9; // rsi
  __int64 *v10; // rdi
  RTL_SRWLOCK *v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 **v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = a2;
  wil::AcquireSRWLockExclusive(&v12, a1 + 3);
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  size_of = std::_Get_size_of_n<8>(2uLL);
  v5 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *a2 = v5;
  a2[1] = v5;
  a2[2] = v5 + 2;
  *(_OWORD *)v5 = 0LL;
  v6 = v5 + 2;
  std::_Destroy_range<std::allocator<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>>(
    (__int64)(v5 + 2),
    (__int64)(v5 + 2));
  a2[1] = v6;
  v13 = 0LL;
  std::_Tidy_guard<std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>>::~_Tidy_guard<std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>>((__int64 *)&v13);
  Ptr = (__int64 *)a1[1].Ptr;
  v8 = ((char *)Ptr - (char *)a1->Ptr) >> 3;
  if ( v8 )
  {
    v9 = *a2;
    if ( v8 > 2 )
      v8 = 2LL;
    v10 = &Ptr[-v8];
    while ( Ptr != v10 )
      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(v9++, *--Ptr);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v12);
  return a2;
}
