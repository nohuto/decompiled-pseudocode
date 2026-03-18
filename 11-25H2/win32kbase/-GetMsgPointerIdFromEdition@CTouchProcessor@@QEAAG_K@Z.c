/*
 * XREFs of ?GetMsgPointerIdFromEdition@CTouchProcessor@@QEAAG_K@Z @ 0x140202760
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1400D29C8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?GetMsgPointerId@CTouchProcessor@@AEAAG_K@Z @ 0x140110590 (-GetMsgPointerId@CTouchProcessor@@AEAAG_K@Z.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9DE0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetMsgPointerIdFromEdition(PERESOURCE *this, void *a2)
{
  unsigned __int64 v2; // rbx
  CTouchProcessor *v3; // rcx
  PERESOURCE *v5[9]; // [rsp+20h] [rbp-48h] BYREF

  v2 = (unsigned __int64)a2;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded((CInpLockGuardExclusiveIfNeeded *)v5, this + 4, a2);
  LOWORD(v2) = CTouchProcessor::GetMsgPointerId(v3, v2);
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v5);
  return (unsigned __int16)v2;
}
