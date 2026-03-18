/*
 * XREFs of SeQuerySigningPolicyWorker @ 0x140A2A0A4
 * Callers:
 *     SeQuerySigningPolicy @ 0x140A283BC (SeQuerySigningPolicy.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x140460570 (RtlQueryPackageClaims.c)
 *     Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline @ 0x140460EE4 (Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline.c)
 *     Feature_TrustedLaunch__private_IsEnabledDeviceUsageNoInline @ 0x14063ACC8 (Feature_TrustedLaunch__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     SepIsLockedDown @ 0x14080FEE8 (SepIsLockedDown.c)
 *     SeQueryInformationToken @ 0x1408F4300 (SeQueryInformationToken.c)
 *     SepIsNgenImage @ 0x140ADC6EC (SepIsNgenImage.c)
 */

__int64 __fastcall SeQuerySigningPolicyWorker(
        void *a1,
        __int64 a2,
        char a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        unsigned __int8 *a6,
        unsigned __int8 *a7,
        unsigned __int8 *a8)
{
  char v11; // r12
  NTSTATUS v12; // eax
  int InformationToken; // ecx
  char v14; // al
  int v15; // esi
  unsigned __int8 v16; // di
  int *v17; // rax
  int v18; // r15d
  __int64 v19; // rdx
  int v20; // r14d
  int v21; // r14d
  bool v22; // zf
  unsigned __int8 v23; // cl
  unsigned __int8 v24; // bl
  char v25; // cl
  unsigned __int8 v26; // cl
  unsigned __int8 v27; // al
  int IsEnabledDeviceUsageNoInline; // eax
  char v30; // [rsp+40h] [rbp-20h] BYREF
  char v31[3]; // [rsp+41h] [rbp-1Fh] BYREF
  _BYTE TokenInformation[12]; // [rsp+44h] [rbp-1Ch] BYREF
  __int64 v33; // [rsp+50h] [rbp-10h] BYREF

  v31[0] = 0;
  v30 = 0;
  *(_QWORD *)&TokenInformation[4] = 0LL;
  v33 = 0LL;
  v11 = 0;
  v12 = RtlQueryPackageClaims((__int64)a1, 0LL, 0LL, 0LL, 0LL, 0LL, &TokenInformation[4], &v33);
  InformationToken = v12;
  if ( v12 == -1073741275 )
  {
    v14 = 0;
    v15 = 0;
  }
  else
  {
    if ( v12 < 0 )
      return (unsigned int)InformationToken;
    v15 = *(_DWORD *)&TokenInformation[4];
    v14 = v33;
  }
  v16 = 1;
  if ( (v14 & 1) != 0 )
  {
    if ( (v14 & 8) != 0 )
    {
      v17 = (int *)byte_140019A78;
    }
    else if ( (v15 & 0x10000) != 0 )
    {
      v17 = &dword_140019A74;
    }
    else if ( (v15 & 4) != 0 )
    {
      v17 = &dword_140019A5C;
    }
    else if ( (v15 & 0x400) != 0 )
    {
      v17 = &dword_140019A6C;
    }
    else if ( (v15 & 0x800) != 0 )
    {
      v17 = (int *)byte_140019A70;
    }
    else if ( (v15 & 0x40) != 0 )
    {
      v17 = (int *)byte_140019A68;
    }
    else if ( (v15 & 8) != 0 )
    {
      v17 = &dword_140019A64;
    }
    else
    {
      v17 = &dword_140019A7C;
      if ( (v15 & 0x40000) == 0 )
        v17 = (int *)byte_140019A58;
    }
  }
  else
  {
    v17 = (int *)byte_140019A60;
  }
  v18 = *v17;
  Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline();
  if ( (unsigned int)(v18 - 3014657) <= 1 )
  {
    v11 = 1;
    if ( v18 == 3014658 && TokenInformation[8] != 5 && TokenInformation[8] != 4 )
    {
      v20 = a3 & 1;
      goto LABEL_28;
    }
  }
  v20 = a3 & 1;
  if ( !v11 )
    goto LABEL_28;
  if ( !v20 )
  {
    v21 = TokenInformation[8];
    switch ( TokenInformation[8] )
    {
      case 0:
      case 1:
        if ( !(unsigned int)Feature_TrustedLaunch__private_IsEnabledDeviceUsageNoInline() || (v15 & 0x200000) == 0 )
        {
          v23 = a5;
          goto LABEL_68;
        }
        return (unsigned int)-1073741790;
      case 2:
        *a6 = 8;
        *a7 = a5;
        goto LABEL_91;
      case 3:
        v23 = 6;
        goto LABEL_68;
    }
    if ( TokenInformation[8] != 4 && TokenInformation[8] != 5 )
    {
      if ( TokenInformation[8] != 6 )
        return 0;
      if ( !(unsigned int)Feature_TrustedLaunch__private_IsEnabledDeviceUsageNoInline() || (v15 & 0x200000) == 0 )
      {
        v22 = a5 == 2;
LABEL_50:
        v23 = !v22 ? 0 : 2;
LABEL_68:
        *a6 = v23;
LABEL_90:
        *a7 = v23;
        goto LABEL_91;
      }
      v22 = a5 == 2;
      if ( a5 == 2 )
        goto LABEL_50;
      return (unsigned int)-1073741790;
    }
    v24 = a5;
    if ( a5
      && *(_QWORD *)&SepRmCapTableLock.Spare36
      && (int)guard_dispatch_icall_no_overrides((__int64)&v30, v19) >= 0
      && v30 )
    {
      v24 = 3;
    }
    else if ( (unsigned int)Feature_TrustedLaunch__private_IsEnabledDeviceUsageNoInline()
           && (v15 & 0x200000) != 0
           && !a5 )
    {
      if ( v21 == 4 )
        return (unsigned int)-1073741790;
      goto LABEL_57;
    }
    v16 = v24;
LABEL_57:
    *a6 = v16;
    *a7 = v24;
LABEL_91:
    *a8 = 0;
    return 0;
  }
  if ( !a4 )
  {
    *a6 = 4;
    *a7 = 4;
    *a8 = 18;
    return 0;
  }
LABEL_28:
  if ( !a2 || !(unsigned __int8)SepIsNgenImage(a2) )
  {
    if ( v20 )
      goto LABEL_78;
    IsEnabledDeviceUsageNoInline = Feature_TrustedLaunch__private_IsEnabledDeviceUsageNoInline();
    v23 = a5;
    if ( IsEnabledDeviceUsageNoInline && (v15 & 0x200000) != 0 && !a5 )
      v23 = 0;
    else
      v16 = a5;
    *a6 = v16;
    goto LABEL_90;
  }
  *(_DWORD *)TokenInformation = 0;
  InformationToken = SeQueryInformationToken(a1, TokenIsAppContainer, (PVOID *)TokenInformation);
  if ( InformationToken >= 0 )
  {
    *a6 = 11;
    if ( v20 )
    {
      if ( !a4 )
      {
        *a7 = *(_DWORD *)TokenInformation != 0 ? 6 : 8;
        *a8 = 33;
        return 0;
      }
LABEL_78:
      v27 = a4;
      if ( !a4 )
        v27 = 18;
      *a8 = v27;
      *a6 = SeProtectedMapping[2 * ((unsigned __int64)v27 >> 4)];
      *a7 = SeProtectedMapping[2 * ((unsigned __int64)*a8 >> 4) + 1];
      if ( a5 > *a6 )
        *a6 = a5;
      if ( a5 > *a7 )
        *a7 = a5;
      return 0;
    }
    if ( !*(_DWORD *)TokenInformation )
    {
      *a7 = a5;
      v26 = a5 >= 2u ? 0x21 : 0;
LABEL_76:
      *a8 = v26;
      return 0;
    }
    InformationToken = SepIsLockedDown(a5, v31);
    if ( InformationToken >= 0 )
    {
      if ( v31[0] )
        v25 = 6;
      else
        v25 = a5 != 2 ? 0 : 2;
      *a7 = v25;
      v26 = 0;
      goto LABEL_76;
    }
  }
  return (unsigned int)InformationToken;
}
