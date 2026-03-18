/*
 * XREFs of Feature_FixInteractionTrackerScrollDirection__private_IsEnabledDeviceUsageNoInline @ 0x140222C44
 * Callers:
 *     ?WriteChunkMouseInputData@CWheelEvent@CMouseProcessor@@UEBAXPEAU_MOUSE_INPUT_DATA@@@Z @ 0x140192A60 (-WriteChunkMouseInputData@CWheelEvent@CMouseProcessor@@UEBAXPEAU_MOUSE_INPUT_DATA@@@Z.c)
 * Callees:
 *     Feature_FixInteractionTrackerScrollDirection__private_IsEnabledFallback @ 0x140222C7C (Feature_FixInteractionTrackerScrollDirection__private_IsEnabledFallback.c)
 */

__int64 Feature_FixInteractionTrackerScrollDirection__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FixInteractionTrackerScrollDirection__private_featureState & 0x10) != 0 )
    return Feature_FixInteractionTrackerScrollDirection__private_featureState & 1;
  else
    return Feature_FixInteractionTrackerScrollDirection__private_IsEnabledFallback(
             (unsigned int)Feature_FixInteractionTrackerScrollDirection__private_featureState,
             3LL);
}
