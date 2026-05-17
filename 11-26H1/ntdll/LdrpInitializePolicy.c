/*
 * XREFs of LdrpInitializePolicy @ 0x1800C1DF0
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrSetDllDirectory @ 0x18003DCA0 (LdrSetDllDirectory.c)
 *     RtlQueryPackageClaims @ 0x1800C24B0 (RtlQueryPackageClaims.c)
 *     Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline @ 0x180122770 (Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline.c)
 */

char LdrpInitializePolicy()
{
  struct _PEB *v0; // r14
  int v1; // ebx
  _UNICODE_STRING *p_DllPath; // rcx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  __int128 v4; // xmm0
  int PackageClaims; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // edi
  int v10; // esi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // edi
  int v16; // esi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // edi
  int v22; // esi
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // edi
  int v28; // esi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // edi

  v0 = NtCurrentPeb();
  v1 = 0;
  p_DllPath = &v0->ProcessParameters->DllPath;
  LdrpAppPackagesPath = 0uLL;
  LdrpOriginalAppPackagesPath = 0uLL;
  LOBYTE(ProcessParameters) = v0->BitField;
  if ( ((unsigned __int8)ProcessParameters & 0x10) != 0 && p_DllPath->Length )
  {
    v4 = (__int128)*p_DllPath;
    LdrpPolicyBits = 41;
    LdrpAppPackagesPath = v4;
    LdrpOriginalAppPackagesPath = v4;
    PackageClaims = RtlQueryPackageClaims(-4LL, 0LL, 0LL);
    v9 = PackageClaims;
    if ( PackageClaims == -1073741275 )
    {
      v9 = 0;
    }
    else
    {
      v10 = 0;
      if ( PackageClaims < 0 )
      {
LABEL_10:
        if ( v9 < 0 || v10 == 262145 )
          LdrpDefaultDllDirectories = 4096;
        else
          LdrpPolicyBits &= ~1u;
        v11 = RtlQueryPackageClaims(-4LL, 0LL, 0LL);
        v15 = v11;
        if ( v11 == -1073741275 )
        {
          v15 = 0;
        }
        else
        {
          v16 = 0;
          if ( v11 < 0 )
          {
LABEL_15:
            if ( v15 >= 0 && v16 == 458753 )
              LdrpPolicyBits |= 2u;
            v17 = RtlQueryPackageClaims(-4LL, 0LL, 0LL);
            v21 = v17;
            if ( v17 == -1073741275 )
            {
              v21 = 0;
            }
            else
            {
              v22 = 0;
              if ( v17 < 0 )
              {
LABEL_18:
                if ( v21 >= 0 && v22 == 1245185 )
                  LdrpPolicyBits |= 0x40u;
                v23 = RtlQueryPackageClaims(-4LL, 0LL, 0LL);
                v27 = v23;
                if ( v23 == -1073741275 )
                {
                  v27 = 0;
                }
                else
                {
                  v28 = 0;
                  if ( v23 < 0 )
                  {
LABEL_21:
                    if ( v27 >= 0 && v28 == 2097153 )
                      LdrpPolicyBits |= 4u;
                    LODWORD(ProcessParameters) = RtlQueryPackageClaims(-4LL, 0LL, 0LL);
                    v33 = (int)ProcessParameters;
                    if ( (_DWORD)ProcessParameters == -1073741275 )
                    {
                      v33 = 0;
                    }
                    else if ( (int)ProcessParameters < 0 )
                    {
LABEL_26:
                      if ( v33 >= 0 && v1 == 3538945 )
                      {
                        ProcessParameters = v0->ProcessParameters;
                        ProcessParameters->Flags |= 0x4000000u;
                      }
                      return (char)ProcessParameters;
                    }
                    v1 = unk_180195B50;
                    LOBYTE(ProcessParameters) = Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline(
                                                  v30,
                                                  v29,
                                                  v31,
                                                  v32);
                    goto LABEL_26;
                  }
                }
                v28 = unk_1801957E0;
                Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline(0LL, v24, v25, v26);
                goto LABEL_21;
              }
            }
            v22 = unk_1801955D8;
            Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline(0LL, v18, v19, v20);
            goto LABEL_18;
          }
        }
        v16 = unk_1801953F8;
        Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline(0LL, v12, v13, v14);
        goto LABEL_15;
      }
    }
    v10 = unk_180195380;
    Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline(0LL, v6, v7, v8);
    goto LABEL_10;
  }
  if ( ((unsigned __int8)ProcessParameters & 2) != 0 )
  {
    p_DllPath->Length = 0;
  }
  else if ( p_DllPath->Length )
  {
    LOBYTE(ProcessParameters) = LdrSetDllDirectory((__int64)p_DllPath);
  }
  return (char)ProcessParameters;
}
