/*
 * XREFs of ?SetHostedPos@FrameWrapper@@UEAAJPEBUtagRECT@@@Z @ 0x1800B1540
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800463AC (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@AEAUtagRECT@@@Z @ 0x1800B074C (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800B1A80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicati.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800B1AEC (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicat.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall FrameWrapper::SetHostedPos(FrameWrapper *this, const struct tagRECT *a2)
{
  int v3; // ebx
  const char *v4; // r9
  __int64 v5; // rdx
  HMONITOR v7; // rsi
  RECT rcWork; // xmm0
  LONG left; // eax
  RECT *v10; // rbx
  int v11; // esi
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  LONG v15; // edx
  int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 *v19; // rcx
  int v20; // eax
  int v21; // eax
  __int64 v22; // [rsp+20h] [rbp-69h] BYREF
  __int64 v23; // [rsp+28h] [rbp-61h] BYREF
  HWND hwnd; // [rsp+30h] [rbp-59h] BYREF
  RECT rc; // [rsp+38h] [rbp-51h] BYREF
  struct tagPOINT Points[2]; // [rsp+50h] [rbp-39h] BYREF
  struct tagRECT v27; // [rsp+60h] [rbp-29h] BYREF
  __int128 v28; // [rsp+70h] [rbp-19h] BYREF
  struct tagRECT Rect; // [rsp+80h] [rbp-9h] BYREF
  __int128 v30; // [rsp+90h] [rbp+7h] BYREF
  struct tagMONITORINFO mi; // [rsp+A0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  rc = *a2;
  v28 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 2) + 120LL))(*((_QWORD *)this + 2), &v28);
  if ( v3 < 0 )
  {
    v17 = 131LL;
LABEL_37:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  rc.left -= v28;
  rc.top -= DWORD1(v28);
  rc.right -= DWORD2(v28);
  rc.bottom -= HIDWORD(v28);
  SetLastError(0);
  Rect = 0LL;
  if ( !GetClientRect(*((HWND *)this + 4), &Rect) )
  {
    v5 = 139LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v5,
             (unsigned int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
             v4);
  }
  v27 = 0LL;
  if ( !GetWindowRect(*((HWND *)this + 4), &v27) )
  {
    v5 = 142LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v5,
             (unsigned int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
             v4);
  }
  if ( !MapWindowPoints(0LL, *((HWND *)this + 4), (LPPOINT)&v27, 2u) && GetLastError() )
  {
    v5 = 146LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v5,
             (unsigned int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
             v4);
  }
  rc.left += v27.left - Rect.left;
  rc.top += v27.top - Rect.top;
  rc.right += v27.right - Rect.right;
  rc.bottom += v27.bottom - Rect.bottom;
  v7 = MonitorFromRect(&rc, 2u);
  if ( !v7 )
  {
    v3 = -2147418113;
    v17 = 153LL;
    goto LABEL_37;
  }
  memset(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  if ( GetMonitorInfoW(v7, &mi) )
  {
    LODWORD(v23) = 0;
    if ( (unsigned int)GetWindowBand(*((_QWORD *)this + 4), &v23) && (_DWORD)v23 == 1 )
      rcWork = mi.rcWork;
    else
      rcWork = mi.rcMonitor;
    if ( rc.top < rcWork.top )
    {
      v20 = rcWork.top - rc.top;
      rc.top = rcWork.top;
      rc.bottom += v20;
    }
    if ( rc.left < rcWork.left )
    {
      left = rcWork.left;
      rc.right += rcWork.left - rc.left;
LABEL_17:
      rc.left = left;
      goto LABEL_18;
    }
    v15 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rcWork, 8));
    if ( rc.right > v15 )
    {
      v16 = v15 - rc.right;
      left = v16 + rc.left;
      rc.right += v16;
      goto LABEL_17;
    }
  }
LABEL_18:
  hwnd = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, HWND *))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2), &hwnd);
  if ( v3 < 0 )
  {
    v17 = 192LL;
    goto LABEL_37;
  }
  if ( v7 == MonitorFromWindow(hwnd, 1u) )
    goto LABEL_20;
  v30 = 0LL;
  v3 = (*(__int64 (__fastcall **)(FrameWrapper *, __int128 *))(*(_QWORD *)this + 56LL))(this, &v30);
  if ( v3 < 0 )
  {
    v17 = 197LL;
    goto LABEL_37;
  }
  *(_OWORD *)&Points[0].x = v30;
  if ( !MapWindowPoints(hwnd, 0LL, Points, 2u) && GetLastError() )
  {
    v5 = 201LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v5,
             (unsigned int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
             v4);
  }
  Points[1].x += rc.left - Points[0].x;
  Points[0].x = rc.left;
  Points[1].y += rc.top - Points[0].y;
  Points[0].y = rc.top;
  v23 = 0LL;
  v21 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
          &v23,
          (__int64)Points);
  v3 = v21;
  if ( v21 < 0 )
  {
    v18 = 210LL;
    goto LABEL_39;
  }
  v21 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2), v23);
  v3 = v21;
  if ( v21 < 0 )
  {
    v18 = 211LL;
LABEL_39:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v21);
    v19 = &v23;
LABEL_40:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v19);
    return (unsigned int)v3;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
LABEL_20:
  v22 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
  v22 = 0LL;
  v10 = (RECT *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v10 )
  {
    v11 = -2147024882;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD7,
      (int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v11);
    v12 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    return (unsigned int)v11;
  }
  *(_QWORD *)&v10->left = &CCommonApplicationViewPositionImpl::`vftable';
  SetRectEmpty(v10 + 1);
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)&v10[2]);
  v10[4].top = 1;
  *(_QWORD *)&v10->left = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::Selector<CCommonApplicationViewPositionImpl,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CCommonApplicationViewPositionImpl>,Microsoft::WRL::FtmBase>>'};
  *(_QWORD *)&v10[2].left = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CCommonApplicationViewPositionImpl>,Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)&v10->left = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::Selector<CCommonApplicationViewPositionImpl,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CCommonApplicationViewPositionImpl>,Microsoft::WRL::FtmBase>>'};
  *(_QWORD *)&v10[2].left = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CCommonApplicationViewPositionImpl>,Microsoft::WRL::FtmBase>>'};
  v10[1] = rc;
  v11 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>>(
          v10,
          &GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6,
          &v22);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::Release(v10);
  if ( v11 < 0 )
    goto LABEL_22;
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2), v22);
  v3 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD8,
      (int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v13);
    v19 = &v22;
    goto LABEL_40;
  }
  v14 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return 0LL;
}
