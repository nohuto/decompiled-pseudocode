/*
 * XREFs of _lambda_93656037d821f0cf4f10769c2d148d9f_::operator() @ 0x180538F68
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_74c676e1075650fb24d91a9b16da121f___::Invoke @ 0x18053D240 (CAsyncCallbackWithLambda__lambda_74c676e1075650fb24d91a9b16da121f___--Invoke.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x180289BA0 (-complete@-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@d.c)
 *     ?AddThumbnailToThumbnailCollection@VirtualDesktopGestureWindow@@QEAAJIPEAUIDCompThumbnail@@@Z @ 0x180539B20 (-AddThumbnailToThumbnailCollection@VirtualDesktopGestureWindow@@QEAAJIPEAUIDCompThumbnail@@@Z.c)
 *     ?GetWallpaperPositionData@VirtualDesktopGestureWindow@@IEAAJHHAEAUWallpaperPositionData@1@@Z @ 0x18053C75C (-GetWallpaperPositionData@VirtualDesktopGestureWindow@@IEAAJHHAEAUWallpaperPositionData@1@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDAnimationWallpaperJumpBugFix@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18053E28C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDAni.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_93656037d821f0cf4f10769c2d148d9f_::operator()(__int64 a1)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, _QWORD, _QWORD, unsigned __int64, GUID *, struct IDCompThumbnail **); // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD v14[4]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IDCompThumbnail *v16; // [rsp+70h] [rbp+20h] BYREF
  __int64 v17; // [rsp+78h] [rbp+28h] BYREF
  unsigned __int64 v18; // [rsp+80h] [rbp+30h]

  v17 = 0LL;
  v2 = *(__int64 **)(a1 + 56);
  v3 = *v2;
  v17 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v3 + 104))(v2, &v17);
  v6 = v4;
  if ( v4 < 0 )
  {
    v7 = 1085LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_24;
  }
  LOBYTE(v5) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDAnimationWallpaperJumpBugFix>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDAnimationWallpaperJumpBugFix>::GetImpl'::`2'::impl,
    v5);
  v14[0] = 1065353216;
  v14[1] = 1065353216;
  v14[2] = 0;
  v14[3] = 0;
  VirtualDesktopGestureWindow::GetWallpaperPositionData(
    *(VirtualDesktopGestureWindow **)a1,
    *(_DWORD *)(a1 + 8),
    *(_DWORD *)(a1 + 12),
    (struct VirtualDesktopGestureWindow::WallpaperPositionData *)v14);
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 32LL))(v17);
  v6 = v4;
  if ( v4 < 0 )
  {
    v7 = 1092LL;
    goto LABEL_5;
  }
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 48LL))(v17);
  v6 = v4;
  if ( v4 < 0 )
  {
    v7 = 1093LL;
    goto LABEL_5;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 56LL))(*(_QWORD *)(a1 + 48), v17);
  v6 = v4;
  if ( v4 < 0 )
  {
    v7 = 1094LL;
    goto LABEL_5;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 32LL))(*(_QWORD *)(a1 + 48));
  v6 = v4;
  if ( v4 < 0 )
  {
    v7 = 1096LL;
    goto LABEL_5;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 48LL))(*(_QWORD *)(a1 + 48));
  v6 = v4;
  if ( v4 < 0 )
  {
    v7 = 1097LL;
    goto LABEL_5;
  }
  v16 = 0LL;
  v8 = *(_QWORD *)(a1 + 72);
  v9 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, unsigned __int64, GUID *, struct IDCompThumbnail **))(*(_QWORD *)v8 + 120LL);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&v16);
  v18 = __PAIR64__(*(_DWORD *)(a1 + 44) - *(_DWORD *)(a1 + 36), *(_DWORD *)(a1 + 40) - *(_DWORD *)(a1 + 32));
  v10 = v9(v8, *(_QWORD *)(a1 + 64), *(_QWORD *)(a1 + 48), v18, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v16);
  v6 = v10;
  if ( v10 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(struct IDCompThumbnail *, __int64, _QWORD, _QWORD))(*(_QWORD *)v16 + 24LL))(
            v16,
            a1 + 16,
            0LL,
            0LL);
    v6 = v10;
    if ( v10 >= 0 )
    {
      LOBYTE(v12) = 1;
      v10 = (*(__int64 (__fastcall **)(struct IDCompThumbnail *, _QWORD, __int64))(*(_QWORD *)v16 + 152LL))(
              v16,
              *(_QWORD *)(a1 + 88),
              v12);
      v6 = v10;
      if ( v10 >= 0 )
      {
        v10 = VirtualDesktopGestureWindow::AddThumbnailToThumbnailCollection(
                *(VirtualDesktopGestureWindow **)a1,
                *(_DWORD *)(a1 + 80),
                v16);
        v6 = v10;
        if ( v10 >= 0 )
        {
          tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::complete((__int64 *)(*(_QWORD *)a1 + 320LL));
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v16);
          v6 = 0;
          goto LABEL_24;
        }
        v11 = 1118LL;
      }
      else
      {
        v11 = 1114LL;
      }
    }
    else
    {
      v11 = 1108LL;
    }
  }
  else
  {
    v11 = 1107LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)(unsigned int)v10);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v16);
LABEL_24:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
  return v6;
}
