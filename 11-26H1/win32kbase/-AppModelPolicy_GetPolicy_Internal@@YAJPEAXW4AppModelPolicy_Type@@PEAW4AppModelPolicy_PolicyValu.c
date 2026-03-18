/*
 * XREFs of ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x14015E530
 * Callers:
 *     ?UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE_TYPE@@PEAKPEAU_PS_PKG_CLAIM@@@Z @ 0x1401D8598 (-UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE.c)
 * Callees:
 *     Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline @ 0x14019D968 (Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline.c)
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(__int64 a1, __int64 a2, _DWORD *a3, int *a4, _QWORD *a5)
{
  int PackageClaims; // eax
  unsigned int v8; // ebx
  _DWORD *v9; // rcx
  int v10; // eax

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
  if ( (*a5 & 1) != 0 )
  {
    if ( (*a5 & 8) != 0 )
    {
      v9 = &unk_140277E70;
    }
    else
    {
      v10 = *a4;
      if ( (*a4 & 0x10000) != 0 )
      {
        v9 = &unk_140277E6C;
      }
      else if ( (v10 & 4) != 0 )
      {
        v9 = &unk_140277E54;
      }
      else if ( (v10 & 0x400) != 0 )
      {
        v9 = &unk_140277E64;
      }
      else if ( (v10 & 0x800) != 0 )
      {
        v9 = &unk_140277E68;
      }
      else if ( (v10 & 0x40) != 0 )
      {
        v9 = &unk_140277E60;
      }
      else if ( (v10 & 8) != 0 )
      {
        v9 = &unk_140277E5C;
      }
      else
      {
        v9 = &unk_140277E74;
        if ( (v10 & 0x40000) == 0 )
          v9 = &unk_140277E50;
      }
    }
  }
  else
  {
    v9 = &unk_140277E58;
  }
  *a3 = *v9;
  Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline();
  return v8;
}
