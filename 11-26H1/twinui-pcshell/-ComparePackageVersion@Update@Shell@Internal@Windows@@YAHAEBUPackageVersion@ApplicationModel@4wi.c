/*
 * XREFs of ?ComparePackageVersion@Update@Shell@Internal@Windows@@YAHAEBUPackageVersion@ApplicationModel@4winrt@@0@Z @ 0x1803B0748
 * Callers:
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@@Z @ 0x1803B4C7C (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 *     ?IsWebSearchProviderInstalledLatest@@YA_NXZ @ 0x1803B59B4 (-IsWebSearchProviderInstalledLatest@@YA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Shell::Update::ComparePackageVersion(
        Windows::Internal::Shell::Update *this,
        const struct winrt::Windows::ApplicationModel::PackageVersion *a2,
        const struct winrt::Windows::ApplicationModel::PackageVersion *a3)
{
  int v3; // r8d
  int v4; // eax
  unsigned int v5; // edx
  __int64 result; // rax
  int v7; // ecx
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // ax
  unsigned __int16 v10; // ax

  v3 = *(unsigned __int16 *)a2;
  v4 = *(unsigned __int16 *)this;
  if ( (unsigned __int16)v4 > (unsigned __int16)v3 )
  {
    v5 = 1;
    if ( v4 - v3 > 0x7FFF )
      return (unsigned int)-1;
    return v5;
  }
  if ( (unsigned __int16)v4 >= (unsigned __int16)v3 )
  {
    v8 = *((_WORD *)this + 1);
    if ( v8 <= *((_WORD *)a2 + 1) )
    {
      if ( v8 < *((_WORD *)a2 + 1) )
        return 0xFFFFFFFFLL;
      v9 = *((_WORD *)this + 2);
      if ( v9 <= *((_WORD *)a2 + 2) )
      {
        if ( v9 >= *((_WORD *)a2 + 2) )
        {
          v10 = *((_WORD *)this + 3);
          if ( v10 <= *((_WORD *)a2 + 3) )
            return (unsigned int)-(v10 < *((_WORD *)a2 + 3));
          return 1LL;
        }
        return 0xFFFFFFFFLL;
      }
    }
    return 1LL;
  }
  v7 = v3 - v4;
  result = 0xFFFFFFFFLL;
  if ( v7 > 0x7FFF )
    return 1LL;
  return result;
}
