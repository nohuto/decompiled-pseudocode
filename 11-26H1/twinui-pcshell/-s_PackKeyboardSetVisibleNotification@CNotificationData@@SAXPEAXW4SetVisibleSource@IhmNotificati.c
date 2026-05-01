/*
 * XREFs of ?s_PackKeyboardSetVisibleNotification@CNotificationData@@SAXPEAXW4SetVisibleSource@IhmNotification@@K_N2@Z @ 0x180684FC8
 * Callers:
 *     ?SendKeyboardSetVisible@IhmNotification@@YAXW4SetVisibleSource@1@K_N1@Z @ 0x180684EE4 (-SendKeyboardSetVisible@IhmNotification@@YAXW4SetVisibleSource@1@K_N1@Z.c)
 * Callees:
 *     ?BoolToQword@QwordHelpers@@YA_K_N@Z @ 0x1801F3200 (-BoolToQword@QwordHelpers@@YA_K_N@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TryShowHidesImmediatelyV2@@@details@wil@@QEAA_NXZ @ 0x180474AD0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_TryShowHidesImmediatelyV2@@@detai.c)
 *     memcpy_s_4 @ 0x18067D5D8 (memcpy_s_4.c)
 *     ?Uint64ToQword@QwordHelpers@@YA_K_K@Z @ 0x180684F50 (-Uint64ToQword@QwordHelpers@@YA_K_K@Z.c)
 *     ?_PushBool@CNotificationData@@CAXPEA_K_N@Z @ 0x180684F8C (-_PushBool@CNotificationData@@CAXPEA_K_N@Z.c)
 */

unsigned __int64 __fastcall CNotificationData::s_PackKeyboardSetVisibleNotification(
        _QWORD *a1,
        unsigned __int8 a2,
        int a3,
        unsigned __int8 a4,
        unsigned __int8 a5)
{
  QwordHelpers *v9; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v11; // rax
  QwordHelpers *v12; // rcx
  QwordHelpers *Source; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 Destination; // [rsp+28h] [rbp-10h] BYREF

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_TryShowHidesImmediatelyV2>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_TryShowHidesImmediatelyV2>::GetImpl'::`2'::impl) )
  {
    Source = (QwordHelpers *)a2;
    CNotificationData::_PushBool((unsigned __int64 *)&Source, a4);
    CNotificationData::_PushBool((unsigned __int64 *)&Source, a5);
    *a1 = QwordHelpers::Uint64ToQword(Source);
    LODWORD(Source) = a3;
    Destination = 0LL;
    memcpy_s_4(&Destination, 8uLL, &Source, 4uLL);
    result = Destination;
  }
  else
  {
    LOBYTE(v9) = a4;
    v11 = QwordHelpers::BoolToQword(v9);
    LOBYTE(v12) = a5;
    *a1 = v11;
    result = QwordHelpers::BoolToQword(v12);
  }
  a1[1] = result;
  return result;
}
