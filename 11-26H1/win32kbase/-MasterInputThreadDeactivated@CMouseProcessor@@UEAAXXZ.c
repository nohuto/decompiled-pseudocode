/*
 * XREFs of ?MasterInputThreadDeactivated@CMouseProcessor@@UEAAXXZ @ 0x140188F50
 * Callers:
 *     <none>
 * Callees:
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 *     ?HandleMITTermination@CMouseProcessor@@AEAAXXZ @ 0x140188F9C (-HandleMITTermination@CMouseProcessor@@AEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CMouseProcessor::MasterInputThreadDeactivated(CMouseProcessor *this, int a2, int a3)
{
  if ( !IsInputThread((int)this, a2, a3) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 805LL);
  CMouseProcessor::HandleMITTermination(this);
  *((_DWORD *)this + 2) = 1;
}
