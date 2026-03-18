/*
 * XREFs of RIMUnRevokeConfigurationChange @ 0x1400B2910
 * Callers:
 *     <none>
 * Callees:
 *     RIMDeliverConfigRequest @ 0x1400B3038 (RIMDeliverConfigRequest.c)
 */

__int64 __fastcall RIMUnRevokeConfigurationChange(struct RIMDEV *a1)
{
  return RIMDeliverConfigRequest(a1);
}
