/*
 * XREFs of PsComputeProcessPpmPolicy @ 0x140617D08
 * Callers:
 *     PsSetProcessPowerThrottlingState @ 0x140617EEC (PsSetProcessPowerThrottlingState.c)
 *     PspRefreshProcessUserPresencePpmPolicyCallback @ 0x140618260 (PspRefreshProcessUserPresencePpmPolicyCallback.c)
 *     PspSetProcessBamPpmPolicy @ 0x1407F64F0 (PspSetProcessBamPpmPolicy.c)
 * Callees:
 *     Feature_UserPresenceThrottling__private_IsEnabledDeviceUsageNoInline @ 0x14044D640 (Feature_UserPresenceThrottling__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_DisableUserPresenceQosByPolicy__private_IsEnabledDeviceUsageNoInline @ 0x140608E6C (Feature_DisableUserPresenceQosByPolicy__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall PsComputeProcessPpmPolicy(_DWORD *a1)
{
  unsigned int v1; // ebx
  unsigned int v2; // ecx

  if ( (a1[523] & 1) != 0 )
  {
    return (a1[524] & 1) != 0 ? 8 : 3;
  }
  else
  {
    v1 = a1[522];
    if ( (unsigned int)Feature_UserPresenceThrottling__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( (unsigned int)Feature_DisableUserPresenceQosByPolicy__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( v1 == 9
          && (BYTE2(PsAltSystemCallRegistrationLock.Timer.DueTime.u.LowPart)
           || PsAltSystemCallRegistrationLock.Timer.DueTime.HighPart) )
        {
          return 7;
        }
      }
      else if ( v1 == 9 )
      {
        v2 = 9;
        if ( PsAltSystemCallRegistrationLock.Timer.DueTime.HighPart )
          return 7;
        return v2;
      }
    }
  }
  return v1;
}
