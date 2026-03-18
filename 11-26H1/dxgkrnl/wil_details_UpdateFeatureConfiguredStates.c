/*
 * XREFs of wil_details_UpdateFeatureConfiguredStates @ 0x14041D090
 * Callers:
 *     wil_details_ReevaluateOnFeatureConfigurationChange @ 0x1401D5B90 (wil_details_ReevaluateOnFeatureConfigurationChange.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x14005FBD0 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

volatile signed __int32 **wil_details_UpdateFeatureConfiguredStates()
{
  int **i; // rcx
  __int64 v1; // rcx
  int v2; // eax
  __int16 v3; // dx
  __int16 v4; // dx
  volatile signed __int32 **result; // rax
  volatile signed __int32 **v6; // rbx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF
  int v9; // [rsp+30h] [rbp-18h]

  for ( i = &wil_details_featureDescriptors_a; ; i = (int **)(v6 + 7) )
  {
    result = (volatile signed __int32 **)wil_details_FeatureDescriptors_SkipPadding(i);
    v6 = result;
    if ( !result )
      break;
    if ( !*((_BYTE *)result + 29) && !*((_BYTE *)result + 30) && !*((_BYTE *)result + 28) )
    {
      v1 = *((unsigned int *)result + 6);
      v8 = 0LL;
      v9 = 0;
      v7 = 0LL;
      v2 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64 *))RtlQueryFeatureConfiguration)(
             v1,
             1LL,
             &v7,
             &v8);
      if ( v2 == -2147483614 || v2 == -1073741275 )
        goto LABEL_12;
      if ( v2 )
      {
        if ( v2 == 279 )
        {
          v3 = BYTE4(v8) & 0x80;
          goto LABEL_11;
        }
LABEL_12:
        v4 = 518;
      }
      else
      {
        v3 = BYTE4(v8) & 0xB0 | (4 * (BYTE4(v8) & 0x40));
LABEL_11:
        v4 = (8 * v3) | 0x206;
      }
      _InterlockedXor(*v6, ((unsigned __int16)v4 ^ (unsigned __int16)**v6) & 0xF80);
      continue;
    }
  }
  return result;
}
