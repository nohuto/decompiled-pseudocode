/*
 * XREFs of ?CreateTrayThumbnail@CAppThumbnailWindow@@IEAAJAEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x1804A52A8
 * Callers:
 *     ?CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ @ 0x1804A3304 (-CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800580B4 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802E7978 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 *     ?CreateThumbnailsFromWindows@CAppThumbnailWindow@@IEAAJV?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@AEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@AEAV?$vector@V?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@Z @ 0x1804A4FE8 (-CreateThumbnailsFromWindows@CAppThumbnailWindow@@IEAAJV-$com_ptr_t@UIDCompThumbnail@@Uerr_retur.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppThumbnailWindow::CreateTrayThumbnail(__int64 a1, HWND **a2)
{
  __int64 v4; // rcx
  __int64 *v6; // r14
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64, __int64, GUID *, __int64); // rbx
  __int64 v9; // rdx
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+38h] [rbp-30h] BYREF
  int v14; // [rsp+40h] [rbp-28h]
  int v15; // [rsp+44h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl)
    && (unsigned int)IsGamingFullScreenExperienceActive(v4) )
  {
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)(a1 + 56));
    return 0LL;
  }
  v6 = (__int64 *)(a1 + 56);
  v7 = *(_QWORD *)(a1 + 16);
  v14 = *(_DWORD *)(a1 + 144) - *(_DWORD *)(a1 + 136);
  v15 = *(_DWORD *)(a1 + 148) - *(_DWORD *)(a1 + 140);
  v13 = 0LL;
  v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64, GUID *, __int64))(*(_QWORD *)v7 + 112LL);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)(a1 + 56));
  v9 = *(_QWORD *)(a1 + 40);
  LODWORD(v12) = *(_DWORD *)(a1 + 144) - *(_DWORD *)(a1 + 136);
  HIDWORD(v12) = *(_DWORD *)(a1 + 148) - *(_DWORD *)(a1 + 140);
  v10 = v8(v7, v9, v12, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, a1 + 56);
  if ( v10 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)*v6 + 24LL))(*v6, &v13, 0LL, 0LL);
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)*v6 + 152LL))(
              *v6,
              *(_QWORD *)(a1 + 64),
              0LL);
      if ( v10 >= 0 )
      {
        wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
          &v12,
          *v6);
        v10 = CAppThumbnailWindow::CreateThumbnailsFromWindows(a1, &v12, a2, a1 + 96);
        if ( v10 >= 0 )
          return 0LL;
        v11 = 715LL;
      }
      else
      {
        v11 = 710LL;
      }
    }
    else
    {
      v11 = 709LL;
    }
  }
  else
  {
    v11 = 708LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
    (const char *)(unsigned int)v10);
  return (unsigned int)v10;
}
