/*
 * XREFs of SeQuerySigningPolicyWorker @ 0x140A3D144
 * Callers:
 *     SeQuerySigningPolicy @ 0x140A3B45C (SeQuerySigningPolicy.c)
 * Callees:
 *     AppModelPolicy_GetPolicy_Internal @ 0x1404CB0E4 (AppModelPolicy_GetPolicy_Internal.c)
 *     Feature_CodeIntegrity_TrustedLaunchPolicy__private_IsEnabledDeviceUsageNoInline @ 0x14063DD34 (Feature_CodeIntegrity_TrustedLaunchPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_TrustedLaunch__private_IsEnabledDeviceUsageNoInline @ 0x14063DD90 (Feature_TrustedLaunch__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     SepIsLockedDown @ 0x140815978 (SepIsLockedDown.c)
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
 *     SepIsNgenImage @ 0x140AD9C3C (SepIsNgenImage.c)
 */

__int64 __fastcall SeQuerySigningPolicyWorker(
        PACCESS_TOKEN Token,
        __int64 a2,
        char a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        unsigned __int8 *a6,
        unsigned __int8 *a7,
        unsigned __int8 *a8)
{
  char v12; // r14
  int Policy_Internal; // ecx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v15; // rdx
  ULONG Flags; // ebx
  int v17; // esi
  int Origin_low; // r14d
  bool v19; // zf
  unsigned __int8 v20; // cl
  unsigned __int8 *v21; // rax
  char v22; // cl
  unsigned __int8 v23; // cl
  unsigned __int8 v24; // al
  int v25; // eax
  char v27; // [rsp+30h] [rbp-20h] BYREF
  char v28; // [rsp+31h] [rbp-1Fh] BYREF
  char v29[2]; // [rsp+32h] [rbp-1Eh] BYREF
  PVOID TokenInformation; // [rsp+34h] [rbp-1Ch] BYREF
  _PS_PKG_CLAIM v31; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-8h] BYREF

  v29[0] = 0;
  v28 = 0;
  v27 = 0;
  v31 = 0LL;
  HIDWORD(TokenInformation) = 0;
  v32 = 0LL;
  v12 = 0;
  Policy_Internal = AppModelPolicy_GetPolicy_Internal(Token, 46, (_DWORD *)&TokenInformation + 1, &v31, &v32);
  if ( Policy_Internal < 0 )
    return (unsigned int)Policy_Internal;
  IsEnabledDeviceUsageNoInline = Feature_CodeIntegrity_TrustedLaunchPolicy__private_IsEnabledDeviceUsageNoInline();
  Flags = v31.Flags;
  if ( IsEnabledDeviceUsageNoInline
    && (v31.Flags & 0x200000) != 0
    && (!SepRmCapTableLock.Spare32 || (int)guard_dispatch_icall_no_overrides((__int64)Token, (__int64)&v27) < 0) )
  {
    v27 = 0;
  }
  if ( (unsigned int)(HIDWORD(TokenInformation) - 3014657) <= 1 )
  {
    v12 = 1;
    if ( HIDWORD(TokenInformation) == 3014658 && LOBYTE(v31.Origin) != 5 && LOBYTE(v31.Origin) != 4 )
    {
      v17 = a3 & 1;
      goto LABEL_12;
    }
  }
  v17 = a3 & 1;
  if ( !v12 )
    goto LABEL_12;
  if ( !v17 )
  {
    Origin_low = LOBYTE(v31.Origin);
    if ( LOBYTE(v31.Origin) && LOBYTE(v31.Origin) != 1 )
    {
      switch ( LOBYTE(v31.Origin) )
      {
        case 2u:
          *a6 = 8;
          *a7 = a5;
          break;
        case 3u:
          v20 = 6;
          goto LABEL_59;
        case 4u:
        case 5u:
          if ( a5
            && SepRmCapTableLock.SchedulerSharedSwappablePage
            && (int)guard_dispatch_icall_no_overrides((__int64)&v28, v15) >= 0
            && v28 )
          {
            *a6 = 3;
            *a7 = 3;
          }
          else
          {
            if ( (unsigned int)Feature_TrustedLaunch__private_IsEnabledDeviceUsageNoInline() )
            {
              if ( (unsigned int)Feature_CodeIntegrity_TrustedLaunchPolicy__private_IsEnabledDeviceUsageNoInline() )
                *a7 = a5;
              if ( (Flags & 0x200000) == 0 || a5 )
              {
                *a6 = a5;
              }
              else
              {
                if ( Origin_low == 4 )
                  return (unsigned int)-1073741790;
                *a6 = 1;
                if ( (unsigned int)Feature_CodeIntegrity_TrustedLaunchPolicy__private_IsEnabledDeviceUsageNoInline()
                  && v27 )
                {
                  *a7 = 1;
                }
              }
              if ( !(unsigned int)Feature_CodeIntegrity_TrustedLaunchPolicy__private_IsEnabledDeviceUsageNoInline() )
                *a7 = a5;
              break;
            }
            *a6 = a5;
            *a7 = a5;
          }
          break;
        case 6u:
          if ( (unsigned int)Feature_TrustedLaunch__private_IsEnabledDeviceUsageNoInline() && (Flags & 0x200000) != 0 )
          {
            v19 = a5 == 2;
            if ( a5 != 2 )
              return (unsigned int)-1073741790;
          }
          else
          {
            v19 = a5 == 2;
          }
          v20 = !v19 ? 0 : 2;
LABEL_59:
          v21 = a6;
LABEL_82:
          *v21 = v20;
          *a7 = v20;
          break;
        default:
          return 0;
      }
LABEL_83:
      *a8 = 0;
      return 0;
    }
    if ( (unsigned int)Feature_TrustedLaunch__private_IsEnabledDeviceUsageNoInline() && (Flags & 0x200000) != 0 )
      return (unsigned int)-1073741790;
    v20 = a5;
    goto LABEL_59;
  }
  if ( !a4 )
  {
    *a6 = 4;
    *a7 = 4;
    *a8 = 18;
    return 0;
  }
