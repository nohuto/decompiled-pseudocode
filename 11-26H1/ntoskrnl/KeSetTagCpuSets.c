/*
 * XREFs of KeSetTagCpuSets @ 0x1405F3F1C
 * Callers:
 *     NtSetSystemInformation @ 0x140833840 (NtSetSystemInformation.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     KiValidateCpuSetMasks @ 0x140462E9C (KiValidateCpuSetMasks.c)
 *     RtlWriteAcquireTickLock @ 0x14046AC24 (RtlWriteAcquireTickLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeSetTagCpuSets(unsigned int a1, __int64 a2, struct _LIST_ENTRY *a3)
{
  unsigned __int64 *v3; // rdi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  unsigned int i; // r8d
  unsigned __int64 j; // rdx
  unsigned __int64 v10; // rcx

  v3 = (unsigned __int64 *)a2;
  result = KiValidateCpuSetMasks(a2, a1);
  if ( (int)result >= 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
    KxAcquireSpinLock(&KiCpuSetLock);
    RtlWriteAcquireTickLock(&KiCpuSetSequence);
    for ( i = 0; i < a1; ++v3 )
    {
      for ( j = *v3; j; stru_140FC01F0.SavedApcState.ApcListHead[0].Blink[64 * i + (unsigned int)v10].Blink = a3 )
      {
        _BitScanForward64(&v10, j);
        j &= ~(1LL << v10);
      }
      ++i;
    }
    ++KiCpuSetSequence;
    KxReleaseSpinLock(&KiCpuSetLock);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    return 0LL;
  }
  return result;
}
