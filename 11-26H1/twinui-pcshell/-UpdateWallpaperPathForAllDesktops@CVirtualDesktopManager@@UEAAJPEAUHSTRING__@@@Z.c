/*
 * XREFs of ?UpdateWallpaperPathForAllDesktops@CVirtualDesktopManager@@UEAAJPEAUHSTRING__@@@Z @ 0x1805581D0
 * Callers:
 *     ?UpdateWallpaperPathForAllDesktops@CVirtualDesktopManager@@WBA@EAAJPEAUHSTRING__@@@Z @ 0x180558320 (-UpdateWallpaperPathForAllDesktops@CVirtualDesktopManager@@WBA@EAAJPEAUHSTRING__@@@Z.c)
 *     ?UpdateWallpaperPathForAllDesktops@CVirtualDesktopManager@@WBI@EAAJPEAUHSTRING__@@@Z @ 0x180558330 (-UpdateWallpaperPathForAllDesktops@CVirtualDesktopManager@@WBI@EAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?begin@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA?AVIterator@12@XZ @ 0x180109018 (-begin@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@d.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180109CB4 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop.c)
 *     ??DIterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA?AV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@XZ @ 0x18018BDE8 (--DIterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsof.c)
 *     ??0?$ObjectArrayAdapterImpl@UIGameFocusEvents@@V?$ComPtr@UIGameFocusEvents@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1801ACDAC (--0-$ObjectArrayAdapterImpl@UIGameFocusEvents@@V-$ComPtr@UIGameFocusEvents@@@WRL@Microsoft@@@det.c)
 *     ?GetDesktops@CVirtualDesktopManager@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x1801F94C0 (-GetDesktops@CVirtualDesktopManager@@UEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?SetDesktopWallpaper@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x1801FF940 (-SetDesktopWallpaper@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z.c)
 *     ?end@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA?AVIterator@12@XZ @ 0x1802C20D8 (-end@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@det.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::UpdateWallpaperPathForAllDesktops(CVirtualDesktopManager *this, HSTRING a2)
{
  int Desktops; // eax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v8[2]; // [rsp+20h] [rbp-40h] BYREF
  unsigned int v9; // [rsp+30h] [rbp-30h] BYREF
  __int64 v10[2]; // [rsp+38h] [rbp-28h] BYREF
  int v11; // [rsp+48h] [rbp-18h] BYREF
  __int64 v12[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct IObjectArray *v14; // [rsp+80h] [rbp+20h] BYREF
  struct IVirtualDesktop *v15; // [rsp+90h] [rbp+30h] BYREF

  v14 = 0LL;
  Desktops = CVirtualDesktopManager::GetDesktops(this, &v14);
  v5 = Desktops;
  if ( Desktops >= 0 )
  {
    details::ObjectArrayAdapterImpl<IGameFocusEvents,Microsoft::WRL::ComPtr<IGameFocusEvents>>::ObjectArrayAdapterImpl<IGameFocusEvents,Microsoft::WRL::ComPtr<IGameFocusEvents>>(
      (__int64)v8,
      (__int64)v14);
    details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::begin(
      (__int64)v8,
      (__int64)&v9);
    details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::end(
      (__int64)v8,
      (__int64)&v11);
    while ( 1 )
    {
      if ( v9 == v11 && v10[1] == v12[1] )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v12);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v10);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v8);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v14);
        return 0LL;
      }
      details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::operator*(
        (__int64)&v9,
        (__int64 *)&v15);
      v6 = CVirtualDesktopManager::SetDesktopWallpaper(this, v15, a2);
      v5 = v6;
      if ( v6 < 0 )
        break;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
      ++v9;
      details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::GetCurrentObject(&v9);
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C7,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v6);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v12);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v10);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v8);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C4,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)Desktops);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v14);
  return v5;
}
