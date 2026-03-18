/*
 * XREFs of wil_details_ReevaluateOnFeatureConfigurationChange @ 0x14007A6F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     wil_details_EvaluateFeatureDependencies @ 0x14007A494 (wil_details_EvaluateFeatureDependencies.c)
 */

void wil_details_ReevaluateOnFeatureConfigurationChange()
{
  _UNKNOWN **i; // rbx
  __int64 v1; // rcx
  int v2; // eax
  __int16 v3; // dx
  __int16 v4; // dx
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h] BYREF
  int v7; // [rsp+30h] [rbp-18h]

  for ( i = &wil_details_featureDescriptors_a; i < (_UNKNOWN **)&wil_details_featureDescriptors_z; ++i )
  {
    if ( *i )
    {
LABEL_23:
      if ( !i )
        break;
      if ( !*((_BYTE *)i + 29) && !*((_BYTE *)i + 30) && !*((_BYTE *)i + 28) )
      {
        v1 = *((unsigned int *)i + 6);
        v6 = 0LL;
        v7 = 0;
        v5 = 0LL;
        v2 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64 *))RtlQueryFeatureConfiguration)(
               v1,
               1LL,
               &v5,
               &v6);
        if ( v2 == -2147483614 || v2 == -1073741275 )
          goto LABEL_16;
        if ( v2 )
        {
          if ( v2 == 279 )
          {
            v3 = BYTE4(v6) & 0x80;
            goto LABEL_15;
          }
LABEL_16:
          v4 = 518;
        }
        else
        {
          v3 = BYTE4(v6) & 0xB0 | (4 * (BYTE4(v6) & 0x40));
LABEL_15:
          v4 = (8 * v3) | 0x206;
        }
        _InterlockedXor((volatile signed __int32 *)*i, ((unsigned __int16)v4 ^ (unsigned __int16)*(_DWORD *)*i) & 0xF80);
      }
      for ( i += 7; i < (_UNKNOWN **)&wil_details_featureDescriptors_z; ++i )
      {
        if ( *i )
          goto LABEL_23;
      }
      break;
    }
  }
  wil_details_EvaluateFeatureDependencies();
}
