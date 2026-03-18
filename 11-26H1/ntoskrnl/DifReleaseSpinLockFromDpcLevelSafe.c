/*
 * XREFs of DifReleaseSpinLockFromDpcLevelSafe @ 0x14064D224
 * Callers:
 *     DifObjTrkRemoveItem @ 0x1403ADC70 (DifObjTrkRemoveItem.c)
 *     DifObjTrkQeuryInvokeDeleteRange @ 0x14051C810 (DifObjTrkQeuryInvokeDeleteRange.c)
 *     DifObjTrkInsertItem @ 0x14064AED0 (DifObjTrkInsertItem.c)
 *     DifObjTrkLookupItem @ 0x14064B060 (DifObjTrkLookupItem.c)
 *     DifTerminateObjectTracking @ 0x14064B400 (DifTerminateObjectTracking.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
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
