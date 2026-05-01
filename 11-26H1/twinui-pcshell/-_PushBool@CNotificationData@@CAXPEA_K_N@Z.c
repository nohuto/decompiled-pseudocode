/*
 * XREFs of ?_PushBool@CNotificationData@@CAXPEA_K_N@Z @ 0x180684F8C
 * Callers:
 *     ?s_PackKeyboardSetVisibleNotification@CNotificationData@@SAXPEAXW4SetVisibleSource@IhmNotification@@K_N2@Z @ 0x180684FC8 (-s_PackKeyboardSetVisibleNotification@CNotificationData@@SAXPEAXW4SetVisibleSource@IhmNotificati.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TryShowHidesImmediatelyV2@@@details@wil@@QEAA_NXZ @ 0x180474AD0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_TryShowHidesImmediatelyV2@@@detai.c)
 */

void __fastcall CNotificationData::_PushBool(unsigned __int64 *a1, unsigned __int8 a2)
{
  __int64 v2; // rbx

  v2 = a2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TryShowHidesImmediatelyV2>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_TryShowHidesImmediatelyV2>::GetImpl'::`2'::impl);
  *a1 = v2 | (2 * *a1);
}
