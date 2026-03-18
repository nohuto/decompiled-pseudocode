/*
 * XREFs of ?GetMsgPointerIdFromEdition@CTouchProcessor@@QEAAG_K@Z @ 0x1402156F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x14004CC00 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x14004CC60 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?GetMsgPointerId@CTouchProcessor@@AEAAG_K@Z @ 0x140147848 (-GetMsgPointerId@CTouchProcessor@@AEAAG_K@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetMsgPointerIdFromEdition(PERESOURCE *this, void *a2)
{
  __int64 v2; // rbx
  CTouchProcessor *v3; // rcx
  __int64 v4; // rdx
  PERESOURCE *v6[9]; // [rsp+20h] [rbp-48h] BYREF

  v2 = (__int64)a2;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded((CInpLockGuardExclusiveIfNeeded *)v6, this + 4, a2);
  LOWORD(v2) = CTouchProcessor::GetMsgPointerId(v3, v2);
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v6, v4);
  return (unsigned __int16)v2;
}
