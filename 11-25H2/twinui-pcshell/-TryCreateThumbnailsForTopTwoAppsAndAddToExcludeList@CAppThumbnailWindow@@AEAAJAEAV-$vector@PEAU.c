/*
 * XREFs of ?TryCreateThumbnailsForTopTwoAppsAndAddToExcludeList@CAppThumbnailWindow@@AEAAJAEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x180498AA8
 * Callers:
 *     ?CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ @ 0x180492544 (-CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$emplace_back@AEAPEAUHWND__@@@?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@QEAA?A_TAEAPEAUHWND__@@@Z @ 0x1802C6E78 (--$emplace_back@AEAPEAUHWND__@@@-$vector@PEAUHWND__@@V-$allocator@PEAUHWND__@@@std@@@std@@QEAA-A.c)
 *     ?CreateThumbnailAppWithChilden@CAppThumbnailWindow@@AEAAJPEAUHWND__@@PEAPEAUIDCompThumbnail@@@Z @ 0x180493D6C (-CreateThumbnailAppWithChilden@CAppThumbnailWindow@@AEAAJPEAUHWND__@@PEAPEAUIDCompThumbnail@@@Z.c)
 *     ?TryGetTopTwoWindows@CAppThumbnailWindow@@AEAAXPEAPEAUHWND__@@0@Z @ 0x180498CB0 (-TryGetTopTwoWindows@CAppThumbnailWindow@@AEAAXPEAPEAUHWND__@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppThumbnailWindow::TryCreateThumbnailsForTopTwoAppsAndAddToExcludeList(
        CAppThumbnailWindow *this,
        __int64 a2)
{
  HWND v4; // rsi
  HWND v5; // rbp
  int ThumbnailAppWithChilden; // edi
  __int64 v7; // rdx
  _QWORD *v9; // r15
  _QWORD *v10; // r12
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r8
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HWND v17; // [rsp+70h] [rbp+18h] BYREF
  HWND v18; // [rsp+78h] [rbp+20h] BYREF

  v18 = 0LL;
  v17 = 0LL;
  CAppThumbnailWindow::TryGetTopTwoWindows(this, &v18, &v17);
  v4 = v18;
  if ( v18 )
  {
    v5 = v17;
    if ( v17 )
    {
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 52);
      ThumbnailAppWithChilden = CAppThumbnailWindow::CreateThumbnailAppWithChilden(
                                  this,
                                  v4,
                                  (struct IDCompThumbnail **)this + 52);
      if ( ThumbnailAppWithChilden < 0 )
      {
        v7 = 468LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
          (const char *)(unsigned int)ThumbnailAppWithChilden);
        return (unsigned int)ThumbnailAppWithChilden;
      }
      v9 = (_QWORD *)((char *)this + 432);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 54);
      ThumbnailAppWithChilden = CAppThumbnailWindow::CreateThumbnailAppWithChilden(
                                  this,
                                  v4,
                                  (struct IDCompThumbnail **)this + 54);
      if ( ThumbnailAppWithChilden < 0 )
      {
        v7 = 469LL;
        goto LABEL_5;
      }
      v10 = (_QWORD *)((char *)this + 448);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 56);
      ThumbnailAppWithChilden = CAppThumbnailWindow::CreateThumbnailAppWithChilden(
                                  this,
                                  v5,
                                  (struct IDCompThumbnail **)this + 56);
      if ( ThumbnailAppWithChilden < 0 )
      {
        v7 = 470LL;
        goto LABEL_5;
      }
      v12 = *v9;
      LOBYTE(v11) = 1;
      v13 = *((_QWORD *)this + 8);
      *((_QWORD *)this + 71) = v4;
      *((_QWORD *)this + 72) = v5;
      ThumbnailAppWithChilden = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v12 + 152LL))(
                                  v12,
                                  v13,
                                  v11);
      if ( ThumbnailAppWithChilden < 0 )
      {
        v7 = 483LL;
        goto LABEL_5;
      }
      LOBYTE(v14) = 1;
      ThumbnailAppWithChilden = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v10 + 152LL))(
                                  *v10,
                                  *v9,
                                  v14);
      if ( ThumbnailAppWithChilden < 0 )
      {
        v7 = 484LL;
        goto LABEL_5;
      }
      LOBYTE(v15) = 1;
      ThumbnailAppWithChilden = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 52) + 152LL))(
                                  *((_QWORD *)this + 52),
                                  *v10,
                                  v15);
      if ( ThumbnailAppWithChilden < 0 )
      {
        v7 = 485LL;
        goto LABEL_5;
      }
      std::vector<HWND__ *>::emplace_back<HWND__ * &>(a2, &v18);
      std::vector<HWND__ *>::emplace_back<HWND__ * &>(a2, &v17);
      *((_QWORD *)this + 22) = v17;
    }
  }
  return 0LL;
}
