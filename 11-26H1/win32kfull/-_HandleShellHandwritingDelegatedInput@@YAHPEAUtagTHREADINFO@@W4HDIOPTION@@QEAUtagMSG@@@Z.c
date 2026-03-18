/*
 * XREFs of ?_HandleShellHandwritingDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1401E9140
 * Callers:
 *     NtUserShellHandwritingUndelegateInput @ 0x1401E8FA0 (NtUserShellHandwritingUndelegateInput.c)
 *     NtUserShellHandwritingHandleDelegatedInput @ 0x1401E9070 (NtUserShellHandwritingHandleDelegatedInput.c)
 * Callees:
 *     ?_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1401E9238 (-_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?_FindShellHandwritingDelegationQMsgFromMsg@@YAHQEAUtagTHREADINFO@@QEAUtagMSG@@PEAPEAUtagQMSG@@@Z @ 0x1401E9900 (-_FindShellHandwritingDelegationQMsgFromMsg@@YAHQEAUtagTHREADINFO@@QEAUtagMSG@@PEAPEAUtagQMSG@@@.c)
 */

__int64 __fastcall _HandleShellHandwritingDelegatedInput(struct tagTHREADINFO *a1, __int64 a2, struct tagMSG *a3)
{
  struct tagQMSG *v3; // rbx
  unsigned int v4; // esi
  __int64 UserSessionState; // rax
  PERESOURCE *TouchProcessorLock; // rax
  struct tagQMSG *i; // rax
  _QWORD v10[4]; // [rsp+20h] [rbp-38h] BYREF
  char v11; // [rsp+40h] [rbp-18h]
  PERESOURCE *v12; // [rsp+48h] [rbp-10h]
  struct tagQMSG *v13; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0LL;
  v13 = 0LL;
  v4 = a2;
  if ( a3 )
  {
    if ( !(unsigned int)_FindShellHandwritingDelegationQMsgFromMsg(a1, a3, &v13) )
      return 0LL;
    v3 = v13;
  }
  UserSessionState = W32GetUserSessionState(a1, a2);
  TouchProcessorLock = (PERESOURCE *)CTouchProcessor::GetTouchProcessorLock(*(CTouchProcessor **)(UserSessionState + 3256));
  v10[0] = 0LL;
  v11 = 0;
  v12 = TouchProcessorLock;
  ExEnterCriticalRegionAndAcquireResourceExclusive(*TouchProcessorLock);
  CRefUnRefPointerMsgId::ReferenceAndThreadLock((CRefUnRefPointerMsgId *)v10);
  for ( i = *(struct tagQMSG **)(*((_QWORD *)a1 + 58) + 24LL);
        i != v3;
        i = _HandleShellHandwritingDelegatedInputWorker(a1, v4, i) )
  {
    ;
  }
  CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v10);
  ExReleaseResourceAndLeaveCriticalRegion(*v12);
  return 1LL;
}
