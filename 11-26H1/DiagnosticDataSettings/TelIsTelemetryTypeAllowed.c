/*
 * XREFs of TelIsTelemetryTypeAllowed @ 0x1800048E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800033BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     TelGetAllAllowedTelemetryTypes @ 0x180003B60 (TelGetAllAllowedTelemetryTypes.c)
 */

__int64 __fastcall TelIsTelemetryTypeAllowed(int a1, __int64 a2, __int64 a3)
{
  int AllAllowedTelemetryTypes; // eax
  __int64 v5; // r8
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0;
  AllAllowedTelemetryTypes = TelGetAllAllowedTelemetryTypes(&v9, a2, a3);
  v6 = AllAllowedTelemetryTypes;
  if ( AllAllowedTelemetryTypes < 0 )
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0xE8, v5, (const char *)(unsigned int)AllAllowedTelemetryTypes);
  else
    return (a1 & v9) != a1;
  return v6;
}
