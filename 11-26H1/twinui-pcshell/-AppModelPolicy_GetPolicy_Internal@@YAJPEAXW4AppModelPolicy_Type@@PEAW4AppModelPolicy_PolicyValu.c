/*
 * XREFs of ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x1804E83B0
 * Callers:
 *     ?GetWindowingPolicy@ViewSizePreferenceHelpers@@YA?AW4AppModelPolicy_PolicyValue@@PEAUHWND__@@@Z @ 0x1802BE918 (-GetWindowingPolicy@ViewSizePreferenceHelpers@@YA-AW4AppModelPolicy_PolicyValue@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_PackagedComElevationSupport@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1804E90A8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_PackagedComElevationSupport@@@det.c)
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4, _QWORD *a5)
{
  int PackageClaims; // eax
  unsigned int v8; // ebx
  _DWORD *v9; // rcx

  PackageClaims = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL, 0LL, 0LL, a4, a5);
  v8 = PackageClaims;
  if ( PackageClaims == -1073741275 )
  {
    *a5 = 0LL;
    v8 = 0;
    *a4 = 0;
    *a3 = 0;
  }
  else
  {
    *a3 = 0;
    if ( PackageClaims < 0 )
      return v8;
  }
  if ( (*(_BYTE *)a5 & 1) != 0 )
  {
    if ( (*(_BYTE *)a5 & 8) != 0 )
    {
      v9 = &unk_1807B34D0;
    }
    else if ( (*a4 & 0x10000) != 0 )
    {
      v9 = &unk_1807B34CC;
    }
    else if ( (*(_BYTE *)a4 & 4) != 0 )
    {
      v9 = &unk_1807B34B4;
    }
    else if ( (*a4 & 0x400) != 0 )
    {
      v9 = &unk_1807B34C4;
    }
    else if ( (*a4 & 0x800) != 0 )
    {
      v9 = &unk_1807B34C8;
    }
    else if ( (*(_BYTE *)a4 & 0x40) != 0 )
    {
      v9 = &unk_1807B34C0;
    }
    else if ( (*(_BYTE *)a4 & 8) != 0 )
    {
      v9 = &unk_1807B34BC;
    }
    else
    {
      v9 = &unk_1807B34D4;
      if ( (*a4 & 0x40000) == 0 )
        v9 = &unk_1807B34B0;
    }
  }
  else
  {
    v9 = &unk_1807B34B8;
  }
  *a3 = *v9;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PackagedComElevationSupport>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_PackagedComElevationSupport>::GetImpl'::`2'::impl);
  return v8;
}
