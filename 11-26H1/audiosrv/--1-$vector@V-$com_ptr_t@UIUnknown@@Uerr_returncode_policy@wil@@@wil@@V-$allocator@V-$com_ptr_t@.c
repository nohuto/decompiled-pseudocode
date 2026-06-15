/*
 * XREFs of ??1?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1800B1238
 * Callers:
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$3 @ 0x180165F83 (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--dtor$3.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$10 @ 0x180167C51 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$10.c)
 *     _CAudioResourceManager::CreateStream_::_1_::dtor$0 @ 0x180167D29 (_CAudioResourceManager--CreateStream_--_1_--dtor$0.c)
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$6 @ 0x1801681A7 (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$6.c)
 *     _CBtAudioResourceManagerBase::CreateSaDeviceOnMicrophoneEndpoint_::_1_::dtor$4 @ 0x1801689E4 (_CBtAudioResourceManagerBase--CreateSaDeviceOnMicrophoneEndpoint_--_1_--dtor$4.c)
 *     _CBtAudioResourceManagerBase::FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStreamGroups_::_1_::dtor$8 @ 0x180168B19 (_CBtAudioResourceManagerBase--FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStre_ea_180168B19.c)
 *     _CBtAudioResourceManagerBase::GetSaDeviceForSharedStream_::_1_::dtor$1 @ 0x180168B85 (_CBtAudioResourceManagerBase--GetSaDeviceForSharedStream_--_1_--dtor$1.c)
 *     _CBtAudioResourceManagerBase::GetSaDeviceForOffloadStream_::_1_::dtor$1 @ 0x180168BD6 (_CBtAudioResourceManagerBase--GetSaDeviceForOffloadStream_--_1_--dtor$1.c)
 *     _CBtAudioResourceManagerBase::ReleaseSaDevices_::_1_::dtor$8 @ 0x180168EAF (_CBtAudioResourceManagerBase--ReleaseSaDevices_--_1_--dtor$8.c)
 *     _CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroups_::_1_::dtor$11 @ 0x180168F3F (_CBtAudioResourceManagerBase--RestoreDisplacedPrimaryProfileStreamGroups_--_1_--dtor$11.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>>(
        __int64 a1)
{
  std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>(a1);
}
