/*
 * XREFs of ?_IsPropertySetContextHolographic@HolographicPositioner@@AEAA?AW4HolographicDetermination@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18008D8D8
 * Callers:
 *     ?_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18008D104 (-_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@C.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18003A59C (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x18003A5C0 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800573EC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?GetWindowDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAUHWND__@@W4ContextInspectionOptions@1234@PEAW4UserDisplayContext@1234@@Z @ 0x18008F618 (-GetWindowDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAUHWND__@@W4ContextInspectionO.c)
 *     ?IsWindowManaged@HolographicPositioner@@UEAAJPEAUHWND__@@PEAH@Z @ 0x180161FC0 (-IsWindowManaged@HolographicPositioner@@UEAAJPEAUHWND__@@PEAH@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802AF344 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall HolographicPositioner::_IsPropertySetContextHolographic(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  int v2; // esi
  HRESULT v5; // eax
  int v6; // edx
  unsigned int v7; // r8d
  HSTRING v8; // r14
  int v9; // eax
  int v10; // edi
  __int64 v11; // rcx
  char v12; // al
  HRESULT v13; // eax
  int v14; // edx
  unsigned int v15; // r8d
  HSTRING v16; // rdi
  int v17; // eax
  __int64 v18; // rcx
  char v19; // al
  HRESULT v20; // eax
  int v21; // edx
  __int64 v22; // r8
  int v23; // edx
  unsigned int v24; // r8d
  char v25; // al
  unsigned __int64 v26; // rbx
  unsigned int v27; // eax
  UINT32 v28; // edx
  HRESULT v29; // eax
  int v30; // edx
  __int64 v31; // r8
  unsigned int v32; // eax
  __int64 v34; // rdi
  unsigned int v35; // ebx
  __int64 v36; // rcx
  int v37; // eax
  int v38; // eax
  int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // r8
  _BYTE v44[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v45; // [rsp+28h] [rbp-48h] BYREF
  int v46; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v47; // [rsp+34h] [rbp-3Ch] BYREF
  __int64 (__fastcall ***v48)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-38h] BYREF
  int v49; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v50[7]; // [rsp+44h] [rbp-2Ch] BYREF
  HSTRING string; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  LODWORD(v45) = 0;
  v48 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v48);
  string = 0LL;
  v5 = WindowsCreateStringReference(L"AppInstanceId", 0xDu, (HSTRING_HEADER *)&v50[1], &string);
  if ( v5 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5, v6, v7);
    goto LABEL_53;
  }
  v8 = string;
  v44[0] = 0;
  v45 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v45);
  v2 = -2147467261;
  if ( !a2 )
  {
LABEL_53:
    v10 = v2;
LABEL_5:
    v11 = v45;
    if ( v45 )
    {
      v45 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    if ( v10 >= 0 )
      goto LABEL_8;
    goto LABEL_9;
  }
  v9 = (**a2)(a2, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v45);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B,
      (int)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
      (const char *)(unsigned int)v9);
    goto LABEL_5;
  }
  v39 = (*(__int64 (__fastcall **)(__int64, HSTRING, _BYTE *))(*(_QWORD *)v45 + 64LL))(v45, v8, v44);
  if ( v39 >= 0 )
  {
    v40 = v45;
    if ( v45 )
    {
      v45 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
    }
LABEL_8:
    v12 = 1;
    if ( v44[0] )
      goto LABEL_10;
    goto LABEL_9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x94,
    (int)"onecore\\internal\\shell\\inc\\propertysethelpers.h",
    (const char *)(unsigned int)v39);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v45);
LABEL_9:
  v12 = 0;
LABEL_10:
  if ( v12 )
    goto LABEL_67;
  string = 0LL;
  v13 = WindowsCreateStringReference(L"DesignatedHolographicLaunch", 0x1Bu, (HSTRING_HEADER *)&v50[1], &string);
  if ( v13 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13, v14, v15);
LABEL_56:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x94,
      (int)"onecore\\internal\\shell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v41);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v45);
    goto LABEL_19;
  }
  v16 = string;
  v44[0] = 0;
  v45 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v45);
  if ( !a2 )
    goto LABEL_15;
  v17 = (**a2)(a2, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v45);
  v2 = v17;
  if ( v17 >= 0 )
  {
    v41 = (*(__int64 (__fastcall **)(__int64, HSTRING, _BYTE *))(*(_QWORD *)v45 + 64LL))(v45, v16, v44);
    if ( v41 >= 0 )
    {
      v42 = v45;
      if ( v45 )
      {
        v45 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
      }
LABEL_18:
      v19 = 1;
      if ( v44[0] )
        goto LABEL_20;
      goto LABEL_19;
    }
    goto LABEL_56;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1B,
    (int)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
    (const char *)(unsigned int)v17);
LABEL_15:
  v18 = v45;
  if ( v45 )
  {
    v45 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  if ( v2 >= 0 )
    goto LABEL_18;
LABEL_19:
  v19 = 0;
LABEL_20:
  if ( v19 )
    goto LABEL_67;
  v49 = 0;
  string = 0LL;
  v20 = WindowsCreateStringReference(L"ClientRequestedNavigationType", 0x1Du, (HSTRING_HEADER *)&v50[1], &string);
  if ( v20 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v20, v21, v22);
LABEL_58:
    v25 = 1;
    if ( v49 == 1 )
      goto LABEL_24;
    goto LABEL_23;
  }
  LODWORD(v45) = 1;
  if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v48, (__int64)string, v22, &v49) >= 0 )
    goto LABEL_58;
LABEL_23:
  v25 = 0;
LABEL_24:
  if ( !v25
    || (v50[0] = 0,
        string = 0LL,
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(
          (HSTRING_HEADER *)&v50[1],
          L"SwitchAsync_IdTo",
          0x11u,
          0x10u),
        (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v48, (__int64)string, v43, v50) < 0)
    || (v46 = 0, (int)HolographicPositioner::IsWindowManaged((HolographicPositioner *)(a1 + 136), (HWND)v50[0], &v46) < 0) )
  {
    v47 = 0;
    string = 0LL;
    v26 = -1LL;
    do
      ++v26;
    while ( aViewsizeprefer_1[v26] );
    if ( v26 > 0xFFFFFFFF )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v23, v24);
      __debugbreak();
    }
    v27 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v26, v23, v24);
    v28 = v27 - 1;
    if ( (unsigned int)v26 < v27 )
      v28 = v26;
    v29 = WindowsCreateStringReference(L"ViewSizePreferences.SourceWindow", v28, (HSTRING_HEADER *)&v50[1], &string);
    if ( v29 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v29, v30, v31);
      __debugbreak();
    }
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
                &v48,
                (__int64)string,
                v31,
                &v47) >= 0 )
    {
      v32 = v47;
    }
    else
    {
      v32 = 0;
      v47 = 0;
    }
    if ( !v32 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v48);
      return 0LL;
    }
    v34 = v32;
    v35 = 0;
    v46 = 0;
    if ( (int)Windows::Internal::Shell::Holographic::GetWindowDisplayContext(v32, 1LL, &v46) < 0 )
      goto LABEL_38;
    if ( v46 != 1 )
    {
      v35 = 1;
LABEL_38:
      v36 = *(_QWORD *)(a1 + 256);
      if ( v36 )
      {
        LODWORD(v45) = 0;
        v37 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v36 + 40LL))(v36, v34, &v45);
        if ( v37 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x586,
            (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)(unsigned int)v37);
        }
        else
        {
          v38 = v35;
          if ( (_DWORD)v45 )
            v38 = 2;
          v35 = v38;
        }
      }
      goto LABEL_43;
    }
LABEL_67:
    v35 = 2;
    goto LABEL_43;
  }
  v35 = (v46 != 0) + 1;
LABEL_43:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v48);
  return v35;
}
