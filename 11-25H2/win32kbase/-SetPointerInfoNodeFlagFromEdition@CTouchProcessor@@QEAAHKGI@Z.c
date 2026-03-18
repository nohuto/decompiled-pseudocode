/*
 * XREFs of ?SetPointerInfoNodeFlagFromEdition@CTouchProcessor@@QEAAHKGI@Z @ 0x1400D1B70
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1400D29C8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9DE0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x14020AEBC (-SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerInfoNodeFlagFromEdition(
        CTouchProcessor *this,
        unsigned int a2,
        unsigned __int16 a3,
        unsigned int a4)
{
  unsigned int v8; // ebx
  _BYTE v10[64]; // [rsp+20h] [rbp-48h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v10,
    (CTouchProcessor *)((char *)this + 32),
    0LL);
  v8 = CTouchProcessor::SetPointerInfoNodeFlag(this, a2, a3, a4);
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded((CInpLockGuardExclusiveIfNeeded *)v10);
  return v8;
}
