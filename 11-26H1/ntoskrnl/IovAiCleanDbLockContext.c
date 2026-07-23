/*
 * XREFs of IovAiCleanDbLockContext @ 0x140645AA0
 * Callers:
 *     IovAiIrpHasUnlockedMdl @ 0x140532AF0 (IovAiIrpHasUnlockedMdl.c)
 *     IovAiInsertObject @ 0x14053451C (IovAiInsertObject.c)
 *     IovAiRemoveObject @ 0x140534690 (IovAiRemoveObject.c)
 *     IovAiDecrementRemoveIrp @ 0x140645BD0 (IovAiDecrementRemoveIrp.c)
 *     IovAiIsInvalidIrpMdlMarking @ 0x140645D04 (IovAiIsInvalidIrpMdlMarking.c)
 *     IovAiRemoveIrp @ 0x140645E54 (IovAiRemoveIrp.c)
 *     IovCleanupAiDb @ 0x140645F6C (IovCleanupAiDb.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     IovAiReleaseDbLockFromDpcLevel @ 0x140645E00 (IovAiReleaseDbLockFromDpcLevel.c)
 */

__int64 __fastcall IovAiCleanDbLockContext(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdi

  if ( (*(_BYTE *)(a1 + 9) & 2) != 0 )
    result = IovAiReleaseDbLockFromDpcLevel(a1);
  if ( (*(_BYTE *)(a1 + 9) & 1) != 0 )
  {
    v3 = *(unsigned __int8 *)(a1 + 8);
    if ( KiIrqlFlags )
      result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), *(_BYTE *)(a1 + 8));
    __writecr8(v3);
    *(_BYTE *)(a1 + 9) &= ~1u;
    *(_BYTE *)(a1 + 8) = 0;
  }
  return result;
}
