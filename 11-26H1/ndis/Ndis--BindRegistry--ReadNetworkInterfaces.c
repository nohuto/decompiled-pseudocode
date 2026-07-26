/*
 * XREFs of Ndis::BindRegistry::ReadNetworkInterfaces @ 0x14014C898
 * Callers:
 *     ndisIfInitializePhase2 @ 0x140146FA0 (ndisIfInitializePhase2.c)
 * Callees:
 *     netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d___ @ 0x14014C594 (netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d___.c)
 */

__int64 __fastcall Ndis::BindRegistry::ReadNetworkInterfaces(__int64 a1)
{
  return netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d_(a1, a1, a1);
}
