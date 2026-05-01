/*
 * XREFs of ?InsertExperienceIdAndSerialize@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAPEAUIBuffer@Streams@Storage@4@@Z @ 0x180075630
 * Callers:
 *     ?GetSeralizedPropertysetAndActivateOptions@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAPEAUIBuffer@Streams@Storage@4@PEAW4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x180074A68 (-GetSeralizedPropertysetAndActivateOptions@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18003A59C (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJ0PEAPEAUIInspectable@@@Z0@Z @ 0x180076364 (--$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802AF344 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall InsertExperienceIdAndSerialize(
        struct Windows::Foundation::Collections::IPropertySet *a1,
        const unsigned __int16 *a2,
        struct Windows::Storage::Streams::IBuffer **a3)
{
  int v6; // edx
  unsigned int v7; // r8d
  int v8; // eax
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned __int64 v12; // rdi
  unsigned int v13; // eax
  UINT32 v14; // edx
  HRESULT v15; // eax
  int v16; // edx
  unsigned int v17; // r8d
  unsigned int v18; // eax
  UINT32 v19; // edx
  HRESULT v20; // eax
  int v21; // edx
  unsigned int v22; // r8d
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // [rsp+20h] [rbp-60h] BYREF
  __int64 v26[2]; // [rsp+28h] [rbp-58h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-48h] BYREF
  HSTRING string; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER v29; // [rsp+58h] [rbp-28h] BYREF
  HSTRING v30; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  *a3 = 0LL;
  v26[0] = (__int64)a1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v26);
  if ( !a2 )
    goto LABEL_2;
  string = 0LL;
  v9 = -1LL;
  v12 = -1LL;
  do
    ++v12;
  while ( a2[v12] );
  if ( v12 > 0xFFFFFFFF )
  {
LABEL_22:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v6, v7);
    goto LABEL_23;
  }
  v13 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v12, v6, v7);
  v14 = v13 - 1;
  if ( (unsigned int)v12 < v13 )
    v14 = v12;
  v15 = WindowsCreateStringReference(a2, v14, &hstringHeader, &string);
  if ( v15 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v15, v16, v17);
LABEL_27:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v20, v21, v22);
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (int)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
      (const char *)(unsigned int)v9);
LABEL_4:
    v10 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    goto LABEL_6;
  }
  v30 = 0LL;
  do
    ++v9;
  while ( aExperienceid[v9] );
  if ( v9 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v16, v17);
    goto LABEL_22;
  }
  v18 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v9, v16, v17);
  v19 = v18 - 1;
  if ( (unsigned int)v9 < v18 )
    v19 = v9;
  v20 = WindowsCreateStringReference(L"ExperienceId", v19, &v29, &v30);
  if ( v20 < 0 )
    goto LABEL_27;
  v23 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
          (Windows::Internal::ShellHelpers::PropertySetHelper *)v26,
          v30);
  LODWORD(v9) = v23;
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x49,
      (int)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
      (const char *)(unsigned int)v23);
    goto LABEL_6;
  }
LABEL_2:
  v25 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
  v8 = RoCreatePropertySetSerializer(&v25);
  LODWORD(v9) = v8;
  if ( v8 >= 0 )
  {
    v26[1] = 0LL;
    LODWORD(v9) = (*(__int64 (__fastcall **)(__int64, struct Windows::Foundation::Collections::IPropertySet *, struct Windows::Storage::Streams::IBuffer **))(*(_QWORD *)v25 + 48LL))(
                    v25,
                    a1,
                    a3);
    if ( (v9 & 0x80000000) == 0LL )
      goto LABEL_4;
    goto LABEL_28;
  }
LABEL_23:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4D,
    (int)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
    (const char *)(unsigned int)v8);
  v24 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
LABEL_6:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v26);
  return (unsigned int)v9;
}
