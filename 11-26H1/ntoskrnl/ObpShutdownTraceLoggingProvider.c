/*
 * XREFs of ObpShutdownTraceLoggingProvider @ 0x140CCDE3C
 * Callers:
 *     ObShutdownSystem @ 0x1407C25A0 (ObShutdownSystem.c)
 * Callees:
 *     EtwUnregister @ 0x140A84ED0 (EtwUnregister.c)
 */

NTSTATUS ObpShutdownTraceLoggingProvider()
{
  REGHANDLE v0; // rcx

  v0 = qword_140E07380;
  qword_140E07380 = 0LL;
  dword_140E07360 = 0;
  return EtwUnregister(v0);
}
