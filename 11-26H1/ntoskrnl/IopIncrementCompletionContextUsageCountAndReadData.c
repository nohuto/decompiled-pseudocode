/*
 * XREFs of IopIncrementCompletionContextUsageCountAndReadData @ 0x140463E10
 * Callers:
 *     IopCompleteRequest @ 0x140454DF0 (IopCompleteRequest.c)
 *     IopXxxControlFile @ 0x140925E30 (IopXxxControlFile.c)
 *     NtLockFile @ 0x140B720D0 (NtLockFile.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1403313B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1403314C0 (KxWaitForSpinLockAndAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall IopIncrementCompletionContextUsageCountAndReadData(
        ULONG_PTR BugCheckParameter1,
        _BYTE *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  volatile signed __int32 *v5; // rsi
  _BYTE *v7; // r13
  signed __int64 BugCheckParameter4; // rbp
  unsigned __int8 CurrentIrql; // di
  _QWORD *v11; // rbx
  __int64 result; // rax
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v5 = (volatile signed __int32 *)(BugCheckParameter1 + 184);
  v7 = a2;
  BugCheckParameter4 = -1LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _interlockedbittestandset64(v5, 0LL) )
      KxWaitForSpinLockAndAcquire(v5);
  }
  else
  {
    KiAcquireSpinLockInstrumented(v5);
  }
  v11 = *(_QWORD **)(BugCheckParameter1 + 176);
  if ( v11 )
  {
    BugCheckParameter4 = v11[2];
    v11[2] = BugCheckParameter4 + 1;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)v5, 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)v5, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( v11 )
  {
    *v7 = 1;
    *a3 = *v11;
    result = v11[1];
    *a4 = result;
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, BugCheckParameter1, *(_QWORD *)(BugCheckParameter1 + 176), 0x81uLL, BugCheckParameter4);
  }
  else
  {
    result = 0LL;
    *v7 = 0;
    *a3 = 0LL;
    *a4 = 0LL;
  }
  return result;
}
