/*
 * XREFs of HalpCheckAndReportGhes @ 0x1404D5CCC
 * Callers:
 *     HalpGenericPolledWorkerRoutine @ 0x1404D5C60 (HalpGenericPolledWorkerRoutine.c)
 *     HalHandleNMI @ 0x140580F40 (HalHandleNMI.c)
 *     HalpPeiInterruptHandler @ 0x140590B10 (HalpPeiInterruptHandler.c)
 *     HalpInitializeGenericErrorSource @ 0x140BF23F8 (HalpInitializeGenericErrorSource.c)
 * Callees:
 *     WheaReportHwError @ 0x1403E0F70 (WheaReportHwError.c)
 *     HalpReadGenericErrorInfo @ 0x1404D5D28 (HalpReadGenericErrorInfo.c)
 *     HalpSignalRAS @ 0x140590BDC (HalpSignalRAS.c)
 */

char __fastcall HalpCheckAndReportGhes(__int64 a1)
{
  char v2; // di

  v2 = 0;
  if ( (int)HalpReadGenericErrorInfo() >= 0 )
  {
    PshedRetrieveErrorInfo(*(_QWORD *)(a1 + 24), a1 + 88);
    if ( *(_DWORD *)(a1 + 96) == 12 )
      HalpSignalRAS(a1);
    WheaReportHwError(*(_QWORD *)(a1 + 24));
    return 1;
  }
  return v2;
}
