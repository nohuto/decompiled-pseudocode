/*
 * XREFs of DifAcquireSpinLockAtDpcLevelSafe @ 0x140650D4C
 * Callers:
 *     DifObjTrkRemoveItem @ 0x1403B7980 (DifObjTrkRemoveItem.c)
 *     DifObjTrkQeuryInvokeDeleteRange @ 0x14051E9C0 (DifObjTrkQeuryInvokeDeleteRange.c)
 *     DifObjTrkInsertItem @ 0x14064EAB0 (DifObjTrkInsertItem.c)
 *     DifObjTrkLookupItem @ 0x14064EC40 (DifObjTrkLookupItem.c)
 *     DifTerminateObjectTracking @ 0x14064EFE0 (DifTerminateObjectTracking.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall DifAcquireSpinLockAtDpcLevelSafe(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  char v6; // cl
  unsigned __int8 CurrentIrql; // si

  CurrentThread = KeGetCurrentThread();
  *(_WORD *)a1 = 0;
  *(_BYTE *)(a1 + 1) = 4;
  v6 = 4;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
    *(_BYTE *)(a1 + 1) |= 1u;
    v6 = *(_BYTE *)(a1 + 1);
    *(_BYTE *)a1 = CurrentIrql;
  }
  if ( *(struct _KTHREAD **)(a3 + 8) != CurrentThread && (v6 & 2) == 0 )
  {
    if ( (v6 & 4) != 0 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)a3);
      *(_QWORD *)(a3 + 8) = CurrentThread;
    }
    else
    {
      ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)a3);
    }
    *(_BYTE *)(a1 + 1) |= 2u;
  }
}
