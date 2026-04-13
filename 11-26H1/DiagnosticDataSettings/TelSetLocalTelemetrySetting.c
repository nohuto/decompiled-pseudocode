/*
 * XREFs of TelSetLocalTelemetrySetting @ 0x1800049C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800033BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     TelEvaluateActiveSettingAuthority @ 0x180003A30 (TelEvaluateActiveSettingAuthority.c)
 */

__int64 __fastcall TelSetLocalTelemetrySetting(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r9
  int v6; // eax
  __int64 v7; // r8
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v11; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0;
  TelEvaluateActiveSettingAuthority(&v11, &v12, a3);
  v5 = 1LL;
  if ( a1 != 2 )
    v5 = a1;
  v6 = CPSSPutDwordSetting(0LL, 0LL, L"AllowTelemetry", v5, a2);
  v8 = v6;
  if ( v6 < 0 )
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x1B2, v7, (const char *)(unsigned int)v6);
  return v8;
}
