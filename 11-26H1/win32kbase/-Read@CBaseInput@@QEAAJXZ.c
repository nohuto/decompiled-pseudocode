/*
 * XREFs of ?Read@CBaseInput@@QEAAJXZ @ 0x1400976E0
 * Callers:
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1401220B0 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 *     PerfomInitialReadInputOnSharedThread @ 0x1401898F4 (PerfomInitialReadInputOnSharedThread.c)
 *     PerfomInitialReadInputExplicitly @ 0x14018F3BC (PerfomInitialReadInputExplicitly.c)
 * Callees:
 *     RIMReadInput @ 0x1400979E0 (RIMReadInput.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CBaseInput::Read(CBaseInput *this)
{
  if ( !*((_QWORD *)this + 37) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 997LL);
  return RIMReadInput(*((HANDLE *)this + 1), 0, (__int64)this + 48, (__int64)this + 24, (__int64)this + 32);
}
