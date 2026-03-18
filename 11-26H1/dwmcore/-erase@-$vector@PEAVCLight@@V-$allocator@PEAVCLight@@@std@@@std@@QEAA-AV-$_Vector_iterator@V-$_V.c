/*
 * XREFs of ?erase@?$vector@PEAVCLight@@V?$allocator@PEAVCLight@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCLight@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCLight@@@std@@@std@@@2@@Z @ 0x1800FC340
 * Callers:
 *     ??1CProcessAttribution@@UEAA@XZ @ 0x180162FAC (--1CProcessAttribution@@UEAA@XZ.c)
 *     ?ClearReceivers@CProjectedShadowScene@@AEAAXXZ @ 0x180190DE8 (-ClearReceivers@CProjectedShadowScene@@AEAAXXZ.c)
 *     ?ClearCasters@CProjectedShadowScene@@AEAAXXZ @ 0x180208DC8 (-ClearCasters@CProjectedShadowScene@@AEAAXXZ.c)
 *     ?UnregisterSuperWetInkVisual@CSuperWetInkManager@@QEAAXPEAVCVisual@@@Z @ 0x18021CD94 (-UnregisterSuperWetInkVisual@CSuperWetInkManager@@QEAAXPEAVCVisual@@@Z.c)
 *     ?RemoveCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z @ 0x18022B188 (-RemoveCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z.c)
 *     ?RemoveLight@CVisual@@QEAAXPEAVCLight@@W4LightBehavior@@@Z @ 0x180260E88 (-RemoveLight@CVisual@@QEAAXPEAVCLight@@W4LightBehavior@@@Z.c)
 *     ?RemoveExcludedTargetVisual@CLight@@UEAAXPEAVCVisual@@@Z @ 0x180264B80 (-RemoveExcludedTargetVisual@CLight@@UEAAXPEAVCVisual@@@Z.c)
 *     ?RemoveTargetVisual@CLight@@UEAAXPEAVCVisual@@@Z @ 0x180264BD0 (-RemoveTargetVisual@CLight@@UEAAXPEAVCVisual@@@Z.c)
 *     ?RemoveResourceNotifier@?$CDeviceResourceT@V?$CMILCOMBaseT@VISwapChainRealization@@VIDeviceResource@@VCMilObjectDeleter@@@@@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1802AE2D0 (-RemoveResourceNotifier@-$CDeviceResourceT@V-$CMILCOMBaseT@VISwapChainRealization@@VIDeviceResou.c)
 * Callees:
 *     ??$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@00@Z @ 0x18000A70C (--$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAP.c)
 */

_QWORD *__fastcall std::vector<CLight *>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *result; // rax

  std::_Copy_memmove<CProcessAttributionManager::ProcessAttributionRecord * *,CProcessAttributionManager::ProcessAttributionRecord * *>(
    (void *)(a3 + 8),
    *(_QWORD *)(a1 + 8),
    (void *)a3);
  *(_QWORD *)(a1 + 8) -= 8LL;
  result = a2;
  *a2 = a3;
  return result;
}
