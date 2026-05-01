/*
 * XREFs of winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoRemovedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoRemovedEventArgs___lambda_01b8ae2d9cbe4889d05ea36904e58758___ @ 0x180386588
 * Callers:
 *     CStartExperienceManager::CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x180388050 (CStartExperienceManager--CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoRemovedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoRemovedEventArgs___lambda_01b8ae2d9cbe4889d05ea36904e58758___(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rdx
  _DWORD *v6; // [rsp+38h] [rbp+10h]

  v6 = operator new(0x20uLL);
  v6[2] = 1;
  *((_QWORD *)v6 + 2) = *a2;
  v4 = a2[1];
  a2[1] = 0LL;
  *((_QWORD *)v6 + 3) = v4;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v6 = off_180736118;
  *a1 = v6;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a2 + 1);
  return a1;
}
