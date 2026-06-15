/*
 * XREFs of ?GetConnectorProcessingModeCount@EffectPack@@QEAAIW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180049C90
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004A3BC (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 * Callees:
 *     ?GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@W4SED_RESOLVEOPT@@@Z @ 0x18000EDF0 (-GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MID.c)
 */

__int64 __fastcall EffectPack::GetConnectorProcessingModeCount(
        struct _RTL_CRITICAL_SECTION *this,
        struct _RTL_CRITICAL_SECTION *a2)
{
  return *(unsigned int *)(EffectPack::GetSupportedConnectorModesInternal(this, a2, 0LL, 0) + 8);
}
