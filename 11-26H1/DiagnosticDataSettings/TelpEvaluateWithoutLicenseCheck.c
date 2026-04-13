/*
 * XREFs of TelpEvaluateWithoutLicenseCheck @ 0x180003488
 * Callers:
 *     TelEvaluateActiveSettingAuthority @ 0x180003A30 (TelEvaluateActiveSettingAuthority.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800033BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     TelpReadEnterpriseGovSetting @ 0x180004A3C (TelpReadEnterpriseGovSetting.c)
 *     TelpReadGroupPolicySetting @ 0x180004B94 (TelpReadGroupPolicySetting.c)
 *     TelpReadLocalSetting @ 0x180004C58 (TelpReadLocalSetting.c)
 *     TelpReadMdmSetting @ 0x180004D3C (TelpReadMdmSetting.c)
 */

__int64 __fastcall TelpEvaluateWithoutLicenseCheck(int *a1, _DWORD *a2, __int64 a3)
{
  int v6; // edi
  __int64 v7; // r8
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  int v9; // [rsp+50h] [rbp+20h] BYREF
  int v10; // [rsp+60h] [rbp+30h] BYREF

  if ( a1 )
  {
    v10 = 1;
    v6 = TelpReadEnterpriseGovSetting(&v10, a1);
    if ( v10 )
    {
      if ( a2 )
        *a2 = 3;
    }
    else
    {
      v9 = 1;
      v6 = TelpReadGroupPolicySetting(&v9, a1);
      if ( v9 )
      {
        if ( a2 )
          *a2 = 0;
      }
      else
      {
        v6 = TelpReadMdmSetting(&v9, a1);
        if ( v9 )
        {
          if ( a2 )
            *a2 = 1;
        }
        else
        {
          if ( a2 )
            *a2 = 2;
          v6 = TelpReadLocalSetting(&v10, a1);
          if ( !v10 )
          {
            v9 = 1;
            v10 = 4;
            NtQueryLicenseValue(aB, 0LL, &v9);
            *a1 = v9;
          }
        }
      }
    }
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x533, v7, (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x4FC, a3, (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
