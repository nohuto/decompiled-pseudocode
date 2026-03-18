/*
 * XREFs of ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x14020E730
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 * Callees:
 *     <none>
 */

void __fastcall CInpLockGuardExclusive::~CInpLockGuardExclusive(PERESOURCE **this)
{
  CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)this);
  ExReleaseResourceAndLeaveCriticalRegion(*this[5]);
}
