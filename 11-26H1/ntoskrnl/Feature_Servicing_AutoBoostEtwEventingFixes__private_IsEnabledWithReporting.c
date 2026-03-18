/*
 * XREFs of Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting @ 0x1404B1670
 * Callers:
 *     EtwTraceAutoBoostConvertWaiterToOwner @ 0x1404B1374 (EtwTraceAutoBoostConvertWaiterToOwner.c)
 *     EtwTraceAutoBoostProcessLockEntry @ 0x1404B141C (EtwTraceAutoBoostProcessLockEntry.c)
 *     EtwTraceAutoBoostSetFloor @ 0x1404B14C4 (EtwTraceAutoBoostSetFloor.c)
 *     EtwTraceAutoBoostClearFloor @ 0x1404B15B0 (EtwTraceAutoBoostClearFloor.c)
 * Callees:
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledNoReportingNoInline @ 0x14052648C (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledNoReportingNoInline.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceOpportunityNoInline @ 0x1406C5FB8 (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceOpportunityNoInline.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceUsageNoInline @ 0x1406C5FF4 (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledOtherReporting @ 0x1406C6030 (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledOtherReporting.c)
 */

__int64 __fastcall Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting(__int64 a1)
{
  switch ( (_DWORD)a1 )
  {
    case 0:
      return Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledNoReportingNoInline(a1, (unsigned __int8)a1);
    case 3:
      return Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceUsageNoInline();
    case 4:
      return Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceOpportunityNoInline();
  }
  return Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledOtherReporting();
}
