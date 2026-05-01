/*
 * XREFs of ?UpdateCurrentDesktop@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@0@Z @ 0x180534678
 * Callers:
 *     ?RemoveDesktopForRecoveryInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180530A40 (-RemoveDesktopForRecoveryInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x180533884 (-SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktop.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??4?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180074CD0 (--4-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 */

__int64 __fastcall CVirtualDesktopManager::UpdateCurrentDesktop(
        CVirtualDesktopManager *this,
        struct IUnknown *a2,
        struct IVirtualDesktop *a3)
{
  __int64 *v3; // rbx

  v3 = (__int64 *)((char *)this + 184);
  if ( SHIsSameObject(a2, *((struct IUnknown **)this + 23)) )
  {
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
      (__int64 *)this + 24,
      *v3);
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(v3, (__int64)a3);
  }
  return 0LL;
}
