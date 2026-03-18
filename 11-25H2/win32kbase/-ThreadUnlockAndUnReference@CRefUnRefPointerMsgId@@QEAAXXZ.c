/*
 * XREFs of ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x1400BC250
 * Callers:
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1400C45CC (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1400C54D4 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1400D29C8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 * Callees:
 *     ?UnreferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400BC2AC (-UnreferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 */

void __fastcall CRefUnRefPointerMsgId::ThreadUnlockAndUnReference(CRefUnRefPointerMsgId *this)
{
  __int64 v1; // rbx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax

  v1 = 0LL;
  if ( *((_BYTE *)this + 32) )
  {
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged();
    if ( CurrentThreadNonPaged )
      v1 = *CurrentThreadNonPaged;
    *(_QWORD *)(v1 + 384) = *((_QWORD *)this + 1);
    UserSessionState = W32GetUserSessionState(v5, v4);
    CTouchProcessor::UnreferenceMsgDataFromGuard(*(_QWORD *)(UserSessionState + 3256), *(_QWORD *)this);
  }
}
