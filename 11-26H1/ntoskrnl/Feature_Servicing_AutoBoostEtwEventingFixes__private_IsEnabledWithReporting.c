/*
 * XREFs of Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting @ 0x1404AAD00
 * Callers:
 *     EtwTraceAutoBoostConvertWaiterToOwner @ 0x1404AAA04 (EtwTraceAutoBoostConvertWaiterToOwner.c)
 *     EtwTraceAutoBoostProcessLockEntry @ 0x1404AAAAC (EtwTraceAutoBoostProcessLockEntry.c)
 *     EtwTraceAutoBoostSetFloor @ 0x1404AAB54 (EtwTraceAutoBoostSetFloor.c)
 *     EtwTraceAutoBoostClearFloor @ 0x1404AAC40 (EtwTraceAutoBoostClearFloor.c)
 * Callees:
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledNoReportingNoInline @ 0x140528AFC (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledNoReportingNoInline.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceOpportunityNoInline @ 0x1406C9C54 (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceOpportunityNoInline.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceUsageNoInline @ 0x1406C9C90 (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledOtherReporting @ 0x1406C9CCC (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledOtherReporting.c)
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
