/*
 * XREFs of _lambda_5e9c18940e8e88d162ff7728dae26002_::operator() @ 0x1804C9704
 * Callers:
 *     LambdaCustomPaintProc__lambda_5e9c18940e8e88d162ff7728dae26002__ID2D1DeviceContext___ @ 0x1804C9320 (LambdaCustomPaintProc__lambda_5e9c18940e8e88d162ff7728dae26002__ID2D1DeviceContext___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x18016DB4C (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?CreateSolidColorBrush@ID2D1RenderTarget@@QEAAJAEBU_D3DCOLORVALUE@@PEAPEAUID2D1SolidColorBrush@@@Z @ 0x1804BFB68 (-CreateSolidColorBrush@ID2D1RenderTarget@@QEAAJAEBU_D3DCOLORVALUE@@PEAPEAUID2D1SolidColorBrush@@.c)
 *     ??B?$HighContrastAwareOpacity@M@@QEBAMXZ @ 0x1804C96D8 (--B-$HighContrastAwareOpacity@M@@QEBAMXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_5e9c18940e8e88d162ff7728dae26002_::operator()(__int64 a1, ID2D1RenderTarget *a2, __int64 a3)
{
  int v3; // ebx
  __int64 Color; // rax
  float *v7; // rcx
  unsigned int v8; // xmm9_4
  unsigned int v9; // xmm10_4
  D3DVALUE v10; // xmm8_4
  float v11; // xmm6_4
  float v12; // xmm0_4
  int v13; // eax
  unsigned int v14; // edi
  int v15; // ecx
  float v16; // xmm7_4
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  void (__fastcall *v20)(ID2D1RenderTarget *, __int64 *, struct ID2D1SolidColorBrush *); // rax
  __int64 v21; // rax
  void (__fastcall *v22)(ID2D1RenderTarget *, __int64 *, _QWORD); // rax
  __int64 v23; // rax
  void (__fastcall *v24)(ID2D1RenderTarget *, __int64 *, struct ID2D1SolidColorBrush *); // rax
  struct ID2D1SolidColorBrush *v26; // [rsp+48h] [rbp-C0h] BYREF
  int v27[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A8h]
  __int64 v30; // [rsp+68h] [rbp-A0h] BYREF
  float v31; // [rsp+70h] [rbp-98h]
  float v32; // [rsp+74h] [rbp-94h]
  struct _D3DCOLORVALUE v33; // [rsp+78h] [rbp-90h] BYREF
  __int128 v34; // [rsp+88h] [rbp-80h] BYREF
  __int64 v35; // [rsp+98h] [rbp-70h] BYREF
  int v36; // [rsp+A0h] [rbp-68h]
  float v37; // [rsp+A4h] [rbp-64h]
  int v38; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v39; // [rsp+ACh] [rbp-5Ch]
  int v40; // [rsp+BCh] [rbp-4Ch]
  __int128 v41; // [rsp+C0h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+150h] [rbp+48h]

  v3 = a3;
  v29 = a3;
  Color = CImmersiveColor::GetColor(0xABu);
  v33.a = 0.0;
  v7 = (float *)(*(_QWORD *)a1 + 348LL);
  *(float *)&v8 = (float)BYTE1(Color) / 255.0;
  *(float *)&v9 = (float)(unsigned __int8)Color / 255.0;
  v10 = (float)BYTE2(Color) / 255.0;
  v33.g = *(float *)&v8;
  v33.r = *(float *)&v9;
  v33.b = v10;
  v11 = 1.0 - HighContrastAwareOpacity<float>::operator float(v7);
  v12 = HighContrastAwareOpacity<float>::operator float((float *)(*(_QWORD *)a1 + 360LL));
  *(_QWORD *)&v34 = __PAIR64__(v8, v9);
  v38 = 0;
  *((D3DVALUE *)&v34 + 2) = v10;
  v39 = *(__int128 *)&v33.r;
  v40 = 1065353216;
  v28 = 0LL;
  *((float *)&v34 + 3) = 1.0 - (float)((float)(1.0 - v12) / v11);
  v41 = v34;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
  v13 = (*(__int64 (__fastcall **)(ID2D1RenderTarget *, int *, __int64))(*(_QWORD *)a2 + 72LL))(a2, &v38, 2LL);
  v14 = v13;
  if ( v13 >= 0 )
  {
    v15 = HIDWORD(v29) - *(_DWORD *)(*(_QWORD *)a1 + 368LL);
    v35 = 0LL;
    v36 = 0;
    *(_QWORD *)v27 = 0LL;
    v16 = (float)v15;
    v37 = (float)v15;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v27);
    v17 = (*(__int64 (__fastcall **)(ID2D1RenderTarget *, __int64 *, _QWORD, __int64, int *))(*(_QWORD *)a2 + 80LL))(
            a2,
            &v35,
            0LL,
            v28,
            v27);
    v14 = v17;
    if ( v17 >= 0 )
    {
      v26 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
      v18 = ID2D1RenderTarget::CreateSolidColorBrush(a2, &v33, &v26);
      v14 = v18;
      if ( v18 >= 0 )
      {
        v19 = *(_QWORD *)a2;
        v30 = 0LL;
        v32 = 0.0;
        v20 = *(void (__fastcall **)(ID2D1RenderTarget *, __int64 *, struct ID2D1SolidColorBrush *))(v19 + 136);
        v31 = (float)v3;
        v20(a2, &v30, v26);
        v21 = *(_QWORD *)a2;
        v31 = (float)v3;
        v32 = v16;
        v22 = *(void (__fastcall **)(ID2D1RenderTarget *, __int64 *, _QWORD))(v21 + 136);
        v30 = 0LL;
        v22(a2, &v30, *(_QWORD *)v27);
        (*(void (__fastcall **)(struct ID2D1SolidColorBrush *, __int128 *))(*(_QWORD *)v26 + 64LL))(v26, &v34);
        v23 = *(_QWORD *)a2;
        *((float *)&v30 + 1) = v16;
        v31 = (float)v3;
        v24 = *(void (__fastcall **)(ID2D1RenderTarget *, __int64 *, struct ID2D1SolidColorBrush *))(v23 + 136);
        LODWORD(v30) = 0;
        v32 = (float)SHIDWORD(v29);
        v24(a2, &v30, v26);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v27);
        v14 = 0;
        goto LABEL_9;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3BD,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
        (const char *)(unsigned int)v18);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3BA,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
        (const char *)(unsigned int)v17);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v27);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B2,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
      (const char *)(unsigned int)v13);
  }
LABEL_9:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
  return v14;
}
