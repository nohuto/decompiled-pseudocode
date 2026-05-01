/*
 * XREFs of ??$_Destroy_range@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAXPEAUItem@AgileRegistrationList@@QEAU12@AEAV?$allocator@UItem@AgileRegistrationList@@@0@@Z @ 0x180027F20
 * Callers:
 *     ??$_Emplace_reallocate@UItem@AgileRegistrationList@@@?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@AEAAPEAUItem@AgileRegistrationList@@QEAU23@$$QEAU23@@Z @ 0x18002816C (--$_Emplace_reallocate@UItem@AgileRegistrationList@@@-$vector@UItem@AgileRegistrationList@@V-$al.c)
 *     ??1HolographicPositioner@@UEAA@XZ @ 0x1801AFC24 (--1HolographicPositioner@@UEAA@XZ.c)
 *     ??1CApplicationManager@@MEAA@XZ @ 0x1802E3CD4 (--1CApplicationManager@@MEAA@XZ.c)
 *     ??1CImmersiveMode@@MEAA@XZ @ 0x1802F05B4 (--1CImmersiveMode@@MEAA@XZ.c)
 *     ??1CApplicationViewManager@@EEAA@XZ @ 0x18030BD28 (--1CApplicationViewManager@@EEAA@XZ.c)
 *     ??1ApplicationViewManagerVisibilityDebouncer@@UEAA@XZ @ 0x18030DED4 (--1ApplicationViewManagerVisibilityDebouncer@@UEAA@XZ.c)
 *     ??1CVirtualDesktopNotifications@@QEAA@XZ @ 0x180529B94 (--1CVirtualDesktopNotifications@@QEAA@XZ.c)
 *     ??1VirtualDesktopAnimationSyncNotifications@@UEAA@XZ @ 0x180535C2C (--1VirtualDesktopAnimationSyncNotifications@@UEAA@XZ.c)
 *     _std::vector_AgileRegistrationList::Item_std::allocator_AgileRegistrationList::Item___::_Emplace_reallocate_AgileRegistrationList::Item__::_1_::catch$3 @ 0x1806A5578 (_std--vector_AgileRegistrationList--Item_std--allocator_AgileRegistrationList--Item___--_Emplace.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<AgileRegistrationList::Item>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((void *)(v3 + 8));
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
}
