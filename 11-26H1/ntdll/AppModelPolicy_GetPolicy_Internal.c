/*
 * XREFs of AppModelPolicy_GetPolicy_Internal @ 0x180105860
 * Callers:
 *     AppModelPolicy_GetPolicy @ 0x180105824 (AppModelPolicy_GetPolicy.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x1800BFB80 (RtlQueryPackageClaims.c)
 *     Feature_PackagedComElevationSupport_v2__private_IsEnabledNoReportingNoInline @ 0x18015DD80 (Feature_PackagedComElevationSupport_v2__private_IsEnabledNoReportingNoInline.c)
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(
        __int64 a1,
        int a2,
        _DWORD *a3,
        _PS_PKG_CLAIM *a4,
        unsigned __int64 *a5)
{
  NTSTATUS PackageClaims; // eax
  unsigned __int32 v9; // esi
  int v10; // ebx
  ULONG Flags; // eax
  bool v12; // zf

  PackageClaims = RtlQueryPackageClaims((HANDLE)0xFFFFFFFFFFFFFFFCLL, 0LL, 0LL, 0LL, 0LL, 0LL, a4, a5);
  v9 = PackageClaims;
  if ( PackageClaims == -1073741275 )
  {
    *a5 = 0LL;
    v9 = 0;
    a4->Flags = 0;
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
      Flags = a4->Flags;
      if ( (a4->Flags & 0x10000) == 0 )
      {
        if ( (Flags & 4) != 0 )
        {
          v10 = 2;
        }
        else if ( (Flags & 0x400) != 0 )
        {
          v10 = 6;
        }
        else if ( (Flags & 0x800) != 0 )
        {
          v10 = 7;
        }
        else if ( (Flags & 0x40) != 0 )
        {
          v10 = 5;
        }
        else if ( (Flags & 8) != 0 )
        {
          v10 = 4;
        }
        else
        {
          v10 = (Flags & 0x40000) != 0 ? 10 : 1;
        }
      }
    }
  }
  else
  {
    v10 = 3;
  }
  v12 = (a4->Flags & 0x100000) == 0;
  *a3 = `AppModelPolicy_GetPolicy_Internal'::`2'::AppModelPolicy_PolicyValue_Table[10 * (a2 - 1) + v10 - 1];
  if ( !v12 )
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
  if ( (unsigned int)Feature_PackagedComElevationSupport_v2__private_IsEnabledNoReportingNoInline()
    && a2 == 15
    && (v10 == 1 || (unsigned int)(v10 - 6) <= 2) )
  {
    *a3 = 983040;
  }
  return v9;
}
