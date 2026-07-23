/*
 * XREFs of KeSuspendThread @ 0x140208E28
 * Callers:
 *     PspSuspendThread @ 0x140949620 (PspSuspendThread.c)
 *     PspInsertThread @ 0x140A7B188 (PspInsertThread.c)
 *     PspWow64SetContextThread @ 0x140B81920 (PspWow64SetContextThread.c)
 * Callees:
 *     KiSuspendThread @ 0x14020917C (KiSuspendThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeSuspendThread(struct _KTHREAD *a1, _BYTE *a2, _DWORD *a3)
{
  struct _KTHREAD *v5; // rdi
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // r12
  volatile signed __int32 *p_Lock; // rbp
  __int64 v9; // rdx
  __int64 v10; // r8
  int SuspendCount; // r15d
  unsigned int v12; // edi

  v5 = a1;
  if ( a2 )
  {
    if ( a1 == KeGetCurrentThread() )
      return (unsigned int)-1073741811;
    *a2 = 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  p_Lock = &v5->SuspendEvent.Header.Lock;
  KiAcquireKobjectLockSafe(&v5->SuspendEvent);
  SuspendCount = v5->SuspendCount;
  if ( SuspendCount == 127 )
  {
    v12 = -1073741750;
    _InterlockedAnd(p_Lock, 0xFFFFFF7F);
    if ( CurrentIrql != 0xFF )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v9) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
      }
      __writecr8(CurrentIrql);
    }
  }
  else
  {
    ++v5->SuspendCount;
    LOBYTE(v10) = a2 != 0LL;
    if ( !(unsigned __int8)KiSuspendThread(v5, CurrentPrcb, v10) )
      --v5->SuspendCount;
    if ( a2 )
      *a2 = 1;
    _InterlockedAnd(p_Lock, 0xFFFFFF7F);
    KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
    if ( a3 )
      *a3 = SuspendCount;
    return 0;
  }
  return v12;
}
