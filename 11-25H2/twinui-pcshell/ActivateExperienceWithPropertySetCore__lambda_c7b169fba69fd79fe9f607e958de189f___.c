/*
 * XREFs of ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f___ @ 0x180051318
 * Callers:
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG0PEAUIInspectable@@0PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x1800505E8 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG0PEAUIInspectable@@0PEAUIPropertySet@Co.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_c7b169fba69fd79fe9f607e958de189f_::operator() @ 0x180050FC4 (_lambda_c7b169fba69fd79fe9f607e958de189f_--operator().c)
 *     ?GetSeralizedPropertysetAndActivateOptions@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAPEAUIBuffer@Streams@Storage@4@PEAW4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x18005169C (-GetSeralizedPropertysetAndActivateOptions@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     ?CoCreateActivationManagerAndSetProperties@@YAJPEAUIBuffer@Streams@Storage@Windows@@PEAPEAUIApplicationActivationManagerPriv@@@Z @ 0x180051830 (-CoCreateActivationManagerAndSetProperties@@YAJPEAUIBuffer@Streams@Storage@Windows@@PEAPEAUIAppl.c)
 *     ??0CImmersiveWindowFactory@@QEAA@XZ @ 0x180051908 (--0CImmersiveWindowFactory@@QEAA@XZ.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18010CA98 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B86EC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f_(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  char v8; // si
  int SeralizedPropertysetAndActivateOptions; // eax
  __int64 v10; // rbx
  CImmersiveWindowFactory *v11; // rax
  CImmersiveWindowFactory *v12; // rax
  CImmersiveWindowFactory *v13; // rdi
  CImmersiveWindowFactory *v14; // rcx
  int v15; // eax
  int v16; // edi
  struct IApplicationActivationManagerPriv *v17; // rcx
  struct Windows::Storage::Streams::IBuffer *v18; // rcx
  __int64 v19; // rcx
  struct IApplicationActivationManagerPriv *v20; // rcx
  struct Windows::Storage::Streams::IBuffer *v21; // rcx
  __int64 v22; // rcx
  struct IApplicationActivationManagerPriv *v24; // rcx
  struct Windows::Storage::Streams::IBuffer *v25; // rcx
  __int64 v26; // rcx
  struct Windows::Storage::Streams::IBuffer *v27; // rcx
  __int64 v28; // rcx
  HRESULT v29; // eax
  int v30; // edx
  unsigned int v31; // r8d
  int v32; // eax
  struct Windows::Storage::Streams::IBuffer *v33; // [rsp+30h] [rbp-50h] BYREF
  __int64 v34; // [rsp+38h] [rbp-48h] BYREF
  struct IApplicationActivationManagerPriv *v35; // [rsp+40h] [rbp-40h] BYREF
  int v36; // [rsp+48h] [rbp-38h] BYREF
  CImmersiveWindowFactory *v37; // [rsp+50h] [rbp-30h]
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  HSTRING string; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v34 = a2;
  if ( a2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    a2 = v34;
  }
  if ( !a2 )
  {
    string = 0LL;
    v29 = WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string);
    if ( v29 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v29, v30, v31);
      goto LABEL_43;
    }
    v32 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
            string,
            &v34);
    v4 = v32;
    if ( v32 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA2,
        (int)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
        (const char *)(unsigned int)v32);
LABEL_44:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
      return v4;
    }
  }
  v8 = a3 & 1;
  v36 = 0;
  v33 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v33);
  SeralizedPropertysetAndActivateOptions = GetSeralizedPropertysetAndActivateOptions(a1, v34, a3, &v33, &v36);
  v4 = SeralizedPropertysetAndActivateOptions;
  if ( SeralizedPropertysetAndActivateOptions < 0 )
  {
LABEL_43:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA8,
      (int)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
      (const char *)(unsigned int)SeralizedPropertysetAndActivateOptions);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v33);
    goto LABEL_44;
  }
  v10 = 0LL;
  v37 = 0LL;
  v11 = (CImmersiveWindowFactory *)operator new(0xC8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    v12 = CImmersiveWindowFactory::CImmersiveWindowFactory(v11);
    v10 = (__int64)v12;
    v37 = v12;
    v13 = v12;
    v14 = v12;
  }
  else
  {
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
  }
  if ( !v12 )
  {
    v4 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAB,
      (int)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
      (const char *)0x8007000ELL);
    if ( v13 )
      (*(void (__fastcall **)(CImmersiveWindowFactory *))(*(_QWORD *)v13 + 16LL))(v13);
    v27 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(struct Windows::Storage::Streams::IBuffer *))(*(_QWORD *)v27 + 16LL))(v27);
    }
    v28 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    }
    return v4;
  }
  *((_BYTE *)v14 + 105) = v8;
  v35 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v35);
  v15 = CoCreateActivationManagerAndSetProperties(v33, &v35);
  v16 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAF,
      (int)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
      (const char *)(unsigned int)v15);
    v20 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(struct IApplicationActivationManagerPriv *))(*(_QWORD *)v20 + 16LL))(v20);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v21 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(struct Windows::Storage::Streams::IBuffer *))(*(_QWORD *)v21 + 16LL))(v21);
    }
    v22 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    return (unsigned int)v16;
  }
  v16 = lambda_c7b169fba69fd79fe9f607e958de189f_::operator()(a4, (__int64)v35, v10, v36);
  if ( v16 < 0 )
  {
    v17 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(struct IApplicationActivationManagerPriv *))(*(_QWORD *)v17 + 16LL))(v17);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v18 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(struct Windows::Storage::Streams::IBuffer *))(*(_QWORD *)v18 + 16LL))(v18);
    }
    v19 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    return (unsigned int)v16;
  }
  v24 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    (*(void (__fastcall **)(struct IApplicationActivationManagerPriv *))(*(_QWORD *)v24 + 16LL))(v24);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v25 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(struct Windows::Storage::Streams::IBuffer *))(*(_QWORD *)v25 + 16LL))(v25);
  }
  v26 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  return 0LL;
}
