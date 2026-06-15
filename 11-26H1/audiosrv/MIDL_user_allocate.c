/*
 * XREFs of MIDL_user_allocate @ 0x180031380
 * Callers:
 *     asm_GetApplicationSubmixes @ 0x180025B40 (asm_GetApplicationSubmixes.c)
 *     ?GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x180029070 (-GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     AudioServerGetMixFormat @ 0x180030220 (AudioServerGetMixFormat.c)
 *     s_sndevtResolveSoundAlias @ 0x1800308C0 (s_sndevtResolveSoundAlias.c)
 *     ?GetEffectPackDescriptorsForEndpoint@CPolicyConfig@@QEAAJPEBGPEAPEAUEffectPackDescriptor@@PEAI@Z @ 0x180030F50 (-GetEffectPackDescriptorsForEndpoint@CPolicyConfig@@QEAAJPEBGPEAPEAUEffectPackDescriptor@@PEAI@Z.c)
 *     PolicyConfigGetDeviceFormat @ 0x1800311C0 (PolicyConfigGetDeviceFormat.c)
 *     ?GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z @ 0x180036DB0 (-GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetCustomDeviceFormatsSupportedOnEndpoint@EffectPack@@QEAAJPEAIPEAPEAPEAUtWAVEFORMATEX@@PEAPEAPEAG@Z @ 0x18007D518 (-GetCustomDeviceFormatsSupportedOnEndpoint@EffectPack@@QEAAJPEAIPEAPEAPEAUtWAVEFORMATEX@@PEAPEAP.c)
 *     ?GetId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x180081510 (-GetId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?SerializeCompatibleChildEndpointsForRpc@BluetoothBroadcastProvider@@UEAAJAEAV?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@PEAI@Z @ 0x1800ED3A0 (-SerializeCompatibleChildEndpointsForRpc@BluetoothBroadcastProvider@@UEAAJAEAV-$unique_ptr@$$BY0.c)
 *     ?SerializeMulticastSessionsForRpc@BluetoothBroadcastProvider@@UEAAJAEAV?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@PEAI@Z @ 0x1800ED520 (-SerializeMulticastSessionsForRpc@BluetoothBroadcastProvider@@UEAAJAEAV-$unique_ptr@$$BY0A@U_Mul.c)
 *     ?GetMulticastProviders@CMulticastSessionManager@@QEAAJAEAV?$unique_ptr@$$BY0A@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@PEAI@Z @ 0x180107DB4 (-GetMulticastProviders@CMulticastSessionManager@@QEAAJAEAV-$unique_ptr@$$BY0A@U_GUID@@U-$functio.c)
 *     PolicyConfigGetDeviceFormatAndSpatialSettings @ 0x18010D030 (PolicyConfigGetDeviceFormatAndSpatialSettings.c)
 *     PolicyConfigGetDeviceFormatForConnector @ 0x18010D430 (PolicyConfigGetDeviceFormatForConnector.c)
 *     PolicyConfigGetMixFormat @ 0x18010D660 (PolicyConfigGetMixFormat.c)
 *     AudioServerGetAudioStreamInfo @ 0x1801150B0 (AudioServerGetAudioStreamInfo.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180115590 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     <none>
 */

void *__stdcall MIDL_user_allocate(size_t size)
{
  if ( size > 0x40000 )
    return 0LL;
  else
    return operator new[](size, (const struct std::nothrow_t *)&std::nothrow);
}
