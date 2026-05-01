/*
 * XREFs of ?MarshalObjectToPropertySet@CLaunchActivatedEventArgs@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800FF530
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18002D82C (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004E0F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?MarshalObjectToPropertySet@CActivatedEventArgsWithPrelaunchAndViewIdBase@@QEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800FFA60 (-MarshalObjectToPropertySet@CActivatedEventArgsWithPrelaunchAndViewIdBase@@QEAAJPEAUIPropertySet.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B86EC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLaunchActivatedEventArgs::MarshalObjectToPropertySet(
        CLaunchActivatedEventArgs *this,
        struct Windows::Foundation::Collections::IPropertySet *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 (__fastcall **v6)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, _QWORD **); // rax
  __int64 (__fastcall *v7)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, _QWORD **); // rbx
  int ActivationFactory; // eax
  HRESULT v9; // eax
  int v10; // edx
  unsigned int v11; // r8d
  HSTRING v12; // rbx
  __int64 (__fastcall *v13)(char *, HSTRING *); // rbx
  int v14; // eax
  __int64 (__fastcall *v15)(char *, HSTRING *); // rbx
  int v16; // eax
  __int64 v17; // rax
  __int64 (__fastcall *v18)(char *, __int64 *); // rbx
  int v19; // eax
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, HSTRING, __int64 *); // rdi
  int v22; // eax
  _QWORD *v23; // rbx
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 (__fastcall *v26)(_QWORD *, HSTRING, __int64, _BYTE *); // rsi
  HRESULT v27; // eax
  int v28; // edx
  unsigned int v29; // r8d
  int v30; // eax
  __int64 v31; // rbx
  __int64 (__fastcall *v32)(__int64, HSTRING, __int64 *); // rdi
  int v33; // eax
  _QWORD *v34; // rbx
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 (__fastcall *v37)(_QWORD *, HSTRING, __int64, _BYTE *); // rsi
  HRESULT v38; // eax
  int v39; // edx
  unsigned int v40; // r8d
  int v41; // eax
  __int64 v42; // rdi
  __int64 v43; // rcx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rdx
  _QWORD *v48; // rbx
  __int64 v49; // rax
  __int64 (__fastcall *v50)(_QWORD *, HSTRING, __int64, _BYTE *); // rsi
  _BYTE v51[8]; // [rsp+30h] [rbp-29h] BYREF
  HSTRING v52; // [rsp+38h] [rbp-21h] BYREF
  HSTRING v53; // [rsp+40h] [rbp-19h] BYREF
  __int64 v54; // [rsp+48h] [rbp-11h] BYREF
  __int64 v55; // [rsp+50h] [rbp-9h] BYREF
  __int64 v56; // [rsp+58h] [rbp-1h] BYREF
  _QWORD *v57; // [rsp+60h] [rbp+7h] BYREF
  __int64 v58; // [rsp+68h] [rbp+Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp+17h] BYREF
  HSTRING string; // [rsp+88h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v4 = CActivatedEventArgsWithPrelaunchAndViewIdBase::MarshalObjectToPropertySet(
         (CLaunchActivatedEventArgs *)((char *)this - 256),
         a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x64,
      (int)"onecoreuap\\shell\\lib\\activationevents\\src\\launchactivated.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  v6 = *(__int64 (__fastcall ***)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, _QWORD **))a2;
  v57 = 0LL;
  v58 = 0LL;
  v7 = *v6;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v57);
  ActivationFactory = v7(a2, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v57);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v46 = 105LL;
LABEL_32:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v46,
      (int)"onecoreuap\\shell\\lib\\activationevents\\src\\launchactivated.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_23;
  }
  string = 0LL;
  v9 = WindowsCreateStringReference(L"Windows.Foundation.PropertyValue", 0x20u, &hstringHeader, &string);
  if ( v9 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9, v10, v11);
    __debugbreak();
  }
  v12 = string;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v58);
  ActivationFactory = RoGetActivationFactory(v12, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, &v58);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v46 = 106LL;
    goto LABEL_32;
  }
  v13 = *(__int64 (__fastcall **)(char *, HSTRING *))(*((_QWORD *)this - 2) + 48LL);
  WindowsDeleteString(0LL);
  v52 = 0LL;
  v14 = v13((char *)this - 16, &v52);
  v5 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E,
      (int)"onecoreuap\\shell\\lib\\activationevents\\src\\launchactivated.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_22;
  }
  v15 = *(__int64 (__fastcall **)(char *, HSTRING *))(*((_QWORD *)this - 2) + 56LL);
  WindowsDeleteString(0LL);
  v53 = 0LL;
  v16 = v15((char *)this - 16, &v53);
  v5 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x71,
      (int)"onecoreuap\\shell\\lib\\activationevents\\src\\launchactivated.cpp",
      (const char *)(unsigned int)v16);
LABEL_21:
    WindowsDeleteString(v53);
    v53 = 0LL;
LABEL_22:
    WindowsDeleteString(v52);
    v52 = 0LL;
LABEL_23:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v58);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v57);
    return v5;
  }
  v17 = *((_QWORD *)this - 1);
  v54 = 0LL;
  v18 = *(__int64 (__fastcall **)(char *, __int64 *))(v17 + 48);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v54);
  v19 = v18((char *)this - 8, &v54);
  v5 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x74,
      (int)"onecoreuap\\shell\\lib\\activationevents\\src\\launchactivated.cpp",
      (const char *)(unsigned int)v19);
LABEL_42:
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v54);
    goto LABEL_21;
  }
  v20 = v58;
  v55 = 0LL;
  v21 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v58 + 144LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v55);
  v22 = v21(v20, v52, &v55);
  v5 = v22;
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x78,
      (int)"onecoreuap\\shell\\lib\\activationevents\\src\\launchactivated.cpp",
      (const char *)(unsigned int)v22);
LABEL_41:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v55);
    goto LABEL_42;
  }
  v23 = v57;
  v24 = v55;
  v51[0] = 0;
  v25 = *v57;
  string = 0LL;
  v26 = *(__int64 (__fastcall **)(_QWORD *, HSTRING, __int64, _BYTE *))(v25 + 80);
  v27 = WindowsCreateStringReference(L"Arguments", 9u, &hstringHeader, &string);
  if ( v27 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v27, v28, v29);
    __debugbreak();
  }
  v30 = v26(v23, string, v24, v51);
  v5 = v30;
  if ( v30 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7A,
      (int)"onecoreuap\\shell\\lib\\activationevents\\src\\launchactivated.cpp",
      (const char *)(unsigned int)v30);
    goto LABEL_19;
  }
  v31 = v58;
  v56 = 0LL;
  v32 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v58 + 144LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v56);
  v33 = v32(v31, v53, &v56);
  v5 = v33;
  if ( v33 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7D,
      (int)"onecoreuap\\shell\\lib\\activationevents\\src\\launchactivated.cpp",
      (const char *)(unsigned int)v33);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v56);
LABEL_19:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v55);
    v45 = v54;
    if ( v54 )
    {
      v54 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
    }
    goto LABEL_21;
  }
  v34 = v57;
  v35 = v56;
  v36 = *v57;
  string = 0LL;
  v37 = *(__int64 (__fastcall **)(_QWORD *, HSTRING, __int64, _BYTE *))(v36 + 80);
  v38 = WindowsCreateStringReference(L"TileId", 6u, &hstringHeader, &string);
  if ( v38 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v38, v39, v40);
    __debugbreak();
  }
  v41 = v37(v34, string, v35, v51);
  v5 = v41;
  if ( v41 < 0 )
  {
    v47 = 126LL;
LABEL_40:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v47,
      (int)"onecoreuap\\shell\\lib\\activationevents\\src\\launchactivated.cpp",
      (const char *)(unsigned int)v41);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v56);
    goto LABEL_41;
  }
  v42 = v54;
  if ( v54 )
  {
    v48 = v57;
    v49 = *v57;
    string = 0LL;
    v50 = *(__int64 (__fastcall **)(_QWORD *, HSTRING, __int64, _BYTE *))(v49 + 80);
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"TileActivatedInfo", 0x12u, 0x11u);
    v41 = v50(v48, string, v42, v51);
    v5 = v41;
    if ( v41 < 0 )
    {
      v47 = 130LL;
      goto LABEL_40;
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v56);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v55);
  v43 = v54;
  if ( v54 )
  {
    v54 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
  }
  WindowsDeleteString(v53);
  v53 = 0LL;
  WindowsDeleteString(v52);
  v52 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v58);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v57);
  return 0LL;
}
