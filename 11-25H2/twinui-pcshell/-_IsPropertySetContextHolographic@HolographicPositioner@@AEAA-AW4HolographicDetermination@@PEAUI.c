/*
 * XREFs of ?_IsPropertySetContextHolographic@HolographicPositioner@@AEAA?AW4HolographicDetermination@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18002DCB0
 * Callers:
 *     ?_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801D0920 (-_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@C.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18002D858 (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x180032444 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004E0F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?GetWindowDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAUHWND__@@W4ContextInspectionOptions@1234@PEAW4UserDisplayContext@1234@@Z @ 0x180076EC0 (-GetWindowDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAUHWND__@@W4ContextInspectionO.c)
 *     ?IsWindowManaged@HolographicPositioner@@UEAAJPEAUHWND__@@PEAH@Z @ 0x180171B70 (-IsWindowManaged@HolographicPositioner@@UEAAJPEAUHWND__@@PEAH@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B86EC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall HolographicPositioner::_IsPropertySetContextHolographic(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  HRESULT v4; // eax
  int v5; // edx
  unsigned int v6; // r8d
  HSTRING v7; // rdi
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  char v12; // al
  HRESULT v13; // eax
  int v14; // edx
  unsigned int v15; // r8d
  HSTRING v16; // rdi
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  char i; // al
  HRESULT v22; // eax
  int v23; // edx
  __int64 v24; // r8
  int v25; // edx
  unsigned int v26; // r8d
  char v27; // al
  unsigned __int64 v28; // rbx
  unsigned int v29; // eax
  UINT32 v30; // edx
  HRESULT v31; // eax
  int v32; // edx
  __int64 v33; // r8
  unsigned int v34; // eax
  __int64 v36; // rdi
  unsigned int v37; // ebx
  __int64 v38; // rcx
  int v39; // eax
  int v40; // eax
  __int64 v41; // r8
  int v42; // [rsp+20h] [rbp-50h] BYREF
  __int64 v43; // [rsp+28h] [rbp-48h] BYREF
  int v44; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v45; // [rsp+34h] [rbp-3Ch] BYREF
  __int64 (__fastcall ***v46)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-38h] BYREF
  int v47; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v48[7]; // [rsp+44h] [rbp-2Ch] BYREF
  HSTRING string; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  LODWORD(v43) = 0;
  v46 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v46);
  string = 0LL;
  v4 = WindowsCreateStringReference(L"AppInstanceId", 0xDu, (HSTRING_HEADER *)&v48[1], &string);
  if ( v4 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4, v5, v6);
    goto LABEL_53;
  }
  v7 = string;
  LOBYTE(v42) = 0;
  v43 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v43);
  if ( !a2 )
    goto LABEL_5;
  v8 = (**a2)(a2, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v43);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B,
      (unsigned int)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
      (const char *)(unsigned int)v8,
      v42);
LABEL_5:
    v9 = v43;
    if ( v43 )
    {
      v43 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    goto LABEL_12;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, HSTRING, int *))(*(_QWORD *)v43 + 64LL))(v43, v7, &v42);
  if ( v10 < 0 )
  {
LABEL_53:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x94,
      (unsigned int)"onecore\\internal\\shell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v10,
      v42);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v43);
LABEL_12:
    v12 = 0;
    goto LABEL_13;
  }
  v11 = v43;
  if ( v43 )
  {
    v43 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( !(_BYTE)v42 )
    goto LABEL_12;
  v12 = 1;
LABEL_13:
  if ( !v12 )
  {
    string = 0LL;
    v13 = WindowsCreateStringReference(L"DesignatedHolographicLaunch", 0x1Bu, (HSTRING_HEADER *)&v48[1], &string);
    if ( v13 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13, v14, v15);
    }
    else
    {
      v16 = string;
      LOBYTE(v42) = 0;
      v43 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v43);
      if ( !a2 )
        goto LABEL_18;
      v17 = (**a2)(a2, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v43);
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1B,
          (unsigned int)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
          (const char *)(unsigned int)v17,
          v42);
LABEL_18:
        v18 = v43;
        if ( v43 )
        {
          v43 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
        goto LABEL_26;
      }
      v19 = (*(__int64 (__fastcall **)(__int64, HSTRING, int *))(*(_QWORD *)v43 + 64LL))(v43, v16, &v42);
      if ( v19 >= 0 )
      {
        v20 = v43;
        if ( v43 )
        {
          v43 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        }
        if ( (_BYTE)v42 )
          goto LABEL_43;
        goto LABEL_26;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x94,
      (unsigned int)"onecore\\internal\\shell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v19,
      v42);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v43);
LABEL_26:
    for ( i = 0; ; i = 1 )
    {
      if ( i )
        goto LABEL_66;
      v47 = 0;
      string = 0LL;
      v22 = WindowsCreateStringReference(L"ClientRequestedNavigationType", 0x1Du, (HSTRING_HEADER *)&v48[1], &string);
      if ( v22 < 0 )
        break;
      LODWORD(v43) = 1;
      if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v46, string, v24, &v47) >= 0 )
        goto LABEL_57;
LABEL_30:
      v27 = 0;
LABEL_31:
      if ( v27 )
      {
        v48[0] = 0;
        string = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(
          (HSTRING_HEADER *)&v48[1],
          L"SwitchAsync_IdTo",
          0x11u,
          0x10u);
        if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v46, string, v41, v48) >= 0 )
        {
          v44 = 0;
          if ( HolographicPositioner::IsWindowManaged((HolographicPositioner *)(a1 + 136), (HWND)v48[0], &v44) >= 0 )
          {
            v37 = (v44 != 0) + 1;
            goto LABEL_51;
          }
        }
      }
      v45 = 0;
      string = 0LL;
      v28 = -1LL;
      do
        ++v28;
      while ( aViewsizeprefer_1[v28] );
      if ( v28 <= 0xFFFFFFFF )
      {
        v29 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v28, v25, v26);
        v30 = v29 - 1;
        if ( (unsigned int)v28 < v29 )
          v30 = v28;
        v31 = WindowsCreateStringReference(L"ViewSizePreferences.SourceWindow", v30, (HSTRING_HEADER *)&v48[1], &string);
        if ( v31 < 0 )
        {
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v31, v32, v33);
          __debugbreak();
        }
        if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v46, string, v33, &v45) >= 0 )
        {
          v34 = v45;
        }
        else
        {
          v34 = 0;
          v45 = 0;
        }
        if ( !v34 )
        {
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v46);
          return 0LL;
        }
        v36 = v34;
        v37 = 0;
        v44 = 0;
        if ( (int)Windows::Internal::Shell::Holographic::GetWindowDisplayContext(v34, 1LL, &v44) >= 0 )
        {
          if ( v44 == 1 )
            goto LABEL_66;
          v37 = 1;
        }
        v38 = *(_QWORD *)(a1 + 256);
        if ( v38 )
        {
          LODWORD(v43) = 0;
          v39 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v38 + 40LL))(v38, v36, &v43);
          if ( v39 < 0 )
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x586,
              (unsigned int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
              (const char *)(unsigned int)v39,
              v42);
          }
          else
          {
            v40 = v37;
            if ( (_DWORD)v43 )
              v40 = 2;
            v37 = v40;
          }
        }
        goto LABEL_51;
      }
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v25, v26);
LABEL_43:
      ;
    }
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v22, v23, v24);
LABEL_57:
    v27 = 1;
    if ( v47 == 1 )
      goto LABEL_31;
    goto LABEL_30;
  }
LABEL_66:
  v37 = 2;
LABEL_51:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v46);
  return v37;
}
