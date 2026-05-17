/*
 * XREFs of RtlFlushHeaps @ 0x18010E320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlFlushHeaps()
{
  return RtlpEnumProcessHeaps((__int64 (__fastcall *)(__int64, _QWORD, __int64))RtlpFlushHeapsCallback, 0LL, 4);
}
