/*
 * XREFs of ??$query_to@UIInspectable@@@?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIInspectable@@@Z @ 0x1800E01C4
 * Callers:
 *     ?RefreshStreamsOnDevice@CBtAudioResourceManagerBase@@IEAAJW4ReconnectSaDeviceOptions@1@@Z @ 0x1800E53B0 (-RefreshStreamsOnDevice@CBtAudioResourceManagerBase@@IEAAJW4ReconnectSaDeviceOptions@1@@Z.c)
 *     ?ReleaseResources@CBtAudioResourceManagerBase@@UEAAJXZ @ 0x1800E5D20 (-ReleaseResources@CBtAudioResourceManagerBase@@UEAAJXZ.c)
 *     ?GetKsControlForFlow@CBtLeAudioResourceManager@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAPEAUIKsControl@@@Z @ 0x1800EEF40 (-GetKsControlForFlow@CBtLeAudioResourceManager@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0.c)
 *     ?OnSessionDisconnected@CMonitorNotification@CMonitor@@EEAAJW4AudioSessionDisconnectReason@@@Z @ 0x180121DD0 (-OnSessionDisconnected@CMonitorNotification@CMonitor@@EEAAJW4AudioSessionDisconnectReason@@@Z.c)
 *     ?OnSimpleVolumeChanged@CMonitorNotification@CMonitor@@EEAAJMHPEBU_GUID@@@Z @ 0x180121F90 (-OnSimpleVolumeChanged@CMonitorNotification@CMonitor@@EEAAJMHPEBU_GUID@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>::query_to<IInspectable>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, GUID *, _QWORD *))(*(_QWORD *)*a1 + 24LL))(
             *a1,
             &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
             a2);
  if ( (int)result >= 0 && !*a2 )
    return 2147943568LL;
  return result;
}
