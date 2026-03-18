/*
 * XREFs of AppModelPolicy_GetPolicy_Internal @ 0x14045FB18
 * Callers:
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x140460570 (RtlQueryPackageClaims.c)
 *     Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline @ 0x140460EE4 (Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline.c)
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(__int64 a1, int a2, _DWORD *a3, int *a4, _QWORD *a5)
{
  int PackageClaims; // eax
  unsigned int v9; // esi
  int v10; // ebx
  int v11; // eax

  PackageClaims = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL, 0LL, 0LL, a4, a5);
  v9 = PackageClaims;
  if ( PackageClaims == -1073741275 )
  {
    *a5 = 0LL;
    v9 = 0;
    *a4 = 0;
    *a3 = 0;
  }
  else
  {
    *a3 = 0;
    if ( PackageClaims < 0 )
      return v9;
  }
  if ( (*a5 & 1) != 0 )
  {
    v10 = 8;
    if ( (*a5 & 8) != 0 )
    {
      v10 = 9;
    }
    else
    {
      v11 = *a4;
      if ( (*a4 & 0x10000) == 0 )
      {
        if ( (v11 & 4) != 0 )
        {
          v10 = 2;
        }
        else if ( (v11 & 0x400) != 0 )
        {
          v10 = 6;
        }
        else if ( (v11 & 0x800) != 0 )
        {
          v10 = 7;
        }
        else if ( (v11 & 0x40) != 0 )
        {
          v10 = 5;
        }
        else if ( (v11 & 8) != 0 )
        {
          v10 = 4;
        }
        else
        {
          v10 = (v11 & 0x40000) != 0 ? 10 : 1;
        }
      }
    }
  }
  else
  {
    v10 = 3;
  }
  *a3 = *((_DWORD *)&`AppModelPolicy_GetPolicy_Internal'::`2'::AppModelPolicy_PolicyValue_Table[5
                                                                                              * (unsigned int)(a2 - 1)]
        + (unsigned int)(v10 - 1));
  if ( (*a4 & 0x100000) != 0 )
  {
    switch ( a2 )
    {
      case 1:
        *a3 = 65537;
        break;
      case 11:
        *a3 = 720897;
        break;
      case 28:
        *a3 = 1835008;
        break;
      case 57:
        *a3 = 3735552;
        break;
    }
  }
  if ( (unsigned int)Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline()
    && a2 == 15
    && (v10 == 1 || (unsigned int)(v10 - 6) <= 2) )
  {
    *a3 = 983040;
  }
  return v9;
}
