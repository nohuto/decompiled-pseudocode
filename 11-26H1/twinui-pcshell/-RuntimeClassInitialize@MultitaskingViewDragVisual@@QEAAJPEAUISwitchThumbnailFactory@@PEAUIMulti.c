/*
 * XREFs of ?RuntimeClassInitialize@MultitaskingViewDragVisual@@QEAAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@1AEBUCSize@Geometry@@N@Z @ 0x1804E0A1C
 * Callers:
 *     ??$MakeAndInitialize@VMultitaskingViewDragVisual@@V1@AEAPEAUISwitchThumbnailFactory@@AEAPEAUIMultitaskingViewElement@@AEAPEAU3@AEBUCSize@Geometry@@AEAN@Details@WRL@Microsoft@@YAJPEAPEAVMultitaskingViewDragVisual@@AEAPEAUISwitchThumbnailFactory@@AEAPEAUIMultitaskingViewElement@@2AEBUCSize@Geometry@@AEAN@Z @ 0x1804E0520 (--$MakeAndInitialize@VMultitaskingViewDragVisual@@V1@AEAPEAUISwitchThumbnailFactory@@AEAPEAUIMul.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1804B9638 (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1804E06CC (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall MultitaskingViewDragVisual::RuntimeClassInitialize(
        MultitaskingViewDragVisual *this,
        struct ISwitchThumbnailFactory *a2,
        struct IMultitaskingViewElement *a3,
        __int64 (__fastcall ***a4)(struct IMultitaskingViewElement *, GUID *, __int64 *),
        const struct Geometry::CSize *a5,
        double a6)
{
  __int64 v10; // rbx
  unsigned int v11; // ebx
  __int64 (__fastcall *v12)(struct ISwitchThumbnailFactory *, _QWORD, __int64, GUID *, int *); // rbx
  _QWORD *v13; // rax
  __int64 (__fastcall *v14)(struct IMultitaskingViewElement *, GUID *, __int64 *); // rbx
  int v15; // eax
  _DWORD *v16; // rax
  int v17; // r8d
  int v18; // edx
  int v19; // ecx
  __int64 (__fastcall *v20)(struct ISwitchThumbnailFactory *, _QWORD, __int64, GUID *, int *); // rbx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 (__fastcall *v24)(__int64, struct ISwitchThumbnailFactory *, _QWORD, __int64 *, int *); // rdi
  int v25; // eax
  __int64 v27; // [rsp+30h] [rbp-50h] BYREF
  int v28[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v29; // [rsp+40h] [rbp-40h] BYREF
  int v30[2]; // [rsp+48h] [rbp-38h] BYREF
  int v31[2]; // [rsp+50h] [rbp-30h] BYREF
  int v32; // [rsp+58h] [rbp-28h] BYREF
  int v33; // [rsp+5Ch] [rbp-24h]
  int v34; // [rsp+60h] [rbp-20h]
  int v35; // [rsp+64h] [rbp-1Ch]
  __int64 v36; // [rsp+68h] [rbp-18h] BYREF
  int v37; // [rsp+70h] [rbp-10h]
  int v38; // [rsp+74h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v10 = *(_QWORD *)(*(__int64 (__fastcall **)(struct IMultitaskingViewElement *, __int64 *))(*(_QWORD *)a3 + 40LL))(
                     a3,
                     &v27);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
  if ( v10 )
  {
    *(_QWORD *)v31 = 0LL;
    v12 = *(__int64 (__fastcall **)(struct ISwitchThumbnailFactory *, _QWORD, __int64, GUID *, int *))(*(_QWORD *)a2 + 112LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v31);
    v27 = 0x100000001LL;
    v13 = (_QWORD *)(*(__int64 (__fastcall **)(struct IMultitaskingViewElement *, __int64 *))(*(_QWORD *)a3 + 40LL))(
                      a3,
                      &v36);
    v11 = v12(a2, *v13, v27, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v31);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v36);
    if ( (v11 & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3A,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\dragvisual.cpp",
        (const char *)v11);
LABEL_17:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v31);
      return v11;
    }
    v29 = 0LL;
    v14 = **a4;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
    v15 = v14((struct IMultitaskingViewElement *)a4, &GUID_f8242c35_7f82_4b56_b5c8_37345206289d, &v29);
    v11 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3D,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\dragvisual.cpp",
        (const char *)(unsigned int)v15);
LABEL_7:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
      goto LABEL_17;
    }
    v16 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v29 + 32LL))(v29, &v36);
    v17 = v16[3] - v16[1];
    v18 = v16[2] - *v16;
    v19 = -*((_DWORD *)a5 + 1);
    v32 = -*(_DWORD *)a5;
    v33 = v19;
    v34 = v18 + v32;
    v35 = v19 + v17;
    *(_QWORD *)v28 = 0LL;
    v20 = *(__int64 (__fastcall **)(struct ISwitchThumbnailFactory *, _QWORD, __int64, GUID *, int *))(*(_QWORD *)a2 + 112LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v28);
    LODWORD(v27) = v34 - v32;
    HIDWORD(v27) = v35 - v33;
    v21 = v20(a2, *(_QWORD *)v31, v27, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v28);
    v11 = v21;
    if ( v21 >= 0 )
    {
      v21 = (*(__int64 (__fastcall **)(_QWORD, int *, _QWORD, _QWORD))(**(_QWORD **)v28 + 24LL))(
              *(_QWORD *)v28,
              &v32,
              0LL,
              0LL);
      v11 = v21;
      if ( v21 >= 0 )
      {
        *(_QWORD *)v30 = 0LL;
        v23 = v29;
        v24 = *(__int64 (__fastcall **)(__int64, struct ISwitchThumbnailFactory *, _QWORD, __int64 *, int *))(*(_QWORD *)v29 + 24LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v30);
        v36 = 0LL;
        v37 = v34 - v32;
        v38 = v35 - v33;
        v25 = v24(v23, a2, *(_QWORD *)v28, &v36, v30);
        v11 = v25;
        if ( v25 >= 0 )
        {
          *((_QWORD *)this + 6) = *(_QWORD *)a5;
          Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=((__int64 *)this + 3, (__int64 *)v31);
          Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=((__int64 *)this + 4, (__int64 *)v28);
          LODWORD(v27) = v34 - v32;
          HIDWORD(v27) = v35 - v33;
          *((_QWORD *)this + 7) = v27;
          Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)this + 5, (__int64 *)v30);
          *((double *)this + 10) = a6;
          Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 2, (__int64)a4);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v30);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v28);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
          v11 = 0;
          goto LABEL_17;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x49,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\dragvisual.cpp",
          (const char *)(unsigned int)v25);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v30);
        goto LABEL_11;
      }
      v22 = 69LL;
    }
    else
    {
      v22 = 68LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\dragvisual.cpp",
      (const char *)(unsigned int)v21);
LABEL_11:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v28);
    goto LABEL_7;
  }
  v11 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x37,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\dragvisual.cpp",
    (const char *)0x8007139FLL);
  return v11;
}
