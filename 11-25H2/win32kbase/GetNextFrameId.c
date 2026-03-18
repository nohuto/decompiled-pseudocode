/*
 * XREFs of GetNextFrameId @ 0x1400D2950
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1400D29C8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9DE0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ApiSetResetLastSeenFrameId @ 0x140226094 (ApiSetResetLastSeenFrameId.c)
 */

__int64 __fastcall GetNextFrameId(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rbx
  __int64 v3; // rdx
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  _BYTE v8[72]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(unsigned int **)(W32GetUserSessionState(a1, a2) + 16728);
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v8,
    (struct CEResourceLock *)(v2 + 2),
    0LL);
  v4 = *v2;
  v5 = *v2 + 1;
  *v2 = v5;
  if ( v4 == -1 )
  {
    *v2 = 1;
    UserSessionState = W32GetUserSessionState(v5, v3);
    ApiSetResetLastSeenFrameId(*(_QWORD *)(UserSessionState + 19144));
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded((CInpLockGuardExclusiveIfNeeded *)v8);
  return v4;
}
