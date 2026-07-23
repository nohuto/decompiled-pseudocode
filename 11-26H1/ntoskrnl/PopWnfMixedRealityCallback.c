/*
 * XREFs of PopWnfMixedRealityCallback @ 0x1407CFDE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExQueryWnfStateData @ 0x1409C4360 (ExQueryWnfStateData.c)
 *     PopSetPowerSettingValueAcDc @ 0x1409F9E70 (PopSetPowerSettingValueAcDc.c)
 */

__int64 __fastcall PopWnfMixedRealityCallback(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // ebx
  unsigned int v6; // [rsp+20h] [rbp-38h] BYREF
  int v7; // [rsp+28h] [rbp-30h] BYREF
  int v8; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v9; // [rsp+38h] [rbp-20h] BYREF

  v7 = a4;
  v6 = 8;
  v4 = ExQueryWnfStateData(a1, &v7, &v9, &v6);
  if ( v4 >= 0 )
  {
    if ( v6 >= 8 )
    {
      v8 = (v9 >> 1) & 1;
      PopSetPowerSettingValueAcDc(&GUID_MIXED_REALITY_MODE, 4LL, &v8);
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v4;
}
