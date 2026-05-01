/*
 * XREFs of ?CreateTrayThumbnail@CAppThumbnailWindow@@IEAAJAEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x1804943E4
 * Callers:
 *     ?CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ @ 0x180492544 (-CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800F646C (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802ED918 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 *     ?CreateThumbnailsFromWindows@CAppThumbnailWindow@@IEAAJV?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@AEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@AEAV?$vector@V?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@Z @ 0x180494108 (-CreateThumbnailsFromWindows@CAppThumbnailWindow@@IEAAJV-$com_ptr_t@UIDCompThumbnail@@Uerr_retur.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppThumbnailWindow::CreateTrayThumbnail(__int64 a1, HWND **a2)
{
  __int64 v4; // rcx
  __int64 *v6; // r14
  int v7; // eax
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64, __int64, GUID *, __int64); // rbx
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v14[4]; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl)
    && (unsigned int)IsGamingFullScreenExperienceActive(v4) )
  {
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)(a1 + 56));
    return 0LL;
  }
  v6 = (__int64 *)(a1 + 56);
  v7 = *(_DWORD *)(a1 + 144) - *(_DWORD *)(a1 + 136);
  v8 = *(_QWORD *)(a1 + 16);
  v14[0] = 0;
  v14[1] = 0;
  v14[2] = v7;
  v14[3] = *(_DWORD *)(a1 + 148) - *(_DWORD *)(a1 + 140);
  v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64, GUID *, __int64))(*(_QWORD *)v8 + 112LL);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)(a1 + 56));
  v10 = *(_QWORD *)(a1 + 40);
  LODWORD(v13) = *(_DWORD *)(a1 + 144) - *(_DWORD *)(a1 + 136);
  HIDWORD(v13) = *(_DWORD *)(a1 + 148) - *(_DWORD *)(a1 + 140);
  v11 = v9(v8, v10, v13, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, a1 + 56);
  if ( v11 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, _QWORD))(*(_QWORD *)*v6 + 24LL))(*v6, v14, 0LL, 0LL);
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)*v6 + 152LL))(
              *v6,
              *(_QWORD *)(a1 + 64),
              0LL);
      if ( v11 >= 0 )
      {
        wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
          &v13,
          *v6);
        v11 = CAppThumbnailWindow::CreateThumbnailsFromWindows(a1, &v13, a2, a1 + 96);
        if ( v11 >= 0 )
          return 0LL;
        v12 = 638LL;
      }
      else
      {
        v12 = 633LL;
      }
    }
    else
    {
      v12 = 632LL;
    }
  }
  else
  {
    v12 = 631LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
    (const char *)(unsigned int)v11);
  return (unsigned int)v11;
}
