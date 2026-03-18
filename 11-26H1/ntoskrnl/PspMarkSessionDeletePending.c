/*
 * XREFs of PspMarkSessionDeletePending @ 0x14077A3B8
 * Callers:
 *     PspDereferenceSessionFinal @ 0x140B4AB84 (PspDereferenceSessionFinal.c)
 * Callees:
 *     PspLockProcessListExclusive @ 0x140215EEC (PspLockProcessListExclusive.c)
 *     PspUnlockProcessListExclusive @ 0x140215F5C (PspUnlockProcessListExclusive.c)
 *     KeWaitForGate @ 0x1403C26D0 (KeWaitForGate.c)
 *     KeInitializeGate @ 0x1404D6C58 (KeInitializeGate.c)
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
