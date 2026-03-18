/*
 * XREFs of ?UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1402172F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x14004CC00 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x14004CC60 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x140216FE8 (-UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 */

void __fastcall CTouchProcessor::UnreferenceUndispatchedFrame(PERESOURCE *this, struct _LIST_ENTRY *a2)
{
  __int64 v4; // rdx
  PERESOURCE *v5[9]; // [rsp+20h] [rbp-48h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded((CInpLockGuardExclusiveIfNeeded *)v5, this + 4, 0LL);
  CTouchProcessor::UnreferenceFrameAndMessageData(this, (const struct CPointerInputFrame *)&a2[-2].Blink);
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v5, v4);
}
