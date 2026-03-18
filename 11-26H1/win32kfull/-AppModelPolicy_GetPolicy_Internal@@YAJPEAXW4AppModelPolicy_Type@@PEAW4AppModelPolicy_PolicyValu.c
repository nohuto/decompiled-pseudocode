/*
 * XREFs of ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x14028D0C4
 * Callers:
 *     xxxQueryInformationThread @ 0x1401535CC (xxxQueryInformationThread.c)
 * Callees:
 *     Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline @ 0x140254474 (Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline.c)
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(__int64 a1, __int64 a2, _DWORD *a3, int *a4, _QWORD *a5)
{
  int PackageClaims; // eax
  unsigned int v8; // ebx
  _DWORD *v9; // rcx
  int v10; // eax
  bool v11; // zf

  PackageClaims = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL, 0LL, 0LL, a4, a5);
  v8 = PackageClaims;
  if ( PackageClaims == -1073741275 )
  {
    *a5 = 0LL;
    v8 = 0;
    *a4 = 0;
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
      v9 = &unk_1403689F0;
    }
    else
    {
      v10 = *a4;
      if ( (*a4 & 0x10000) != 0 )
      {
        v9 = &unk_1403689EC;
      }
      else if ( (v10 & 4) != 0 )
      {
        v9 = &unk_1403689D4;
      }
      else if ( (v10 & 0x400) != 0 )
      {
        v9 = &unk_1403689E4;
      }
      else if ( (v10 & 0x800) != 0 )
      {
        v9 = &unk_1403689E8;
      }
      else if ( (v10 & 0x40) != 0 )
      {
        v9 = &unk_1403689E0;
      }
      else if ( (v10 & 8) != 0 )
      {
        v9 = &unk_1403689DC;
      }
      else
      {
        v9 = &unk_1403689F4;
        if ( (v10 & 0x40000) == 0 )
          v9 = &`AppModelPolicy_GetPolicy_Internal'::`2'::AppModelPolicy_PolicyValue_Table;
      }
    }
  }
  else
  {
    v9 = &unk_1403689D8;
  }
  v11 = (*a4 & 0x100000) == 0;
  *a3 = *v9;
  if ( !v11 )
    *a3 = 65537;
  Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline();
  return v8;
}
