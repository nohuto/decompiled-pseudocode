/*
 * XREFs of _CBtAudioResourceManagerBase::IncrementBidirectionalSaDeviceCount_::_1_::dtor$0 @ 0x180168AD1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CBtAudioResourceManagerBase::IncrementBidirectionalSaDeviceCount_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::lock_guard<std::recursive_mutex>::~lock_guard<std::recursive_mutex>((_Mtx_t *)(a2 + 80));
}
