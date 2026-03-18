/*
 * XREFs of RIMUnRevokeConfigurationChange @ 0x1400F0330
 * Callers:
 *     <none>
 * Callees:
 *     RIMDeliverConfigRequest @ 0x1400F1398 (RIMDeliverConfigRequest.c)
 */

__int64 __fastcall RIMUnRevokeConfigurationChange(struct RIMDEV *a1)
{
  return RIMDeliverConfigRequest(a1);
}
