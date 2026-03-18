/*
 * XREFs of PsComputeProcessPpmPolicy @ 0x140614E6C
 * Callers:
 *     PsSetProcessPowerThrottlingState @ 0x14061502C (PsSetProcessPowerThrottlingState.c)
 *     PspRefreshProcessUserPresencePpmPolicyCallback @ 0x140615350 (PspRefreshProcessUserPresencePpmPolicyCallback.c)
 *     PspSetProcessBamPpmPolicy @ 0x1407F0990 (PspSetProcessBamPpmPolicy.c)
 * Callees:
 *     Feature_UserPresenceThrottling__private_IsEnabledDeviceUsageNoInline @ 0x140455510 (Feature_UserPresenceThrottling__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_DisableUserPresenceQosByPolicy__private_IsEnabledDeviceUsageNoInline @ 0x14060636C (Feature_DisableUserPresenceQosByPolicy__private_IsEnabledDeviceUsageNoInline.c)
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
          && (BYTE2(PsAltSystemCallRegistrationLock.TrapFrame) || HIDWORD(PsAltSystemCallRegistrationLock.TrapFrame)) )
        {
          return 7;
        }
      }
      else if ( v1 == 9 )
      {
        v2 = 9;
        if ( HIDWORD(PsAltSystemCallRegistrationLock.TrapFrame) )
          return 7;
        return v2;
      }
    }
  }
  return v1;
}
