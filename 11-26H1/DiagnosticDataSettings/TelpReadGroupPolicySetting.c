/*
 * XREFs of TelpReadGroupPolicySetting @ 0x180004B94
 * Callers:
 *     TelpEvaluateWithoutLicenseCheck @ 0x180003488 (TelpEvaluateWithoutLicenseCheck.c)
 *     TelGetMaximumAllowedTelemetryLevel @ 0x180003C60 (TelGetMaximumAllowedTelemetryLevel.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800033BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     TelpReadRegistryDword @ 0x1800037EC (TelpReadRegistryDword.c)
 *     TelpReadUsersPolicySetting @ 0x180005330 (TelpReadUsersPolicySetting.c)
 */

__int64 __fastcall TelpReadGroupPolicySetting(_DWORD *a1, int *a2)
{
  LSTATUS v4; // eax
  __int64 v5; // r8
  unsigned int v6; // ebx
  int v7; // ecx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int pvData; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+50h] [rbp+18h] BYREF
  int v13; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 1;
  pvData = 3;
  v4 = TelpReadRegistryDword(
         &pvData,
         HKEY_LOCAL_MACHINE,
         L"Software\\Policies\\Microsoft\\Windows\\DataCollection",
         L"AllowTelemetry");
  v6 = v4;
  if ( v4 != -2147024894 && v4 < 0 )
    goto LABEL_6;
  v12 = 1;
  v13 = 3;
  v7 = TelpReadUsersPolicySetting(&v12, &v13, L"AllowTelemetry");
  if ( v7 < 0 && v12 )
  {
    v6 = v7;
LABEL_6:
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x3B8, v5, (const char *)v6);
    return v6;
  }
  if ( v6 != -2147024894 || v12 )
  {
    v8 = v13;
    if ( pvData < v13 )
      v8 = pvData;
    *a2 = v8;
  }
  else
  {
    *a1 = 0;
  }
  return 0;
}
