/*
 * XREFs of ?RuntimeClassInitialize@CScrollViewer@@QEAAJAEBU_MARGINS@@NIW4ScrollViewerFlags@@PEAUIMultitaskingViewElement@@PEAUISwitchThumbnailFactory@@@Z @ 0x1804C6DD8
 * Callers:
 *     ??$MakeAndInitialize@VCScrollViewer@@V1@AEBU_MARGINS@@AEANAEAIAEAW4ScrollViewerFlags@@AEAPEAUIMultitaskingViewElement@@AEAPEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAVCScrollViewer@@AEBU_MARGINS@@AEANAEAIAEAW4ScrollViewerFlags@@AEAPEAUIMultitaskingViewElement@@AEAPEAUISwitchThumbnailFactory@@@Z @ 0x1804C642C (--$MakeAndInitialize@VCScrollViewer@@V1@AEBU_MARGINS@@AEANAEAIAEAW4ScrollViewerFlags@@AEAPEAUIMu.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x180158B8C (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CScrollViewer::RuntimeClassInitialize(
        __int64 a1,
        _OWORD *a2,
        double a3,
        int a4,
        int a5,
        __int64 (__fastcall ***a6)(_QWORD, GUID *, __int64),
        __int64 a7)
{
  __int64 v7; // rbx
  __int64 (__fastcall *v10)(_QWORD, GUID *, __int64); // rdi
  int v11; // ebx
  __int64 v12; // rdx
  _QWORD *v13; // rbp
  __int64 (__fastcall *v14)(__int64, _QWORD, __int64, GUID *, __int64); // rbx
  __int64 **v15; // r15
  unsigned int Color; // ebx
  __int64 (__fastcall *v17)(__int64, _QWORD, _QWORD, __int64, GUID *, __int64); // rdi
  __int64 v18; // rdx
  unsigned int v19; // eax
  __int64 *v20; // rcx
  __int64 v21; // rax
  __int64 (__fastcall *v22)(__int64, _QWORD, __int64, GUID *, __int64); // rbx
  __int64 (__fastcall *v23)(__int64, _QWORD, __int64, GUID *, __int64); // rdi
  _DWORD v25[4]; // [rsp+40h] [rbp-58h] BYREF
  _DWORD v26[4]; // [rsp+50h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v7 = a1 + 248;
  *(_OWORD *)(a1 + 272) = *a2;
  *(_DWORD *)(a1 + 288) = a5;
  *(double *)(a1 + 264) = a3;
  v10 = **a6;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 248));
  v11 = v10(a6, &GUID_6cc9c6d0_4a89_4c45_b4ac_86d9abb85a2a, v7);
  if ( v11 < 0 )
  {
    v12 = 86LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\scrollviewerelement.cpp",
      (const char *)(unsigned int)v11);
    return (unsigned int)v11;
  }
  v13 = (_QWORD *)(a1 + 88);
  v14 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64))(*(_QWORD *)a7 + 112LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 88));
  v11 = v14(a7, 0LL, 0x100000001LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, a1 + 88);
  if ( v11 < 0 )
  {
    v12 = 93LL;
    goto LABEL_19;
  }
  if ( a3 > 0.0 )
  {
    v15 = (__int64 **)(a1 + 240);
    Color = CImmersiveColor::GetColor(0xACu);
    v17 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, GUID *, __int64))(*(_QWORD *)a7 + 104LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 240));
    v11 = v17(a7, *v13, Color, 0x100000001LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, a1 + 240);
    if ( v11 < 0 )
    {
      v12 = 98LL;
      goto LABEL_19;
    }
    v11 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(**v15 + 32))(*v15, v18, 0LL, 0LL);
    if ( v11 < 0 )
    {
      v12 = 99LL;
      goto LABEL_19;
    }
    v19 = CImmersiveColor::GetColor(0x489u);
    if ( HIBYTE(v19) )
    {
      v20 = *v15;
      v26[1] = v19;
      v26[0] = a4;
      *(float *)&v26[2] = (float)HIBYTE(v19) / 255.0;
      v21 = *v20;
      v25[0] = 0;
      v25[1] = 0;
      v25[2] = 0;
      v11 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *, _DWORD *))(v21 + 216))(v20, v26, v25);
      if ( v11 < 0 )
      {
        v12 = 109LL;
        goto LABEL_19;
      }
    }
  }
  v22 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64))(*(_QWORD *)a7 + 112LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 232));
  v11 = v22(a7, *v13, 0x100000001LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, a1 + 232);
  if ( v11 < 0 )
  {
    v12 = 112LL;
    goto LABEL_19;
  }
  v23 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64))(*(_QWORD *)a7 + 112LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 224));
  v11 = v23(a7, *(_QWORD *)(a1 + 232), 0x100000001LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, a1 + 224);
  if ( v11 < 0 )
  {
    v12 = 113LL;
    goto LABEL_19;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)(_QWORD, GUID *, __int64)))(*(_QWORD *)a1 + 64LL))(
          a1,
          a6);
  if ( v11 < 0 )
  {
    v12 = 114LL;
    goto LABEL_19;
  }
  return (unsigned int)v11;
}
