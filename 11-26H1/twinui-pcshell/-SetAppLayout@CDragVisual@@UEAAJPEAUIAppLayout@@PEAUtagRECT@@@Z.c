/*
 * XREFs of ?SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z @ 0x180541BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x180047744 (-GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180047CDC (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsEmpty@CRect@Geometry@@QEBA_NXZ @ 0x1800B55C0 (-IsEmpty@CRect@Geometry@@QEBA_NXZ.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1801ABBF4 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x18022A7B0 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802AF714 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1804B9638 (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetSingleAppFromLayout@@YAJPEAUIAppLayout@@PEAPEAUIImmersiveApplication@@@Z @ 0x18054109C (-GetSingleAppFromLayout@@YAJPEAUIAppLayout@@PEAPEAUIImmersiveApplication@@@Z.c)
 *     ?GetSingleViewFromLayout@AppLayoutHelpers@@YAJPEAUIAppLayout@@PEAPEAUIApplicationView@@@Z @ 0x180541160 (-GetSingleViewFromLayout@AppLayoutHelpers@@YAJPEAUIAppLayout@@PEAPEAUIApplicationView@@@Z.c)
 *     ?_SetText@CDragVisual@@AEAAXPEBG@Z @ 0x18054412C (-_SetText@CDragVisual@@AEAAXPEBG@Z.c)
 *     ?_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnailOptions@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180544400 (-_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnai.c)
 *     ?_UpdateThumbnailRect@CDragVisual@@AEAA_NXZ @ 0x180544B48 (-_UpdateThumbnailRect@CDragVisual@@AEAA_NXZ.c)
 *     ?GetDragVisualScaledSize@AppLayoutHelpers@@YAXAEBUCRect@Geometry@@W4DEVICE_SCALE_FACTOR@@1AEBUtagSIZE@@PEAU5@@Z @ 0x1806C93FC (-GetDragVisualScaledSize@AppLayoutHelpers@@YAXAEBUCRect@Geometry@@W4DEVICE_SCALE_FACTOR@@1AEBUta.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDragVisual::SetAppLayout(CDragVisual *this, struct IAppLayout *a2, struct tagRECT *a3)
{
  __int64 v6; // rcx
  char v7; // r12
  __int64 v8; // rdi
  int (__fastcall *v9)(__int64, unsigned __int16 **); // rbx
  _DWORD *v10; // rdx
  _DWORD *v11; // rcx
  int v12; // eax
  struct IApplicationView **v13; // r8
  struct IApplicationView *v14; // rdx
  int SingleViewFromLayout; // ebx
  __int64 WindowForView; // rax
  __int64 v17; // rcx
  unsigned int v18; // r14d
  bool v19; // zf
  __int64 v20; // rcx
  int v21; // r8d
  int v22; // r9d
  enum DEVICE_SCALE_FACTOR v23; // r8d
  const struct Geometry::CRect *v24; // rdx
  __int64 v25; // rdi
  __int64 (__fastcall *v26)(__int64, _QWORD, _QWORD, _QWORD, int *, struct tagRECT *, GUID *, char *); // rbx
  unsigned __int16 **v27; // r8
  int ViewTitle; // eax
  unsigned int v29; // edi
  __int64 v30; // rcx
  __int64 *v31; // rcx
  __int64 v32; // rax
  int v33; // eax
  struct tagSIZE *v35; // [rsp+28h] [rbp-71h]
  void *ppvOut; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v37[4]; // [rsp+58h] [rbp-41h] BYREF
  enum DEVICE_SCALE_FACTOR v38[3]; // [rsp+5Ch] [rbp-3Dh] BYREF
  ApplicationViewHelpers *v39; // [rsp+68h] [rbp-31h] BYREF
  int v40; // [rsp+70h] [rbp-29h] BYREF
  int v41; // [rsp+74h] [rbp-25h]
  float v42; // [rsp+78h] [rbp-21h]
  __int64 v43[2]; // [rsp+80h] [rbp-19h] BYREF
  unsigned __int16 *v44[2]; // [rsp+90h] [rbp-9h] BYREF
  __int64 v45; // [rsp+A0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  ppvOut = (void *)*((_QWORD *)this + 6);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&ppvOut);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v43, (__int64 *)&ppvOut, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  v6 = *((_QWORD *)this + 8);
  v7 = 1;
  if ( v6 )
  {
    if ( !*((_QWORD *)this + 18)
      || (*(unsigned int (__fastcall **)(__int64, struct IAppLayout *, __int64))(*(_QWORD *)v6 + 200LL))(v6, a2, 4LL) )
    {
      goto LABEL_12;
    }
    ppvOut = 0LL;
    v44[0] = 0LL;
    v44[1] = 0LL;
    v45 = 0LL;
    v38[0] = DEVICE_SCALE_FACTOR_INVALID;
    if ( !*((_QWORD *)this + 7) )
      goto LABEL_10;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppvOut);
    if ( (int)GetSingleAppFromLayout(a2, (struct IImmersiveApplication **)&ppvOut) >= 0
      && (v8 = *((_QWORD *)this + 7),
          v9 = *(int (__fastcall **)(__int64, unsigned __int16 **))(*(_QWORD *)v8 + 32LL),
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v44),
          v44[1] = (unsigned __int16 *)-1LL,
          v45 = -1LL,
          v9(v8, v44) >= 0)
      && (*(int (__fastcall **)(void *, unsigned __int16 *, enum DEVICE_SCALE_FACTOR *))(*(_QWORD *)ppvOut + 88LL))(
           ppvOut,
           v44[0],
           v38) >= 0
      && v38[0] )
    {
      v7 = 0;
    }
    else
    {
LABEL_10:
      DestroyWindow(*((HWND *)this + 18));
      *((_QWORD *)this + 18) = 0LL;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v44);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppvOut);
    if ( v7 )
    {
LABEL_12:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 10);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 11);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 8);
      SetRectEmpty((LPRECT)((char *)this + 200));
      SetRectEmpty((LPRECT)((char *)this + 216));
    }
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 8, (__int64)a2);
  if ( !*((_DWORD *)this + 30) && *((_DWORD *)this + 77) == -1 )
  {
    if ( *((_BYTE *)this + 253) )
    {
      if ( Geometry::CRect::Contains((CDragVisual *)((char *)this + 232), (const struct tagPOINT *)this + 19) )
        v12 = MulDiv(100, *v10 - *v11, v11[2] - *v11);
      else
        v12 = 50;
      *((_DWORD *)this + 77) = v12;
    }
    else
    {
      *((_DWORD *)this + 77) = *((_BYTE *)this + 249) != 0 ? 20 : 80;
    }
  }
  *((_QWORD *)this + 17) = 0LL;
  v39 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v39);
  SingleViewFromLayout = AppLayoutHelpers::GetSingleViewFromLayout(a2, (struct IAppLayout *)&v39, v13);
  if ( SingleViewFromLayout < 0 )
    goto LABEL_60;
  WindowForView = *((_QWORD *)this + 18);
  if ( WindowForView && v7 )
  {
    *((_QWORD *)this + 17) = WindowForView;
  }
  else
  {
    WindowForView = ApplicationViewHelpers::GetWindowForView(
                      (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v39,
                      v14);
    *((_QWORD *)this + 17) = WindowForView;
    if ( !v7 )
      goto LABEL_50;
  }
  v17 = *((_QWORD *)this + 18);
  if ( *((_DWORD *)this + 31) == 6 || (v18 = 0, v17) )
    v18 = 0x4000000;
  if ( v17 )
  {
    v18 |= 0x800000u;
    if ( WindowForView )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppvOut);
      if ( IUnknown_QueryService(
             *((IUnknown **)this - 1),
             &IID_ISplashScreenIconicBitmap,
             &GUID_9cc99a99_3470_4985_8fed_1365cd80b8c4,
             &ppvOut) >= 0 )
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)ppvOut + 24LL))(ppvOut, *((_QWORD *)this + 17));
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppvOut);
    }
  }
  v19 = *((_DWORD *)this + 30) == 5;
  *(_OWORD *)v44 = 0LL;
  if ( v19 || *((_DWORD *)this + 30) == 6 )
  {
    v20 = *((_QWORD *)this + 17);
    ppvOut = 0LL;
    SingleViewFromLayout = DwmpQueryWindowThumbnailSourceSize(v20, 0LL, &ppvOut);
    v44[0] = 0LL;
    v44[1] = (unsigned __int16 *)ppvOut;
  }
  else
  {
    SingleViewFromLayout = (*(__int64 (__fastcall **)(ApplicationViewHelpers *, unsigned __int16 **))(*(_QWORD *)v39 + 128LL))(
                             v39,
                             v44);
  }
  if ( SingleViewFromLayout < 0 )
    goto LABEL_60;
  if ( Geometry::CRect::IsEmpty((Geometry::CRect *)v44) )
  {
    SingleViewFromLayout = -2147019873;
LABEL_60:
    v29 = SingleViewFromLayout;
    goto LABEL_61;
  }
  v21 = (int)v44[1];
  v22 = (int)v44[0];
  v19 = *((_DWORD *)this + 31) == 4;
  LODWORD(ppvOut) = LODWORD(v44[1]) - LODWORD(v44[0]);
  HIDWORD(ppvOut) = HIDWORD(v44[1]) - HIDWORD(v44[0]);
  if ( !v19 && (v18 & 0x800000) == 0 )
  {
    v23 = *((_DWORD *)this + 80);
    v38[0] = LODWORD(v44[1]) - LODWORD(v44[0]);
    v24 = (const struct Geometry::CRect *)*((unsigned int *)this + 65);
    v38[1] = HIDWORD(v44[1]) - HIDWORD(v44[0]);
    AppLayoutHelpers::GetDragVisualScaledSize(
      (CDragVisual *)((char *)this + 168),
      v24,
      v23,
      (enum DEVICE_SCALE_FACTOR)v38,
      (const struct tagSIZE *)&ppvOut,
      v35);
    v21 = (int)v44[1];
    v22 = (int)v44[0];
  }
  v40 = v21 - v22;
  v41 = HIDWORD(v44[1]) - HIDWORD(v44[0]);
  ppvOut = 0LL;
  v25 = *((_QWORD *)this + 6);
  v26 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int *, struct tagRECT *, GUID *, char *))(*(_QWORD *)v25 + 64LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 10);
  SingleViewFromLayout = v26(
                           v25,
                           0LL,
                           *((_QWORD *)this + 17),
                           v18,
                           &v40,
                           a3,
                           &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
                           (char *)this + 80);
  if ( SingleViewFromLayout >= 0 )
  {
    if ( *((_QWORD *)this + 11) )
      (*(void (__fastcall **)(_QWORD, unsigned __int16 **, _QWORD, _QWORD))(**((_QWORD **)this + 10) + 24LL))(
        *((_QWORD *)this + 10),
        v44,
        0LL,
        0LL);
    else
      Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=((__int64 *)this + 11, (__int64 *)this + 10);
    *(_OWORD *)((char *)this + 200) = *(_OWORD *)v44;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
LABEL_50:
  if ( SingleViewFromLayout < 0 )
    goto LABEL_60;
  v44[0] = 0LL;
  v44[1] = 0LL;
  v45 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v44);
  v44[1] = (unsigned __int16 *)-1LL;
  v45 = -1LL;
  ViewTitle = ApplicationViewHelpers::GetViewTitle(
                (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v39,
                v44,
                v27);
  v29 = ViewTitle;
  if ( ViewTitle >= 0 )
  {
    CDragVisual::_SetText((CDragVisual *)((char *)this - 24), v44[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v44);
    if ( v7 )
    {
      CDragVisual::_UpdateThumbnailRect((CDragVisual *)((char *)this - 24));
      if ( *((_BYTE *)this + 253) && *((_DWORD *)this + 31) == 4 )
        (*(void (__fastcall **)(_QWORD, char *, _QWORD, _QWORD))(**((_QWORD **)this + 11) + 40LL))(
          *((_QWORD *)this + 11),
          (char *)this + 216,
          0LL,
          0LL);
      v30 = *((_QWORD *)this + 6);
      v38[0] = DEVICE_SCALE_FACTOR_INVALID;
      LODWORD(ppvOut) = 0;
      v37[0] = 0;
      (*(void (__fastcall **)(__int64, enum DEVICE_SCALE_FACTOR *, void **, _BYTE *))(*(_QWORD *)v30 + 128LL))(
        v30,
        v38,
        &ppvOut,
        v37);
      v31 = (__int64 *)*((_QWORD *)this + 11);
      v40 = v38[0];
      v41 = (int)ppvOut;
      v42 = (double)v37[0] / 255.0;
      v32 = *v31;
      v44[0] = 0LL;
      LODWORD(v44[1]) = 0;
      v33 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int16 **, int *))(v32 + 216))(v31, v44, &v40);
      if ( v33 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2E2,
          (int)"pcshell\\twinui\\windowarrangementvisuals\\lib\\dragvisual.cpp",
          (const char *)(unsigned int)v33);
      CDragVisual::_UpdateThumbnail((char *)this - 24, 0LL, 1LL);
    }
    goto LABEL_60;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2C3,
    (int)"pcshell\\twinui\\windowarrangementvisuals\\lib\\dragvisual.cpp",
    (const char *)(unsigned int)ViewTitle);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v44);
LABEL_61:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v39);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v43);
  return v29;
}
