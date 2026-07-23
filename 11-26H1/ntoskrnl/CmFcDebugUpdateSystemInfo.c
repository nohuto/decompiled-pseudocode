/*
 * XREFs of CmFcDebugUpdateSystemInfo @ 0x1406E7260
 * Callers:
 *     CmFcInitSystem1 @ 0x140CF3E50 (CmFcInitSystem1.c)
 * Callees:
 *     CmFcpComputeLatestMarker @ 0x1406E7300 (CmFcpComputeLatestMarker.c)
 *     Feature_TestCurrentBundleOn_Flag__private_IsEnabledNoReportingNoInline @ 0x1406E7890 (Feature_TestCurrentBundleOn_Flag__private_IsEnabledNoReportingNoInline.c)
 *     Feature_TestReadyFlag__private_IsEnabledNoReportingNoInline @ 0x1406E7998 (Feature_TestReadyFlag__private_IsEnabledNoReportingNoInline.c)
 *     Feature_UxAccOptimization__private_IsEnabledNoReportingNoInline @ 0x1406E7AA0 (Feature_UxAccOptimization__private_IsEnabledNoReportingNoInline.c)
 */

__int64 CmFcDebugUpdateSystemInfo()
{
  int v0; // ecx
  __int64 result; // rax

  HIDWORD(stru_140E3EAA8.WriteTransferCount) = 1;
  HIDWORD(stru_140E3EAA8.WriteTransferCount) = ((CmFcpComputeLatestMarker() & 0xFFF) << 6) | 1;
  HIDWORD(stru_140E3EAA8.WriteTransferCount) = ((unsigned int)Feature_UxAccOptimization__private_IsEnabledNoReportingNoInline() != 0
                                              ? 0x40000
                                              : 0) | HIDWORD(stru_140E3EAA8.WriteTransferCount) & 0xFFFBFFFF;
  HIDWORD(stru_140E3EAA8.WriteTransferCount) = ((unsigned int)Feature_TestReadyFlag__private_IsEnabledNoReportingNoInline() != 0
                                              ? 0x80000
                                              : 0) | HIDWORD(stru_140E3EAA8.WriteTransferCount) & 0xFFF7FFFF;
  v0 = (unsigned int)Feature_TestCurrentBundleOn_Flag__private_IsEnabledNoReportingNoInline() != 0 ? 0x100000 : 0;
  result = v0 | HIDWORD(stru_140E3EAA8.WriteTransferCount) & 0xFFEFFFFF;
  HIDWORD(stru_140E3EAA8.WriteTransferCount) = v0 | HIDWORD(stru_140E3EAA8.WriteTransferCount) & 0xFFEFFFFF;
  return result;
}
