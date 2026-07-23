/*
 * XREFs of TpWorkOnBehalfClearTicket @ 0x1800278C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TpWorkOnBehalfClearTicket(__int64 a1)
{
  *(_QWORD *)(a1 + 248) = 0LL;
  return RtlClearThreadWorkOnBehalfTicket();
}
