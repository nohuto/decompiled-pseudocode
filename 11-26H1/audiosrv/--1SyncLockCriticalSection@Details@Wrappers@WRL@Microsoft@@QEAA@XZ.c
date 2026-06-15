/*
 * XREFs of ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180067500
 * Callers:
 *     _AtmosCheck::UpdateEndpointUnderLock_::_1_::dtor$0 @ 0x1801647C2 (_AtmosCheck--UpdateEndpointUnderLock_--_1_--dtor$0.c)
 *     _AtmosCheck::PerformLicenseCheckInternalLegacy_::_1_::dtor$24 @ 0x180164920 (_AtmosCheck--PerformLicenseCheckInternalLegacy_--_1_--dtor$24.c)
 *     _AtmosCheck::PerformLicenseCheckInternalLegacy_::_1_::dtor$59 @ 0x180164944 (_AtmosCheck--PerformLicenseCheckInternalLegacy_--_1_--dtor$59.c)
 *     _AtmosCheck::GetLicenseStatusForEndpointId_::_1_::dtor$3 @ 0x18016498C (_AtmosCheck--GetLicenseStatusForEndpointId_--_1_--dtor$3.c)
 *     _CSpatialAudioTech::GetAtmosCheck_::_1_::dtor$0 @ 0x180166C87 (_CSpatialAudioTech--GetAtmosCheck_--_1_--dtor$0.c)
 *     _AtmosCheck::GetCurrentEndpointsUnderLock_::_1_::dtor$0 @ 0x180166F77 (_AtmosCheck--GetCurrentEndpointsUnderLock_--_1_--dtor$0.c)
 *     _AtmosCheck::RegisterAppDeploymentNotifications_::_1_::dtor$2 @ 0x18016B31A (_AtmosCheck--RegisterAppDeploymentNotifications_--_1_--dtor$2.c)
 *     _SpatialAudioDeviceStateWriter::ResetState_::_1_::dtor$0 @ 0x18016B32C (_SpatialAudioDeviceStateWriter--ResetState_--_1_--dtor$0.c)
 *     _CExclusiveModeListener::OnExclusiveModeChange_::_1_::dtor$0 @ 0x18016BFB6 (_CExclusiveModeListener--OnExclusiveModeChange_--_1_--dtor$0.c)
 *     _AtmosCheck::UpdateLicenseMapForAllEndpoints_::_1_::dtor$0 @ 0x18016BFC8 (_AtmosCheck--UpdateLicenseMapForAllEndpoints_--_1_--dtor$0.c)
 *     _SpatialAudioDeviceStateWriter::SetSpatialVssSelectionMode_::_1_::dtor$0 @ 0x18016C01D (_SpatialAudioDeviceStateWriter--SetSpatialVssSelectionMode_--_1_--dtor$0.c)
 *     _CExclusiveModeListener::OnHoloshellStateChange_::_1_::dtor$0 @ 0x18016C072 (_CExclusiveModeListener--OnHoloshellStateChange_--_1_--dtor$0.c)
 *     _AtmosCheck::AddArrayToLicenseMap_::_1_::dtor$1 @ 0x18016C10E (_AtmosCheck--AddArrayToLicenseMap_--_1_--dtor$1.c)
 *     _AtmosCheck::RefreshSpatialAudioLicenseModelState_::_1_::dtor$0 @ 0x18016C1F9 (_AtmosCheck--RefreshSpatialAudioLicenseModelState_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection(
        struct _RTL_CRITICAL_SECTION **this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    LeaveCriticalSection(v2);
    *this = 0LL;
  }
}
