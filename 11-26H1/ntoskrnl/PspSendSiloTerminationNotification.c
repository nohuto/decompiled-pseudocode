/*
 * XREFs of PspSendSiloTerminationNotification @ 0x1407FECF8
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x1407F45D0 (PspCompleteServerSiloShutdownDeferred.c)
 * Callees:
 *     ExInitializeFastOwnerEntry @ 0x14042FF20 (ExInitializeFastOwnerEntry.c)
 *     PspSendJobNotification @ 0x1404C9CC0 (PspSendJobNotification.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PspLockJobShared @ 0x140A87E58 (PspLockJobShared.c)
 *     PspUnlockJobShared @ 0x140AAB240 (PspUnlockJobShared.c)
 */

__int64 __fastcall PspSendSiloTerminationNotification(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  _BYTE v6[80]; // [rsp+20h] [rbp-58h] BYREF

  memset_0(v6, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  ExInitializeFastOwnerEntry((__int64)v6);
  PspLockJobShared(a1, CurrentThread, v6);
  if ( *(_QWORD *)(a1 + 552) && (*(_DWORD *)(a1 + 1104) & 0x2000) != 0 )
    PspSendJobNotification(a1, 13LL, a2, 0);
  return PspUnlockJobShared(a1, CurrentThread, v6);
}
