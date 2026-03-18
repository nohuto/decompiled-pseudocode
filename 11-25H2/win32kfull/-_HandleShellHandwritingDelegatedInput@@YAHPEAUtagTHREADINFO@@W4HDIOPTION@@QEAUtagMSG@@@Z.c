/*
 * XREFs of ?_HandleShellHandwritingDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1401371DC
 * Callers:
 *     NtUserShellHandwritingUndelegateInput @ 0x140136D10 (NtUserShellHandwritingUndelegateInput.c)
 *     NtUserShellHandwritingHandleDelegatedInput @ 0x140137100 (NtUserShellHandwritingHandleDelegatedInput.c)
 * Callees:
 *     ?_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1400636D0 (-_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?_FindShellHandwritingDelegationQMsgFromMsg@@YAHQEAUtagTHREADINFO@@QEAUtagMSG@@PEAPEAUtagQMSG@@@Z @ 0x140136DE4 (-_FindShellHandwritingDelegationQMsgFromMsg@@YAHQEAUtagTHREADINFO@@QEAUtagMSG@@PEAPEAUtagQMSG@@@.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x140137D10 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x14027C8BC (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 */

__int64 __fastcall _HandleShellHandwritingDelegatedInput(struct tagTHREADINFO *a1, __int64 a2, struct tagMSG *a3)
{
  struct tagQMSG *v3; // rbx
  unsigned int v4; // esi
  __int64 UserSessionState; // rax
  struct CEResourceLock *TouchProcessorLock; // rax
  void *v8; // r8
  struct tagQMSG *i; // rax
  _BYTE v11[56]; // [rsp+20h] [rbp-38h] BYREF
  struct tagQMSG *v12; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0LL;
  v12 = 0LL;
  v4 = a2;
  if ( a3 )
  {
    if ( !(unsigned int)_FindShellHandwritingDelegationQMsgFromMsg(a1, a3, &v12) )
      return 0LL;
    v3 = v12;
  }
  UserSessionState = W32GetUserSessionState(a1, a2);
  TouchProcessorLock = CTouchProcessor::GetTouchProcessorLock(*(CTouchProcessor **)(UserSessionState + 3256));
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v11, TouchProcessorLock, v8);
  for ( i = *(struct tagQMSG **)(*((_QWORD *)a1 + 59) + 24LL);
        i != v3;
        i = _HandleShellHandwritingDelegatedInputWorker(a1, v4, i) )
  {
    ;
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v11);
  return 1LL;
}
