/*
 * XREFs of RIMRevokeConfigurationChange @ 0x1401C5840
 * Callers:
 *     <none>
 * Callees:
 *     RIMDeliverConfigRequest @ 0x1400F1398 (RIMDeliverConfigRequest.c)
 */

__int64 __fastcall RIMRevokeConfigurationChange(__int64 a1, __int16 a2)
{
  return RIMDeliverConfigRequest((struct RIMDEV *)a1, *(_QWORD *)(a1 + 440), a2, 0);
}
