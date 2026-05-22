/*
 * XREFs of ??1?$variant@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@UHeatHingeAngleContextMessage@@UHeatDisplayOcclusionContextMessage@@UHeatVirtualTouchpadContextMessage@@UHeatTouchpadEnabledContextMessage@@UHeatTouchpadHapticConfigContextMessage@@UHeatTouchpadClickForceSensitivityContextMessage@@@std@@QEAA@XZ @ 0x180197204
 * Callers:
 *     _ISMHeatFrameworkHost::BroadcastContextMessage_::_1_::dtor$0 @ 0x1801DC8ED (_ISMHeatFrameworkHost--BroadcastContextMessage_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::variant<std::monostate,HeatInputConfigContextMessage,HeatLowPowerStateContextMessage,HeatHingeAngleContextMessage,HeatDisplayOcclusionContextMessage,HeatVirtualTouchpadContextMessage,HeatTouchpadEnabledContextMessage,HeatTouchpadHapticConfigContextMessage,HeatTouchpadClickForceSensitivityContextMessage>::~variant<std::monostate,HeatInputConfigContextMessage,HeatLowPowerStateContextMessage,HeatHingeAngleContextMessage,HeatDisplayOcclusionContextMessage,HeatVirtualTouchpadContextMessage,HeatTouchpadEnabledContextMessage,HeatTouchpadHapticConfigContextMessage,HeatTouchpadClickForceSensitivityContextMessage>(
        __int64 a1,
        __int64 a2)
{
  std::_Variant_raw_visit1<2>::_Visit<_lambda_932298db0fc7a8424d9a6eaff3f3fd49_,std::_Variant_storage_<0,std::monostate,HeatInputConfigContextMessage,HeatLowPowerStateContextMessage,HeatHingeAngleContextMessage,HeatDisplayOcclusionContextMessage,HeatVirtualTouchpadContextMessage,HeatTouchpadEnabledContextMessage,HeatTouchpadHapticConfigContextMessage,HeatTouchpadClickForceSensitivityContextMessage> &>(
    *(char *)(a1 + 64) + 1LL,
    a2,
    (void **)a1);
}
