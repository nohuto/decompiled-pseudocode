/*
 * XREFs of IopDecrementCompletionContextUsageCount @ 0x14047D0F8
 * Callers:
 *     IopCompleteRequest @ 0x14045B5C0 (IopCompleteRequest.c)
 *     IopXxxControlFile @ 0x1408F5EA0 (IopXxxControlFile.c)
 *     NtLockFile @ 0x140B6ECE0 (NtLockFile.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402BDFEC (KiReleaseSpinLockInstrumented.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

unsigned __int8 __fastcall IopDecrementCompletionContextUsageCount(ULONG_PTR BugCheckParameter1)
{
  volatile signed __int64 *v1; // rbx
  unsigned __int8 result; // al
  __int64 v4; // r8
  unsigned __int64 v5; // rbp
  signed __int64 BugCheckParameter4; // rsi
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = (volatile signed __int64 *)(BugCheckParameter1 + 184);
  result = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter1 + 184));
  v4 = *(_QWORD *)(BugCheckParameter1 + 176);
  v5 = result;
  BugCheckParameter4 = *(_QWORD *)(v4 + 16);
  *(_QWORD *)(v4 + 16) = BugCheckParameter4 - 1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    _InterlockedAnd64(v1, 0LL);
  else
    result = KiReleaseSpinLockInstrumented(v1, retaddr);
  if ( KiIrqlFlags )
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
  __writecr8(v5);
  if ( BugCheckParameter4 <= 0 )
    KeBugCheckEx(0x18u, BugCheckParameter1, *(_QWORD *)(BugCheckParameter1 + 176), 0x82uLL, BugCheckParameter4);
  return result;
}
