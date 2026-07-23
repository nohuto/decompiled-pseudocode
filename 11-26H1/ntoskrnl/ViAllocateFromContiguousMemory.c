/*
 * XREFs of ViAllocateFromContiguousMemory @ 0x140C2BEEC
 * Callers:
 *     ViAllocateMapRegisterFile @ 0x140C2BF88 (ViAllocateMapRegisterFile.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlFindClearBitsAndSet @ 0x14035A440 (RtlFindClearBitsAndSet.c)
 */

__int64 __fastcall ViAllocateFromContiguousMemory(__int64 a1, ULONG a2)
{
  __int64 v2; // rbx
  KSPIN_LOCK *v5; // rsi
  KIRQL v6; // bp
  ULONG ClearBitsAndSet; // eax

  v2 = 0LL;
  if ( !a1 || !*(_QWORD *)(a1 + 296) )
    return 0LL;
  v5 = (KSPIN_LOCK *)(a1 + 312);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 312));
  ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(a1 + 328), 1u, a2);
  if ( ClearBitsAndSet != -1 )
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 296) + 8LL * ClearBitsAndSet);
  KeReleaseSpinLock(v5, v6);
  return v2;
}
