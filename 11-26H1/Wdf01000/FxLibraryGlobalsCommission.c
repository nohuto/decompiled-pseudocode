/*
 * XREFs of FxLibraryGlobalsCommission @ 0x140096534
 * Callers:
 *     FxLibraryCommonCommission @ 0x14008E93C (FxLibraryCommonCommission.c)
 * Callees:
 *     FxLibraryGlobalsQueryRegistrySettings @ 0x1400967C8 (FxLibraryGlobalsQueryRegistrySettings.c)
 *     FxInitializeBugCheckDriverInfo @ 0x1400AC170 (FxInitializeBugCheckDriverInfo.c)
 */

NTSTATUS __fastcall FxLibraryGlobalsCommission()
{
  PVOID SystemRoutineAddress; // rax
  NTSTATUS result; // eax
  _UNICODE_STRING funcName; // [rsp+30h] [rbp-18h] BYREF

  unk_1400C9090 = 0;
  unk_1400C90D8 = 0;
  unk_1400C90DA = 0;
  FxLibraryGlobalsQueryRegistrySettings();
  if ( unk_1400C90DC )
    unk_1400C8EE0 = VfQueryDispatchTable(7LL, 24LL);
  else
    unk_1400C8EE0 = 0LL;
  funcName = 0LL;
  RtlInitUnicodeString(&funcName, L"IoConnectInterruptEx");
  WPP_GLOBAL_WDF_Control.Reserved = MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"IoDisconnectInterruptEx");
  *((_QWORD *)&WPP_GLOBAL_WDF_Control.Reserved + 1) = MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"IoReportInterruptActive");
  unk_1400C8ED0 = MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"IoReportInterruptInactive");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&funcName);
  VersionInformation.dwOSVersionInfoSize = 284;
  unk_1400C8ED8 = SystemRoutineAddress;
  RtlGetVersion(&VersionInformation);
  qword_1400C9010 = 0LL;
  unk_1400C9092 = 0;
  unk_1400C9094 = 0;
  unk_1400C9020 = &qword_1400C9018;
  qword_1400C9018 = &qword_1400C9018;
  unk_1400C9008 = 1;
  FxInitializeBugCheckDriverInfo();
  unk_1400C9080 = 0LL;
  ImageSectionHandle = 0LL;
  unk_1400C9070 = 0LL;
  unk_1400C90A0 = 0;
  result = WmiQueryTraceInformation(WdfNotifyRoutinesClass, &qword_1400C90A8, 8u, 0LL, 0LL);
  if ( result < 0 )
  {
    xmmword_1400C90B0 = 0LL;
    qword_1400C90A8 = &xmmword_1400C90B0;
    result = 0;
    LODWORD(xmmword_1400C90B0) = 32;
    unk_1400C90C0 = 0LL;
  }
  return result;
}
