/*
 * XREFs of HalpCheckAndReportGhes @ 0x1404DC5EC
 * Callers:
 *     HalpGenericPolledWorkerRoutine @ 0x1404DC580 (HalpGenericPolledWorkerRoutine.c)
 *     HalHandleNMI @ 0x14057EA20 (HalHandleNMI.c)
 *     HalpPeiInterruptHandler @ 0x14058E390 (HalpPeiInterruptHandler.c)
 *     HalpInitializeGenericErrorSource @ 0x140BEC3F8 (HalpInitializeGenericErrorSource.c)
 * Callees:
 *     WheaReportHwError @ 0x1403DDD80 (WheaReportHwError.c)
 *     HalpReadGenericErrorInfo @ 0x1404DC648 (HalpReadGenericErrorInfo.c)
 *     HalpSignalRAS @ 0x14058E45C (HalpSignalRAS.c)
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
