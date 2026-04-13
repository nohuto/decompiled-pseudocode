/*
 * XREFs of TelGetMaximumAllowedTelemetryLevel @ 0x180003C60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800033BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     TelpReadRegistryDword @ 0x1800037EC (TelpReadRegistryDword.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800039EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     TelEvaluateActiveSettingAuthority @ 0x180003A30 (TelEvaluateActiveSettingAuthority.c)
 *     TelGetLocalAllowTelemetryRegPath @ 0x180003BF0 (TelGetLocalAllowTelemetryRegPath.c)
 *     TelpReadEnterpriseGovSetting @ 0x180004A3C (TelpReadEnterpriseGovSetting.c)
 *     TelpReadGroupPolicySetting @ 0x180004B94 (TelpReadGroupPolicySetting.c)
 *     TelpReadMdmSetting @ 0x180004D3C (TelpReadMdmSetting.c)
 */

__int64 __fastcall TelGetMaximumAllowedTelemetryLevel(int *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  int active; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  const wchar_t *LocalAllowTelemetryRegPath; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  int pvData; // [rsp+40h] [rbp+20h] BYREF
  int v14; // [rsp+48h] [rbp+28h] BYREF
  int v15; // [rsp+50h] [rbp+30h] BYREF

  if ( !a1 )
  {
    v4 = -2147024809;
    v5 = 1421LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(retaddr, (void *)v5, a3, (const char *)v4);
    return v4;
  }
  v15 = 2;
  pvData = 1;
  active = TelEvaluateActiveSettingAuthority(&pvData, &v15, a3);
  v7 = active;
  if ( active < 0 )
    wil::details::in1diag3::_Log_Hr(retaddr, (void *)0x594, a3, (const char *)(unsigned int)active);
  *a1 = pvData;
  pvData = 1;
  v14 = 1;
  if ( v7 < 0 || v15 == 2 )
  {
    pvData = 1;
    LocalAllowTelemetryRegPath = TelGetLocalAllowTelemetryRegPath();
    v4 = TelpReadRegistryDword(&pvData, HKEY_LOCAL_MACHINE, LocalAllowTelemetryRegPath, L"MaxTelemetryAllowed");
    if ( (v4 & 0x80000000) == 0 )
    {
      v9 = pvData;
      goto LABEL_22;
    }
    goto LABEL_17;
  }
  if ( v15 == 3 )
  {
    v8 = TelpReadEnterpriseGovSetting(&pvData, &v14);
  }
  else if ( v15 )
  {
    if ( v15 != 1 )
    {
      v4 = -2147418113;
      goto LABEL_17;
    }
    v8 = TelpReadMdmSetting(&pvData, &v14);
  }
  else
  {
    v8 = TelpReadGroupPolicySetting(&pvData, &v14);
  }
  v4 = v8;
  if ( v8 < 0 )
  {
LABEL_17:
    v5 = 1482LL;
    goto LABEL_18;
  }
  if ( !pvData )
    return v4;
  v9 = v14;
LABEL_22:
  if ( v9 == 2 )
    v9 = 1;
  *a1 = v9;
  return v4;
}
