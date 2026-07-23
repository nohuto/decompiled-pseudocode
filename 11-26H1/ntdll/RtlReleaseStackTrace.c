/*
 * XREFs of RtlReleaseStackTrace @ 0x180100810
 * Callers:
 *     RtlDeleteCriticalSection @ 0x180067D70 (RtlDeleteCriticalSection.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlReleaseStackTrace(__int64 a1)
{
  if ( RtlpStackTraceDatabase )
    RtlStdReleaseStackTrace((__int64)RtlpStackTraceDatabase, a1);
}
