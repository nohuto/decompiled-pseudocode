/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationSpecificEndpointInfo@@@WRL@Microsoft@@UEAA@XZ @ 0x18002ECFC
 * Callers:
 *     _ApplicationSpecificEndpointInfo::ApplicationSpecificEndpointInfo_::_1_::dtor$0 @ 0x18004BD32 (_ApplicationSpecificEndpointInfo--ApplicationSpecificEndpointInfo_--_1_--dtor$0.c)
 *     _CEndpointVolumeStateManager::CEndpointVolumeStateManager_::_1_::dtor$0 @ 0x18004C926 (_CEndpointVolumeStateManager--CEndpointVolumeStateManager_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationSpecificEndpointInfo>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationSpecificEndpointInfo>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 12) = -1073741823;
}
