/*
 * XREFs of TelpReadMdmSetting @ 0x180004D3C
 * Callers:
 *     TelpEvaluateWithoutLicenseCheck @ 0x180003488 (TelpEvaluateWithoutLicenseCheck.c)
 *     TelGetMaximumAllowedTelemetryLevel @ 0x180003C60 (TelGetMaximumAllowedTelemetryLevel.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800033BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     TelGetNumericPolicy @ 0x180003D80 (TelGetNumericPolicy.c)
 *     TelpReadUsersPolicySetting @ 0x180005330 (TelpReadUsersPolicySetting.c)
 */

__int64 __fastcall TelpReadMdmSetting(_DWORD *a1, int *a2)
{
  char v4; // si
  int v5; // edi
  int NumericPolicy; // ebx
  __int64 v7; // r8
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  int v11; // [rsp+50h] [rbp+30h] BYREF
  int v12; // [rsp+60h] [rbp+40h] BYREF
  int v13; // [rsp+68h] [rbp+48h] BYREF

  *a1 = 1;
  v12 = 0;
  v11 = 0;
  v4 = 1;
  v5 = 3;
  NumericPolicy = TelGetNumericPolicy((__int64)L"AllowTelemetry", &v11, &v12);
  if ( NumericPolicy < 0
    || (!v11 ? (v4 = 0) : (v5 = v12),
        (v11 = 1,
         v13 = 3,
         NumericPolicy = TelpReadUsersPolicySetting(&v11, &v13, L"AllowTelemetry_PolicyManager"),
         NumericPolicy < 0)
     && v11) )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x3FD, v7, (const char *)(unsigned int)NumericPolicy);
  }
  else
  {
    if ( v4 || v11 )
    {
      v8 = v13;
      if ( v5 < v13 )
        v8 = v5;
      *a2 = v8;
    }
    else
    {
      *a1 = 0;
    }
    return 0;
  }
  return (unsigned int)NumericPolicy;
}
