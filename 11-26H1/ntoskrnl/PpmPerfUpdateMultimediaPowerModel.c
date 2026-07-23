/*
 * XREFs of PpmPerfUpdateMultimediaPowerModel @ 0x1404D838C
 * Callers:
 *     PpmEnableProfile @ 0x140AD850C (PpmEnableProfile.c)
 *     PpmDisableProfile @ 0x140AD85C4 (PpmDisableProfile.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140AD8DD8 (PpmPerfUpdateDomainPolicy.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 */

NTSTATUS PpmPerfUpdateMultimediaPowerModel()
{
  NTSTATUS result; // eax

  if ( PpmPerfMultimediaQosSupported )
    result = 2;
  else
    result = PopDirectedDripsDiagLock.OtherOperationCount != 0;
  if ( result != PpmPerfMultimediaPowerModel )
  {
    PpmPerfMultimediaPowerModel = result;
    return ZwUpdateWnfStateData(&WNF_PO_MULTIMEDIA_POWER_MODEL, &PpmPerfMultimediaPowerModel, 4u, 0LL, 0LL, 0, 0);
  }
  return result;
}
