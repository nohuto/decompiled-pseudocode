/*
 * XREFs of ?MarshalObjectToPropertySet@CProtocolActivatedEventArgs@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180678CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MarshalObjectToPropertySet@CActivatedEventArgsWithViewIdBase@@QEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18004054C (-MarshalObjectToPropertySet@CActivatedEventArgsWithViewIdBase@@QEAAJPEAUIPropertySet@Collections.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800573EC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1801A2B38 (-InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801F1B5C (--$GetActivationFactory@V-$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Fo.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProtocolActivatedEventArgs::MarshalObjectToPropertySet(
        RTL_SRWLOCK *this,
        __int64 (__fastcall ***a2)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *))
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 (__fastcall **v6)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *); // rax
  __int64 (__fastcall *v7)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *); // rbx
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  HSTRING Ptr; // rcx
  HRESULT v12; // eax
  __int64 v13; // rdx
  _QWORD *v14; // rbx
  void *v15; // rdi
  __int64 v16; // rax
  __int64 (__fastcall *v17)(_QWORD *, __int64, void *, _BYTE *); // rsi
  __int64 v18; // rdi
  _QWORD *v19; // rbx
  __int64 v20; // rax
  __int64 (__fastcall *v21)(_QWORD *, __int64, __int64, _BYTE *); // rsi
  __int64 v22; // rbx
  __int64 (__fastcall *v23)(__int64, HSTRING, __int64 *); // rdi
  int v24; // eax
  __int64 v25; // rdx
  _QWORD *v26; // rbx
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 (__fastcall *v29)(_QWORD *, __int64, __int64, _BYTE *); // rsi
  _BYTE v31[8]; // [rsp+30h] [rbp-19h] BYREF
  HSTRING newString; // [rsp+38h] [rbp-11h] BYREF
  void *v33; // [rsp+40h] [rbp-9h] BYREF
  __int64 v34; // [rsp+48h] [rbp-1h] BYREF
  __int64 v35; // [rsp+50h] [rbp+7h] BYREF
  _QWORD *v36; // [rsp+58h] [rbp+Fh] BYREF
  __int64 v37; // [rsp+60h] [rbp+17h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+1Fh] BYREF
  __int64 v39; // [rsp+80h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v4 = CActivatedEventArgsWithViewIdBase::MarshalObjectToPropertySet(this + 6, a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = *a2;
    v36 = 0LL;
    v37 = 0LL;
    v7 = *v6;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v36);
    v8 = v7(
           (struct Windows::Foundation::Collections::IPropertySet *)a2,
           &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
           (__int64 *)&v36);
    v5 = v8;
    if ( v8 < 0 )
    {
      v9 = 96LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"onecoreuap\\shell\\lib\\activationeventsshell\\protocolactivated.cpp",
        (const char *)(unsigned int)v8);
LABEL_26:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v37);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v36);
      return v5;
    }
    v39 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.PropertyValue",
      0x21u,
      0x20u);
    v8 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValueStatics>>(
           v39,
           &v37);
    v5 = v8;
    if ( v8 < 0 )
    {
      v9 = 97LL;
      goto LABEL_7;
    }
    v33 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v33);
    v10 = Microsoft::WRL::AgileRef::InternalResolve(
            (Microsoft::WRL::AgileRef *)&this[37],
            &GUID_9e365e57_48b2_4160_956f_c7385120bbfc,
            &v33);
    v5 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x65,
        (int)"onecoreuap\\shell\\lib\\activationeventsshell\\protocolactivated.cpp",
        (const char *)(unsigned int)v10);
LABEL_10:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v33);
      goto LABEL_26;
    }
    v34 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
    v34 = 0LL;
    WindowsDeleteString(0LL);
    Ptr = (HSTRING)this[38].Ptr;
    newString = 0LL;
    v12 = WindowsDuplicateString(Ptr, &newString);
    v5 = v12;
    if ( v12 >= 0 )
    {
      v14 = v36;
      v15 = v33;
      v31[0] = 0;
      v16 = *v36;
      v39 = 0LL;
      v17 = *(__int64 (__fastcall **)(_QWORD *, __int64, void *, _BYTE *))(v16 + 80);
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Uri", 4u, 3u);
      v12 = v17(v14, v39, v15, v31);
      v5 = v12;
      if ( v12 >= 0 )
      {
        v18 = v34;
        if ( !v34
          || (v19 = v36,
              v20 = *v36,
              v39 = 0LL,
              v21 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64, _BYTE *))(v20 + 80),
              Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Data", 5u, 4u),
              v12 = v21(v19, v39, v18, v31),
              v5 = v12,
              v12 >= 0) )
        {
          v22 = v37;
          v35 = 0LL;
          v23 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v37 + 144LL);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v35);
          v24 = v23(v22, newString, &v35);
          v5 = v24;
          if ( v24 >= 0 )
          {
            v26 = v36;
            v27 = v35;
            v28 = *v36;
            v39 = 0LL;
            v29 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64, _BYTE *))(v28 + 80);
            Microsoft::WRL::Wrappers::HStringReference::CreateReference(
              &hstringHeader,
              L"CallerPackageFamilyName",
              0x18u,
              0x17u);
            v24 = v29(v26, v39, v27, v31);
            v5 = v24;
            if ( v24 >= 0 )
            {
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v35);
              WindowsDeleteString(newString);
              newString = 0LL;
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v33);
              v5 = 0;
              goto LABEL_26;
            }
            v25 = 121LL;
          }
          else
          {
            v25 = 120LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v25,
            (int)"onecoreuap\\shell\\lib\\activationeventsshell\\protocolactivated.cpp",
            (const char *)(unsigned int)v24);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v35);
          goto LABEL_14;
        }
        v13 = 116LL;
      }
      else
      {
        v13 = 112LL;
      }
    }
    else
    {
      v13 = 108LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"onecoreuap\\shell\\lib\\activationeventsshell\\protocolactivated.cpp",
      (const char *)(unsigned int)v12);
LABEL_14:
    WindowsDeleteString(newString);
    newString = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5B,
    (int)"onecoreuap\\shell\\lib\\activationeventsshell\\protocolactivated.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
