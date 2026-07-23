/*
 * XREFs of PspFreeSessionId @ 0x140804C60
 * Callers:
 *     PsSessionCreate @ 0x140A0975C (PsSessionCreate.c)
 *     PspReleaseReferenceToSession @ 0x140B01E0C (PspReleaseReferenceToSession.c)
 * Callees:
 *     PspLockProcessListExclusive @ 0x14021621C (PspLockProcessListExclusive.c)
 *     PspUnlockProcessListExclusive @ 0x14021628C (PspUnlockProcessListExclusive.c)
 */

__int64 __fastcall PspFreeSessionId(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rdi

  CurrentThread = KeGetCurrentThread();
  PspLockProcessListExclusive((__int64)CurrentThread);
  *(_BYTE *)(((unsigned __int64)a1 >> 3) + *(_QWORD *)&NormalizationListLock.WaitBlockFill11[64]) &= ~(1 << (a1 & 7));
  return PspUnlockProcessListExclusive(CurrentThread);
}
