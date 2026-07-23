/*
 * XREFs of LdrpInitializePolicy @ 0x1800EB844
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrSetDllDirectory @ 0x180028210 (LdrSetDllDirectory.c)
 *     RtlQueryPackageClaims @ 0x1800BFB80 (RtlQueryPackageClaims.c)
 *     LdrSetDefaultDllDirectories @ 0x1801057F0 (LdrSetDefaultDllDirectories.c)
 *     AppModelPolicy_GetPolicy @ 0x180105824 (AppModelPolicy_GetPolicy.c)
 *     Feature_PackagedComElevationSupport_v2__private_IsEnabledNoReportingNoInline @ 0x18015DD80 (Feature_PackagedComElevationSupport_v2__private_IsEnabledNoReportingNoInline.c)
 */

char LdrpInitializePolicy()
{
  struct _PEB *v0; // rsi
  _UNICODE_STRING *p_DllPath; // rcx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  __int128 v3; // xmm0
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  int v6; // edi
  char v7; // cl
  ULONG Flags; // eax
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v14; // [rsp+70h] [rbp+30h] BYREF
  unsigned __int64 v15; // [rsp+80h] [rbp+40h] BYREF
  _PS_PKG_CLAIM v16; // [rsp+88h] [rbp+48h] BYREF

  v0 = NtCurrentPeb();
  p_DllPath = &v0->ProcessParameters->DllPath;
  LdrpAppPackagesPath = 0uLL;
  LdrpOriginalAppPackagesPath = 0uLL;
  LOBYTE(ProcessParameters) = v0->BitField;
  if ( ((unsigned __int8)ProcessParameters & 0x10) != 0 && p_DllPath->Length )
  {
    v3 = (__int128)*p_DllPath;
    LdrpPolicyBits = 41;
    v15 = 0LL;
    LdrpAppPackagesPath = v3;
    v16 = 0LL;
    LdrpOriginalAppPackagesPath = v3;
    v4 = RtlQueryPackageClaims((HANDLE)0xFFFFFFFFFFFFFFFCLL, 0LL, 0LL, 0LL, 0LL, 0LL, &v16, &v15);
    v6 = v4;
    if ( v4 == -1073741275 )
    {
      v7 = 0;
      Flags = 0;
      v6 = 0;
    }
    else
    {
      v14 = 0;
      v9 = 0;
      if ( v4 < 0 )
      {
LABEL_26:
        if ( v6 < 0 || v9 == 262145 )
          LdrSetDefaultDllDirectories(0x1000u);
        else
          LdrpPolicyBits &= ~1u;
        if ( (int)AppModelPolicy_GetPolicy(v5, 7LL, &v14) >= 0 && v14 == 458753 )
          LdrpPolicyBits |= 2u;
        if ( (int)AppModelPolicy_GetPolicy(v10, 19LL, &v14) >= 0 && v14 == 1245185 )
          LdrpPolicyBits |= 0x40u;
        if ( (int)AppModelPolicy_GetPolicy(v11, 32LL, &v14) >= 0 && v14 == 2097153 )
          LdrpPolicyBits |= 4u;
        LODWORD(ProcessParameters) = AppModelPolicy_GetPolicy(v12, 54LL, &v14);
        if ( (int)ProcessParameters >= 0 && v14 == 3538945 )
        {
          ProcessParameters = v0->ProcessParameters;
          ProcessParameters->Flags |= 0x4000000u;
        }
        return (char)ProcessParameters;
      }
      v7 = v15;
      Flags = v16.Flags;
    }
    if ( (v7 & 1) != 0 )
    {
      if ( (v7 & 8) != 0 )
      {
        v9 = 262145;
      }
      else if ( (Flags & 0x10000) != 0 )
      {
        v9 = 0x40000;
      }
      else if ( (Flags & 4) != 0 )
      {
        v9 = 262145;
      }
      else if ( (Flags & 0x400) != 0 )
      {
        v9 = 262145;
      }
      else if ( (Flags & 0x800) != 0 )
      {
        v9 = 262145;
      }
      else if ( (Flags & 0x40) != 0 )
      {
        v9 = 0x40000;
      }
      else if ( (Flags & 8) != 0 )
      {
        v9 = 0x40000;
      }
      else
      {
        v9 = 262145;
        if ( (Flags & 0x40000) != 0 )
          v9 = 262145;
      }
    }
    else
    {
      v9 = 0x40000;
    }
    v14 = v9;
    Feature_PackagedComElevationSupport_v2__private_IsEnabledNoReportingNoInline();
    goto LABEL_26;
  }
  if ( ((unsigned __int8)ProcessParameters & 2) != 0 )
  {
    p_DllPath->Length = 0;
  }
  else if ( p_DllPath->Length )
  {
    LOBYTE(ProcessParameters) = LdrSetDllDirectory(p_DllPath);
  }
  return (char)ProcessParameters;
}
