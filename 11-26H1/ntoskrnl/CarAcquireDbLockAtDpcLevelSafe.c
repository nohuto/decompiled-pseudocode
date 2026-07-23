/*
 * XREFs of CarAcquireDbLockAtDpcLevelSafe @ 0x14064FC18
 * Callers:
 *     CarAddUniqueViolation @ 0x14064FC9C (CarAddUniqueViolation.c)
 *     CarDeleteDriverRuleViolations @ 0x14064FF90 (CarDeleteDriverRuleViolations.c)
 *     CarDeletePluginRuleViolations @ 0x140650040 (CarDeletePluginRuleViolations.c)
 *     CarDeleteRuleViolationDB @ 0x1406500D0 (CarDeleteRuleViolationDB.c)
 *     CarWriteEarlyRuleViolationEvents @ 0x140650230 (CarWriteEarlyRuleViolationEvents.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

char __fastcall CarAcquireDbLockAtDpcLevelSafe(__int64 a1)
{
  PRTL_AVL_TABLE v2; // rax
  struct _KTHREAD *CurrentThread; // rdi
  volatile LONG *p_Balance; // rcx

  LOBYTE(v2) = (_BYTE)CarDb;
  if ( CarDb[1].OrderedPointer != KeGetCurrentThread() )
  {
    LOBYTE(v2) = *(_BYTE *)(a1 + 9);
    if ( ((unsigned __int8)v2 & 2) == 0 )
    {
      CurrentThread = KeGetCurrentThread();
      p_Balance = (volatile LONG *)&CarDb[1].BalancedRoot.Balance;
      if ( ((unsigned __int8)v2 & 4) != 0 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel(p_Balance);
        CarDb[1].OrderedPointer = CurrentThread;
      }
      else
      {
        ExAcquireSpinLockSharedAtDpcLevel(p_Balance);
      }
      v2 = CarDb;
      *(_BYTE *)(a1 + 9) |= 2u;
      *(_QWORD *)a1 = v2;
    }
  }
  return (char)v2;
}
