/*
 * XREFs of ??0?$forward_list@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18001E360
 * Callers:
 *     ?ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV?$function@$$A6AJAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x18001D138 (-ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV-$function@$$A6AJAEAV-$com_ptr_t@VCEndpointStor.c)
 *     ??0CAudioSession@@IEAA@XZ @ 0x180042740 (--0CAudioSession@@IEAA@XZ.c)
 *     ??0CEndpointStore@@QEAA@XZ @ 0x18007A740 (--0CEndpointStore@@QEAA@XZ.c)
 *     ??0CEndpointStoreCache@@QEAA@XZ @ 0x1800AE1DC (--0CEndpointStoreCache@@QEAA@XZ.c)
 *     ??0CAudioSessionManager@@QEAA@XZ @ 0x1800B105C (--0CAudioSessionManager@@QEAA@XZ.c)
 *     ??0CAudioRenderEndpointChangeDelegator@@QEAA@XZ @ 0x1800C40B0 (--0CAudioRenderEndpointChangeDelegator@@QEAA@XZ.c)
 *     ?FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStreamGroups@CBtAudioResourceManagerBase@@IEAAJPEAVCEndpointStore@@PEA_N@Z @ 0x1800E2278 (-FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStreamGroups@CBtAudioResourceManagerBase@@IEAA.c)
 *     ?RefreshStreamsOnDevice@CBtAudioResourceManagerBase@@IEAAJW4ReconnectSaDeviceOptions@1@@Z @ 0x1800E53B0 (-RefreshStreamsOnDevice@CBtAudioResourceManagerBase@@IEAAJW4ReconnectSaDeviceOptions@1@@Z.c)
 *     ?ReleaseResources@CBtAudioResourceManagerBase@@UEAAJXZ @ 0x1800E5D20 (-ReleaseResources@CBtAudioResourceManagerBase@@UEAAJXZ.c)
 *     ?ReleaseSaDevices@CBtAudioResourceManagerBase@@IEAAJPEAVCEndpointStore@@AEAV?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@@Z @ 0x1800E5F00 (-ReleaseSaDevices@CBtAudioResourceManagerBase@@IEAAJPEAVCEndpointStore@@AEAV-$forward_list@UDisp.c)
 *     ??$Make@VToken@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VToken@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@@12@XZ @ 0x1800F6A0C (--$Make@VToken@-$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@$$V@Details@WRL.c)
 *     ??$MakeAndInitialize@VCBluetoothAudioEndpointResourceManagerProvider@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCBluetoothAudioEndpointResourceManagerProvider@@@Z @ 0x1800F6BA8 (--$MakeAndInitialize@VCBluetoothAudioEndpointResourceManagerProvider@@V1@$$V@Details@WRL@Microso.c)
 *     ?FindFirstEndpoint@CEndpointStoreCache@@QEAA?AV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$function@$$A6A_NAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x180104ABC (-FindFirstEndpoint@CEndpointStoreCache@@QEAA-AV-$com_ptr_t@VCEndpointStore@@Uerr_returncode_poli.c)
 * Callees:
 *     <none>
 */

void __fastcall std::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>(
        _QWORD *a1)
{
  *a1 = 0LL;
}
