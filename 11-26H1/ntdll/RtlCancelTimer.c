/*
 * XREFs of RtlCancelTimer @ 0x180159580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCancelTimer(__int64 a1, __int64 a2)
{
  return RtlDeleteTimer(a1, a2, 0LL);
}
