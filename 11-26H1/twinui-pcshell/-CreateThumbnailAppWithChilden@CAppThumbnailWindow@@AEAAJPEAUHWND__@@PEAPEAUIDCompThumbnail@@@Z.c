/*
 * XREFs of ?CreateThumbnailAppWithChilden@CAppThumbnailWindow@@AEAAJPEAUHWND__@@PEAPEAUIDCompThumbnail@@@Z @ 0x1804A4C30
 * Callers:
 *     ?TryCreateThumbnailsForTopTwoAppsAndAddToExcludeList@CAppThumbnailWindow@@AEAAJAEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x1804A9760 (-TryCreateThumbnailsForTopTwoAppsAndAddToExcludeList@CAppThumbnailWindow@@AEAAJAEAV-$vector@PEAU.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180042238 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$copy_to@UIApplicationView@@@?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIApplicationView@@@Z @ 0x1804A2A7C (--$copy_to@UIApplicationView@@@-$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAppThumbnailWindow::CreateThumbnailAppWithChilden(
        CAppThumbnailWindow *this,
        HWND a2,
        struct IDCompThumbnail **a3)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, _QWORD, _QWORD, LPARAM *, int *); // rbx
  int v8; // eax
  signed int Error; // ebx
  __int64 v10; // rdx
  BOOL v11; // eax
  int v12; // eax
  __int64 v13; // rdx
  int v14[2]; // [rsp+30h] [rbp-39h] BYREF
  __int128 v15; // [rsp+38h] [rbp-31h] BYREF
  __int64 v16; // [rsp+48h] [rbp-21h]
  char *v17; // [rsp+50h] [rbp-19h] BYREF
  __int64 v18; // [rsp+58h] [rbp-11h] BYREF
  LPARAM lParam[2]; // [rsp+60h] [rbp-9h] BYREF
  _QWORD v20[2]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v21; // [rsp+80h] [rbp+17h] BYREF
  int v22; // [rsp+88h] [rbp+1Fh]
  int v23; // [rsp+8Ch] [rbp+23h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  HWND v25; // [rsp+D8h] [rbp+6Fh] BYREF

  v25 = a2;
  if ( !a2 )
    return 2147942487LL;
  *a3 = 0LL;
  *(_QWORD *)v14 = 0LL;
  v6 = *((_QWORD *)this + 2);
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, LPARAM *, int *))(*(_QWORD *)v6 + 88LL);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)v14);
  *(_OWORD *)lParam = *(_OWORD *)((char *)this + 136);
  v8 = v7(v6, *((_QWORD *)this + 5), 0LL, lParam, v14);
  Error = v8;
  if ( v8 < 0 )
  {
    v10 = 473LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_24;
  }
  v21 = 0LL;
  v22 = *((_DWORD *)this + 36) - *((_DWORD *)this + 34);
  v23 = *((_DWORD *)this + 37) - *((_DWORD *)this + 35);
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD))(**(_QWORD **)v14 + 24LL))(
         *(_QWORD *)v14,
         &v21,
         0LL,
         0LL);
  Error = v8;
  if ( v8 < 0 )
  {
    v10 = 476LL;
    goto LABEL_7;
  }
  v15 = 0LL;
  v16 = 0LL;
  v20[0] = &v25;
  v20[1] = &v15;
  LODWORD(v17) = 0;
  lParam[0] = (LPARAM)&v17;
  lParam[1] = (LPARAM)v20;
  v11 = EnumWindows(
          (WNDENUMPROC)EnumWindowsHelpers::LambdaEnumWindowsProc__lambda_084b982c3a23c0cc356622f4c8c8a7df___,
          (LPARAM)lParam);
  Error = (int)v17;
  if ( (int)v17 >= 0 && (!v11 ? (Error = ResultFromKnownLastError()) : (Error = 0), Error >= 0) )
  {
    v18 = 0LL;
    v12 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v14)(
            *(_QWORD *)v14,
            &GUID_7814dccf_97c7_4f4f_8fc2_a3c6c8107597,
            &v18);
    Error = v12;
    if ( v12 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v18 + 24LL))(v18, 0LL, 0LL);
      Error = v12;
      if ( v12 >= 0 )
      {
        wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>::copy_to<IApplicationView>((__int64 *)v14, a3);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
        if ( (_QWORD)v15 )
        {
          std::_Deallocate<16>((void *)v15, (struct std::nothrow_t *)((v16 - v15) & 0xFFFFFFFFFFFFFFF8uLL));
          v15 = 0LL;
          v16 = 0LL;
        }
        Error = 0;
        goto LABEL_24;
      }
      v13 = 497LL;
    }
    else
    {
      v13 = 490LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)v12);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E7,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)Error);
  }
  if ( (_QWORD)v15 )
  {
    std::_Deallocate<16>((void *)v15, (struct std::nothrow_t *)((v16 - v15) & 0xFFFFFFFFFFFFFFF8uLL));
    v15 = 0LL;
    v16 = 0LL;
  }
LABEL_24:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v14);
  return (unsigned int)Error;
}
