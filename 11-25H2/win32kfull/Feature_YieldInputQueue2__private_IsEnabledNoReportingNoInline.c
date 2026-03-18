/*
 * XREFs of Feature_YieldInputQueue2__private_IsEnabledNoReportingNoInline @ 0x140281CE0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x14011559C (xxxRealInternalGetMessage.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x14018B600 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1@Z @ 0x14023EDC0 (-xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1@Z.c)
 * Callees:
 *     Feature_YieldInputQueue2__private_IsEnabledFallback @ 0x140281CC4 (Feature_YieldInputQueue2__private_IsEnabledFallback.c)
 */

__int64 Feature_YieldInputQueue2__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_YieldInputQueue2__private_featureState & 2) != 0 )
    return Feature_YieldInputQueue2__private_featureState & 1;
  else
    return Feature_YieldInputQueue2__private_IsEnabledFallback(
             (unsigned int)Feature_YieldInputQueue2__private_featureState,
             0);
}
