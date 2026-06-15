/*
 * XREFs of ?DoExclusiveModeSaDevicesExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpointStore@@@Z @ 0x1800E1E64
 * Callers:
 *     ?CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800E1294 (-CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBtAudioResourceManagerBase::DoExclusiveModeSaDevicesExist(
        CBtAudioResourceManagerBase *this,
        struct CEndpointStore *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)a2 + 13) + 144LL))(*((_QWORD *)a2 + 13), 1LL);
}
