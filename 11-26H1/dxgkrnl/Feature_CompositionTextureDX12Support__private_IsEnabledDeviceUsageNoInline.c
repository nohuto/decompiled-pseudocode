/*
 * XREFs of Feature_CompositionTextureDX12Support__private_IsEnabledDeviceUsageNoInline @ 0x1400674B8
 * Callers:
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x1400673F4 (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 * Callees:
 *     Feature_CompositionTextureDX12Support__private_IsEnabledFallback @ 0x140067900 (Feature_CompositionTextureDX12Support__private_IsEnabledFallback.c)
 */

__int64 Feature_CompositionTextureDX12Support__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CompositionTextureDX12Support__private_featureState & 0x10) != 0 )
    return Feature_CompositionTextureDX12Support__private_featureState & 1;
  else
    return Feature_CompositionTextureDX12Support__private_IsEnabledFallback(
             (unsigned int)Feature_CompositionTextureDX12Support__private_featureState,
             3LL);
}
