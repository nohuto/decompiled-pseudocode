/*
 * XREFs of ?RuntimeClassInitialize@CShoulderTapExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18037DEC0
 * Callers:
 *     ??$MakeAndInitialize@VCShoulderTapExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x18021049C (--$MakeAndInitialize@VCShoulderTapExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@De.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x18001DE34 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004E0F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800679E8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1800B8E00 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CShoulderTapExperienceManager::RuntimeClassInitialize(
        CShoulderTapExperienceManager *this,
        struct IServiceProvider *a2)
{
  HSTRING v4; // rbx
  int v5; // ebx
  __int64 v6; // rdx
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HSTRING_HEADER v9; // [rsp+30h] [rbp-68h] BYREF
  HSTRING v10; // [rsp+48h] [rbp-50h]
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-48h] BYREF
  HSTRING v12; // [rsp+68h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 31, (__int64)a2);
  v12 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.ShoulderTap",
    0x2Du,
    0x2Cu);
  v4 = v12;
  v10 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v9,
    L"Microsoft.Windows.PeopleExperienceHost_cw5n1h2txyewy!App",
    0x39u,
    0x38u);
  v5 = CSingleViewShellExperience::RuntimeClassInitialize(
         (CShoulderTapExperienceManager *)((char *)this + 40),
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
         a2,
         v10,
         v4);
  if ( v5 < 0 )
  {
    v6 = 92LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v10 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v9,
    L"PeopleExperienceHostVS_ccv6fwk6gx0xp!App",
    0x29u,
    0x28u);
  v5 = CSingleViewShellExperience::AddTestAumid((CShoulderTapExperienceManager *)((char *)this + 40), v10);
  if ( v5 < 0 )
  {
    v6 = 95LL;
    goto LABEL_7;
  }
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 32);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
         a2,
         &GUID_b424c6f2_89a8_4bf1_8946_41454468d78c,
         &GUID_b424c6f2_89a8_4bf1_8946_41454468d78c,
         (char *)this + 256);
  if ( v5 < 0 )
  {
    v6 = 97LL;
    goto LABEL_7;
  }
  return (unsigned int)v5;
}
