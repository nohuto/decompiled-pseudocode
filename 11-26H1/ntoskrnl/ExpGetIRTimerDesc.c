/*
 * XREFs of ExpGetIRTimerDesc @ 0x1404ED6B0
 * Callers:
 *     ExpCheckIRTimerAccess @ 0x140ABD214 (ExpCheckIRTimerAccess.c)
 *     ExStopRecordingIRTimerExpiries @ 0x140B190AC (ExStopRecordingIRTimerExpiries.c)
 *     ExStartRecordingIRTimerExpiries @ 0x140B3DD04 (ExStartRecordingIRTimerExpiries.c)
 * Callees:
 *     <none>
 */

wchar_t **__fastcall ExpGetIRTimerDesc(unsigned int a1)
{
  return &(&ExpIRTimerDescs)[3 * a1];
}
