/*
 * XREFs of PsGetSessionObjectById @ 0x140216024
 * Callers:
 *     IoGetContainerInformation @ 0x140799D10 (IoGetContainerInformation.c)
 *     IoRegisterContainerNotification @ 0x140799D90 (IoRegisterContainerNotification.c)
 *     SeExchangePrimaryToken @ 0x14081AC68 (SeExchangePrimaryToken.c)
 *     SepDuplicateToken @ 0x1409060B0 (SepDuplicateToken.c)
 *     NtSetInformationObject @ 0x1409BA9F0 (NtSetInformationObject.c)
 *     SepSetTokenSessionById @ 0x140A88A44 (SepSetTokenSessionById.c)
 *     SeSetSessionIdToken @ 0x140AE5DDC (SeSetSessionIdToken.c)
 * Callees:
 *     PsGetSessionById @ 0x1402160B0 (PsGetSessionById.c)
 *     PspLockProcessListExclusive @ 0x14021621C (PspLockProcessListExclusive.c)
 *     PspUnlockProcessListExclusive @ 0x14021628C (PspUnlockProcessListExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
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
