/*
 * XREFs of FxLibraryCommonCommission @ 0x14008E93C
 * Callers:
 *     LibraryCommission @ 0x140085FF0 (LibraryCommission.c)
 * Callees:
 *     ?GetTriageInfo@@YAXXZ @ 0x14008E61C (-GetTriageInfo@@YAXXZ.c)
 *     FxLibraryGlobalsCommission @ 0x140096534 (FxLibraryGlobalsCommission.c)
 *     InitializeTelemetryAssertsKMWorkerInternal @ 0x1400AB9A8 (InitializeTelemetryAssertsKMWorkerInternal.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1400DA4A0 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall FxLibraryCommonCommission()
{
  void (__fastcall *v0)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *); // rdx
  int v1; // ebx
  void *v2; // r8
  _STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  _STRING v5; // [rsp+40h] [rbp-18h] BYREF

  if ( WdfLdrDbgPrintOn )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryCommission\n");
  }
  v1 = FxLibraryGlobalsCommission();
  if ( v1 >= 0 )
  {
    DestinationString = 0LL;
    if ( !_InterlockedExchangeAdd(&g_AssertsOperational, 0) )
    {
      RtlInitAnsiString(&DestinationString, "wdf01000.sys");
      v5 = DestinationString;
      InitializeTelemetryAssertsKMWorkerInternal(&v5);
    }
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&Tlgg_TelemetryProviderProv, v0, v2);
    WPP_GLOBAL_WDF_Control.NextDevice = 0LL;
    WPP_GLOBAL_WDF_Control.DriverObject = (_DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_KmdfTraceGuid;
    LOWORD(WPP_GLOBAL_WDF_Control.Vpb) = 257;
    WPP_GLOBAL_WDF_Control.CurrentIrp = (_IRP *)L"KmdfTraceGuid";
    WPP_GLOBAL_WDF_Control.Timer = (_IO_TIMER *)L" TRACINGFULL TRACINGERROR TRACINGDBGPRINT TRACINGFRAMEWORKS TRACINGAPI T"
                                                 "RACINGAPIERROR TRACINGRESOURCES TRACINGLOCKING TRACINGCONTEXT TRACINGPO"
                                                 "OL TRACINGHANDLE TRACINGPNP TRACINGIO TRACINGIOTARGET TRACINGDMA TRACIN"
                                                 "GREQUEST TRACINGDRIVER TRACINGDEVICE TRACINGUSEROBJECT TRACINGOBJECT TR"
                                                 "ACINGPNPPOWERSTATES TRACINGIFRCAPTURE";
    *(_QWORD *)&WPP_GLOBAL_WDF_Control.Type = WppTraceCallbackWdf;
    IoWMIRegistrationControl(&WPP_GLOBAL_WDF_Control, 0x80000001);
    unk_1400C9068 = 1;
    gOsVersion.dwOSVersionInfoSize = 276;
    RtlGetVersion(&gOsVersion);
    if ( WdfLdrDbgPrintOn )
    {
      DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
      DbgPrintEx(0x65u, 0, "OsVersion(%d.%d)\n", gOsVersion.dwMajorVersion, gOsVersion.dwMinorVersion);
    }
    GetTriageInfo();
    return 0LL;
  }
  else
  {
    if ( WdfLdrDbgPrintOn )
    {
      DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
      DbgPrintEx(0x65u, 0, "FxLibraryGlobalsCommission failed %X\n", v1);
    }
    return (unsigned int)v1;
  }
}
