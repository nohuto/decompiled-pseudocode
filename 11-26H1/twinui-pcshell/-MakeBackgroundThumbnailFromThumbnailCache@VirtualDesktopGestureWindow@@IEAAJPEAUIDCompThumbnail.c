/*
 * XREFs of ?MakeBackgroundThumbnailFromThumbnailCache@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@PEAUIVirtualDesktop@@PEAUHSTRING__@@UtagRECT@@PEAPEAU2@@Z @ 0x180561308
 * Callers:
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z @ 0x18055E664 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopHotKeyWindow@@AEAAJPEA_NPEAUIVirtualDesktop@@V?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@IUtagRECT@@@Z @ 0x180569E30 (-CreateAdjacentDesktop@VirtualDesktopHotKeyWindow@@AEAAJPEA_NPEAUIVirtualDesktop@@V-$shared_any_.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x18027EED0 (-complete@-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@d.c)
 *     _o_ceilf_0 @ 0x1802C9E24 (_o_ceilf_0.c)
 *     ??$copy_to@UIApplicationView@@@?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIApplicationView@@@Z @ 0x1804A2A7C (--$copy_to@UIApplicationView@@@-$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18055BF24 (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfT.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18055CA28 (--1-$test_data_control@V-$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@detail.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18055CA60 (--1-$test_watcher@V-$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@@1@XZ @ 0x18055CC58 (--C-$tip_test@V-$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@@.c)
 *     BindCtx_CreateWithObjectParam @ 0x18055DAAC (BindCtx_CreateWithObjectParam.c)
 *     ?GetWallpaperPositionData@VirtualDesktopGestureWindow@@IEAAJHHAEAUWallpaperPositionData@1@@Z @ 0x180560564 (-GetWallpaperPositionData@VirtualDesktopGestureWindow@@IEAAJHHAEAUWallpaperPositionData@1@@Z.c)
 *     ?Release@?$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@AEAAKXZ @ 0x180561E50 (-Release@-$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@AEAAKXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDAnimationWallpaperJumpBugFix@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805620E8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDAni.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall VirtualDesktopGestureWindow::MakeBackgroundThumbnailFromThumbnailCache(
        VirtualDesktopGestureWindow *this,
        struct IDCompThumbnail *a2,
        __int64 (__fastcall ***a3)(struct IVirtualDesktop *, GUID *, __int64 *),
        HSTRING a4,
        struct tagRECT *a5,
        struct IDCompThumbnail **a6)
{
  void **v9; // r15
  volatile signed __int32 *v10; // rdx
  void *v11; // rcx
  BOOL v12; // ebx
  HRESULT v13; // eax
  __int64 v14; // rdx
  CDummyUnknown *v15; // rcx
  unsigned int v16; // ebx
  int v17; // eax
  const WCHAR *StringRawBuffer; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 (__fastcall *v24)(__int64, struct IDCompThumbnail *, __int64, __int64, GUID *, __int64 *); // rbx
  __int64 v25; // rdi
  __int64 (__fastcall *v26)(__int64, struct IDCompThumbnail *, _QWORD, HANDLE, GUID *, __int64 *); // rbx
  DWORD SysColor; // eax
  int v28; // eax
  __int64 v29; // rdx
  __int64 (__fastcall **v30)(struct IVirtualDesktop *, GUID *, __int64 *); // rax
  int v31; // eax
  int v32; // eax
  __int64 v34; // [rsp+40h] [rbp-C0h] BYREF
  IBindCtx *pbc; // [rsp+48h] [rbp-B8h] BYREF
  void *v36; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE h; // [rsp+58h] [rbp-A8h] BYREF
  int v38[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+68h] [rbp-98h] BYREF
  UINT32 length; // [rsp+70h] [rbp-90h] BYREF
  int v41; // [rsp+74h] [rbp-8Ch] BYREF
  int v42; // [rsp+78h] [rbp-88h] BYREF
  LPVOID ppv; // [rsp+80h] [rbp-80h] BYREF
  float v44; // [rsp+88h] [rbp-78h] BYREF
  __int64 v45; // [rsp+8Ch] [rbp-74h]
  int v46; // [rsp+94h] [rbp-6Ch]
  struct IDCompThumbnail *v47; // [rsp+98h] [rbp-68h]
  _QWORD *v48; // [rsp+A0h] [rbp-60h]
  _OWORD pv[2]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v50[15]; // [rsp+C8h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v47 = a2;
  v48 = a6;
  *a6 = 0LL;
  v9 = (void **)((char *)this + 312);
  v10 = (volatile signed __int32 *)*((_QWORD *)tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_LoadCustomVDWallpaperWithGesturePerfTest,_tip_LoadCustomVDWallpaperWithGesturePerfTest>>>((struct wil::details::IFailureCallback *)v50)
                                   + 6);
  v11 = *v9;
  *v9 = (void *)v10;
  if ( v10 )
    _InterlockedIncrement(v10 + 70);
  if ( v11 )
    tip2::details::merged_data<_tip_LoadCustomVDWallpaperWithGesturePerfTest,_tip_LoadCustomVDWallpaperWithGesturePerfTest>::Release(v11);
  tip2::test_watcher<tip2::details::merged_data<_tip_LoadCustomVDWallpaperWithGesturePerfTest,_tip_LoadCustomVDWallpaperWithGesturePerfTest>>::~test_watcher<tip2::details::merged_data<_tip_LoadCustomVDWallpaperWithGesturePerfTest,_tip_LoadCustomVDWallpaperWithGesturePerfTest>>((__int64)v50);
  *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_LoadCustomVDWallpaperWithGesturePerfTest,_tip_LoadCustomVDWallpaperWithGesturePerfTest>>::operator->(
                 (__int64)this + 312,
                 (__int64 *)&h)
            + 272) = 0;
  tip2::test_data_control<tip2::details::merged_data<_tip_LoadCustomVDWallpaperWithGesturePerfTest,_tip_LoadCustomVDWallpaperWithGesturePerfTest>>::~test_data_control<tip2::details::merged_data<_tip_LoadCustomVDWallpaperWithGesturePerfTest,_tip_LoadCustomVDWallpaperWithGesturePerfTest>>(&h);
  v12 = *((_DWORD *)this + 57) != 2;
  *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_LoadCustomVDWallpaperWithGesturePerfTest,_tip_LoadCustomVDWallpaperWithGesturePerfTest>>::operator->(
                 (__int64)this + 312,
                 (__int64 *)&h)
            + 276) = v12;
  tip2::test_data_control<tip2::details::merged_data<_tip_LoadCustomVDWallpaperWithGesturePerfTest,_tip_LoadCustomVDWallpaperWithGesturePerfTest>>::~test_data_control<tip2::details::merged_data<_tip_LoadCustomVDWallpaperWithGesturePerfTest,_tip_LoadCustomVDWallpaperWithGesturePerfTest>>(&h);
  ppv = 0LL;
  v13 = CoCreateInstance(
          &GUID_50ef4544_ac9f_4a8e_b21b_8a26180db13f,
          0LL,
          1u,
          &GUID_f676c15d_596a_4ce2_8234_33996f445db1,
          &ppv);
  v16 = v13;
  if ( v13 >= 0 )
  {
    pbc = 0LL;
    v17 = BindCtx_CreateWithObjectParam(v15, v14, &pbc);
    v16 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x47C,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v17);
LABEL_9:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&pbc);
      goto LABEL_37;
    }
    v34 = 0LL;
    length = 0;
    v36 = 0LL;
    StringRawBuffer = WindowsGetStringRawBuffer(a4, &length);
    if ( SHCreateItemFromParsingName(StringRawBuffer, pbc, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, &v36) < 0 )
    {
      v25 = *((_QWORD *)this + 7);
      v26 = *(__int64 (__fastcall **)(__int64, struct IDCompThumbnail *, _QWORD, HANDLE, GUID *, __int64 *))(*(_QWORD *)v25 + 104LL);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v34);
      LODWORD(h) = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
      HIDWORD(h) = *((_DWORD *)this + 49) - *((_DWORD *)this + 47);
      SysColor = GetSysColor(1);
      v28 = v26(v25, v47, SysColor, h, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v34);
      v16 = v28;
      if ( v28 < 0 )
      {
        v29 = 1233LL;
LABEL_25:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v29,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v28);
        goto LABEL_15;
      }
      v30 = *a3;
      v39 = 0LL;
      v31 = (*v30)((struct IVirtualDesktop *)a3, &GUID_c9be252c_e386_425e_b33c_ca422112f51f, &v39);
      v16 = v31;
      if ( v31 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4D3,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v31);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v39);
        goto LABEL_15;
      }
      v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v39 + 40LL))(v39, 0LL);
      if ( v32 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x4D4,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v32);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v39);
    }
    else
    {
      *(_QWORD *)v38 = 0LL;
      v19 = (*(__int64 (__fastcall **)(LPVOID, void *, _QWORD, _QWORD, int *, _QWORD, _QWORD))(*(_QWORD *)ppv + 24LL))(
              ppv,
              v36,
              (unsigned int)(*((_DWORD *)this + 48) - *((_DWORD *)this + 46)),
              0LL,
              v38,
              0LL,
              0LL);
      v16 = v19;
      if ( v19 < 0 )
      {
        v20 = 1156LL;
LABEL_13:
        v21 = (unsigned int)v19;
LABEL_14:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v20,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)v21);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v38);
LABEL_15:
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v36);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v34);
        goto LABEL_9;
      }
      h = 0LL;
      v19 = (*(__int64 (__fastcall **)(_QWORD, HANDLE *))(**(_QWORD **)v38 + 24LL))(*(_QWORD *)v38, &h);
      v16 = v19;
      if ( v19 < 0 )
      {
        v20 = 1159LL;
        goto LABEL_13;
      }
      memset(pv, 0, sizeof(pv));
      if ( !GetObjectW(h, 32, pv) )
      {
        v16 = -2147467259;
        v21 = 2147500037LL;
        v20 = 1162LL;
        goto LABEL_14;
      }
      LOBYTE(v22) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDAnimationWallpaperJumpBugFix>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDAnimationWallpaperJumpBugFix>::GetImpl'::`2'::impl,
        v22);
      v44 = 1.0;
      v45 = 1065353216LL;
      v46 = 0;
      VirtualDesktopGestureWindow::GetWallpaperPositionData(
        this,
        SDWORD1(pv[0]),
        SDWORD2(pv[0]),
        (struct VirtualDesktopGestureWindow::WallpaperPositionData *)&v44);
      v41 = (int)o_ceilf_0((float)SDWORD1(pv[0]) * v44);
      v42 = (int)o_ceilf_0((float)SDWORD2(pv[0]) * *(float *)&v45);
      v23 = *((_QWORD *)this + 7);
      v24 = *(__int64 (__fastcall **)(__int64, struct IDCompThumbnail *, __int64, __int64, GUID *, __int64 *))(*(_QWORD *)v23 + 72LL);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v34);
      LODWORD(v39) = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
      HIDWORD(v39) = *((_DWORD *)this + 49) - *((_DWORD *)this + 47);
      v19 = v24(v23, v47, v39, 1LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v34);
      v16 = v19;
      if ( v19 < 0 )
      {
        v20 = 1174LL;
        goto LABEL_13;
      }
      v50[0] = &h;
      v50[1] = &v44;
      v50[2] = &v41;
      v50[3] = &v42;
      v50[4] = pv;
      v50[5] = this;
      (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(__int64, __int64, __int64), _QWORD *))(*(_QWORD *)v34 + 88LL))(
        v34,
        LambdaCustomPaintProc__lambda_f2ca46843af7fe20e5ddf713755dabab__HDC___,
        v50);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v38);
    }
    v28 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v34 + 24LL))(
            v34,
            a5,
            0LL,
            0LL);
    v16 = v28;
    if ( v28 >= 0 )
    {
      if ( *((_DWORD *)this + 57) != 5
        || (v28 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v34 + 40LL))(
                    v34,
                    a5,
                    0LL,
                    0LL),
            v16 = v28,
            v28 >= 0) )
      {
        wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>::copy_to<IApplicationView>(&v34, v48);
        tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::complete((__int64 *)this + 39);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v36);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v34);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&pbc);
        v16 = 0;
        goto LABEL_37;
      }
      v29 = 1245LL;
    }
    else
    {
      v29 = 1239LL;
    }
    goto LABEL_25;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x479,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)(unsigned int)v13);
LABEL_37:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppv);
  return v16;
}
