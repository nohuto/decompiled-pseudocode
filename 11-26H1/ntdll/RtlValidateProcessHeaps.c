/*
 * XREFs of RtlValidateProcessHeaps @ 0x1801446C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x180091420 (RtlpEnumProcessHeaps.c)
 */

bool RtlValidateProcessHeaps()
{
  return (int)RtlpEnumProcessHeaps(
                (__int64 (__fastcall *)(__int64, _QWORD, __int64))RtlValidateProcessHeapsCallback,
                0LL,
                0) >= 0;
}
