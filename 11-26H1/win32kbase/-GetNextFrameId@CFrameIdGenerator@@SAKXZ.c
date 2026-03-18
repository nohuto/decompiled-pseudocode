/*
 * XREFs of ?GetNextFrameId@CFrameIdGenerator@@SAKXZ @ 0x14004CB88
 * Callers:
 *     GetNextFrameId @ 0x14004CB70 (GetNextFrameId.c)
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x14004CC00 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x14004CC60 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ApiSetResetLastSeenFrameId @ 0x1402282E8 (ApiSetResetLastSeenFrameId.c)
 */

__int64 __fastcall CFrameIdGenerator::GetNextFrameId(int a1, int a2, int a3)
{
  _DWORD *v3; // rdi
  int v4; // edx
  int v5; // r8d
  unsigned int v6; // ebx
  __int64 UserSessionState; // rax
  _BYTE v9[72]; // [rsp+20h] [rbp-48h] BYREF

  v3 = *(_DWORD **)(W32GetUserSessionState(a1, a2, a3) + 16720);
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v9,
    (struct CEResourceLock *)(v3 + 2),
    0LL);
  v6 = (*v3)++;
  if ( v6 == -1 )
  {
    *v3 = 1;
    UserSessionState = W32GetUserSessionState(1, v4, v5);
    ApiSetResetLastSeenFrameId(*(_QWORD *)(UserSessionState + 19176));
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded((CInpLockGuardExclusiveIfNeeded *)v9);
  return v6;
}
