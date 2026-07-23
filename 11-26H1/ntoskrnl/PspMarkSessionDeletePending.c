/*
 * XREFs of PspMarkSessionDeletePending @ 0x14077D2E8
 * Callers:
 *     PspDereferenceSessionFinal @ 0x140B4C914 (PspDereferenceSessionFinal.c)
 * Callees:
 *     PspLockProcessListExclusive @ 0x14021621C (PspLockProcessListExclusive.c)
 *     PspUnlockProcessListExclusive @ 0x14021628C (PspUnlockProcessListExclusive.c)
 *     KeWaitForGate @ 0x1403CC5D0 (KeWaitForGate.c)
 *     KeInitializeGate @ 0x1404D0428 (KeInitializeGate.c)
 */

__int64 __fastcall PspMarkSessionDeletePending(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi

  CurrentThread = KeGetCurrentThread();
  PspLockProcessListExclusive((__int64)CurrentThread);
  *(_DWORD *)(a1 + 4) |= 2u;
  if ( !*(_DWORD *)(a1 + 52) )
    return PspUnlockProcessListExclusive(CurrentThread);
  KeInitializeGate(a1 + 56, 0);
  PspUnlockProcessListExclusive(CurrentThread);
  return KeWaitForGate(a1 + 56, 18LL);
}
