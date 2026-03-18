/*
 * XREFs of Feature_CaptionTruncatedUTF8CodePage__private_IsEnabledDeviceUsageNoInline @ 0x1402BA358
 * Callers:
 *     SfnINLPCREATESTRUCT @ 0x140258460 (SfnINLPCREATESTRUCT.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z @ 0x1402B9BB8 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z.c)
 * Callees:
 *     Feature_CaptionTruncatedUTF8CodePage__private_IsEnabledFallback @ 0x1402BA390 (Feature_CaptionTruncatedUTF8CodePage__private_IsEnabledFallback.c)
 */

__int64 Feature_CaptionTruncatedUTF8CodePage__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CaptionTruncatedUTF8CodePage__private_featureState & 0x10) != 0 )
    return Feature_CaptionTruncatedUTF8CodePage__private_featureState & 1;
  else
    return Feature_CaptionTruncatedUTF8CodePage__private_IsEnabledFallback(
             (unsigned int)Feature_CaptionTruncatedUTF8CodePage__private_featureState,
             3LL);
}
