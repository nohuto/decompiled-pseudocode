/*
 * XREFs of ?IsNewWallpaper@CVirtualDesktopManager@@AEAA_NPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180228E3C
 * Callers:
 *     ?AssignWallpaperToDesktop@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180228D0C (-AssignWallpaperToDesktop@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180218580 (--1-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDeleteString@@YAJ0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
bool __fastcall CVirtualDesktopManager::IsNewWallpaper(
        CVirtualDesktopManager *this,
        int (__fastcall ***a2)(struct IVirtualDesktop *, GUID *, __int64 *),
        HSTRING a3)
{
  int (__fastcall **v4)(struct IVirtualDesktop *, GUID *, __int64 *); // rax
  __int64 v5; // rax
  bool v6; // bl
  CVirtualDesktopManager *result; // [rsp+30h] [rbp+10h] BYREF
  HSTRING string1; // [rsp+38h] [rbp+18h] BYREF
  __int64 *v10; // [rsp+48h] [rbp+28h] BYREF

  result = this;
  v4 = *a2;
  v10 = 0LL;
  if ( (*v4)((struct IVirtualDesktop *)a2, &GUID_c9be252c_e386_425e_b33c_ca422112f51f, (__int64 *)&v10) >= 0 )
  {
    string1 = 0LL;
    v5 = *v10;
    string1 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, HSTRING *))(v5 + 48))(v10, &string1) >= 0 )
    {
      LODWORD(result) = 0;
      if ( WindowsCompareStringOrdinal(string1, a3, (INT32 *)&result) >= 0 )
      {
        v6 = (_DWORD)result != 0;
        wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&string1);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v10);
        return v6;
      }
    }
    wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&string1);
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64 *))(*v10 + 16))(v10);
  return 0;
}
