/*
 * XREFs of RtlValidateProcessHeaps @ 0x180144570
 * Callers:
 *     <none>
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x180076180 (RtlpEnumProcessHeaps.c)
 */

BOOLEAN RtlValidateProcessHeaps(void)
{
  return (int)RtlpEnumProcessHeaps(
                (__int64 (__fastcall *)(__int64, _QWORD, __int64))RtlValidateProcessHeapsCallback,
                0LL,
                0) >= 0;
}
