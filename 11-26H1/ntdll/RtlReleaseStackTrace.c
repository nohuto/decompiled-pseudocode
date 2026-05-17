/*
 * XREFs of RtlReleaseStackTrace @ 0x1801010C0
 * Callers:
 *     RtlDeleteCriticalSection @ 0x180079550 (RtlDeleteCriticalSection.c)
 * Callees:
 *     <none>
 */

struct _TEB *__fastcall RtlReleaseStackTrace(__int64 *a1)
{
  struct _TEB *result; // rax

  if ( RtlpStackTraceDatabase )
    return RtlStdReleaseStackTrace(RtlpStackTraceDatabase, a1);
  return result;
}
