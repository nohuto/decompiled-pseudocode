/*
 * XREFs of Feature_MiPTransform__private_IsEnabledDeviceUsageNoInline @ 0x140281B90
 * Callers:
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x14023EA98 (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     Feature_MiPTransform__private_IsEnabledFallback @ 0x140281BC8 (Feature_MiPTransform__private_IsEnabledFallback.c)
 */

__int64 Feature_MiPTransform__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_MiPTransform__private_featureState & 0x10) != 0 )
    return Feature_MiPTransform__private_featureState & 1;
  else
    return Feature_MiPTransform__private_IsEnabledFallback(
             (unsigned int)Feature_MiPTransform__private_featureState,
             3LL);
}
