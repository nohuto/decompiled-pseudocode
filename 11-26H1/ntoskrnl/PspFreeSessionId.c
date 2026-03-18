/*
 * XREFs of PspFreeSessionId @ 0x1407FF230
 * Callers:
 *     PsSessionCreate @ 0x1409638D4 (PsSessionCreate.c)
 *     PspReleaseReferenceToSession @ 0x140B000D8 (PspReleaseReferenceToSession.c)
 * Callees:
 *     PspLockProcessListExclusive @ 0x140215EEC (PspLockProcessListExclusive.c)
 *     PspUnlockProcessListExclusive @ 0x140215F5C (PspUnlockProcessListExclusive.c)
 */

__int64 __fastcall PspFreeSessionId(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rdi

  CurrentThread = KeGetCurrentThread();
  PspLockProcessListExclusive((__int64)CurrentThread);
  *((_BYTE *)NormalizationListLock.WaitBlock[0].Object + ((unsigned __int64)a1 >> 3)) &= ~(1 << (a1 & 7));
  return PspUnlockProcessListExclusive(CurrentThread);
}
