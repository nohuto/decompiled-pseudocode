/*
 * XREFs of ZwAdjustTokenClaimsAndDeviceGroups @ 0x140724190
 * Callers:
 *     DifZwAdjustTokenClaimsAndDeviceGroupsWrapper @ 0x140698EA0 (DifZwAdjustTokenClaimsAndDeviceGroupsWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAdjustTokenClaimsAndDeviceGroups(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
