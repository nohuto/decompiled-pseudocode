/*
 * XREFs of ??1?$lock_guard@Vrecursive_mutex@std@@@std@@QEAA@XZ @ 0x1800796B0
 * Callers:
 *     _CPlaybackNotifier::AcquireReference_::_1_::dtor$2 @ 0x180162CDF (_CPlaybackNotifier--AcquireReference_--_1_--dtor$2.c)
 *     _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::dtor$10 @ 0x180162D7C (_CPowerReferenceManager--AcquirePowerReferenceForStream_--_1_--dtor$10.c)
 *     _CSerialWorkQueue::WorkCallback_::_1_::dtor$0 @ 0x180163486 (_CSerialWorkQueue--WorkCallback_--_1_--dtor$0.c)
 *     _CCaptureNotifier::AcquireReference_::_1_::dtor$2 @ 0x180166660 (_CCaptureNotifier--AcquireReference_--_1_--dtor$2.c)
 *     _CWorkFifo::ScheduleWorkItem_::_1_::dtor$1 @ 0x180166B9C (_CWorkFifo--ScheduleWorkItem_--_1_--dtor$1.c)
 *     _CBtAudioResourceManagerBase::IncrementBidirectionalSaDeviceCount_::_1_::dtor$0 @ 0x180168AD1 (_CBtAudioResourceManagerBase--IncrementBidirectionalSaDeviceCount_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

int __fastcall std::lock_guard<std::recursive_mutex>::~lock_guard<std::recursive_mutex>(_Mtx_t *a1)
{
  return _Mtx_unlock(*a1);
}
