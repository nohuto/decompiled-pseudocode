/*
 * XREFs of TelIsRestrictivePolicySet @ 0x180004890
 * Callers:
 *     TelEvaluateActiveSettingAuthority @ 0x180003A30 (TelEvaluateActiveSettingAuthority.c)
 * Callees:
 *     TelGetNumericPolicy @ 0x180003D80 (TelGetNumericPolicy.c)
 */

__int64 __fastcall TelIsRestrictivePolicySet(__int64 a1)
{
  int NumericPolicy; // eax
  unsigned int v2; // ecx
  int v4; // [rsp+38h] [rbp+10h] BYREF
  int v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 1;
  v4 = 1;
  NumericPolicy = TelGetNumericPolicy(a1, &v4, &v5);
  v2 = 0;
  if ( NumericPolicy < 0 || v4 && v5 )
    return 1;
  return v2;
}
