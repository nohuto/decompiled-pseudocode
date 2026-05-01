/*
 * XREFs of ?MarshalObjectToPropertySet@CActivatedEventArgsWithPrelaunchAndViewIdBase@@QEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800FFA60
 * Callers:
 *     ?MarshalObjectToPropertySet@CLaunchActivatedEventArgs@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800FF530 (-MarshalObjectToPropertySet@CLaunchActivatedEventArgs@@UEAAJPEAUIPropertySet@Collections@Foundat.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MarshalObjectToPropertySet@CActivatedEventArgsWithViewIdBase@@QEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800FFCBC (-MarshalObjectToPropertySet@CActivatedEventArgsWithViewIdBase@@QEAAJPEAUIPropertySet@Collections.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B86EC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CActivatedEventArgsWithPrelaunchAndViewIdBase::MarshalObjectToPropertySet(
        CActivatedEventArgsWithPrelaunchAndViewIdBase *this,
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
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, __int64, __int64 *); // rdi
  __int64 v15; // rdx
  int v16; // eax
  _QWORD *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 (__fastcall *v20)(_QWORD *, HSTRING, __int64, _BYTE *); // rsi
  HRESULT v21; // eax
  int v22; // edx
  unsigned int v23; // r8d
  __int64 v25; // rdx
  __int64 v26; // rdx
  char v27; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v28[7]; // [rsp+31h] [rbp-4Fh] BYREF
  __int64 v29; // [rsp+38h] [rbp-48h] BYREF
  __int64 v30; // [rsp+40h] [rbp-40h] BYREF
  _QWORD *v31; // [rsp+48h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v4 = CActivatedEventArgsWithViewIdBase::MarshalObjectToPropertySet(this, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x262,
      (int)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  v6 = *(__int64 (__fastcall ***)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, _QWORD **))a2;
  v31 = 0LL;
  v30 = 0LL;
  v7 = *v6;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
  ActivationFactory = v7(a2, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v31);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v25 = 615LL;
  }
  else
  {
    string = 0LL;
    v9 = WindowsCreateStringReference(L"Windows.Foundation.PropertyValue", 0x20u, &hstringHeader, &string);
    if ( v9 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9, v10, v11);
      __debugbreak();
    }
    v12 = string;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
    ActivationFactory = RoGetActivationFactory(v12, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, &v30);
    v5 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v25 = 616LL;
    }
    else
    {
      v27 = 0;
      ActivationFactory = (*(__int64 (__fastcall **)(char *, char *))(*((_QWORD *)this + 27) + 48LL))(
                            (char *)this + 216,
                            &v27);
      v5 = ActivationFactory;
      if ( ActivationFactory >= 0 )
      {
        v13 = v30;
        v29 = 0LL;
        v14 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v30 + 136LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
        LOBYTE(v15) = v27;
        v16 = v14(v13, v15, &v29);
        v5 = v16;
        if ( v16 < 0 )
        {
          v26 = 623LL;
        }
        else
        {
          v17 = v31;
          v18 = v29;
          v28[0] = 0;
          v19 = *v31;
          string = 0LL;
          v20 = *(__int64 (__fastcall **)(_QWORD *, HSTRING, __int64, _BYTE *))(v19 + 80);
          v21 = WindowsCreateStringReference(L"PrelaunchActivated", 0x12u, &hstringHeader, &string);
          if ( v21 < 0 )
          {
            Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v21, v22, v23);
            __debugbreak();
          }
          v16 = v20(v17, string, v18, v28);
          v5 = v16;
          if ( v16 >= 0 )
          {
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
            return 0LL;
          }
          v26 = 625LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v26,
          (int)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
          (const char *)(unsigned int)v16);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
        goto LABEL_12;
      }
      v25 = 619LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v25,
    (int)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_12:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
  return v5;
}
