/*
 * XREFs of ExpGetIRTimerDesc @ 0x1404E6C90
 * Callers:
 *     ExpCheckIRTimerAccess @ 0x140ABF674 (ExpCheckIRTimerAccess.c)
 *     ExStopRecordingIRTimerExpiries @ 0x140B1B4F4 (ExStopRecordingIRTimerExpiries.c)
 *     ExStartRecordingIRTimerExpiries @ 0x140B3FDE4 (ExStartRecordingIRTimerExpiries.c)
 * Callees:
 *     <none>
 */

wchar_t **__fastcall ExpGetIRTimerDesc(unsigned int a1)
{
  return &(&ExpIRTimerDescs)[3 * a1];
}
