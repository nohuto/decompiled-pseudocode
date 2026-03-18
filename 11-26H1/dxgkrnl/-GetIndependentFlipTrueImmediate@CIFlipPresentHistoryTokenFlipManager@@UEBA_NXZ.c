/*
 * XREFs of ?GetIndependentFlipTrueImmediate@CIFlipPresentHistoryTokenFlipManager@@UEBA_NXZ @ 0x14001AF80
 * Callers:
 *     <none>
 * Callees:
 *     Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline @ 0x14001B070 (Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline.c)
 */

bool __fastcall CIFlipPresentHistoryTokenFlipManager::GetIndependentFlipTrueImmediate(
        CIFlipPresentHistoryTokenFlipManager *this)
{
  char v2; // bl
  __int64 v4; // rdx

  v2 = 0;
  if ( (unsigned int)Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline() )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 80LL) + 8LL);
    if ( v4 )
      return *(_BYTE *)(v4 + 14) != 0;
  }
  return v2;
}
