/*
 * XREFs of ?EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x1800415D0
 * Callers:
 *     ?EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJKPEBN@Z @ 0x180040D50 (-EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJKPEBN@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$?8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@0@$$T@Z @ 0x18001CBD4 (--$-8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV-$shared_ptr@VCCachedBorderBrush@CWindowBo.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800295E8 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UICompositionBrush@Composition@UI@Windows@@@?$ComPtr@UICompositionSurfaceBrush@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800398F4 (--$As@UICompositionBrush@Composition@UI@Windows@@@-$ComPtr@UICompositionSurfaceBrush@Composition.c)
 *     ??$As@UICompositionSurface@Composition@UI@Windows@@@?$ComPtr@UICompositionDrawingSurface@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionSurface@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003A8E8 (--$As@UICompositionSurface@Composition@UI@Windows@@@-$ComPtr@UICompositionDrawingSurface@Composi.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003D7C8 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Mi.c)
 *     ??$As@UICompositor@Composition@UI@Windows@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositor@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800405E0 (--$As@UICompositor@Composition@UI@Windows@@@-$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Mi.c)
 *     ??$As@UICompositionDrawingSurfaceInterop@Composition@UI@Windows@@@?$ComPtr@UICompositionDrawingSurface@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionDrawingSurfaceInterop@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800716FC (--$As@UICompositionDrawingSurfaceInterop@Composition@UI@Windows@@@-$ComPtr@UICompositionDrawingS.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ?GetGraphicsDeviceNoRef@CDesktopManager@@SAJPEAVCGraphicsDeviceGuard@CGraphicsDeviceManager@@PEAPEAUICompositionGraphicsDevice@Composition@UI@Windows@@@Z @ 0x1800A0340 (-GetGraphicsDeviceNoRef@CDesktopManager@@SAJPEAVCGraphicsDeviceGuard@CGraphicsDeviceManager@@PEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall CAccentAcrylicBlurBehind::EnsureNoiseSurfaceBrush(CAccentAcrylicBlurBehind *this)
{
  unsigned int v2; // r14d
  __int64 *v3; // rsi
  HMODULE ModuleHandleW; // rdi
  HRSRC ResourceW; // rbx
  HGLOBAL Resource; // rax
  LPVOID v7; // r12
  DWORD v8; // r13d
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, __int64 *); // rbx
  int v11; // eax
  int v12; // eax
  __int64 (__fastcall *v13)(__int64, __int64, _QWORD, __int64, __int64 *); // rbx
  int v14; // eax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, _QWORD, __int64 *); // r14
  int v17; // eax
  __int64 (__fastcall *v18)(__int64, __int64 *); // rbx
  int v19; // eax
  int v20; // eax
  __int64 (__fastcall *v21)(__int64, __int64, __int64, __int64 *); // rbx
  int v22; // eax
  int v23; // eax
  __int64 (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // r14
  __int64 (__fastcall *v25)(_QWORD, GUID *, __int64 *); // rbx
  int v26; // eax
  int v27; // eax
  int GraphicsDeviceNoRef; // eax
  struct Windows::UI::Composition::ICompositionGraphicsDevice *v29; // r14
  __int64 (__fastcall *v30)(struct Windows::UI::Composition::ICompositionGraphicsDevice *, unsigned __int64, __int64, __int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rbx
  __m128 v31; // xmm0
  __m128 v32; // xmm1
  int v33; // eax
  int v34; // eax
  __int64 v35; // rbx
  __int64 (__fastcall *v36)(__int64, _QWORD, GUID *, __int64 *, __int64 *); // r14
  __int64 *v37; // rax
  int v38; // eax
  __int64 v39; // rbx
  __int64 v40; // r14
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  __int64 v45; // rbx
  __int64 (__fastcall *v46)(__int64, __int64, _QWORD); // r14
  int v47; // eax
  int v48; // eax
  int v49; // eax
  __int64 v51; // [rsp+48h] [rbp-89h] BYREF
  __int64 v52; // [rsp+50h] [rbp-81h] BYREF
  __int64 v53; // [rsp+58h] [rbp-79h] BYREF
  __int64 v54; // [rsp+60h] [rbp-71h] BYREF
  __int64 v55; // [rsp+68h] [rbp-69h] BYREF
  __int64 v56; // [rsp+70h] [rbp-61h] BYREF
  __int64 (__fastcall ***v57)(_QWORD, GUID *, __int64 *); // [rsp+78h] [rbp-59h] BYREF
  __int64 v58; // [rsp+80h] [rbp-51h] BYREF
  __int64 v59; // [rsp+88h] [rbp-49h] BYREF
  __int64 v60; // [rsp+90h] [rbp-41h] BYREF
  __int64 (__fastcall ***v61)(_QWORD, GUID *, __int64 *); // [rsp+98h] [rbp-39h] BYREF
  __int64 v62; // [rsp+A0h] [rbp-31h] BYREF
  int v63; // [rsp+A8h] [rbp-29h] BYREF
  int v64; // [rsp+ACh] [rbp-25h] BYREF
  __int64 v65; // [rsp+B0h] [rbp-21h] BYREF
  __int64 v66; // [rsp+B8h] [rbp-19h] BYREF
  struct Windows::UI::Composition::ICompositionGraphicsDevice *v67; // [rsp+C0h] [rbp-11h] BYREF
  _QWORD v68[2]; // [rsp+C8h] [rbp-9h] BYREF
  int v69; // [rsp+D8h] [rbp+7h]
  int v70; // [rsp+DCh] [rbp+Bh]
  float v71; // [rsp+E0h] [rbp+Fh]
  float v72; // [rsp+E4h] [rbp+13h]
  float v73[4]; // [rsp+E8h] [rbp+17h] BYREF

  v2 = 0;
  v3 = (__int64 *)((char *)this + 288);
  if ( std::operator==<CWindowBorder::CCachedBorderBrush>((_QWORD *)this + 36) )
  {
    ModuleHandleW = GetModuleHandleW(L"Windows.UI.Xaml.Controls.dll");
    ResourceW = FindResourceW(ModuleHandleW, (LPCWSTR)0x7D0, (LPCWSTR)0xA);
    Resource = LoadResource(ModuleHandleW, ResourceW);
    v7 = LockResource(Resource);
    v8 = SizeofResource(ModuleHandleW, ResourceW);
    v9 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
    v68[1] = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    v51 = 0LL;
    v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 112LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v51);
    v11 = v10(v9, &v51);
    v2 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x559u, 0LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v51);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(__int64, LPVOID, _QWORD))(*(_QWORD *)v51 + 128LL))(v51, v7, v8);
      v2 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x55Au, 0LL);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v51);
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      else
      {
        v52 = 0LL;
        v13 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v9 + 32LL);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v52);
        v14 = v13(v9, v51, 0LL, 1LL, &v52);
        v2 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x55Du, 0LL);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v52);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v51);
          if ( v9 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
        else
        {
          v54 = 0LL;
          v15 = v52;
          v16 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v52 + 104LL);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v54);
          v17 = v16(v15, 0LL, &v54);
          v2 = v17;
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x560u, 0LL);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v54);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v52);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v51);
            if ( v9 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
          }
          else
          {
            v53 = 0LL;
            v18 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 80LL);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v53);
            v19 = v18(v9, &v53);
            v2 = v19;
            if ( v19 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x563u, 0LL);
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v53);
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v54);
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v52);
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v51);
              if ( v9 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
            }
            else
            {
              v20 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)v53 + 64LL))(
                      v53,
                      v54,
                      &GUID_WICPixelFormat32bppPBGRA,
                      0LL,
                      0LL,
                      0LL,
                      1);
              v2 = v20;
              if ( v20 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x564u, 0LL);
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v53);
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v54);
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v52);
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v51);
                if ( v9 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
              }
              else
              {
                v55 = 0LL;
                v21 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v9 + 144LL);
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v55);
                v22 = v21(v9, v53, 2LL, &v55);
                v2 = v22;
                if ( v22 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x567u, 0LL);
                  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v55);
                  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v53);
                  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v54);
                  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v52);
                  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v51);
                  if ( v9 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                }
                else
                {
                  v63 = 0;
                  v64 = 0;
                  v23 = (*(__int64 (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v55 + 24LL))(v55, &v63, &v64);
                  v2 = v23;
                  if ( v23 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x56Cu, 0LL);
                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v55);
                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v53);
                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v54);
                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v52);
                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v51);
                    if ( v9 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                  }
                  else
                  {
                    v56 = 0LL;
                    v24 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 31);
                    v25 = **v24;
                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v56);
                    v26 = v25(v24, &GUID_d14b6158_c3fa_4bce_9c1f_b61d8665eab0, &v56);
                    v2 = v26;
                    if ( v26 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0x570u, 0LL);
                      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v56);
                      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v55);
                      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v53);
                      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v54);
                      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v52);
                      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v51);
                      if ( v9 )
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                    }
                    else
                    {
                      v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v56 + 256LL))(v56, 0LL);
                      v2 = v27;
                      if ( v27 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0x571u, 0LL);
                        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v56);
                        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v55);
                        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v53);
                        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v54);
                        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v52);
                        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v51);
                        if ( v9 )
                          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                      }
                      else
                      {
                        v67 = 0LL;
                        GraphicsDeviceNoRef = CDesktopManager::GetGraphicsDeviceNoRef(
                                                (struct CGraphicsDeviceManager::CGraphicsDeviceGuard *)v68,
                                                &v67);
                        v2 = GraphicsDeviceNoRef;
                        if ( GraphicsDeviceNoRef < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, GraphicsDeviceNoRef, 0x575u, 0LL);
                          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v56);
                          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v55);
                          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v53);
                          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v54);
                          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v52);
                          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v51);
                          if ( v9 )
                            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                        }
                        else
                        {
                          v57 = 0LL;
                          v29 = v67;
                          v30 = *(__int64 (__fastcall **)(struct Windows::UI::Composition::ICompositionGraphicsDevice *, unsigned __int64, __int64, __int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v67 + 48LL);
                          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v57);
                          v31 = 0LL;
                          v31.m128_f32[0] = (float)v63;
                          v32 = 0LL;
                          v32.m128_f32[0] = (float)v64;
                          v33 = v30(v29, _mm_unpacklo_ps(v31, v32).m128_u64[0], 87LL, 1LL, &v57);
                          v2 = v33;
                          if ( v33 < 0 )
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v33, 0x57Bu, 0LL);
                            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v57);
                            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v56);
                            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v55);
                            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v53);
                            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v54);
                            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v52);
                            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v51);
                            if ( v9 )
                              (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                          }
                          else
                          {
                            v59 = 0LL;
                            v34 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionDrawingSurface>::As<Windows::UI::Composition::ICompositionDrawingSurfaceInterop>(
                                    &v57,
                                    &v59);
                            v2 = v34;
                            if ( v34 < 0 )
                            {
                              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v34, 0x57Eu, 0LL);
                              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v59);
                              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v57);
                              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v56);
                              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v55);
                              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v53);
                              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v54);
                              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v52);
                              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v51);
                              if ( v9 )
                                (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                            }
                            else
                            {
                              v58 = 0LL;
                              v66 = 0LL;
                              v35 = v59;
                              v36 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *, __int64 *))(*(_QWORD *)v59 + 24LL);
                              v37 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpCompositionProjectedShadow>>(&v58);
                              v38 = v36(v35, 0LL, &GUID_e8f7fe7a_191c_466d_ad95_975678bda998, v37, &v66);
                              v2 = v38;
                              if ( v38 < 0 )
                              {
                                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v38, 0x583u, 0LL);
                                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v58);
                                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v59);
                                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v57);
                                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v56);
                                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v55);
                                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v53);
                                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v54);
                                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v52);
                                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v51);
                                if ( v9 )
                                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                              }
                              else
                              {
                                v39 = v68[0];
                                (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v68[0] + 24LL) + 32LL))(*(_QWORD *)(v68[0] + 24LL));
                                (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v39 + 64) + 24LL))(*(_QWORD *)(v39 + 64));
                                v60 = 0LL;
                                v40 = v58;
                                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v60);
                                v41 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v40 + 40LL))(
                                        v40,
                                        v55,
                                        0LL,
                                        &v60);
                                v2 = v41;
                                if ( v41 < 0 )
                                {
                                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v41, 0x588u, 0LL);
                                  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v60);
                                  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v58);
                                  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v59);
                                  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v57);
                                  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v56);
                                  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v55);
                                  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v53);
                                  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v54);
                                  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v52);
                                  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v51);
                                  if ( v9 )
                                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                                }
                                else
                                {
                                  v73[0] = (float)(int)v66;
                                  v73[1] = (float)SHIDWORD(v66);
                                  v73[2] = (float)(int)v66 + (float)v63;
                                  v73[3] = (float)SHIDWORD(v66) + (float)v64;
                                  v69 = 0;
                                  v70 = 0;
                                  v71 = (float)v63;
                                  v72 = (float)v64;
                                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v58 + 624LL))(v58, 1LL);
                                  (*(void (__fastcall **)(__int64, __int64, float *))(*(_QWORD *)v58 + 208LL))(
                                    v58,
                                    v60,
                                    v73);
                                  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v39 + 64) + 32LL))(*(_QWORD *)(v39 + 64));
                                  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v39 + 24) + 40LL))(*(_QWORD *)(v39 + 24));
                                  v42 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v59 + 32LL))(v59);
                                  v2 = v42;
                                  if ( v42 < 0 )
                                  {
                                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v42, 0x59Eu, 0LL);
                                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v60);
                                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v58);
                                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v59);
                                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v57);
                                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v56);
                                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v55);
                                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v53);
                                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v54);
                                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v52);
                                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v51);
                                    if ( v9 )
                                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                                  }
                                  else
                                  {
                                    v62 = 0LL;
                                    v43 = Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<Windows::UI::Composition::ICompositor>(
                                            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 31,
                                            &v62);
                                    v2 = v43;
                                    if ( v43 < 0 )
                                    {
                                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v43, 0x5A1u, 0LL);
                                      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v62);
                                      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v60);
                                      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v58);
                                      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v59);
                                      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v57);
                                      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v56);
                                      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v55);
                                      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v53);
                                      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v54);
                                      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v52);
                                      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v51);
                                      if ( v9 )
                                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                                    }
                                    else
                                    {
                                      v65 = 0LL;
                                      v44 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionDrawingSurface>::As<Windows::UI::Composition::ICompositionSurface>(
                                              &v57,
                                              &v65);
                                      v2 = v44;
                                      if ( v44 < 0 )
                                      {
                                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v44, 0x5A5u, 0LL);
                                        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v65);
                                        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v62);
                                        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v60);
                                        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v58);
                                        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v59);
                                        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v57);
                                        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v56);
                                        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v55);
                                        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v53);
                                        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v54);
                                        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v52);
                                        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v51);
                                        if ( v9 )
                                          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                                      }
                                      else
                                      {
                                        v61 = 0LL;
                                        v45 = v62;
                                        v46 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v62 + 192LL);
                                        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v61);
                                        v47 = v46(v45, v65, &v61);
                                        v2 = v47;
                                        if ( v47 < 0 )
                                        {
                                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v47, 0x5A9u, 0LL);
                                          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v61);
                                          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v65);
                                          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v62);
                                          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v60);
                                          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v58);
                                          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v59);
                                          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v57);
                                          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v56);
                                          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v55);
                                          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v53);
                                          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v54);
                                          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v52);
                                          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v51);
                                          if ( v9 )
                                            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                                        }
                                        else
                                        {
                                          v48 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD))(*v61)[11])(
                                                  v61,
                                                  0LL);
                                          v2 = v48;
                                          if ( v48 < 0 )
                                          {
                                            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v48, 0x5AAu, 0LL);
                                            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v61);
                                            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v65);
                                            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v62);
                                            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v60);
                                            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v58);
                                            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v59);
                                            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v57);
                                            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v56);
                                            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v55);
                                            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v53);
                                            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v54);
                                            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v52);
                                            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v51);
                                            if ( v9 )
                                              (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                                          }
                                          else
                                          {
                                            v49 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionSurfaceBrush>::As<Windows::UI::Composition::ICompositionBrush>(
                                                    &v61,
                                                    v3);
                                            v2 = v49;
                                            if ( v49 < 0 )
                                            {
                                              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v49, 0x5ADu, 0LL);
                                              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v61);
                                              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v65);
                                              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v62);
                                              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v60);
                                              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v58);
                                              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v59);
                                              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v57);
                                              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v56);
                                              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v55);
                                              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v53);
                                              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v54);
                                              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v52);
                                              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v51);
                                              if ( v9 )
                                                (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                                            }
                                            else
                                            {
                                              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v61);
                                              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v65);
                                              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v62);
                                              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v60);
                                              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v58);
                                              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v59);
                                              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v57);
                                              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v56);
                                              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v55);
                                              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v53);
                                              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v54);
                                              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v52);
                                              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v51);
                                              if ( v9 )
                                                (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v2;
}
