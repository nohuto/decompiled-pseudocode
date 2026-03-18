/*
 * XREFs of HalpDmaReferenceDomainObject @ 0x14034914C
 * Callers:
 *     HalpAllocateCommonBufferDmaThin @ 0x140348C34 (HalpAllocateCommonBufferDmaThin.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x1404D18A4 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x1404F1E84 (HalpAllocateCommonBufferDmarThin.c)
 *     HalJoinDmaDomain @ 0x140517980 (HalJoinDmaDomain.c)
 *     HalCreateCommonBufferFromMdl @ 0x140589A30 (HalCreateCommonBufferFromMdl.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x140589FC0 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalpDmaAllocateDomain @ 0x14058A460 (HalpDmaAllocateDomain.c)
 *     HalpDmaIsAutomaticDomain @ 0x14058AD58 (HalpDmaIsAutomaticDomain.c)
 *     HalCreateCommonBufferFromMdlDmaThin @ 0x14058AFC0 (HalCreateCommonBufferFromMdlDmaThin.c)
 *     HalCreateCommonBufferFromMdlDmarThin @ 0x14058B4B0 (HalCreateCommonBufferFromMdlDmarThin.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall HalpDmaReferenceDomainObject(__int64 a1)
{
  char v2; // bl
  KIRQL v3; // al
  __int64 *i; // rdx

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&HalpDmaDomainListLock);
  for ( i = (__int64 *)HalpDmaDomainList; i != &HalpDmaDomainList; i = (__int64 *)*i )
  {
    if ( (__int64 *)a1 == i )
    {
      v2 = 1;
      ++*(_DWORD *)(a1 + 112);
      break;
    }
  }
  KeReleaseSpinLock(&HalpDmaDomainListLock, v3);
  return v2 == 0 ? 0xC000000D : 0;
}
