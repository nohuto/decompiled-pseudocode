/*
 * XREFs of TelEvaluateActiveSettingAuthority @ 0x180003A30
 * Callers:
 *     TelGetAllAllowedTelemetryTypes @ 0x180003B60 (TelGetAllAllowedTelemetryTypes.c)
 *     TelGetMaximumAllowedTelemetryLevel @ 0x180003C60 (TelGetMaximumAllowedTelemetryLevel.c)
 *     TelGetWerTelemetryMode @ 0x180004510 (TelGetWerTelemetryMode.c)
 *     TelSetLocalTelemetrySetting @ 0x1800049C0 (TelSetLocalTelemetrySetting.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800033BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     TelpEvaluateWithoutLicenseCheck @ 0x180003488 (TelpEvaluateWithoutLicenseCheck.c)
 *     TelIsRestrictivePolicySet @ 0x180004890 (TelIsRestrictivePolicySet.c)
 *     TelpReadLocalSetting @ 0x180004C58 (TelpReadLocalSetting.c)
 */

__int64 __fastcall TelEvaluateActiveSettingAuthority(int *a1, int *a2, __int64 a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  unsigned int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  int v13; // [rsp+60h] [rbp+30h] BYREF
  int v14; // [rsp+70h] [rbp+40h] BYREF
  int v15; // [rsp+78h] [rbp+48h] BYREF

  if ( !a1 )
  {
    v5 = -2147024809;
    v6 = 1355LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(retaddr, (void *)v6, a3, (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v14 = 2;
  v13 = 1;
  v5 = TelpEvaluateWithoutLicenseCheck(&v13, &v14, a3);
  v7 = v14;
  if ( a2 )
    *a2 = v14;
  if ( v5 < 0 )
  {
    *a1 = 0;
    goto LABEL_21;
  }
  v8 = v13;
  if ( v13 == 2 )
    v8 = 1;
  v13 = v8;
  *a1 = v8;
  if ( v7 > 1 || (unsigned int)TelIsRestrictivePolicySet(L"ConfigureTelemetryOptInSettingsUx") )
    goto LABEL_17;
  v15 = 3;
  v14 = 1;
  v5 = TelpReadLocalSetting(&v14, &v15);
  if ( v5 < 0 )
  {
LABEL_21:
    v6 = 1403LL;
    goto LABEL_22;
  }
  if ( v14 )
  {
    v9 = v15;
    v10 = v13;
    if ( v15 == 2 )
      v9 = 1;
    if ( v9 < v13 )
      v10 = v9;
    *a1 = v10;
  }
LABEL_17:
  if ( !*a1 )
  {
    v14 = 0;
    v15 = 4;
    NtQueryLicenseValue(aB_0, 0LL, &v14);
    if ( v14 != 1 )
      *a1 = 1;
  }
  return (unsigned int)v5;
}
