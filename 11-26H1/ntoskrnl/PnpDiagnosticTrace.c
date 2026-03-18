/*
 * XREFs of PnpDiagnosticTrace @ 0x140493DF8
 * Callers:
 *     PnpDiagnosticTraceDeviceOperation @ 0x140493C2C (PnpDiagnosticTraceDeviceOperation.c)
 *     PnpDiagnosticTraceDriverFullInfo @ 0x140493D10 (PnpDiagnosticTraceDriverFullInfo.c)
 *     PnpCompleteSystemStartProcess @ 0x1405257B0 (PnpCompleteSystemStartProcess.c)
 *     PnpDiagnosticTraceAppVeto @ 0x1405DBAFC (PnpDiagnosticTraceAppVeto.c)
 *     PiProcessStartSystemDevices @ 0x1407A521C (PiProcessStartSystemDevices.c)
 *     IopLoadDriver @ 0x140A26FC4 (IopLoadDriver.c)
 *     IopCallBootDriverReinitializationRoutines @ 0x140CBE5BC (IopCallBootDriverReinitializationRoutines.c)
 *     IopInitializeBootDrivers @ 0x140CBF2A4 (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140CBFDA0 (IopInitializePlugPlayServices.c)
 *     IopInitializeSystemDrivers @ 0x140D04488 (IopInitializeSystemDrivers.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 */

NTSTATUS __fastcall PnpDiagnosticTrace(
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, EventDescriptor) )
    return EtwWriteEx(PnpEtwHandle, EventDescriptor, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
  else
    return 0;
}
