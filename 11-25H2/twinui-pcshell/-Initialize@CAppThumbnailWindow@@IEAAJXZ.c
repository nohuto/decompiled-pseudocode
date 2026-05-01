/*
 * XREFs of ?Initialize@CAppThumbnailWindow@@IEAAJXZ @ 0x18049533C
 * Callers:
 *     ?Open@CAppThumbnailWindow@@QEAAJXZ @ 0x180495C78 (-Open@CAppThumbnailWindow@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ?CreateThumbnailFactory@CAppThumbnailWindow@@IEAAJXZ @ 0x180493FF0 (-CreateThumbnailFactory@CAppThumbnailWindow@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  int ThumbnailFactory; // eax
  unsigned int v11; // edi
  WNDCLASSW WndClass; // [rsp+80h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]
  int v14; // [rsp+E0h] [rbp+8h] BYREF
  __int64 v15; // [rsp+E8h] [rbp+10h] BYREF

  if ( *((_BYTE *)this + 168) )
    return 0LL;
  v15 = 0LL;
  v3 = **((_QWORD **)this + 4);
  v15 = 0LL;
  v4 = *(__int64 (**)(void))(v3 + 24);
  try
  {
    v5 = v4();
    v6 = v5;
    if ( v5 >= 0 )
    {
      v14 = 0;
      v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v15 + 24LL))(v15, &v14);
      v9 = v8;
      if ( v8 >= 0 )
      {
        if ( v14 )
        {
          memset_0(&WndClass, 0, sizeof(WndClass));
          WndClass.lpszClassName = L"AppThumbnailWindow";
          WndClass.lpfnWndProc = (WNDPROC)CAppThumbnailWindow::s_WndProc;
          WndClass.hInstance = &_ImageBase;
          WndClass.hCursor = LoadCursorW(0LL, (LPCWSTR)0x7F00);
          WndClass.cbWndExtra = 8;
          RegisterClassW(&WndClass);
          CreateWindowInBand(
            136315008LL,
            WndClass.lpszClassName,
            0LL,
            2415919104LL,
            *((_DWORD *)this + 34),
            *((_DWORD *)this + 35),
            *((_DWORD *)this + 36) - *((_DWORD *)this + 34),
            *((_DWORD *)this + 37) - *((_DWORD *)this + 35),
            0LL,
            0LL,
            &_ImageBase,
            this,
            5);
          if ( *((_QWORD *)this + 20) )
          {
            ThumbnailFactory = CAppThumbnailWindow::CreateThumbnailFactory(this);
            v11 = ThumbnailFactory;
            if ( ThumbnailFactory >= 0 )
            {
              *((_BYTE *)this + 168) = 1;
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
              result = 0LL;
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xEE,
                (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
                (const char *)(unsigned int)ThumbnailFactory);
              DestroyWindow(*((HWND *)this + 20));
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
              result = v11;
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xEB,
              (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
              (const char *)0x80004005LL);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
            result = 2147500037LL;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xCE,
            (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
            (const char *)0x80004005LL);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
          result = 2147500037LL;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xCC,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
          (const char *)(unsigned int)v8);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
        result = v9;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCA,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
        (const char *)(unsigned int)v5);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
      result = v6;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xF5,
                           (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
                           v7);
  }
  return result;
}
