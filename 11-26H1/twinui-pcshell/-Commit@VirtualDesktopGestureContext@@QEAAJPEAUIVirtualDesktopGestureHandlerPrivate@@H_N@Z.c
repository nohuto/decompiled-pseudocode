/*
 * XREFs of ?Commit@VirtualDesktopGestureContext@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@H_N@Z @ 0x18055DD4C
 * Callers:
 *     ?FinishSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z @ 0x18055F6C0 (-FinishSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z.c)
 *     ?FinishTouchSwipe@VirtualDesktopGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z @ 0x18055F7B0 (-FinishTouchSwipe@VirtualDesktopGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1801ABBF4 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18028A2A0 (--1-$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802AF714 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ?AddVelocityToHistory@VirtualDesktopGestureContext@@AEAAXH@Z @ 0x1802B930C (-AddVelocityToHistory@VirtualDesktopGestureContext@@AEAAXH@Z.c)
 *     __std_minmax_element_4 @ 0x1802CD230 (__std_minmax_element_4.c)
 *     ?Commit@VirtualDesktopGestureWindow@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@IM_N@Z @ 0x18055E190 (-Commit@VirtualDesktopGestureWindow@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@IM_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall VirtualDesktopGestureContext::Commit(
        VirtualDesktopGestureContext *this,
        struct IVirtualDesktopGestureHandlerPrivate *a2,
        int a3,
        bool a4)
{
  int v7; // edx
  int v8; // r14d
  int **v9; // rax
  __m128i v10; // xmm1
  double v11; // xmm2_8
  int v12; // ecx
  int v13; // eax
  double v14; // xmm3_8
  int v15; // edx
  int v16; // eax
  double v17; // xmm4_8
  int v18; // eax
  unsigned int v19; // r15d
  bool v20; // zf
  __int64 v21; // rdi
  __int64 (__fastcall *v22)(__int64, __int128 *); // rbx
  int v23; // eax
  unsigned int v24; // ebx
  __int64 v25; // rdi
  int (__fastcall *v26)(__int64, _QWORD, _QWORD, __int64 *); // rbx
  __int64 (__fastcall **v27)(_QWORD, GUID *, __int64 *); // rax
  int v28; // eax
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rcx
  __int64 (__fastcall **v32)(__int64, GUID *, _QWORD); // rax
  int v33; // eax
  __int64 (__fastcall **v34)(_QWORD, GUID *, __int64 *); // rax
  int v35; // eax
  __int64 v36; // rdx
  VirtualDesktopGestureWindow **v37; // rbx
  VirtualDesktopGestureWindow **v38; // r15
  int v39; // eax
  unsigned int v40; // edi
  __int64 v42; // [rsp+30h] [rbp-50h] BYREF
  __int64 v43; // [rsp+38h] [rbp-48h] BYREF
  __int64 (__fastcall ***v44)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-40h] BYREF
  __int64 v45; // [rsp+48h] [rbp-38h] BYREF
  __int128 v46; // [rsp+50h] [rbp-30h] BYREF
  __int64 v47[2]; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  __int64 v49; // [rsp+B0h] [rbp+30h] BYREF

  v7 = -a3;
  if ( !*((_BYTE *)this + 66) )
    v7 = a3;
  VirtualDesktopGestureContext::AddVelocityToHistory(this, v7);
  v8 = 0;
  v9 = (int **)_std_minmax_element_4(&v46, (__m128i *)((char *)this + 104), (__m128i *)((char *)this + 164), 1u);
  v10 = *(__m128i *)v9;
  v11 = (double)*((int *)this + 12);
  v12 = **v9;
  v13 = -v12;
  if ( v12 > 0 )
    v13 = v12;
  v14 = (double)v13 * 1000.0 / v11;
  v15 = *(_DWORD *)_mm_srli_si128(v10, 8).m128i_i32[0];
  v16 = -v15;
  if ( v15 > 0 )
    v16 = v15;
  v17 = (double)v16 * 1000.0 / v11;
  v18 = *((_DWORD *)this + 14);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)v18 / (float)*((int *)this + 12)) & _xmm) <= 0.25 )
  {
    if ( v14 >= 0.2 && v12 < 0 && v18 < 0 )
      goto LABEL_15;
    if ( v17 < 0.2 || v15 <= 0 || v18 <= 0 )
      goto LABEL_38;
  }
  if ( v18 < 0 )
  {
LABEL_15:
    v19 = 4;
    v20 = *((_BYTE *)this + 63) == 0;
    goto LABEL_17;
  }
  v19 = 3;
  v20 = *((_BYTE *)this + 62) == 0;
LABEL_17:
  if ( !v20 )
  {
    *(_QWORD *)&v46 = 0LL;
    v21 = *(_QWORD *)this;
    v22 = *(__int64 (__fastcall **)(__int64, __int128 *))(**(_QWORD **)this + 48LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v46);
    v23 = v22(v21, &v46);
    v24 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5D8,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v23);
LABEL_47:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v46);
      return v24;
    }
    v42 = 0LL;
    v25 = *(_QWORD *)this;
    v26 = *(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(**(_QWORD **)this + 64LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v42);
    if ( v26(v25, v46, v19, &v42) >= 0 )
    {
      v43 = 0LL;
      v27 = *(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v46;
      v43 = 0LL;
      v28 = (*v27)(v46, &GUID_a871910e_6cc0_4e65_8b9b_458ce9115e30, &v43);
      v24 = v28;
      if ( v28 < 0 )
      {
        v29 = 1502LL;
LABEL_45:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v29,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v28);
        goto LABEL_46;
      }
      LODWORD(v49) = 0;
      v30 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v43 + 56LL))(v43, &v49);
      if ( v30 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x5E0,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v30);
      v31 = *(_QWORD *)this;
      if ( (_DWORD)v49 )
      {
        v44 = 0LL;
        v32 = *(__int64 (__fastcall ***)(__int64, GUID *, _QWORD))v31;
        v44 = 0LL;
        v33 = (*v32)(v31, &GUID_53f5ca0b_158f_4124_900c_057158060b27, &v44);
        v24 = v33;
        if ( v33 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5E5,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
            (const char *)(unsigned int)v33);
LABEL_28:
          wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>((__int64 *)&v44);
LABEL_46:
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v43);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v42);
          goto LABEL_47;
        }
        v45 = 0LL;
        v34 = *v44;
        v45 = 0LL;
        v35 = (*v34)(v44, &GUID_95bb3d6c_9eba_40cc_af4d_1a3255717d9d, &v45);
        v24 = v35;
        if ( v35 < 0 )
        {
          v36 = 1511LL;
LABEL_31:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v36,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
            (const char *)(unsigned int)v35);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v45);
          goto LABEL_28;
        }
        v35 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v45 + 336LL))(v45, v42, 2LL);
        v24 = v35;
        if ( v35 < 0 )
        {
          v36 = 1512LL;
          goto LABEL_31;
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v45);
        wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>((__int64 *)&v44);
      }
      else
      {
        v28 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 72LL))(v31, v42);
        v24 = v28;
        if ( v28 < 0 )
        {
          v29 = 1516LL;
          goto LABEL_45;
        }
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v43);
      v8 = -1;
      if ( v19 != 4 )
        v8 = 1;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v42);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v46);
  }
LABEL_38:
  v49 = *((_QWORD *)this + 1);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v49);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v47, &v49, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v49);
  v37 = (VirtualDesktopGestureWindow **)*((_QWORD *)this + 9);
  v38 = &v37[*((_QWORD *)this + 10)];
  if ( v37 == v38 )
  {
LABEL_41:
    v40 = 0;
  }
  else
  {
    while ( 1 )
    {
      v39 = VirtualDesktopGestureWindow::Commit(*v37, a2, *((_DWORD *)this + 45), (float)v8, a4);
      v40 = v39;
      if ( v39 < 0 )
        break;
      if ( ++v37 == v38 )
        goto LABEL_41;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x603,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v39);
  }
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v47);
  return v40;
}
