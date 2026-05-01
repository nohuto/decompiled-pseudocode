/*
 * XREFs of ?CreateDesktopWallpaperHWND@DesktopWallpaperHelpers@@YAJAEBUCRect@Geometry@@PEAPEAUHWND__@@@Z @ 0x180387E2C
 * Callers:
 *     ?SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z @ 0x18038ACD0 (-SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800254EC (--1-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@@YAH0@ZU-$integr.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180042238 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180291BAC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall DesktopWallpaperHelpers::CreateDesktopWallpaperHWND(
        DesktopWallpaperHelpers *this,
        const struct Geometry::CRect *a2,
        HWND *a3)
{
  unsigned int Error; // ebx
  HWND Window; // rbx
  signed int v8; // eax
  unsigned int LastError; // edi
  const char *v10; // r9
  int X; // [rsp+20h] [rbp-79h]
  _QWORD v12[4]; // [rsp+60h] [rbp-39h] BYREF
  WNDCLASSEXW v13; // [rsp+80h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  int v15; // [rsp+108h] [rbp+6Fh] BYREF
  HWND v16; // [rsp+110h] [rbp+77h] BYREF

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)&v13.cbClsExtra = 0LL;
  memset(&v13.hIcon, 0, 32);
  v13.hIconSm = 0LL;
  v13.cbSize = 80;
  v13.style = 0x4000;
  v13.lpfnWndProc = DefWindowProcW;
  v13.hInstance = &_ImageBase;
  v13.lpszClassName = L"DesktopWallpaperManager";
  if ( RegisterClassExW(&v13) )
  {
    Error = 0;
    goto LABEL_3;
  }
  Error = ResultFromKnownLastError();
  if ( (int)(Error + 0x80000000) < 0 )
  {
LABEL_3:
    if ( Error != -2147023486 )
      goto LABEL_9;
    goto LABEL_4;
  }
  if ( Error != -2147023486 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20,
      (int)"pcshell\\private\\shell\\inc\\DesktopWallpaperHelpers.h",
      (const char *)Error);
    return Error;
  }
LABEL_4:
  if ( FindWindowW(L"DesktopWallpaperManager", 0LL) )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2B,
      (int)"pcshell\\private\\shell\\inc\\DesktopWallpaperHelpers.h",
      (const char *)0x8000FFFFLL,
      X);
LABEL_9:
  Window = CreateWindowExW(
             0x280080u,
             L"DesktopWallpaperManager",
             0LL,
             0x80880000,
             *(_DWORD *)this,
             *((_DWORD *)this + 1),
             *((_DWORD *)this + 2) - *(_DWORD *)this,
             *((_DWORD *)this + 3) - *((_DWORD *)this + 1),
             0LL,
             0LL,
             &_ImageBase,
             0LL);
  v16 = Window;
  if ( !Window )
  {
    v8 = ResultFromKnownLastError();
    LastError = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x36,
        (int)"pcshell\\private\\shell\\inc\\DesktopWallpaperHelpers.h",
        (const char *)(unsigned int)v8);
LABEL_14:
      wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>(&v16);
      return LastError;
    }
  }
  v15 = 1;
  v12[0] = 17LL;
  v12[1] = &v15;
  v12[2] = 4LL;
  if ( !(unsigned int)SetWindowCompositionAttribute(Window, v12) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x3D,
                  (__int64)"pcshell\\private\\shell\\inc\\DesktopWallpaperHelpers.h",
                  v10);
    goto LABEL_14;
  }
  ShowWindow(Window, 4);
  v16 = 0LL;
  *(_QWORD *)a2 = Window;
  wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>(&v16);
  return 0LL;
}
