/*
 * XREFs of ?CreateElementForObject@CSwitchItemElementFactory@@UEAAJPEAUIUnknown@@PEAUISwitchThumbnailFactory@@AEBU_GUID@@PEAPEAX@Z @ 0x1804A4400
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCSwitchItemElement@@UIMultitaskingViewElement@@USwitchItemElementInitializeArgs@1@@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewElement@@$$QEAUSwitchItemElementInitializeArgs@CSwitchItemElement@@@Z @ 0x1804A3B50 (--$MakeAndInitialize@VCSwitchItemElement@@UIMultitaskingViewElement@@USwitchItemElementInitializ.c)
 *     ?ItemInitTelemetry@SwitchItemTelemetry@@YAJJ@Z @ 0x1804AD1F4 (-ItemInitTelemetry@SwitchItemTelemetry@@YAJJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSwitchItemElementFactory::CreateElementForObject(
        CSwitchItemElementFactory *this,
        struct IUnknown *a2,
        struct ISwitchThumbnailFactory *a3,
        const struct _GUID *a4,
        void **a5)
{
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // eax
  int v16; // edx
  int inited; // eax
  __int64 v18; // rdx
  __int64 v20; // [rsp+28h] [rbp-41h] BYREF
  __int64 v21; // [rsp+30h] [rbp-39h] BYREF
  _DWORD v22[4]; // [rsp+38h] [rbp-31h] BYREF
  __int64 v23; // [rsp+48h] [rbp-21h]
  __int64 v24; // [rsp+50h] [rbp-19h]
  int v25; // [rsp+58h] [rbp-11h]
  int v26; // [rsp+5Ch] [rbp-Dh]
  char *v27; // [rsp+60h] [rbp-9h] BYREF
  int v28; // [rsp+68h] [rbp-1h]
  int v29; // [rsp+6Ch] [rbp+3h]
  _DWORD *v30; // [rsp+70h] [rbp+7h]
  __int64 v31; // [rsp+78h] [rbp+Fh]
  __int64 v32; // [rsp+80h] [rbp+17h]
  __int64 v33; // [rsp+88h] [rbp+1Fh]
  __int64 v34; // [rsp+90h] [rbp+27h]
  struct ISwitchThumbnailFactory *v35; // [rsp+98h] [rbp+2Fh]
  int v36; // [rsp+A0h] [rbp+37h]
  int v37; // [rsp+A4h] [rbp+3Bh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+57h]
  __int64 (__fastcall ***v39)(_QWORD, const struct _GUID *, void **); // [rsp+D0h] [rbp+67h] BYREF

  v20 = 0LL;
  QueryInterface = a2->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
  v10 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
          a2,
          &GUID_c0944116_18f0_4c1c_a1a4_224296b2d4fc,
          &v20);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v21 = 0LL;
    v14 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 40LL))(v20);
    if ( !v14 )
    {
      v11 = -2147418113;
      v12 = 2147549183LL;
      v13 = 104LL;
      goto LABEL_5;
    }
    DwmpQueryWindowThumbnailSourceSize(v14, 0LL, &v21);
    v39 = 0LL;
    v27 = (char *)this + 16;
    v28 = *((_DWORD *)this + 74);
    v29 = 0;
    v22[0] = *((_DWORD *)this + 17)
           + *((_DWORD *)this + 26)
           + *((_DWORD *)this + 27)
           + *((_DWORD *)this + 30)
           + *((_DWORD *)this + 31);
    v22[1] = *((_DWORD *)this + 4);
    v22[2] = *((_DWORD *)this + 24) + *((_DWORD *)this + 25);
    v23 = *((_QWORD *)this + 7);
    v24 = v21;
    v25 = 0;
    v26 = 0;
    v30 = v22;
    v31 = v20;
    v32 = *((_QWORD *)this + 41);
    v33 = *((_QWORD *)this + 38);
    v34 = *((_QWORD *)this + 42);
    v35 = a3;
    v36 = *((_DWORD *)this + 86);
    v37 = 0;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v39);
    v15 = Microsoft::WRL::Details::MakeAndInitialize<CSwitchItemElement,IMultitaskingViewElement,CSwitchItemElement::SwitchItemElementInitializeArgs>(
            &v39,
            (const struct CSwitchItemElement::SwitchItemElementInitializeArgs *)&v27);
    inited = SwitchItemTelemetry::ItemInitTelemetry((SwitchItemTelemetry *)v15, v16);
    v11 = inited;
    if ( inited >= 0 )
    {
      inited = (**v39)(v39, a4, a5);
      v11 = inited;
      if ( inited >= 0 )
      {
LABEL_11:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v39);
        goto LABEL_12;
      }
      v18 = 122LL;
    }
    else
    {
      v18 = 121LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelementfactory.cpp",
      (const char *)(unsigned int)inited);
    goto LABEL_11;
  }
  v12 = (unsigned int)v10;
  v13 = 99LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelementfactory.cpp",
    (const char *)v12);
LABEL_12:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
  return v11;
}
