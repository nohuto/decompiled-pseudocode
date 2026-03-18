/*
 * XREFs of IvtFlushDomainTb @ 0x1404267B0
 * Callers:
 *     <none>
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x1402C4DEC (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x140426EEC (HalpAcquireHighLevelLock.c)
 *     IvtFlushTbInternal @ 0x14042706C (IvtFlushTbInternal.c)
 */

void __fastcall IvtFlushDomainTb(int a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  *(_BYTE *)(a2 + 96) = HalpAcquireHighLevelLock((PKSPIN_LOCK)(a2 + 88));
  IvtFlushTbInternal(a1, 0, 0, a2, 1, 0LL, a2 + 56, a4, a5);
  HalpReleaseHighLevelLock((KSPIN_LOCK *)(a2 + 88), *(_BYTE *)(a2 + 96));
}
