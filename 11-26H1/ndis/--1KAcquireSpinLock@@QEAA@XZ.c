/*
 * XREFs of ??1KAcquireSpinLock@@QEAA@XZ @ 0x1400526D0
 * Callers:
 *     TrackNblContextVerifierFailure @ 0x1400A5520 (TrackNblContextVerifierFailure.c)
 * Callees:
 *     <none>
 */

void __fastcall KAcquireSpinLock::~KAcquireSpinLock(KAcquireSpinLock *this)
{
  if ( this->m_oldIrql != 0xFF )
  {
    KeReleaseSpinLock(&this->m_lock->m_lock, this->m_oldIrql);
    this->m_oldIrql = -1;
  }
}
