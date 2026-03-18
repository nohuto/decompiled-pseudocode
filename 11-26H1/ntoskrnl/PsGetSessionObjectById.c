/*
 * XREFs of PsGetSessionObjectById @ 0x140215CF4
 * Callers:
 *     IoGetContainerInformation @ 0x1407971E0 (IoGetContainerInformation.c)
 *     IoRegisterContainerNotification @ 0x140797260 (IoRegisterContainerNotification.c)
 *     SeExchangePrimaryToken @ 0x140814B78 (SeExchangePrimaryToken.c)
 *     SepDuplicateToken @ 0x14092A5A0 (SepDuplicateToken.c)
 *     NtSetInformationObject @ 0x140970880 (NtSetInformationObject.c)
 *     SeSubProcessToken @ 0x140A2B26C (SeSubProcessToken.c)
 *     SepSetTokenSessionById @ 0x140A82BD4 (SepSetTokenSessionById.c)
 *     SeSetSessionIdToken @ 0x140AE7F2C (SeSetSessionIdToken.c)
 * Callees:
 *     PsGetSessionById @ 0x140215D80 (PsGetSessionById.c)
 *     PspLockProcessListExclusive @ 0x140215EEC (PspLockProcessListExclusive.c)
 *     PspUnlockProcessListExclusive @ 0x140215F5C (PspUnlockProcessListExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 */

void *PsGetSessionObjectById()
{
  void *v0; // rdi
  __int64 SessionById; // rax
  void *v2; // rsi
  __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rbp

  v0 = 0LL;
  SessionById = PsGetSessionById();
  v2 = (void *)SessionById;
  if ( SessionById )
  {
    v3 = *(_QWORD *)(SessionById + 744);
    CurrentThread = KeGetCurrentThread();
    v0 = *(void **)(v3 + 32);
    PspLockProcessListExclusive(CurrentThread);
    if ( (*(_DWORD *)(v3 + 4) & 2) != 0 )
      v0 = 0LL;
    else
      ObfReferenceObjectWithTag(v0, 0x79517350u);
    PspUnlockProcessListExclusive(CurrentThread);
    ObfDereferenceObjectWithTag(v2, 0x79517350u);
  }
  return v0;
}
