/*
 * XREFs of Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x140276FFC
 * Callers:
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x140139D58 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 *     EditionInitiateMouseEventProcessing @ 0x140238610 (EditionInitiateMouseEventProcessing.c)
 *     RawInputThread @ 0x140238B50 (RawInputThread.c)
 *     xxxCleanupThreadPointerInputInfo @ 0x1402471B0 (xxxCleanupThreadPointerInputInfo.c)
 *     EditionActivateMitInput @ 0x140247220 (EditionActivateMitInput.c)
 *     EditionDeactivateMitInput @ 0x140247350 (EditionDeactivateMitInput.c)
 *     ?xxxSendInput@@YAIIPEAUtagINPUT@@@Z @ 0x140276408 (-xxxSendInput@@YAIIPEAUtagINPUT@@@Z.c)
 *     ?xxxSendInputEx@@YAIIPEAUtagINPUT@@@Z @ 0x1402769F4 (-xxxSendInputEx@@YAIIPEAUtagINPUT@@@Z.c)
 *     EditionExtensibility_WakeMITForInterceptCallout @ 0x140276EE0 (EditionExtensibility_WakeMITForInterceptCallout.c)
 *     EditionPrepareHidForInputThreadMigration @ 0x14027C330 (EditionPrepareHidForInputThreadMigration.c)
 * Callees:
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledFallback @ 0x140277034 (Feature_EliminateMitRitHandoff2__private_IsEnabledFallback.c)
 */

__int64 Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_EliminateMitRitHandoff2__private_featureState & 0x10) != 0 )
    return Feature_EliminateMitRitHandoff2__private_featureState & 1;
  else
    return Feature_EliminateMitRitHandoff2__private_IsEnabledFallback(
             (unsigned int)Feature_EliminateMitRitHandoff2__private_featureState,
             3LL);
}
