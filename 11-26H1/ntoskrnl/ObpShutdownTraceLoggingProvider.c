/*
 * XREFs of ObpShutdownTraceLoggingProvider @ 0x140CD3F9C
 * Callers:
 *     ObShutdownSystem @ 0x1407C5600 (ObShutdownSystem.c)
 * Callees:
 *     EtwUnregister @ 0x1409BE550 (EtwUnregister.c)
 */

NTSTATUS ObpShutdownTraceLoggingProvider()
{
  REGHANDLE v0; // rcx

  v0 = qword_140E07380;
  qword_140E07380 = 0LL;
  dword_140E07360 = 0;
  return EtwUnregister(v0);
}
