/*
 * XREFs of PpmPerfUpdateMultimediaPowerModel @ 0x1404DECAC
 * Callers:
 *     PpmEnableProfile @ 0x140A9C6CC (PpmEnableProfile.c)
 *     PpmDisableProfile @ 0x140A9C784 (PpmDisableProfile.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140A9D254 (PpmPerfUpdateDomainPolicy.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 */

__int64 PpmPerfUpdateMultimediaPowerModel()
{
  __int64 result; // rax

  if ( LOBYTE(stru_140F11D08.UserWaitTime) )
    result = 2LL;
  else
    result = PpmLowPowerProfile != 0;
  if ( (_DWORD)result != HIDWORD(stru_140F11D08.InGlobalUpdateVpThreadPriorityList) )
  {
    HIDWORD(stru_140F11D08.InGlobalUpdateVpThreadPriorityList) = result;
    return ZwUpdateWnfStateData(
             &WNF_PO_MULTIMEDIA_POWER_MODEL,
             (char *)&stru_140F11D08.InGlobalUpdateVpThreadPriorityList + 4,
             4LL,
             0LL,
             0LL,
             0,
             0);
  }
  return result;
}
