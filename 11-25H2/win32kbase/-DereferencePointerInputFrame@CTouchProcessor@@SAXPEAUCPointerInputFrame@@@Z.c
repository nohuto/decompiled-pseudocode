/*
 * XREFs of ?DereferencePointerInputFrame@CTouchProcessor@@SAXPEAUCPointerInputFrame@@@Z @ 0x1401FDD30
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1400D29C8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9DE0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14020C628 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 */

void __fastcall CTouchProcessor::DereferencePointerInputFrame(struct CPointerInputFrame *a1)
{
  __int64 v1; // rbx
  PERESOURCE *v3[9]; // [rsp+20h] [rbp-48h] BYREF

  v1 = *(_QWORD *)a1;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v3,
    (PERESOURCE *)(*(_QWORD *)a1 + 32LL),
    0LL);
  CTouchProcessor::UnreferenceFrame(v1, a1);
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v3);
}
