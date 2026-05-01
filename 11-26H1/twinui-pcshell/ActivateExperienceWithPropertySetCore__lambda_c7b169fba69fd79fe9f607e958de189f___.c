/*
 * XREFs of ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f___ @ 0x1800746CC
 * Callers:
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG0PEAUIInspectable@@0PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x18020AEF4 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG0PEAUIInspectable@@0PEAUIPropertySet@Co.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Make@VCImmersiveWindowFactory@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCImmersiveWindowFactory@@@12@XZ @ 0x180074A04 (--$Make@VCImmersiveWindowFactory@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCImmersiveWindowFact.c)
 *     ?GetSeralizedPropertysetAndActivateOptions@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAPEAUIBuffer@Streams@Storage@4@PEAW4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x180074A68 (-GetSeralizedPropertysetAndActivateOptions@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     ?CoCreateActivationManagerAndSetProperties@@YAJPEAUIBuffer@Streams@Storage@Windows@@PEAPEAUIApplicationActivationManagerPriv@@@Z @ 0x180074C00 (-CoCreateActivationManagerAndSetProperties@@YAJPEAUIBuffer@Streams@Storage@Windows@@PEAPEAUIAppl.c)
 *     _lambda_c7b169fba69fd79fe9f607e958de189f_::operator() @ 0x180075408 (_lambda_c7b169fba69fd79fe9f607e958de189f_--operator().c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180113974 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802AF344 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f_(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  int SeralizedPropertysetAndActivateOptions; // eax
  __int64 v9; // rbx
  int v10; // eax
  int v11; // edi
  struct IApplicationActivationManagerPriv *v12; // rcx
  struct Windows::Storage::Streams::IBuffer *v13; // rcx
  __int64 v14; // rcx
  struct IApplicationActivationManagerPriv *v15; // rcx
  struct Windows::Storage::Streams::IBuffer *v16; // rcx
  __int64 v17; // rcx
  struct IApplicationActivationManagerPriv *v19; // rcx
  struct Windows::Storage::Streams::IBuffer *v20; // rcx
  __int64 v21; // rcx
  struct Windows::Storage::Streams::IBuffer *v22; // rcx
  __int64 v23; // rcx
  HRESULT v24; // eax
  int v25; // edx
  unsigned int v26; // r8d
  int v27; // eax
  struct Windows::Storage::Streams::IBuffer *v28; // [rsp+30h] [rbp-50h] BYREF
  __int64 v29; // [rsp+38h] [rbp-48h] BYREF
  struct IApplicationActivationManagerPriv *v30; // [rsp+40h] [rbp-40h] BYREF
  int v31; // [rsp+48h] [rbp-38h] BYREF
  __int64 v32; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  HSTRING string; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v29 = a2;
  if ( a2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    a2 = v29;
  }
  if ( !a2 )
  {
    string = 0LL;
    v24 = WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string);
    if ( v24 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v24, v25, v26);
      goto LABEL_38;
    }
    v27 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
            string,
            &v29);
    v4 = v27;
    if ( v27 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA2,
        (int)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
        (const char *)(unsigned int)v27);
LABEL_39:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
      return v4;
    }
  }
  v31 = 0;
  v28 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v28);
  SeralizedPropertysetAndActivateOptions = GetSeralizedPropertysetAndActivateOptions(a1, v29, a3, &v28, &v31);
  v4 = SeralizedPropertysetAndActivateOptions;
  if ( SeralizedPropertysetAndActivateOptions < 0 )
  {
LABEL_38:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA8,
      (int)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
      (const char *)(unsigned int)SeralizedPropertysetAndActivateOptions);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v28);
    goto LABEL_39;
  }
  Microsoft::WRL::Details::Make<CImmersiveWindowFactory,>(&v32);
  v9 = v32;
  if ( !v32 )
  {
    v4 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAB,
      (int)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
      (const char *)0x8007000ELL);
    v22 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(struct Windows::Storage::Streams::IBuffer *))(*(_QWORD *)v22 + 16LL))(v22);
    }
    v23 = v29;
    if ( v29 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    return v4;
  }
  *(_BYTE *)(v32 + 105) = a3 & 1;
  v30 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
  v10 = CoCreateActivationManagerAndSetProperties(v28, &v30);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAF,
      (int)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
      (const char *)(unsigned int)v10);
    v15 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(struct IApplicationActivationManagerPriv *))(*(_QWORD *)v15 + 16LL))(v15);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v16 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(struct Windows::Storage::Streams::IBuffer *))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v17 = v29;
    if ( v29 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    return (unsigned int)v11;
  }
  v11 = lambda_c7b169fba69fd79fe9f607e958de189f_::operator()(a4, v30, v9, (unsigned int)v31);
  if ( v11 < 0 )
  {
    v12 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(struct IApplicationActivationManagerPriv *))(*(_QWORD *)v12 + 16LL))(v12);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v13 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(struct Windows::Storage::Streams::IBuffer *))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v14 = v29;
    if ( v29 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    return (unsigned int)v11;
  }
  v19 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(struct IApplicationActivationManagerPriv *))(*(_QWORD *)v19 + 16LL))(v19);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v20 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(struct Windows::Storage::Streams::IBuffer *))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v21 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  return 0LL;
}
