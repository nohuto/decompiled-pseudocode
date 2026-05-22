/*
 * XREFs of ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180066334
 * Callers:
 *     _SpatialRimDeviceCollectionHeadEventHandler::SetOwner_::_1_::dtor$0 @ 0x1801D6CE4 (_SpatialRimDeviceCollectionHeadEventHandler--SetOwner_--_1_--dtor$0.c)
 *     _SpatialRimDeviceCollectionHeadEventHandler::OnHeadEventOccurred_::_1_::dtor$0 @ 0x1801D6ECC (_SpatialRimDeviceCollectionHeadEventHandler--OnHeadEventOccurred_--_1_--dtor$0.c)
 *     _MPCHeadUpdateListener::OnHeadEventOccurredWorkerThread_::_1_::dtor$3 @ 0x1801D792B (_MPCHeadUpdateListener--OnHeadEventOccurredWorkerThread_--_1_--dtor$3.c)
 *     _SpatialRimDeviceCollection::EnableHeadEventHandler_::_1_::dtor$0 @ 0x1801D95A6 (_SpatialRimDeviceCollection--EnableHeadEventHandler_--_1_--dtor$0.c)
 *     _SpatialRimDeviceCollection::EnsureSpatialInteractionInitialized_::_1_::dtor$0 @ 0x1801D99BC (_SpatialRimDeviceCollection--EnsureSpatialInteractionInitialized_--_1_--dtor$0.c)
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
