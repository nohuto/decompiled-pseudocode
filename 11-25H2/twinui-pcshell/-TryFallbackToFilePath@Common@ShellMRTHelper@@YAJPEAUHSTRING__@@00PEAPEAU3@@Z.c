/*
 * XREFs of ?TryFallbackToFilePath@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@00PEAPEAU3@@Z @ 0x1802BA1D8
 * Callers:
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x18009C11C (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004E0F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Free@?$NativeString@V?$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800ED9CC (-_Free@-$NativeString@V-$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1802B1D08 (--$GetActivationFactory@V-$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@.c)
 *     ?HasMsAppXUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z @ 0x1802C8ECC (-HasMsAppXUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?_EnsureCount@?$NativeString@V?$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18064F764 (-_EnsureCount@-$NativeString@V-$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??R_lambda_d8d5e2edaa6c10768996e24008ba8fd8_@@QEBAJPEBGPEAPEAG@Z @ 0x18065795C (--R_lambda_d8d5e2edaa6c10768996e24008ba8fd8_@@QEBAJPEBGPEAPEAG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ShellMRTHelper::Common::TryFallbackToFilePath(
        ShellMRTHelper::Common *this,
        HSTRING a2,
        ShellMRTHelper::Common *a3,
        HSTRING *a4)
{
  const WCHAR *StringRawBuffer; // rbx
  HSTRING v8; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, ShellMRTHelper::Common *, __int64 *); // rdi
  int v13; // eax
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, HSTRING *); // rdi
  int v16; // eax
  __int64 v17; // rdx
  PCWSTR v18; // rbx
  unsigned __int64 v19; // rax
  unsigned __int64 i; // rcx
  HRESULT v21; // eax
  __int64 v22; // rdx
  HSTRING string; // [rsp+20h] [rbp-39h] BYREF
  __int64 v25; // [rsp+28h] [rbp-31h] BYREF
  PCNZWCH sourceString; // [rsp+30h] [rbp-29h] BYREF
  UINT32 v27[2]; // [rsp+38h] [rbp-21h]
  __int64 v28; // [rsp+40h] [rbp-19h]
  UINT32 length; // [rsp+48h] [rbp-11h] BYREF
  __int64 v30; // [rsp+50h] [rbp-9h] BYREF
  _QWORD v31[2]; // [rsp+58h] [rbp-1h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v33; // [rsp+80h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  *a4 = 0LL;
  if ( a3 )
  {
    sourceString = 0LL;
    *(_QWORD *)v27 = 0LL;
    v28 = 0LL;
    StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)a3, 0LL);
    if ( PathIsRelativeW(StringRawBuffer) && *StringRawBuffer != 64 )
    {
      v31[0] = 0LL;
      v31[1] = a2;
      if ( PathIsURLW(StringRawBuffer) )
      {
        if ( ShellMRTHelper::Common::HasMsAppXUriScheme(a3, v8) )
        {
          v30 = 0LL;
          v33 = 0LL;
          Microsoft::WRL::Wrappers::HStringReference::CreateReference(
            &hstringHeader,
            L"Windows.Foundation.Uri",
            0x17u,
            0x16u);
          v9 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClassFactory>>(
                 v33,
                 &v30);
          v10 = v9;
          if ( v9 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x132,
              (int)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\tiles\\ShellMRTHelper.Common.h",
              (const char *)(unsigned int)v9);
LABEL_17:
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
LABEL_32:
            Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
            return v10;
          }
          v11 = v30;
          v25 = 0LL;
          v12 = *(__int64 (__fastcall **)(__int64, ShellMRTHelper::Common *, __int64 *))(*(_QWORD *)v30 + 48LL);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
          v13 = v12(v11, a3, &v25);
          v10 = v13;
          if ( v13 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x135,
              (int)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\tiles\\ShellMRTHelper.Common.h",
              (const char *)(unsigned int)v13);
LABEL_16:
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
            goto LABEL_17;
          }
          v14 = v25;
          v15 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v25 + 104LL);
          WindowsDeleteString(0LL);
          string = 0LL;
          v16 = v15(v14, &string);
          v10 = v16;
          if ( v16 < 0 )
          {
            v17 = 313LL;
LABEL_15:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v17,
              (int)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\tiles\\ShellMRTHelper.Common.h",
              (const char *)(unsigned int)v16);
            WindowsDeleteString(string);
            string = 0LL;
            goto LABEL_16;
          }
          length = 0;
          v18 = WindowsGetStringRawBuffer(string, &length);
          if ( length > 1 )
          {
            Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
            *(_QWORD *)v27 = -1LL;
            v28 = -1LL;
            v16 = _lambda_d8d5e2edaa6c10768996e24008ba8fd8_::operator()(v31, v18 + 1, &sourceString);
            v10 = v16;
            if ( v16 < 0 )
            {
              v17 = 320LL;
              goto LABEL_15;
            }
          }
          WindowsDeleteString(string);
          string = 0LL;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
        }
      }
      else
      {
        Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
        *(_QWORD *)v27 = -1LL;
        v28 = -1LL;
        v21 = _lambda_d8d5e2edaa6c10768996e24008ba8fd8_::operator()(v31, StringRawBuffer, &sourceString);
        v10 = v21;
        if ( v21 < 0 )
        {
          v22 = 327LL;
          goto LABEL_31;
        }
      }
    }
    if ( sourceString && *sourceString )
    {
      Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_EnsureCount(&sourceString);
      v19 = *(_QWORD *)v27;
      for ( i = 0LL; i < v19; ++i )
      {
        if ( sourceString[i] == 47 )
        {
          sourceString[i] = 92;
          v19 = *(_QWORD *)v27;
        }
      }
      Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_EnsureCount(&sourceString);
      v21 = WindowsCreateString(sourceString, v27[0], a4);
      v10 = v21;
      if ( v21 < 0 )
      {
        v22 = 338LL;
LABEL_31:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (int)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\tiles\\ShellMRTHelper.Common.h",
          (const char *)(unsigned int)v21);
        goto LABEL_32;
      }
    }
    else
    {
      v21 = WindowsDuplicateString((HSTRING)a3, a4);
      v10 = v21;
      if ( v21 < 0 )
      {
        v22 = 343LL;
        goto LABEL_31;
      }
    }
    Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
  }
  return 0LL;
}
