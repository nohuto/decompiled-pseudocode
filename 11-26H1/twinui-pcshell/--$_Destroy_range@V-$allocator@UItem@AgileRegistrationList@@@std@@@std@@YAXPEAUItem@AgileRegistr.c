/*
 * XREFs of ??$_Destroy_range@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAXPEAUItem@AgileRegistrationList@@QEAU12@AEAV?$allocator@UItem@AgileRegistrationList@@@0@@Z @ 0x180085050
 * Callers:
 *     ??1HolographicPositioner@@UEAA@XZ @ 0x1801A76FC (--1HolographicPositioner@@UEAA@XZ.c)
 *     ??1CApplicationManager@@MEAA@XZ @ 0x1802DD350 (--1CApplicationManager@@MEAA@XZ.c)
 *     ??1_Reallocation_guard@?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAA@XZ @ 0x1802DD9E8 (--1_Reallocation_guard@-$vector@UItem@AgileRegistrationList@@V-$allocator@UItem@AgileRegistratio.c)
 *     ??1CImmersiveMode@@MEAA@XZ @ 0x1802EB158 (--1CImmersiveMode@@MEAA@XZ.c)
 *     ??1CApplicationViewManager@@EEAA@XZ @ 0x180307A7C (--1CApplicationViewManager@@EEAA@XZ.c)
 *     ??1ApplicationViewManagerVisibilityDebouncer@@UEAA@XZ @ 0x180309CDC (--1ApplicationViewManagerVisibilityDebouncer@@UEAA@XZ.c)
 *     ??1CVirtualDesktopNotifications@@QEAA@XZ @ 0x18054CC58 (--1CVirtualDesktopNotifications@@QEAA@XZ.c)
 *     ??1VirtualDesktopAnimationSyncNotifications@@UEAA@XZ @ 0x18055989C (--1VirtualDesktopAnimationSyncNotifications@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<AgileRegistrationList::Item>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(v3 + 8));
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
}
