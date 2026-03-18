/*
 * XREFs of ?ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x1400C36B0
 * Callers:
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9D98 (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9DE0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9E38 (--0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 * Callees:
 *     ?ReferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400C373C (-ReferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 */

void __fastcall CRefUnRefPointerMsgId::ReferenceAndThreadLock(CRefUnRefPointerMsgId *this, __int64 a2)
{
  __int64 v2; // rbx
  __int64 UserSessionState; // rax
  _QWORD *v5; // rsi
  __int64 v6; // rdi
  __int64 *CurrentThreadNonPaged; // rax

  v2 = 0LL;
  if ( *(_QWORD *)this && !*((_BYTE *)this + 32) )
  {
    *((_BYTE *)this + 32) = 1;
    UserSessionState = W32GetUserSessionState(this, a2);
    CTouchProcessor::ReferenceMsgDataFromGuard(*(_QWORD *)(UserSessionState + 3256), *(_QWORD *)this);
    v5 = (_QWORD *)((char *)this + 8);
    v6 = *(_QWORD *)this;
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged();
    if ( CurrentThreadNonPaged )
      v2 = *CurrentThreadNonPaged;
    *v5 = *(_QWORD *)(v2 + 384);
    *(_QWORD *)(v2 + 384) = v5;
    v5[2] = CRefUnRefPointerMsgId::UnReferenceOnThreadTermination;
    v5[1] = v6;
  }
}
