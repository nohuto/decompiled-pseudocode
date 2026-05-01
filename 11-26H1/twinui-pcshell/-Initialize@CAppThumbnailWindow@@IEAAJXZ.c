/*
 * XREFs of ?Initialize@CAppThumbnailWindow@@IEAAJXZ @ 0x1804A6218
 * Callers:
 *     ?Open@CAppThumbnailWindow@@QEAAJXZ @ 0x1804A6BD0 (-Open@CAppThumbnailWindow@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18027F3E0 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?CreateThumbnailFactory@CAppThumbnailWindow@@IEAAJXZ @ 0x1804A4ECC (-CreateThumbnailFactory@CAppThumbnailWindow@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAppThumbnailWindow::Initialize(CAppThumbnailWindow *this)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int64 (*v4)(void); // rax
  int v5; // eax
  unsigned int v6; // edi
  const char *v7; // r9
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rsi
  int ThumbnailFactory; // eax
  unsigned int v12; // edi
  WNDCLASSW WndClass; // [rsp+80h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]
  int v15; // [rsp+F0h] [rbp+8h] BYREF
  __int64 v16; // [rsp+F8h] [rbp+10h] BYREF
  __int64 v17; // [rsp+100h] [rbp+18h] BYREF

  if ( *((_BYTE *)this + 168) )
    return 0LL;
  v16 = 0LL;
  v3 = **((_QWORD **)this + 4);
  v16 = 0LL;
  v4 = *(__int64 (**)(void))(v3 + 24);
  try
  {
    v5 = v4();
    v6 = v5;
    if ( v5 >= 0 )
    {
      v15 = 0;
      v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v16 + 24LL))(v16, &v15);
      v9 = v8;
      if ( v8 >= 0 )
      {
        if ( v15 )
        {
          memset_0(&WndClass, 0, sizeof(WndClass));
          WndClass.lpszClassName = L"AppThumbnailWindow";
          WndClass.lpfnWndProc = (WNDPROC)CAppThumbnailWindow::s_WndProc;
          WndClass.hInstance = &_ImageBase;
          WndClass.hCursor = LoadCursorW(0LL, (LPCWSTR)0x7F00);
          WndClass.cbWndExtra = 8;
          RegisterClassW(&WndClass);
          CreateWindowInBand(136315008LL, WndClass.lpszClassName, 0LL, 2415919104LL);
          if ( *((_QWORD *)this + 20) )
          {
            v10 = *winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
                     &v17,
                     (__int64)this);
            ThumbnailFactory = CAppThumbnailWindow::CreateThumbnailFactory(this);
            v12 = ThumbnailFactory;
            if ( ThumbnailFactory >= 0 )
            {
              *((_BYTE *)this + 168) = 1;
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
              result = 0LL;
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xFA,
                (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
                (const char *)(unsigned int)ThumbnailFactory);
              DestroyWindow(*(HWND *)(v10 + 160));
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
              result = v12;
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xF7,
              (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
              (const char *)0x80004005LL);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
            result = 2147500037LL;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xDA,
            (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
            (const char *)0x80004005LL);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
          result = 2147500037LL;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xD8,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
          (const char *)(unsigned int)v8);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
        result = v9;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD6,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
        (const char *)(unsigned int)v5);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
      result = v6;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x101,
                           (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
                           v7);
  }
  return result;
}
