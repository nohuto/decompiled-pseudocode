/*
 * XREFs of sub_14012C180 @ 0x14012C180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_14012C180(PDEVICE_OBJECT DeviceObject, UCHAR MinorFunction, POWER_STATE PowerState, PVOID Context)
{
  *(_DWORD *)(*((_QWORD *)Context + 16) + 80LL) &= ~2u;
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 15));
}
