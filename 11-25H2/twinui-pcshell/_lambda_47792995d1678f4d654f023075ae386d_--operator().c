/*
 * XREFs of _lambda_47792995d1678f4d654f023075ae386d_::operator() @ 0x1804ED64C
 * Callers:
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x180075A8C (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x1800332D0 (--$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004E0F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Details@WRL@Microsoft@@YAJPEAPEAUIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Z @ 0x180114868 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPo.c)
 *     ??0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation@3@@Z @ 0x1801D70D0 (--0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_47792995d1678f4d654f023075ae386d_::operator()(__int64 **a1)
{
  __int64 *v2; // rsi
  int v3; // eax
  unsigned int v4; // ebx
  __int64 (__fastcall ***v6)(_QWORD, GUID *, struct Windows::Foundation::Collections::IPropertySet **); // rdi
  __int64 (__fastcall *v7)(_QWORD, GUID *, struct Windows::Foundation::Collections::IPropertySet **); // rbx
  int v8; // eax
  char v9; // bl
  __int64 v10; // r8
  int v11; // eax
  __int64 *v12; // rdx
  __int64 v13; // rcx
  char v14[8]; // [rsp+20h] [rbp-69h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v15; // [rsp+28h] [rbp-61h] BYREF
  __int64 v16; // [rsp+30h] [rbp-59h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-51h] BYREF
  __int128 v18[2]; // [rsp+40h] [rbp-49h] BYREF
  __int64 v19; // [rsp+60h] [rbp-29h]
  int v20; // [rsp+68h] [rbp-21h]
  _BYTE hstringHeader[44]; // [rsp+70h] [rbp-19h] BYREF
  _BYTE v22[40]; // [rsp+A0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  LODWORD(v16) = 0;
  memset(v22, 0, sizeof(v22));
  v2 = *a1;
  v3 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)**a1 + 72LL))(**a1, v22);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB24,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v3);
    return v4;
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
    v6 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct Windows::Foundation::Collections::IPropertySet **))*a1[1];
    v7 = **v6;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
    v8 = v7(v6, &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c, &v15);
    v4 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB2A,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v8);
LABEL_13:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
      return v4;
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
    v9 = 1;
    LODWORD(v16) = 1;
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(
                &v17,
                *(__int64 *)&hstringHeader[24],
                v10,
                v14) < 0
      || !v14[0] )
    {
      v9 = 0;
    }
    if ( v9 )
    {
      DWORD2(v18[0]) = 4;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v2);
      v11 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IOcclusionBasedApplicationViewPosition,tagWINDOWPLACEMENT &>(
              v2,
              v18);
      v4 = v11;
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
      v13 = *v2;
      *v2 = 0LL;
      v16 = *v12;
      *v12 = v13;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
  }
  return 0LL;
}
