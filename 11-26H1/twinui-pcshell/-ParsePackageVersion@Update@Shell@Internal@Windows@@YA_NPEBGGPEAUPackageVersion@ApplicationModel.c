/*
 * XREFs of ?ParsePackageVersion@Update@Shell@Internal@Windows@@YA_NPEBGGPEAUPackageVersion@ApplicationModel@4winrt@@@Z @ 0x1803B6CB8
 * Callers:
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@@Z @ 0x1803B4C7C (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 *     ?IsWebSearchProviderInstalledLatest@@YA_NXZ @ 0x1803B59B4 (-IsWebSearchProviderInstalledLatest@@YA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

char __fastcall Windows::Internal::Shell::Update::ParsePackageVersion(
        const wchar_t *this,
        const unsigned __int16 *a2,
        _WORD *a3,
        struct winrt::Windows::ApplicationModel::PackageVersion *a4)
{
  __int64 *v4; // rdi
  char v6; // si
  unsigned __int64 v7; // rcx
  bool v8; // zf
  wchar_t *EndPtr; // [rsp+20h] [rbp-38h] BYREF
  _WORD v11[8]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v12; // [rsp+38h] [rbp-20h] BYREF

  v4 = (__int64 *)v11;
  EndPtr = 0LL;
  v6 = 1;
  while ( 1 )
  {
    *(_DWORD *)v4 = wcstol(this, &EndPtr, 10);
    v7 = ((char *)v4 - (char *)v11) >> 2;
    v8 = v7 == 3;
    if ( v7 < 3 )
    {
      if ( *EndPtr != 46 )
        return 0;
      v8 = v7 == 3;
    }
    if ( v8 && *EndPtr )
      break;
    this = EndPtr + 1;
    v4 = (__int64 *)((char *)v4 + 4);
    if ( v4 == &v12 )
    {
      *a3 = v11[0];
      a3[1] = v11[2];
      a3[2] = v11[4];
      a3[3] = v11[6];
      return v6;
    }
  }
  return 0;
}
