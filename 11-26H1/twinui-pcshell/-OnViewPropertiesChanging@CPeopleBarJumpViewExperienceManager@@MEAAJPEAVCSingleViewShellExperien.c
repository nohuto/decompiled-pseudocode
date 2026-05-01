/*
 * XREFs of ?OnViewPropertiesChanging@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180383D20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18002050C (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180114CC8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??0RoVariant@@AEAA@PEAUIInspectable@@_N1@Z @ 0x180175388 (--0RoVariant@@AEAA@PEAUIInspectable@@_N1@Z.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x1801DAD0C (--1RoVariant@@QEAA@XZ.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802B99F0 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z @ 0x180383940 (-GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z.c)
 *     ?PositionJumpView@CPeopleBarJumpViewExperienceManager@@AEAAJXZ @ 0x18038420C (-PositionJumpView@CPeopleBarJumpViewExperienceManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CPeopleBarJumpViewExperienceManager::OnViewPropertiesChanging(
        CPeopleBarJumpViewExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, PCWSTR, char *); // rbx
  PCWSTR StringRawBuffer; // rax
  int v7; // ebx
  __int64 v8; // rdx
  int v10; // eax
  unsigned int v11; // r8d
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, PVOID, struct IInspectable **); // rdi
  HSTRING_HEADER *v14; // rax
  int v15; // r15d
  _QWORD *v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // rax
  int String; // eax
  __int64 v20; // rdx
  __int64 v21; // [rsp+20h] [rbp-60h] BYREF
  _QWORD *v22; // [rsp+28h] [rbp-58h] BYREF
  int v23; // [rsp+30h] [rbp-50h]
  __int64 v24; // [rsp+38h] [rbp-48h] BYREF
  int v25; // [rsp+40h] [rbp-40h]
  _QWORD *v26; // [rsp+48h] [rbp-38h] BYREF
  struct IInspectable *v27; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER v28; // [rsp+58h] [rbp-28h] BYREF
  __int64 v29; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  if ( *((_QWORD *)a2 + 3) )
  {
    *((_DWORD *)this + 76) = (int)*((float *)a2 + 11);
    *((_DWORD *)this + 77) = (int)*((float *)a2 + 12);
    v4 = *((_QWORD *)this + 28);
    v5 = *(__int64 (__fastcall **)(__int64, PCWSTR, char *))(*(_QWORD *)v4 + 112LL);
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 33), 0LL);
    v7 = v5(v4, StringRawBuffer, (char *)this + 272);
    if ( v7 < 0 )
    {
      v8 = 264LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
      return (unsigned int)v7;
    }
    v7 = CPeopleBarJumpViewExperienceManager::PositionJumpView((CPeopleBarJumpViewExperienceManager *)((char *)this - 48));
    if ( v7 < 0 )
    {
      v8 = 265LL;
      goto LABEL_4;
    }
    v21 = 0LL;
    v10 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 4,
            &v21);
    v7 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10C,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
LABEL_18:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
      return (unsigned int)v7;
    }
    v22 = 0LL;
    v23 = 0;
    v12 = v21;
    v13 = *(__int64 (__fastcall **)(__int64, PVOID, struct IInspectable **))(*(_QWORD *)v21 + 48LL);
    v26 = &v22;
    v27 = 0LL;
    v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v28, (const WCHAR **)&off_18075FFF0, v11);
    v15 = v13(v12, v14[1].Reserved.Reserved1, &v27);
    v29 = 0LL;
    v16 = v26;
    RoVariant::RoVariant((RoVariant *)&v24, v27);
    v17 = v24;
    v24 = 0LL;
    LODWORD(v13) = v25;
    v25 = 0;
    RoVariant::~RoVariant((RoVariant *)&v24);
    v18 = *v16;
    *v16 = v17;
    v24 = v18;
    LODWORD(v18) = *((_DWORD *)v16 + 2);
    *((_DWORD *)v16 + 2) = (_DWORD)v13;
    v25 = v18;
    RoVariant::~RoVariant((RoVariant *)&v24);
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10F,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v15);
      RoVariant::~RoVariant((RoVariant *)&v22);
      v7 = v15;
      goto LABEL_18;
    }
    if ( v22 )
    {
      v26 = v22;
      LODWORD(v27) = v23;
      WindowsDeleteString(*((HSTRING *)this + 39));
      *((_QWORD *)this + 39) = 0LL;
      String = RoVariant::Accessor::GetString((RoVariant::Accessor *)&v26, (HSTRING *)this + 39);
      v7 = String;
      if ( String < 0 )
      {
        v20 = 274LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v20,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
          (const char *)(unsigned int)String);
        RoVariant::~RoVariant((RoVariant *)&v22);
        goto LABEL_18;
      }
    }
    String = CSingleViewShellExperience::Show(
               (__int64)this + 8,
               (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)4);
    v7 = String;
    if ( String < 0 )
    {
      v20 = 277LL;
      goto LABEL_17;
    }
    RoVariant::~RoVariant((RoVariant *)&v22);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
  }
  return 0LL;
}
