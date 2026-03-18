/*
 * XREFs of HUBDSM_DeConfiguringDeviceOnClientRequest @ 0x1400217D0
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_SetDeviceNullConfigurationUsingControlTransfer @ 0x14002C108 (HUBDTX_SetDeviceNullConfigurationUsingControlTransfer.c)
 */

__int64 __fastcall HUBDSM_DeConfiguringDeviceOnClientRequest(__int64 a1)
{
  HUBDTX_SetDeviceNullConfigurationUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
