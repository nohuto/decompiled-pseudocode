/*
 * XREFs of HalpDmaReferenceDomainObject @ 0x14034B1CC
 * Callers:
 *     HalpAllocateCommonBufferDmaThin @ 0x14034ACB4 (HalpAllocateCommonBufferDmaThin.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x1404CB450 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x1404EB464 (HalpAllocateCommonBufferDmarThin.c)
 *     HalJoinDmaDomain @ 0x1405113F0 (HalJoinDmaDomain.c)
 *     HalCreateCommonBufferFromMdl @ 0x14058C160 (HalCreateCommonBufferFromMdl.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x14058C6F0 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalpDmaAllocateDomain @ 0x14058CB90 (HalpDmaAllocateDomain.c)
 *     HalpDmaIsAutomaticDomain @ 0x14058D4E0 (HalpDmaIsAutomaticDomain.c)
 *     HalCreateCommonBufferFromMdlDmaThin @ 0x14058D740 (HalCreateCommonBufferFromMdlDmaThin.c)
 *     HalCreateCommonBufferFromMdlDmarThin @ 0x14058DC30 (HalCreateCommonBufferFromMdlDmarThin.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
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
