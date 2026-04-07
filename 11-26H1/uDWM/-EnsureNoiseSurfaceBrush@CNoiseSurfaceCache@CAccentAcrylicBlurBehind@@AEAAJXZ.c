/*
 * XREFs of ?EnsureNoiseSurfaceBrush@CNoiseSurfaceCache@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x180093EF8
 * Callers:
 *     ?GetBrush@CNoiseSurfaceCache@CAccentAcrylicBlurBehind@@SAJPEAPEAUICompositionBrush@Composition@UI@Windows@@@Z @ 0x180094318 (-GetBrush@CNoiseSurfaceCache@CAccentAcrylicBlurBehind@@SAJPEAPEAUICompositionBrush@Composition@U.c)
 * Callees:
 *     ??$?8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@0@$$T@Z @ 0x18000BDF0 (--$-8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV-$shared_ptr@VCCachedBorderBrush@CWindowBo.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C124 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateCompSurfaceFromWICBitmap@CBitmapSource@@SAJPEAUIWICBitmapSource@@PEAPEAUICompositionSurface@Composition@UI@Windows@@@Z @ 0x18000DC70 (-CreateCompSurfaceFromWICBitmap@CBitmapSource@@SAJPEAUIWICBitmapSource@@PEAPEAUICompositionSurfa.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$As@UICompositionBrush@Composition@UI@Windows@@@?$ComPtr@UICompositionSurfaceBrush@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800369A0 (--$As@UICompositionBrush@Composition@UI@Windows@@@-$ComPtr@UICompositionSurfaceBrush@Composition.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CAccentAcrylicBlurBehind::CNoiseSurfaceCache::EnsureNoiseSurfaceBrush(
        CAccentAcrylicBlurBehind::CNoiseSurfaceCache *this)
{
  unsigned int v1; // ebx
  __int64 *v2; // r14
  HMODULE ModuleHandleW; // rdi
  HRSRC ResourceW; // rbx
  HGLOBAL Resource; // rax
  LPVOID v6; // r15
  DWORD v7; // edi
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(__int64, __int64 *); // rbx
  int v10; // eax
  int v11; // eax
  __int64 (__fastcall *v12)(__int64, __int64, _QWORD, __int64, __int64 *); // rbx
  int v13; // eax
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, _QWORD, __int64 *); // rdi
  int v16; // eax
  __int64 (__fastcall *v17)(__int64, __int64 *); // rbx
  int v18; // eax
  int v19; // eax
  __int64 (__fastcall *v20)(__int64, __int64, __int64, struct IWICBitmapSource **); // rbx
  int v21; // eax
  int CompSurfaceFromWICBitmap; // eax
  __int64 v23; // rdi
  __int64 (__fastcall *v24)(__int64, struct Windows::UI::Composition::ICompositionSurface *, _QWORD); // rbx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  struct IWICBitmapSource *v29; // [rsp+40h] [rbp-20h] BYREF
  __int64 (__fastcall ***v30)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-18h] BYREF
  struct Windows::UI::Composition::ICompositionSurface *v31[2]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v32; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v33; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v34; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v35; // [rsp+B8h] [rbp+58h] BYREF

  v1 = 0;
  v2 = (__int64 *)((char *)this + 24);
  if ( std::operator==<CWindowBorder::CCachedBorderBrush>((_QWORD *)this + 3) )
  {
    ModuleHandleW = GetModuleHandleW(L"Windows.UI.Xaml.Controls.dll");
    ResourceW = FindResourceW(ModuleHandleW, (LPCWSTR)0x7D0, (LPCWSTR)0xA);
    Resource = LoadResource(ModuleHandleW, ResourceW);
    v6 = LockResource(Resource);
    v7 = SizeofResource(ModuleHandleW, ResourceW);
    v8 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
    v32 = 0LL;
    v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 112LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
    v10 = v9(v8, &v32);
    v1 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x4D7u, 0LL);
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(__int64, LPVOID, _QWORD))(*(_QWORD *)v32 + 128LL))(v32, v6, v7);
      v1 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x4D8u, 0LL);
      }
      else
      {
        v33 = 0LL;
        v12 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v8 + 32LL);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
        v13 = v12(v8, v32, 0LL, 1LL, &v33);
        v1 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x4DBu, 0LL);
        }
        else
        {
          v35 = 0LL;
          v14 = v33;
          v15 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v33 + 104LL);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v35);
          v16 = v15(v14, 0LL, &v35);
          v1 = v16;
          if ( v16 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x4DEu, 0LL);
          }
          else
          {
            v34 = 0LL;
            v17 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 80LL);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v34);
            v18 = v17(v8, &v34);
            v1 = v18;
            if ( v18 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x4E1u, 0LL);
            }
            else
            {
              v19 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)v34 + 64LL))(
                      v34,
                      v35,
                      &GUID_WICPixelFormat32bppPBGRA,
                      0LL,
                      0LL,
                      0LL,
                      1);
              v1 = v19;
              if ( v19 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x4E2u, 0LL);
              }
              else
              {
                v29 = 0LL;
                v20 = *(__int64 (__fastcall **)(__int64, __int64, __int64, struct IWICBitmapSource **))(*(_QWORD *)v8 + 144LL);
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v29);
                v21 = v20(v8, v34, 2LL, &v29);
                v1 = v21;
                if ( v21 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x4E5u, 0LL);
                }
                else
                {
                  v31[0] = 0LL;
                  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v31);
                  CompSurfaceFromWICBitmap = CBitmapSource::CreateCompSurfaceFromWICBitmap(v29, v31);
                  v1 = CompSurfaceFromWICBitmap;
                  if ( CompSurfaceFromWICBitmap < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, CompSurfaceFromWICBitmap, 0x4E8u, 0LL);
                  }
                  else
                  {
                    v30 = 0LL;
                    v23 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 40LL);
                    v24 = *(__int64 (__fastcall **)(__int64, struct Windows::UI::Composition::ICompositionSurface *, _QWORD))(*(_QWORD *)v23 + 192LL);
                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v30);
                    v25 = v24(v23, v31[0], &v30);
                    v1 = v25;
                    if ( v25 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v25, 0x4EDu, 0LL);
                    }
                    else
                    {
                      v26 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD))(*v30)[11])(
                              v30,
                              0LL);
                      v1 = v26;
                      if ( v26 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0x4EEu, 0LL);
                      }
                      else
                      {
                        v27 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionSurfaceBrush>::As<Windows::UI::Composition::ICompositionBrush>(
                                &v30,
                                v2);
                        v1 = v27;
                        if ( v27 < 0 )
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0x4F1u, 0LL);
                      }
                    }
                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v30);
                  }
                  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v31);
                }
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v29);
              }
            }
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v34);
          }
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v35);
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
      }
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
  }
  return v1;
}
