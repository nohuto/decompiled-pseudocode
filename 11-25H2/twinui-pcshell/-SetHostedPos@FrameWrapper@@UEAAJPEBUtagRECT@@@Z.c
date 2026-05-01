/*
 * XREFs of ?SetHostedPos@FrameWrapper@@UEAAJPEBUtagRECT@@@Z @ 0x1801152E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18003C9F0 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@AEAUtagRECT@@@Z @ 0x180114E58 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180115810 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCo_ea_180115810.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18011587C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCC_ea_18011587C.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall FrameWrapper::SetHostedPos(FrameWrapper *this, const struct tagRECT *a2)
{
  int v3; // ebx
  const char *v4; // r9
  HMONITOR v5; // rsi
  RECT *p_rcMonitor; // rax
  __m128i v7; // xmm0
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // ecx
  LONG v11; // eax
  RECT *v12; // rbx
  int v13; // esi
  __int64 v14; // rcx
  int v16; // eax
  __int64 v17; // rcx
  LONG v18; // edx
  int v19; // edx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 *v22; // rcx
  __int64 v23; // rdx
  int v24; // eax
  int v25; // eax
  __int64 v26; // [rsp+20h] [rbp-69h] BYREF
  int v27; // [rsp+28h] [rbp-61h] BYREF
  __int64 v28; // [rsp+30h] [rbp-59h] BYREF
  HWND hwnd; // [rsp+38h] [rbp-51h] BYREF
  RECT rc; // [rsp+40h] [rbp-49h] BYREF
  struct tagPOINT Points[2]; // [rsp+50h] [rbp-39h] BYREF
  struct tagRECT v32; // [rsp+60h] [rbp-29h] BYREF
  __int128 v33; // [rsp+70h] [rbp-19h] BYREF
  struct tagRECT Rect; // [rsp+80h] [rbp-9h] BYREF
  __int128 v35; // [rsp+90h] [rbp+7h] BYREF
  struct tagMONITORINFO mi; // [rsp+A0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  rc = *a2;
  v33 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 2) + 120LL))(*((_QWORD *)this + 2), &v33);
  if ( v3 < 0 )
  {
    v20 = 131LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  rc.left -= v33;
  rc.top -= DWORD1(v33);
  rc.right -= DWORD2(v33);
  rc.bottom -= HIDWORD(v33);
  SetLastError(0);
  Rect = 0LL;
  if ( !GetClientRect(*((HWND *)this + 4), &Rect) )
  {
    v23 = 139LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v23,
             (unsigned int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
             v4);
  }
  v32 = 0LL;
  if ( !GetWindowRect(*((HWND *)this + 4), &v32) )
  {
    v23 = 142LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v23,
             (unsigned int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
             v4);
  }
  if ( !MapWindowPoints(0LL, *((HWND *)this + 4), (LPPOINT)&v32, 2u) && GetLastError() )
  {
    v23 = 146LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v23,
             (unsigned int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
             v4);
  }
  rc.left += v32.left - Rect.left;
  rc.top += v32.top - Rect.top;
  rc.right += v32.right - Rect.right;
  rc.bottom += v32.bottom - Rect.bottom;
  v5 = MonitorFromRect(&rc, 2u);
  if ( !v5 )
  {
    v3 = -2147418113;
    v20 = 153LL;
    goto LABEL_33;
  }
  memset(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  if ( GetMonitorInfoW(v5, &mi) )
  {
    v27 = 0;
    if ( !(unsigned int)GetWindowBand(*((_QWORD *)this + 4), &v27) || (p_rcMonitor = &mi.rcWork, v27 != 1) )
      p_rcMonitor = &mi.rcMonitor;
    v7 = *(__m128i *)p_rcMonitor;
    v8 = *(_QWORD *)&p_rcMonitor->left;
    v9 = HIDWORD(*(_QWORD *)&p_rcMonitor->left);
    if ( rc.top < (int)v9 )
    {
      v24 = v9 - rc.top;
      rc.top += v24;
      rc.bottom += v24;
    }
    if ( rc.left < (int)v8 )
    {
      v10 = v8 - rc.left;
      v11 = v10 + rc.left;
      rc.right += v10;
LABEL_14:
      rc.left = v11;
      goto LABEL_15;
    }
    v18 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 8));
    if ( rc.right > v18 )
    {
      v19 = v18 - rc.right;
      v11 = v19 + rc.left;
      rc.right += v19;
      goto LABEL_14;
    }
  }
LABEL_15:
  hwnd = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, HWND *))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2), &hwnd);
  if ( v3 < 0 )
  {
    v20 = 192LL;
    goto LABEL_33;
  }
  if ( v5 == MonitorFromWindow(hwnd, 1u) )
    goto LABEL_17;
  v35 = 0LL;
  v3 = (*(__int64 (__fastcall **)(FrameWrapper *, __int128 *))(*(_QWORD *)this + 56LL))(this, &v35);
  if ( v3 < 0 )
  {
    v20 = 197LL;
    goto LABEL_33;
  }
  *(_OWORD *)&Points[0].x = v35;
  if ( !MapWindowPoints(hwnd, 0LL, Points, 2u) && GetLastError() )
  {
    v23 = 201LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v23,
             (unsigned int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
             v4);
  }
  Points[1].x += rc.left - Points[0].x;
  Points[0].x = rc.left;
  Points[1].y += rc.top - Points[0].y;
  Points[0].y = rc.top;
  v28 = 0LL;
  v25 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
          &v28,
          (__int64)Points);
  v3 = v25;
  if ( v25 < 0 )
  {
    v21 = 210LL;
    goto LABEL_35;
  }
  v25 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2), v28);
  v3 = v25;
  if ( v25 < 0 )
  {
    v21 = 211LL;
LABEL_35:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v25);
    v22 = &v28;
LABEL_36:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v22);
    return (unsigned int)v3;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
LABEL_17:
  v26 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
  v26 = 0LL;
  v12 = (RECT *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v12 )
  {
    v13 = -2147024882;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD7,
      (int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v13);
    v14 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    return (unsigned int)v13;
  }
  *(_QWORD *)&v12->left = &CCommonApplicationViewPositionImpl::`vftable';
  SetRectEmpty(v12 + 1);
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)&v12[2]);
  v12[4].top = 1;
  *(_QWORD *)&v12->left = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::Selector<CCommonApplicationViewPositionImpl,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CCommonApplicationViewPositionImpl>,Microsoft::WRL::FtmBase>>'};
  *(_QWORD *)&v12[2].left = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CCommonApplicationViewPositionImpl>,Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)&v12->left = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::Selector<CCommonApplicationViewPositionImpl,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CCommonApplicationViewPositionImpl>,Microsoft::WRL::FtmBase>>'};
  *(_QWORD *)&v12[2].left = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CCommonApplicationViewPositionImpl>,Microsoft::WRL::FtmBase>>'};
  v12[1] = rc;
  v13 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>>(
          v12,
          &GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6,
          &v26);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::Release(v12);
  if ( v13 < 0 )
    goto LABEL_19;
  v16 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2), v26);
  v3 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD8,
      (int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v16);
    v22 = &v26;
    goto LABEL_36;
  }
  v17 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return 0LL;
}
