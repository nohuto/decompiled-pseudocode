/*
 * XREFs of ?CreateThumbnailsFromWindows@CAppThumbnailWindow@@IEAAJV?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@AEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@AEAV?$vector@V?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@Z @ 0x1804A4FE8
 * Callers:
 *     ?CreateBackgroundThumbnail@CAppThumbnailWindow@@IEAAJAEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x1804A41D8 (-CreateBackgroundThumbnail@CAppThumbnailWindow@@IEAAJAEAV-$vector@PEAUHWND__@@V-$allocator@PEAUH.c)
 *     ?CreateTrayThumbnail@CAppThumbnailWindow@@IEAAJAEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x1804A52A8 (-CreateTrayThumbnail@CAppThumbnailWindow@@IEAAJAEAV-$vector@PEAUHWND__@@V-$allocator@PEAUHWND__@.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsEmpty@CRect@Geometry@@QEBA_NXZ @ 0x1800B55C0 (-IsEmpty@CRect@Geometry@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$emplace_back@PEAUIDCompThumbnail@@@?$vector@V?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@$$QEAPEAUIDCompThumbnail@@@Z @ 0x1804A2AEC (--$emplace_back@PEAUIDCompThumbnail@@@-$vector@V-$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_po.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAppThumbnailWindow::CreateThumbnailsFromWindows(__int64 a1, _QWORD *a2, HWND **a3, __int64 a4)
{
  __int64 v6; // rbx
  HWND *v7; // r14
  HWND *v8; // r12
  HWND v9; // r15
  const char *v10; // r9
  __int64 result; // rax
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, _QWORD, HWND, _QWORD, _QWORD, __int64 *, GUID *, __int64 *); // rbx
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // eax
  __int64 v17; // r8
  unsigned int v18; // ebx
  int v19; // eax
  unsigned int v20; // ebx
  __int64 v21; // [rsp+50h] [rbp-88h] BYREF
  __int64 v22; // [rsp+58h] [rbp-80h] BYREF
  __int64 v23; // [rsp+60h] [rbp-78h]
  void *v24; // [rsp+68h] [rbp-70h]
  struct tagRECT Rect; // [rsp+70h] [rbp-68h] BYREF
  __int64 v26; // [rsp+80h] [rbp-58h] BYREF
  int v27; // [rsp+88h] [rbp-50h]
  int v28; // [rsp+8Ch] [rbp-4Ch]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v6 = a1;
  v23 = a1;
  v24 = a2;
  v7 = *a3;
  v8 = a3[1];
  try
  {
    while ( 1 )
    {
      if ( v7 == v8
        || (v9 = *v7, Rect = 0LL, GetWindowRect(v9, &Rect), Geometry::CRect::IsEmpty((Geometry::CRect *)&Rect)) )
      {
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a2);
        return 0LL;
      }
      MapWindowPoints(0LL, *(HWND *)(v6 + 160), (LPPOINT)&Rect, 2u);
      v26 = 0LL;
      v27 = Rect.right - Rect.left;
      v28 = Rect.bottom - Rect.top;
      v21 = 0LL;
      v12 = *(_QWORD *)(v6 + 16);
      v13 = *(__int64 (__fastcall **)(__int64, _QWORD, HWND, _QWORD, _QWORD, __int64 *, GUID *, __int64 *))(*(_QWORD *)v12 + 64LL);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v21);
      v14 = v13(v12, *a2, v9, 0LL, 0LL, &v26, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v21);
      v15 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x31C,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
          (const char *)(unsigned int)v14);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a2);
        return v15;
      }
      v16 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v21 + 24LL))(
              v21,
              &Rect,
              0LL,
              0LL);
      v18 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x31D,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
          (const char *)(unsigned int)v16);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x31D,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
          (const char *)v18);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a2);
        return v18;
      }
      LOBYTE(v17) = 1;
      v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v21 + 152LL))(v21, 0LL, v17);
      v20 = v19;
      if ( v19 < 0 )
        break;
      v22 = v21;
      std::vector<wil::com_ptr_t<IDCompThumbnail,wil::err_returncode_policy>>::emplace_back<IDCompThumbnail *>(a4, &v22);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
      ++v7;
      v6 = v23;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x31E,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)v19);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31E,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)v20);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a2);
    result = v20;
  }
  catch ( ... )
  {
    LODWORD(v21) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x323,
                     (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
                     v10);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v24);
    return (unsigned int)v21;
  }
  return result;
}
