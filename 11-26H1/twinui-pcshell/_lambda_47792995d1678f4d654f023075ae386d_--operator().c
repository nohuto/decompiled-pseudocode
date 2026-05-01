/*
 * XREFs of _lambda_47792995d1678f4d654f023075ae386d_::operator() @ 0x18050EC04
 * Callers:
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x18008E1BC (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x18003C904 (--$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800573EC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Details@WRL@Microsoft@@YAJPEAPEAUIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Z @ 0x180166D5C (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPo.c)
 *     ??0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation@3@@Z @ 0x1801CC690 (--0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_47792995d1678f4d654f023075ae386d_::operator()(__int64 **a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 (__fastcall ***v5)(_QWORD, GUID *, struct Windows::Foundation::Collections::IPropertySet **); // rdi
  __int64 (__fastcall *v6)(_QWORD, GUID *, struct Windows::Foundation::Collections::IPropertySet **); // rbx
  int v7; // eax
  char v8; // bl
  __int64 v9; // r8
  __int64 *v10; // rbx
  int v11; // eax
  __int64 *v12; // rdx
  __int64 v13; // rcx
  char v14[8]; // [rsp+28h] [rbp-59h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v15; // [rsp+30h] [rbp-51h] BYREF
  __int64 v16; // [rsp+38h] [rbp-49h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-41h] BYREF
  __int128 v18[2]; // [rsp+48h] [rbp-39h] BYREF
  __int64 v19; // [rsp+68h] [rbp-19h]
  int v20; // [rsp+70h] [rbp-11h]
  _BYTE hstringHeader[44]; // [rsp+78h] [rbp-9h] BYREF
  _BYTE v22[40]; // [rsp+A8h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  LODWORD(v16) = 0;
  memset(v22, 0, sizeof(v22));
  v2 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)**a1 + 72LL))(**a1, v22);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB24,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
  *(_DWORD *)hstringHeader = 44;
  *(_OWORD *)&hstringHeader[4] = *(_OWORD *)v22;
  *(_QWORD *)&hstringHeader[20] = *(_QWORD *)&v22[16];
  *(_OWORD *)&hstringHeader[28] = *(_OWORD *)&v22[24];
  v18[0] = *(_OWORD *)hstringHeader;
  v18[1] = *(_OWORD *)&hstringHeader[16];
  v19 = *(_OWORD *)&v22[24] >> 32;
  v20 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&v22[24], 12));
  if ( *(_DWORD *)&v22[4] == 3 )
  {
    v15 = 0LL;
    v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct Windows::Foundation::Collections::IPropertySet **))*a1[1];
    v6 = **v5;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
    v7 = v6(v5, &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c, &v15);
    v3 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB2A,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v7);
LABEL_13:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
      return v3;
    }
    Windows::Internal::ShellHelpers::PropertySetHelper::PropertySetHelper(
      (Windows::Internal::ShellHelpers::PropertySetHelper *)&v17,
      v15);
    v14[0] = 0;
    *(_QWORD *)&hstringHeader[24] = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      (HSTRING_HEADER *)hstringHeader,
      L"InitialPositionIsForDrag",
      0x19u,
      0x18u);
    v8 = 1;
    LODWORD(v16) = 1;
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(
                &v17,
                *(__int64 *)&hstringHeader[24],
                v9,
                v14) < 0
      || !v14[0] )
    {
      v8 = 0;
    }
    if ( v8 )
    {
      DWORD2(v18[0]) = 4;
      v10 = *a1;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(*a1);
      v11 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IOcclusionBasedApplicationViewPosition,tagWINDOWPLACEMENT &>(
              v10,
              v18);
      v3 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB32,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v11);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
        goto LABEL_13;
      }
      v12 = a1[2];
      v13 = **a1;
      **a1 = 0LL;
      v16 = *v12;
      *v12 = v13;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
  }
  return 0LL;
}
