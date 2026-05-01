/*
 * XREFs of ?MarshalObjectToPropertySet@CActivatedEventArgsWithViewIdBase@@QEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18004054C
 * Callers:
 *     ?MarshalObjectToPropertySet@CActivatedEventArgsWithPrelaunchAndViewIdBase@@QEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801A92A0 (-MarshalObjectToPropertySet@CActivatedEventArgsWithPrelaunchAndViewIdBase@@QEAAJPEAUIPropertySet.c)
 *     ?MarshalObjectToPropertySet@CProtocolActivatedEventArgs@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180678CA0 (-MarshalObjectToPropertySet@CProtocolActivatedEventArgs@@UEAAJPEAUIPropertySet@Collections@Found.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MarshalObjectToPropertySet@CActivatedEventArgsBase@@QEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18003F820 (-MarshalObjectToPropertySet@CActivatedEventArgsBase@@QEAAJPEAUIPropertySet@Collections@Foundatio.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800573EC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802AF344 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CActivatedEventArgsWithViewIdBase::MarshalObjectToPropertySet(
        RTL_SRWLOCK *this,
        __int64 (__fastcall ***a2)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *))
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 (__fastcall **v6)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *); // rax
  __int64 (__fastcall *v7)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *); // rbx
  int ActivationFactory; // eax
  HRESULT v9; // eax
  int v10; // edx
  unsigned int v11; // r8d
  HSTRING v12; // rbx
  __int64 (__fastcall *v13)(RTL_SRWLOCK *, __int64 *); // rbx
  int v14; // eax
  __int64 (__fastcall **Ptr)(RTL_SRWLOCK *, _OWORD *); // rax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, _QWORD, __int64 *); // rdi
  int v18; // eax
  _QWORD *v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 (__fastcall *v22)(_QWORD *, HSTRING, __int64, char *); // rsi
  HRESULT v23; // eax
  int v24; // edx
  unsigned int v25; // r8d
  __int64 v26; // rdi
  __int64 v27; // rbx
  __int64 (__fastcall *v28)(__int64, _QWORD, __int64 *); // rdi
  int v29; // eax
  _QWORD *v30; // rbx
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 (__fastcall *v33)(_QWORD *, HSTRING, __int64, char *); // rsi
  HRESULT v34; // eax
  int v35; // edx
  unsigned int v36; // r8d
  __int64 v37; // rdx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rbx
  __int64 (__fastcall *v42)(__int64, __int64, __int64 *); // rdi
  __int64 v43; // rdx
  int v44; // eax
  _QWORD *v45; // rbx
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 (__fastcall *v48)(_QWORD *, HSTRING, __int64, char *); // rsi
  HRESULT v49; // eax
  int v50; // edx
  unsigned int v51; // r8d
  __int64 v52; // rdx
  __int64 v53; // rdx
  _QWORD *v54; // rbx
  __int64 v55; // rax
  __int64 (__fastcall *v56)(_QWORD *, HSTRING, __int64, char *); // rsi
  char v57[8]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v58; // [rsp+38h] [rbp-31h] BYREF
  __int64 v59; // [rsp+40h] [rbp-29h] BYREF
  __int64 v60; // [rsp+48h] [rbp-21h] BYREF
  _QWORD *v61; // [rsp+50h] [rbp-19h] BYREF
  __int64 v62; // [rsp+58h] [rbp-11h] BYREF
  __int64 v63; // [rsp+60h] [rbp-9h] BYREF
  unsigned int v64; // [rsp+68h] [rbp-1h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp+7h] BYREF
  HSTRING string; // [rsp+88h] [rbp+1Fh] BYREF
  __int128 v67; // [rsp+90h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v4 = CActivatedEventArgsBase::MarshalObjectToPropertySet(this, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x220,
      (int)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  v6 = *a2;
  v61 = 0LL;
  v62 = 0LL;
  v7 = *v6;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v61);
  ActivationFactory = v7(
                        (struct Windows::Foundation::Collections::IPropertySet *)a2,
                        &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
                        (__int64 *)&v61);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v40 = 549LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v40,
      (int)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_20;
  }
  string = 0LL;
  v9 = WindowsCreateStringReference(L"Windows.Foundation.PropertyValue", 0x20u, &hstringHeader, &string);
  if ( v9 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9, v10, v11);
    __debugbreak();
  }
  v12 = string;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v62);
  ActivationFactory = RoGetActivationFactory(v12, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, &v62);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v40 = 550LL;
    goto LABEL_25;
  }
  v64 = 0;
  ActivationFactory = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, unsigned int *))this[19].Ptr + 6))(this + 19, &v64);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v40 = 553LL;
    goto LABEL_25;
  }
  v58 = 0LL;
  v13 = (__int64 (__fastcall *)(RTL_SRWLOCK *, __int64 *))*((_QWORD *)this[20].Ptr + 6);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v58);
  v14 = v13(this + 20, &v58);
  v5 = v14;
  if ( v14 < 0 )
  {
    v53 = 556LL;
LABEL_35:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v53,
      (int)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_19;
  }
  Ptr = (__int64 (__fastcall **)(RTL_SRWLOCK *, _OWORD *))this[21].Ptr;
  v67 = 0LL;
  v14 = Ptr[8](this + 21, &v67);
  v5 = v14;
  if ( v14 < 0 )
  {
    v53 = 559LL;
    goto LABEL_35;
  }
  v16 = v62;
  v59 = 0LL;
  v17 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v62 + 80LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v59);
  v18 = v17(v16, v64, &v59);
  v5 = v18;
  if ( v18 < 0 )
  {
    v39 = 563LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v39,
      (int)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
      (const char *)(unsigned int)v18);
    goto LABEL_18;
  }
  v19 = v61;
  v20 = v59;
  v57[0] = 0;
  v21 = *v61;
  string = 0LL;
  v22 = *(__int64 (__fastcall **)(_QWORD *, HSTRING, __int64, char *))(v21 + 80);
  v23 = WindowsCreateStringReference(L"CurrentlyShownApplicationViewId", 0x1Fu, &hstringHeader, &string);
  if ( v23 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v23, v24, v25);
    __debugbreak();
  }
  v18 = v22(v19, string, v20, v57);
  v5 = v18;
  if ( v18 < 0 )
  {
    v39 = 565LL;
    goto LABEL_23;
  }
  v26 = v58;
  if ( v58 )
  {
    v54 = v61;
    v55 = *v61;
    string = 0LL;
    v56 = *(__int64 (__fastcall **)(_QWORD *, HSTRING, __int64, char *))(v55 + 80);
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"ViewSwitcher", 0xDu, 0xCu);
    v18 = v56(v54, string, v26, v57);
    v5 = v18;
    if ( v18 < 0 )
    {
      v39 = 569LL;
      goto LABEL_23;
    }
  }
  v27 = v62;
  v60 = 0LL;
  v28 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v62 + 104LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v60);
  v29 = v28(v27, v67, &v60);
  v5 = v29;
  if ( v29 < 0 )
  {
    v37 = 573LL;
    goto LABEL_16;
  }
  v30 = v61;
  v31 = v60;
  v32 = *v61;
  string = 0LL;
  v33 = *(__int64 (__fastcall **)(_QWORD *, HSTRING, __int64, char *))(v32 + 80);
  v34 = WindowsCreateStringReference(L"MultiView:AamActivationId", 0x19u, &hstringHeader, &string);
  if ( v34 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v34, v35, v36);
    __debugbreak();
  }
  v29 = v33(v30, string, v31, v57);
  v5 = v29;
  if ( v29 < 0 )
  {
    v37 = 574LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v37,
      (int)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
      (const char *)(unsigned int)v29);
LABEL_17:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v60);
LABEL_18:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v59);
LABEL_19:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v58);
LABEL_20:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v62);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v61);
    return v5;
  }
  v41 = v62;
  v63 = 0LL;
  v42 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v62 + 136LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v63);
  LOBYTE(v43) = BYTE8(v67);
  v44 = v42(v41, v43, &v63);
  v5 = v44;
  if ( v44 < 0 )
  {
    v52 = 577LL;
    goto LABEL_30;
  }
  v45 = v61;
  v46 = v63;
  v47 = *v61;
  string = 0LL;
  v48 = *(__int64 (__fastcall **)(_QWORD *, HSTRING, __int64, char *))(v47 + 80);
  v49 = WindowsCreateStringReference(L"IsApplicationMultiviewActivationPolicyEnabled", 0x2Du, &hstringHeader, &string);
  if ( v49 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v49, v50, v51);
    JUMPOUT(0x180040A45LL);
  }
  v44 = v48(v45, string, v46, v57);
  v5 = v44;
  if ( v44 < 0 )
  {
    v52 = 578LL;
LABEL_30:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v52,
      (int)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
      (const char *)(unsigned int)v44);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v63);
    goto LABEL_17;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v63);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v60);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v59);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v58);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v62);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v61);
  return 0LL;
}
