/*
 * XREFs of KeForceResumeThread @ 0x1402C5E5C
 * Callers:
 *     KeRequestTerminationThread @ 0x1402C5B58 (KeRequestTerminationThread.c)
 *     KeRundownApcQueues @ 0x140955B24 (KeRundownApcQueues.c)
 *     NtTerminateProcess @ 0x1409566C0 (NtTerminateProcess.c)
 *     PspInsertThread @ 0x140A026D0 (PspInsertThread.c)
 * Callees:
 *     KiExitDispatcher @ 0x140246C20 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x140277760 (KiAcquireKobjectLockSafe.c)
 *     KiResumeThread @ 0x1402C60D8 (KiResumeThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeForceResumeThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v5; // rdx
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v7; // r8
  int v8; // r15d
  int v9; // esi

  v3 = a1;
  CurrentIrql = KeGetCurrentIrql();
  v5 = 2LL;
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe((volatile signed __int32 *)(v3 + 736), v5, a3);
  v8 = *(char *)(v3 + 644);
  v9 = (*(_DWORD *)(v3 + 120) >> 14) & 1;
  if ( v8 | v9 )
  {
    *(_BYTE *)(v3 + 794) &= 0xF9u;
    *(_BYTE *)(v3 + 644) = 0;
    _interlockedbittestandreset((volatile signed __int32 *)(v3 + 120), 0xEu);
  }
  LOBYTE(v7) = 1;
  KiResumeThread(v3, CurrentPrcb, v7);
  _InterlockedAnd((volatile signed __int32 *)(v3 + 736), 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  return (unsigned int)(v9 + v8);
}
