/*
 * XREFs of ??1BufferedMouseInputList@CMouseProcessor@@QEAA@XZ @ 0x140222958
 * Callers:
 *     ??1CMouseProcessor@@QEAA@XZ @ 0x140222990 (--1CMouseProcessor@@QEAA@XZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CMouseProcessor::BufferedMouseInputList::~BufferedMouseInputList(
        CMouseProcessor::BufferedMouseInputList **this)
{
  if ( this[1] != (CMouseProcessor::BufferedMouseInputList *)(this + 1) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 7414);
}
