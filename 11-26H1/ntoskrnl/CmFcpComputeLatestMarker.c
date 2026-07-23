/*
 * XREFs of CmFcpComputeLatestMarker @ 0x1406E7300
 * Callers:
 *     CmFcDebugUpdateSystemInfo @ 0x1406E7260 (CmFcDebugUpdateSystemInfo.c)
 * Callees:
 *     Feature_ConfAccImp__private_IsEnabledNoReportingNoInline @ 0x1406E7788 (Feature_ConfAccImp__private_IsEnabledNoReportingNoInline.c)
 *     Feature_ExpToc__private_IsEnabledNoReportingNoInline @ 0x1406E77E0 (Feature_ExpToc__private_IsEnabledNoReportingNoInline.c)
 *     Feature_LocPerfVal__private_IsEnabledNoReportingNoInline @ 0x1406E7838 (Feature_LocPerfVal__private_IsEnabledNoReportingNoInline.c)
 *     Feature_TestLoc02__private_IsEnabledNoReportingNoInline @ 0x1406E78E8 (Feature_TestLoc02__private_IsEnabledNoReportingNoInline.c)
 *     Feature_TestLoc03__private_IsEnabledNoReportingNoInline @ 0x1406E7940 (Feature_TestLoc03__private_IsEnabledNoReportingNoInline.c)
 *     Feature_TestUex12__private_IsEnabledNoReportingNoInline @ 0x1406E79F0 (Feature_TestUex12__private_IsEnabledNoReportingNoInline.c)
 *     Feature_TestUxGate__private_IsEnabledNoReportingNoInline @ 0x1406E7A48 (Feature_TestUxGate__private_IsEnabledNoReportingNoInline.c)
 *     Feature_ValUxPerf2__private_IsEnabledNoReportingNoInline @ 0x1406E7AF8 (Feature_ValUxPerf2__private_IsEnabledNoReportingNoInline.c)
 */

__int64 CmFcpComputeLatestMarker()
{
  if ( (unsigned int)Feature_ExpToc__private_IsEnabledNoReportingNoInline() )
    return 2611LL;
  if ( (unsigned int)Feature_ValUxPerf2__private_IsEnabledNoReportingNoInline() )
    return 2610LL;
  if ( (unsigned int)Feature_ConfAccImp__private_IsEnabledNoReportingNoInline() )
    return 2609LL;
  if ( (unsigned int)Feature_TestUxGate__private_IsEnabledNoReportingNoInline() )
    return 2608LL;
  if ( (unsigned int)Feature_LocPerfVal__private_IsEnabledNoReportingNoInline() )
    return 2607LL;
  if ( (unsigned int)Feature_TestLoc03__private_IsEnabledNoReportingNoInline() )
    return 2606LL;
  if ( (unsigned int)Feature_TestLoc02__private_IsEnabledNoReportingNoInline() )
    return 2605LL;
  return (unsigned int)((unsigned int)Feature_TestUex12__private_IsEnabledNoReportingNoInline() != 0) + 2603;
}
