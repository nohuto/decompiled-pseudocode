/*
 * XREFs of IvtFlushDomainTb @ 0x1404338C0
 * Callers:
 *     <none>
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x14030FAAC (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x140433FFC (HalpAcquireHighLevelLock.c)
 *     IvtFlushTbInternal @ 0x14043417C (IvtFlushTbInternal.c)
 */

void __fastcall IvtFlushDomainTb(int a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  *(_BYTE *)(a2 + 96) = HalpAcquireHighLevelLock((PKSPIN_LOCK)(a2 + 88));
  IvtFlushTbInternal(a1, 0, 0, a2, 1, 0LL, a2 + 56, a4, a5);
  HalpReleaseHighLevelLock((KSPIN_LOCK *)(a2 + 88), *(_BYTE *)(a2 + 96));
}
