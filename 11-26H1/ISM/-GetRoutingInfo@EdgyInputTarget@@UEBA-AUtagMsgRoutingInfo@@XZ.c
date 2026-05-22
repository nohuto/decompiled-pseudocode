/*
 * XREFs of ?GetRoutingInfo@EdgyInputTarget@@UEBA?AUtagMsgRoutingInfo@@XZ @ 0x1801B1230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EdgyInputTarget::GetRoutingInfo(__int64 a1, __int64 a2)
{
  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  return a2;
}
