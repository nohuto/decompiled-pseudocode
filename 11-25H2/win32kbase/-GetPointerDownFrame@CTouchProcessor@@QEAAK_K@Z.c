/*
 * XREFs of ?GetPointerDownFrame@CTouchProcessor@@QEAAK_K@Z @ 0x1400D1410
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1400D29C8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9DE0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?GetPointerCaptureData@CTouchProcessor@@AEAAPEAUCPointerCaptureData@@_K@Z @ 0x140202A44 (-GetPointerCaptureData@CTouchProcessor@@AEAAPEAUCPointerCaptureData@@_K@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerDownFrame(CTouchProcessor *this, void *a2)
{
  struct CPointerCaptureData *PointerCaptureData; // rax
  unsigned int v5; // ebx
  _BYTE v7[72]; // [rsp+20h] [rbp-48h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v7,
    (CTouchProcessor *)((char *)this + 32),
    a2);
  PointerCaptureData = CTouchProcessor::GetPointerCaptureData(this, (unsigned __int64)a2);
  v5 = 0;
  if ( PointerCaptureData )
    v5 = *((_DWORD *)PointerCaptureData + 6);
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded((CInpLockGuardExclusiveIfNeeded *)v7);
  return v5;
}
