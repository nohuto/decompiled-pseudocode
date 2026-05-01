/*
 * XREFs of ?_Tidy@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1802CC564
 * Callers:
 *     ??1KioskPositioner@@UEAA@XZ @ 0x1800F64D8 (--1KioskPositioner@@UEAA@XZ.c)
 *     ??1?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1802D17A4 (--1-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allocator@V-$com.c)
 *     ??1UwpPrimaryAppProxy@@UEAA@XZ @ 0x1804DD530 (--1UwpPrimaryAppProxy@@UEAA@XZ.c)
 *     ??1?$_Tidy_guard@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@QEAA@XZ @ 0x1804E15BC (--1-$_Tidy_guard@V-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$a.c)
 *     ??1GamingPosturePositioner@@UEAA@XZ @ 0x1804E172C (--1GamingPosturePositioner@@UEAA@XZ.c)
 *     ?TryGetTopTwoApplicationViews@GamingPosturePositioner@@UEAAXPEAPEAUIApplicationView@@0@Z @ 0x1804E5090 (-TryGetTopTwoApplicationViews@GamingPosturePositioner@@UEAAXPEAPEAUIApplicationView@@0@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18017FF24 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@.c)
 */

void __fastcall std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Tidy(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>>(
      (__int64)v2,
      *(_QWORD *)(a1 + 8));
    std::_Deallocate<16,0>(
      *(void **)a1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
