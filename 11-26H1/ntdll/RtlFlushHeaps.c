/*
 * XREFs of RtlFlushHeaps @ 0x18010DE70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void RtlFlushHeaps(void)
{
  RtlpEnumProcessHeaps((__int64 (__fastcall *)(__int64, _QWORD, __int64))RtlpFlushHeapsCallback, 0LL, 4);
}