LABEL_12:
  if ( !a2 || !(unsigned __int8)SepIsNgenImage(a2) )
  {
    if ( v17 )
      goto LABEL_69;
    v25 = Feature_TrustedLaunch__private_IsEnabledDeviceUsageNoInline();
    v20 = a5;
    if ( v25 && (Flags & 0x200000) != 0 && !a5 )
    {
      *a6 = 1;
      *a7 = 0;
      if ( (unsigned int)Feature_CodeIntegrity_TrustedLaunchPolicy__private_IsEnabledDeviceUsageNoInline() && v27 )
        *a7 = 1;
      goto LABEL_83;
    }
    v21 = a6;
    goto LABEL_82;
  }
  LODWORD(TokenInformation) = 0;
  Policy_Internal = SeQueryInformationToken(Token, TokenIsAppContainer, &TokenInformation);
  if ( Policy_Internal >= 0 )
  {
    *a6 = 11;
    if ( v17 )
    {
      if ( !a4 )
      {
        *a7 = (_DWORD)TokenInformation != 0 ? 6 : 8;
        *a8 = 33;
        return 0;
      }
LABEL_69:
      v24 = a4;
      if ( !a4 )
        v24 = 18;
      *a8 = v24;
      *a6 = SeProtectedMapping[2 * ((unsigned __int64)v24 >> 4)];
      *a7 = SeProtectedMapping[2 * ((unsigned __int64)*a8 >> 4) + 1];
      if ( a5 > *a6 )
        *a6 = a5;
      if ( a5 > *a7 )
        *a7 = a5;
      return 0;
    }
    if ( !(_DWORD)TokenInformation )
    {
      *a7 = a5;
      v23 = a5 >= 2u ? 0x21 : 0;
LABEL_67:
      *a8 = v23;
      return 0;
    }
    Policy_Internal = SepIsLockedDown(a5, v29);
    if ( Policy_Internal >= 0 )
    {
      if ( v29[0] )
        v22 = 6;
      else
        v22 = a5 != 2 ? 0 : 2;
      *a7 = v22;
      v23 = 0;
      goto LABEL_67;
    }
  }
  return (unsigned int)Policy_Internal;
}
