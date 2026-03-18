/*
 * XREFs of ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x140094164
 * Callers:
 *     NtUserHandleDelegatedInput @ 0x140094090 (NtUserHandleDelegatedInput.c)
 *     NtUserUndelegateInput @ 0x14020FCA0 (NtUserUndelegateInput.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1400951E4 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 */

__int64 __fastcall _HandleDelegatedInput(struct tagTHREADINFO *a1, __int64 a2, __int64 a3)
{
  char *v3; // rdi
  unsigned int v4; // ebp
  struct tagTHREADINFO *v5; // rsi
  struct tagQMSG *i; // rbx
  __int64 UserSessionState; // rax
  PERESOURCE *TouchProcessorLock; // rax
  struct tagQMSG *j; // rax
  _QWORD v11[4]; // [rsp+20h] [rbp-38h] BYREF
  char v12; // [rsp+40h] [rbp-18h]
  PERESOURCE *v13; // [rsp+48h] [rbp-10h]

  v3 = (char *)a1 + 464;
  v4 = a2;
  v5 = a1;
  if ( a3 )
  {
    for ( i = *(struct tagQMSG **)(*(_QWORD *)v3 + 24LL); ; i = *(struct tagQMSG **)i )
    {
      if ( !i )
      {
LABEL_20:
        UserSetLastError(87);
        return 0LL;
      }
      a1 = (struct tagTHREADINFO *)(unsigned int)(*(_DWORD *)a3 ^ *((_DWORD *)i + 4));
      if ( *(_DWORD *)a3 == *((_DWORD *)i + 4)
        && *((_DWORD *)i + 6) == *(_DWORD *)(a3 + 8)
        && *((_QWORD *)i + 4) == *(_QWORD *)(a3 + 16)
        && *((_QWORD *)i + 8) == *(_QWORD *)(a3 + 24)
        && *((_DWORD *)i + 12) == *(_DWORD *)(a3 + 32)
        && *((_DWORD *)i + 13) == *(_DWORD *)(a3 + 36)
        && *((_DWORD *)i + 14) == *(_DWORD *)(a3 + 40) )
      {
        break;
      }
      if ( _bittest((const signed __int32 *)i + 25, 8u) )
        goto LABEL_20;
    }
    if ( !_bittest((const signed __int32 *)i + 25, 8u) )
      i = *(struct tagQMSG **)i;
  }
  else
  {
    i = 0LL;
  }
  UserSessionState = W32GetUserSessionState(a1, a2);
  TouchProcessorLock = (PERESOURCE *)CTouchProcessor::GetTouchProcessorLock(*(CTouchProcessor **)(UserSessionState + 3256));
  v11[0] = 0LL;
  v12 = 0;
  v13 = TouchProcessorLock;
  ExEnterCriticalRegionAndAcquireResourceExclusive(*TouchProcessorLock);
  CRefUnRefPointerMsgId::ReferenceAndThreadLock((CRefUnRefPointerMsgId *)v11);
  for ( j = *(struct tagQMSG **)(*(_QWORD *)v3 + 24LL); j != i; j = _HandleDelegatedInputWorker(v5, v4, j) )
    ;
  CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v11);
  ExReleaseResourceAndLeaveCriticalRegion(*v13);
  return 1LL;
}
