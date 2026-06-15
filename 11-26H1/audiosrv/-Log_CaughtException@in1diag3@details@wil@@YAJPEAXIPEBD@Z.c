/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800CA448
 * Callers:
 *     _CPlaybackNotifier::AcquireReference_::_1_::catch$4 @ 0x180162CF1 (_CPlaybackNotifier--AcquireReference_--_1_--catch$4.c)
 *     _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::catch$22 @ 0x180162DA0 (_CPowerReferenceManager--AcquirePowerReferenceForStream_--_1_--catch$22.c)
 *     _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::catch$23 @ 0x180162DDD (_CPowerReferenceManager--AcquirePowerReferenceForStream_--_1_--catch$23.c)
 *     _CPlaybackNotifier::UpdateAudioPlaybackStatus_::_1_::catch$5 @ 0x180162F49 (_CPlaybackNotifier--UpdateAudioPlaybackStatus_--_1_--catch$5.c)
 *     _CAudioSession::PruneTerminatedOwningProcesses_::_1_::catch$6 @ 0x180163030 (_CAudioSession--PruneTerminatedOwningProcesses_--_1_--catch$6.c)
 *     _EffectPack::CanProcessingModeBeParameterized_::_1_::catch$14 @ 0x18016437B (_EffectPack--CanProcessingModeBeParameterized_--_1_--catch$14.c)
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::catch$14 @ 0x180166005 (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--catch$14.c)
 *     _CCaptureNotifier::AcquireReference_::_1_::catch$4 @ 0x180166672 (_CCaptureNotifier--AcquireReference_--_1_--catch$4.c)
 *     _CCaptureNotifier::UpdateAudioCaptureStatus_::_1_::catch$0 @ 0x1801666AC (_CCaptureNotifier--UpdateAudioCaptureStatus_--_1_--catch$0.c)
 *     _CPowerReferenceManager::EnsureCamMicUsageInitialized_::_1_::catch$9 @ 0x180166793 (_CPowerReferenceManager--EnsureCamMicUsageInitialized_--_1_--catch$9.c)
 *     _CAudioResourceManager::DestroyStream_::_1_::catch$15 @ 0x180167F69 (_CAudioResourceManager--DestroyStream_--_1_--catch$15.c)
 *     _CAudioStream::UpdatePMPStreamingEffectsOverride_::_1_::catch$0 @ 0x18016872F (_CAudioStream--UpdatePMPStreamingEffectsOverride_--_1_--catch$0.c)
 *     _BluetoothBroadcastProvider::OnEndpointPropertyChanged_::_1_::catch$6 @ 0x180169205 (_BluetoothBroadcastProvider--OnEndpointPropertyChanged_--_1_--catch$6.c)
 *     _BluetoothBroadcastProvider::OnEndpointStateChanged_::_1_::catch$6 @ 0x180169266 (_BluetoothBroadcastProvider--OnEndpointStateChanged_--_1_--catch$6.c)
 *     _CSharedStreamGroupProxy::OnEndpointAvailableForUse_::_1_::catch$10 @ 0x180169F67 (_CSharedStreamGroupProxy--OnEndpointAvailableForUse_--_1_--catch$10.c)
 *     _CSharedStreamGroupProxy::OnEndpointUnavailableForUse_::_1_::catch$0 @ 0x180169FA4 (_CSharedStreamGroupProxy--OnEndpointUnavailableForUse_--_1_--catch$0.c)
 *     _GetConnectorTypeForStream_::_1_::catch$3 @ 0x18016A931 (_GetConnectorTypeForStream_--_1_--catch$3.c)
 *     _EffectPack::PublishProcessingModeTelemetry_::_1_::catch$5 @ 0x18016B8E9 (_EffectPack--PublishProcessingModeTelemetry_--_1_--catch$5.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x1800C3054 (--$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException<2>((int)this, (int)a2, a3);
}
