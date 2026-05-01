/*
 * XREFs of ?SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z @ 0x18051ED60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?IsEmpty@CRect@Geometry@@QEBA_NXZ @ 0x180018764 (-IsEmpty@CRect@Geometry@@QEBA_NXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18002D82C (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1800550A4 (-GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18005556C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800679E8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1801C7830 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x1802388B0 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802B8C98 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1804A7C5C (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetSingleAppFromLayout@@YAJPEAUIAppLayout@@PEAPEAUIImmersiveApplication@@@Z @ 0x18051E1C4 (-GetSingleAppFromLayout@@YAJPEAUIAppLayout@@PEAPEAUIImmersiveApplication@@@Z.c)
 *     ?GetSingleViewFromLayout@AppLayoutHelpers@@YAJPEAUIAppLayout@@PEAPEAUIApplicationView@@@Z @ 0x18051E280 (-GetSingleViewFromLayout@AppLayoutHelpers@@YAJPEAUIAppLayout@@PEAPEAUIApplicationView@@@Z.c)
 *     ?_SetText@CDragVisual@@AEAAXPEBG@Z @ 0x180521258 (-_SetText@CDragVisual@@AEAAXPEBG@Z.c)
 *     ?_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnailOptions@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180521524 (-_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnai.c)
 *     ?_UpdateThumbnailRect@CDragVisual@@AEAA_NXZ @ 0x180521C90 (-_UpdateThumbnailRect@CDragVisual@@AEAA_NXZ.c)
 *     ?GetDragVisualScaledSize@AppLayoutHelpers@@YAXAEBUCRect@Geometry@@W4DEVICE_SCALE_FACTOR@@1AEBUtagSIZE@@PEAU5@@Z @ 0x1806A14BC (-GetDragVisualScaledSize@AppLayoutHelpers@@YAXAEBUCRect@Geometry@@W4DEVICE_SCALE_FACTOR@@1AEBUta.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  unsigned int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  int v22; // r8d
  int v23; // r9d
  bool v24; // zf
  enum DEVICE_SCALE_FACTOR v25; // r8d
  const struct Geometry::CRect *v26; // rdx
  __int64 v27; // rdi
  __int64 (__fastcall *v28)(__int64, _QWORD, _QWORD, _QWORD, int *, struct tagRECT *, GUID *, char *); // rbx
  unsigned __int16 **v29; // r8
  int ViewTitle; // eax
  unsigned int v31; // edi
  __int64 v32; // rcx
  __int64 *v33; // rcx
  __int64 v34; // rax
  int v35; // eax
  struct tagSIZE *v37; // [rsp+28h] [rbp-71h]
  void *ppvOut; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v39[4]; // [rsp+58h] [rbp-41h] BYREF
  enum DEVICE_SCALE_FACTOR v40[3]; // [rsp+5Ch] [rbp-3Dh] BYREF
  ApplicationViewHelpers *v41; // [rsp+68h] [rbp-31h] BYREF
  int v42; // [rsp+70h] [rbp-29h] BYREF
  int v43; // [rsp+74h] [rbp-25h]
  float v44; // [rsp+78h] [rbp-21h]
  __int64 v45[2]; // [rsp+80h] [rbp-19h] BYREF
  unsigned __int16 *v46[2]; // [rsp+90h] [rbp-9h] BYREF
  __int64 v47; // [rsp+A0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  ppvOut = (void *)*((_QWORD *)this + 6);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&ppvOut);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v45, (__int64 *)&ppvOut, (__int64)&GUID_NULL, 0LL);
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
    v46[0] = 0LL;
    v46[1] = 0LL;
    v47 = 0LL;
    v40[0] = DEVICE_SCALE_FACTOR_INVALID;
    if ( !*((_QWORD *)this + 7) )
      goto LABEL_10;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppvOut);
    if ( (int)GetSingleAppFromLayout(a2, (struct IImmersiveApplication **)&ppvOut) >= 0
      && (v8 = *((_QWORD *)this + 7),
          v9 = *(int (__fastcall **)(__int64, unsigned __int16 **))(*(_QWORD *)v8 + 32LL),
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v46),
          v46[1] = (unsigned __int16 *)-1LL,
          v47 = -1LL,
          v9(v8, v46) >= 0)
      && (*(int (__fastcall **)(void *, unsigned __int16 *, enum DEVICE_SCALE_FACTOR *))(*(_QWORD *)ppvOut + 88LL))(
           ppvOut,
           v46[0],
           v40) >= 0
      && v40[0] )
    {
      v7 = 0;
    }
    else
    {
LABEL_10:
      DestroyWindow(*((HWND *)this + 18));
      *((_QWORD *)this + 18) = 0LL;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v46);
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
  v41 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v41);
  SingleViewFromLayout = AppLayoutHelpers::GetSingleViewFromLayout(a2, (struct IAppLayout *)&v41, v13);
  if ( SingleViewFromLayout < 0 )
    goto LABEL_59;
  WindowForView = *((_QWORD *)this + 18);
  if ( WindowForView && v7 )
  {
    *((_QWORD *)this + 17) = WindowForView;
  }
  else
  {
    WindowForView = ApplicationViewHelpers::GetWindowForView(
                      (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v41,
                      v14);
    *((_QWORD *)this + 17) = WindowForView;
    if ( !v7 )
      goto LABEL_49;
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
  v19 = *((_DWORD *)this + 30) - 5;
  *(_OWORD *)v46 = 0LL;
  if ( v19 <= 1 )
  {
    v20 = *((_QWORD *)this + 17);
    ppvOut = 0LL;
    v21 = DwmpQueryWindowThumbnailSourceSize(v20, 0LL, &ppvOut);
    v46[0] = 0LL;
    SingleViewFromLayout = v21;
    v46[1] = (unsigned __int16 *)ppvOut;
  }
  else
  {
    SingleViewFromLayout = (*(__int64 (__fastcall **)(ApplicationViewHelpers *, unsigned __int16 **))(*(_QWORD *)v41 + 128LL))(
                             v41,
                             v46);
  }
  if ( SingleViewFromLayout < 0 )
    goto LABEL_59;
  if ( Geometry::CRect::IsEmpty((Geometry::CRect *)v46) )
  {
    SingleViewFromLayout = -2147019873;
LABEL_59:
    v31 = SingleViewFromLayout;
    goto LABEL_60;
  }
  v22 = (int)v46[1];
  v23 = (int)v46[0];
  v24 = *((_DWORD *)this + 31) == 4;
  LODWORD(ppvOut) = LODWORD(v46[1]) - LODWORD(v46[0]);
  HIDWORD(ppvOut) = HIDWORD(v46[1]) - HIDWORD(v46[0]);
  if ( !v24 && (v18 & 0x800000) == 0 )
  {
    v25 = *((_DWORD *)this + 80);
    v40[0] = LODWORD(v46[1]) - LODWORD(v46[0]);
    v26 = (const struct Geometry::CRect *)*((unsigned int *)this + 65);
    v40[1] = HIDWORD(v46[1]) - HIDWORD(v46[0]);
    AppLayoutHelpers::GetDragVisualScaledSize(
      (CDragVisual *)((char *)this + 168),
      v26,
      v25,
      (enum DEVICE_SCALE_FACTOR)v40,
      (const struct tagSIZE *)&ppvOut,
      v37);
    v22 = (int)v46[1];
    v23 = (int)v46[0];
  }
  v42 = v22 - v23;
  v43 = HIDWORD(v46[1]) - HIDWORD(v46[0]);
  ppvOut = 0LL;
  v27 = *((_QWORD *)this + 6);
  v28 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int *, struct tagRECT *, GUID *, char *))(*(_QWORD *)v27 + 64LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 10);
  SingleViewFromLayout = v28(
                           v27,
                           0LL,
                           *((_QWORD *)this + 17),
                           v18,
                           &v42,
                           a3,
                           &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
                           (char *)this + 80);
  if ( SingleViewFromLayout >= 0 )
  {
    if ( *((_QWORD *)this + 11) )
      (*(void (__fastcall **)(_QWORD, unsigned __int16 **, _QWORD, _QWORD))(**((_QWORD **)this + 10) + 24LL))(
        *((_QWORD *)this + 10),
        v46,
        0LL,
        0LL);
    else
      Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=((__int64 *)this + 11, (__int64 *)this + 10);
    *(_OWORD *)((char *)this + 200) = *(_OWORD *)v46;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
LABEL_49:
  if ( SingleViewFromLayout < 0 )
    goto LABEL_59;
  v46[0] = 0LL;
  v46[1] = 0LL;
  v47 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v46);
  v46[1] = (unsigned __int16 *)-1LL;
  v47 = -1LL;
  ViewTitle = ApplicationViewHelpers::GetViewTitle(
                (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v41,
                v46,
                v29);
  v31 = ViewTitle;
  if ( ViewTitle >= 0 )
  {
    CDragVisual::_SetText((CDragVisual *)((char *)this - 24), v46[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v46);
    if ( v7 )
    {
      CDragVisual::_UpdateThumbnailRect((CDragVisual *)((char *)this - 24));
      if ( *((_BYTE *)this + 253) && *((_DWORD *)this + 31) == 4 )
        (*(void (__fastcall **)(_QWORD, char *, _QWORD, _QWORD))(**((_QWORD **)this + 11) + 40LL))(
          *((_QWORD *)this + 11),
          (char *)this + 216,
          0LL,
          0LL);
      v32 = *((_QWORD *)this + 6);
      v40[0] = DEVICE_SCALE_FACTOR_INVALID;
      LODWORD(ppvOut) = 0;
      v39[0] = 0;
      (*(void (__fastcall **)(__int64, enum DEVICE_SCALE_FACTOR *, void **, _BYTE *))(*(_QWORD *)v32 + 128LL))(
        v32,
        v40,
        &ppvOut,
        v39);
      v33 = (__int64 *)*((_QWORD *)this + 11);
      v42 = v40[0];
      v43 = (int)ppvOut;
      v44 = (double)v39[0] / 255.0;
      v34 = *v33;
      LODWORD(v46[1]) = 0;
      v46[0] = 0LL;
      v35 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int16 **, int *))(v34 + 216))(v33, v46, &v42);
      if ( v35 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2E2,
          (int)"pcshell\\twinui\\windowarrangementvisuals\\lib\\dragvisual.cpp",
          (const char *)(unsigned int)v35);
      CDragVisual::_UpdateThumbnail((char *)this - 24, 0LL, 1LL);
    }
    goto LABEL_59;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2C3,
    (int)"pcshell\\twinui\\windowarrangementvisuals\\lib\\dragvisual.cpp",
    (const char *)(unsigned int)ViewTitle);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v46);
LABEL_60:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v41);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v45);
  return v31;
}
