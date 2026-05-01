/*
 * XREFs of ?CreateBackgroundThumbnail@CAppThumbnailWindow@@IEAAJAEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x1804A41D8
 * Callers:
 *     ?CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ @ 0x1804A3304 (-CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800580B4 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802E7978 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 *     ?CreateThumbnailsFromWindows@CAppThumbnailWindow@@IEAAJV?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@AEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@AEAV?$vector@V?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@Z @ 0x1804A4FE8 (-CreateThumbnailsFromWindows@CAppThumbnailWindow@@IEAAJV-$com_ptr_t@UIDCompThumbnail@@Uerr_retur.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppThumbnailWindow::CreateBackgroundThumbnail(__int64 a1, _QWORD *a2)
{
  char IsEnabled; // al
  __int64 *v5; // r14
  __int64 *v6; // rcx
  __int64 *v7; // rbx
  __int64 v8; // rdi
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, _QWORD, __int64, GUID *, __int64); // rbx
  char v14; // al
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+48h] [rbp-18h] BYREF
  int v19; // [rsp+50h] [rbp-10h]
  int v20; // [rsp+54h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v18 = 0LL;
  v19 = *(_DWORD *)(a1 + 144) - *(_DWORD *)(a1 + 136);
  v20 = *(_DWORD *)(a1 + 148) - *(_DWORD *)(a1 + 140);
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl);
  v5 = (__int64 *)(a1 + 48);
  v6 = (__int64 *)(a1 + 48);
  if ( IsEnabled )
  {
    v7 = *(__int64 **)(a1 + 16);
    v8 = *v7;
    if ( *a2 == a2[1] )
    {
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(v6);
      LODWORD(v17) = *(_DWORD *)(a1 + 144) - *(_DWORD *)(a1 + 136);
      HIDWORD(v17) = *(_DWORD *)(a1 + 148) - *(_DWORD *)(a1 + 140);
      v9 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64, GUID *, __int64))(v8 + 104))(
             v7,
             *(_QWORD *)(a1 + 40),
             0LL,
             v17,
             &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
             a1 + 48);
      if ( v9 < 0 )
      {
        v10 = 734LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
          (const char *)(unsigned int)v9);
        return (unsigned int)v9;
      }
    }
    else
    {
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(v6);
      LODWORD(v17) = *(_DWORD *)(a1 + 144) - *(_DWORD *)(a1 + 136);
      HIDWORD(v17) = *(_DWORD *)(a1 + 148) - *(_DWORD *)(a1 + 140);
      v9 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, GUID *, __int64))(v8 + 112))(
             v7,
             *(_QWORD *)(a1 + 40),
             v17,
             &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
             a1 + 48);
      if ( v9 < 0 )
      {
        v10 = 740LL;
        goto LABEL_5;
      }
    }
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 16);
    v13 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64))(*(_QWORD *)v12 + 112LL);
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(v6);
    LODWORD(v17) = *(_DWORD *)(a1 + 144) - *(_DWORD *)(a1 + 136);
    HIDWORD(v17) = *(_DWORD *)(a1 + 148) - *(_DWORD *)(a1 + 140);
    v9 = v13(v12, *(_QWORD *)(a1 + 40), v17, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, a1 + 48);
    if ( v9 < 0 )
    {
      v10 = 747LL;
      goto LABEL_5;
    }
  }
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)*v5 + 24LL))(*v5, &v18, 0LL, 0LL);
  if ( v9 < 0 )
  {
    v10 = 750LL;
    goto LABEL_5;
  }
  v14 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl);
  v15 = *(_QWORD *)(a1 + 56);
  if ( v14 )
  {
    if ( !v15 )
      v15 = *(_QWORD *)(a1 + 64);
    wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
      &v17,
      v15);
    v16 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)*v5 + 152LL))(*v5, v17, 0LL);
    v9 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F4,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
        (const char *)(unsigned int)v16);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
      return (unsigned int)v9;
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)*v5 + 152LL))(*v5, v15, 0LL);
    if ( v9 < 0 )
    {
      v10 = 760LL;
      goto LABEL_5;
    }
  }
  wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(&v17, *v5);
  v9 = CAppThumbnailWindow::CreateThumbnailsFromWindows(a1, &v17, a2, a1 + 72);
  if ( v9 < 0 )
  {
    v10 = 766LL;
    goto LABEL_5;
  }
  return 0LL;
}
