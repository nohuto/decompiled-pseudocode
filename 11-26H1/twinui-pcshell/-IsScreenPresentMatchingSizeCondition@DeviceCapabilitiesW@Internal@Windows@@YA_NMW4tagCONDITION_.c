/*
 * XREFs of ?IsScreenPresentMatchingSizeCondition@DeviceCapabilitiesW@Internal@Windows@@YA_NMW4tagCONDITION_OPERATION@@@Z @ 0x1802010C4
 * Callers:
 *     ?IsScreenSizeRequirementMet@DeviceCapabilitiesW@Internal@Windows@@YA_NW4Capability@123@@Z @ 0x180200FC0 (-IsScreenSizeRequirementMet@DeviceCapabilitiesW@Internal@Windows@@YA_NW4Capability@123@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall Windows::Internal::DeviceCapabilitiesW::IsScreenPresentMatchingSizeCondition(
        Windows::Internal::DeviceCapabilitiesW *this,
        float a2,
        __int64 a3)
{
  __int64 v3; // rdx
  float v4; // xmm0_4
  int v5; // edi
  char v6; // bl
  int v7; // edi
  double v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0.0;
  v5 = v3;
  v6 = 0;
  if ( (int)GetIntegratedDisplaySize(&v9, v3, a3) >= 0 )
  {
    v7 = v5 - 4;
    if ( v7 )
    {
      if ( v7 == 1 )
        return v4 >= v9;
    }
    else
    {
      return v9 > v4;
    }
  }
  return v6;
}
