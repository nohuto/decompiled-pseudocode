/*
 * XREFs of DifReleaseSpinLockFromDpcLevelSafe @ 0x140650E04
 * Callers:
 *     DifObjTrkRemoveItem @ 0x1403B7980 (DifObjTrkRemoveItem.c)
 *     DifObjTrkQeuryInvokeDeleteRange @ 0x14051E9C0 (DifObjTrkQeuryInvokeDeleteRange.c)
 *     DifObjTrkInsertItem @ 0x14064EAB0 (DifObjTrkInsertItem.c)
 *     DifObjTrkLookupItem @ 0x14064EC40 (DifObjTrkLookupItem.c)
 *     DifTerminateObjectTracking @ 0x14064EFE0 (DifTerminateObjectTracking.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

unsigned __int8 __fastcall DifReleaseSpinLockFromDpcLevelSafe(unsigned __int8 *a1, __int64 a2)
{
  unsigned __int8 result; // al
  unsigned __int64 v4; // rdi

  result = a1[1];
  if ( (result & 2) != 0 )
  {
    if ( (result & 4) != 0 )
    {
      *(_QWORD *)(a2 + 8) = 0LL;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)a2);
    }
    else
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)a2);
    }
    a1[1] &= ~2u;
    result = a1[1];
  }
  if ( (result & 1) != 0 )
  {
    v4 = *a1;
    if ( KiIrqlFlags )
      result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), *a1);
    __writecr8(v4);
    a1[1] &= ~1u;
    *a1 = 0;
  }
  return result;
}
