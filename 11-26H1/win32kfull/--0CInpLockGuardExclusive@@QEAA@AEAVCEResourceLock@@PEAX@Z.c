/*
 * XREFs of ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1402084C8
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 * Callees:
 *     <none>
 */

CInpLockGuardExclusive *__fastcall CInpLockGuardExclusive::CInpLockGuardExclusive(
        CInpLockGuardExclusive *this,
        PERESOURCE *a2,
        void *a3)
{
  *(_QWORD *)this = 0LL;
  *((_BYTE *)this + 32) = 0;
  *((_QWORD *)this + 5) = a2;
  ExEnterCriticalRegionAndAcquireResourceExclusive(*a2);
  CRefUnRefPointerMsgId::ReferenceAndThreadLock(this);
  return this;
}
