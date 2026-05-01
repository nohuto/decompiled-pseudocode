/*
 * XREFs of ?OnEventQueued@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803BA0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x180012124 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$GetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAPEAU4@@Z1@Z @ 0x180045360 (--$GetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18010C19C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation@3@@Z @ 0x1801D70D0 (--0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?GetViewWindow@CBaseTrayFlyoutExperienceManager@@QEAAJPEAPEAUHWND__@@@Z @ 0x1803B9998 (-GetViewWindow@CBaseTrayFlyoutExperienceManager@@QEAAJPEAPEAUHWND__@@@Z.c)
 *     ?HideFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJXZ @ 0x1803B9AD0 (-HideFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CBaseTrayFlyoutExperienceManager::OnEventQueued(
        CBaseTrayFlyoutExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        Microsoft::WRL::Wrappers::Details *a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  int ViewWindow; // ebx
  HSTRING_HEADER *v9; // rax
  HSTRING v10; // r8
  unsigned int v11; // r8d
  unsigned int v12; // r8d
  HSTRING_HEADER *v13; // rax
  __int64 v14; // r8
  HSTRING v15; // r8
  const WCHAR *StringRawBuffer; // rax
  HSTRING_HEADER *v17; // rax
  HSTRING v18; // r8
  __int64 v19; // rcx
  HSTRING string; // [rsp+30h] [rbp-48h] BYREF
  HWND hWnd; // [rsp+38h] [rbp-40h] BYREF
  __int64 v23; // [rsp+40h] [rbp-38h] BYREF
  HSTRING_HEADER v24; // [rsp+48h] [rbp-30h] BYREF

  ViewWindow = 0;
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
         &v24,
         (const WCHAR **)&off_180735740,
         (unsigned int)a3);
  if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a3, (HSTRING)v9[1].Reserved.Reserved1, v10) )
  {
    v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v24, (const WCHAR **)&off_180735750, v11);
    if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                          a3,
                          (HSTRING)v17[1].Reserved.Reserved1,
                          v18) )
      CBaseTrayFlyoutExperienceManager::HideFlyout((CBaseTrayFlyoutExperienceManager *)((char *)this - 48));
  }
  else
  {
    Windows::Internal::ShellHelpers::PropertySetHelper::PropertySetHelper(
      (Windows::Internal::ShellHelpers::PropertySetHelper *)&v23,
      a4);
    WindowsDeleteString(0LL);
    string = 0LL;
    v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v24, (const WCHAR **)&off_180735748, v12);
    ViewWindow = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<HSTRING__ *>(
                   (Windows::Internal::ShellHelpers::PropertySetHelper *)&v23,
                   (HSTRING)v13[1].Reserved.Reserved1,
                   v14,
                   &string);
    if ( ViewWindow >= 0 )
    {
      if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                           (Microsoft::WRL::Wrappers::Details *)string,
                           0LL,
                           v15) )
      {
        hWnd = 0LL;
        ViewWindow = CBaseTrayFlyoutExperienceManager::GetViewWindow(
                       (CBaseTrayFlyoutExperienceManager *)((char *)this - 48),
                       &hWnd);
        if ( ViewWindow >= 0 )
        {
          StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
          SetWindowTextW(hWnd, StringRawBuffer);
        }
      }
    }
    WindowsDeleteString(string);
    string = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
  }
  v19 = *((_QWORD *)this + 42);
  if ( v19 )
    (*(void (__fastcall **)(__int64, struct CSingleViewShellExperience *, Microsoft::WRL::Wrappers::Details *, struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v19 + 88LL))(
      v19,
      a2,
      a3,
      a4);
  return (unsigned int)ViewWindow;
}
