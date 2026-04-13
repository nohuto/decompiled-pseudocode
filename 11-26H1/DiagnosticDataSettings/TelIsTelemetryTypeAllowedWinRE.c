/*
 * XREFs of TelIsTelemetryTypeAllowedWinRE @ 0x180004940
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800033BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     TelpReadOfflineOsPolicySetting @ 0x180004E10 (TelpReadOfflineOsPolicySetting.c)
 */

__int64 __fastcall TelIsTelemetryTypeAllowedWinRE(int a1)
{
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v4; // r8
  unsigned int v5; // edi
  int v7; // edx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v9 = 0;
  v3 = TelpReadOfflineOsPolicySetting(&v9);
  v5 = v3;
  if ( v3 >= 0 )
  {
    v7 = 0;
    if ( v9 )
    {
      if ( v9 != 1 )
        v7 = 6;
      v7 |= 1u;
    }
    LOBYTE(v2) = (a1 & v7) != a1;
    return v2;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x6D8, v4, (const char *)(unsigned int)v3);
    return v5;
  }
}
