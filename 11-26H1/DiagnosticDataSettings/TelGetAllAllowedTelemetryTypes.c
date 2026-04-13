/*
 * XREFs of TelGetAllAllowedTelemetryTypes @ 0x180003B60
 * Callers:
 *     TelIsTelemetryTypeAllowed @ 0x1800048E0 (TelIsTelemetryTypeAllowed.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800033BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     TelEvaluateActiveSettingAuthority @ 0x180003A30 (TelEvaluateActiveSettingAuthority.c)
 */

__int64 __fastcall TelGetAllAllowedTelemetryTypes(_DWORD *a1, __int64 a2, __int64 a3)
{
  int active; // eax
  __int64 v6; // r8
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+38h] [rbp+10h] BYREF

  if ( a1 )
  {
    *a1 = 0;
    v9 = 0;
    active = TelEvaluateActiveSettingAuthority(&v9, &v10, a3);
    v7 = active;
    if ( active < 0 )
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x11C, v6, (const char *)(unsigned int)active);
    }
    else
    {
      if ( v9 )
      {
        if ( v9 != 1 )
          *a1 |= 6u;
        *a1 |= 1u;
      }
      return 0;
    }
    return v7;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0xFA, a3, (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
