/*
 * XREFs of LdrpUMGLTracingStateChangeNotification @ 0x18015C2A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x180091420 (RtlpEnumProcessHeaps.c)
 */

__int64 LdrpUMGLTracingStateChangeNotification()
{
  RtlpEnumProcessHeaps(
    (__int64 (__fastcall *)(__int64, _QWORD, __int64))RtlpSynchronizeHeapLoggingStateCallback,
    0LL,
    4);
  return 0LL;
}
