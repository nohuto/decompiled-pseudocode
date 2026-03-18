/*
 * XREFs of PopPepLockActivityLink @ 0x1403B3A70
 * Callers:
 *     PopPepUpdateConstraints @ 0x1403B37EC (PopPepUpdateConstraints.c)
 *     PopPepSurprisePowerOn @ 0x1403B755C (PopPepSurprisePowerOn.c)
 *     PopPepComponentSetWakeHint @ 0x1404F524C (PopPepComponentSetWakeHint.c)
 *     PopPepCompleteComponentIdleState @ 0x140506C08 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetResidency @ 0x140611524 (PopPepComponentSetResidency.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402474C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140249B40 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExReleaseSpinLockShared @ 0x14026CEE0 (ExReleaseSpinLockShared.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402EDF10 (ExAcquireSpinLockShared.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall PopPepLockActivityLink(__int64 a1, __int64 *a2, unsigned int a3, unsigned int a4, KIRQL *a5)
{
  volatile LONG *v5; // rbx
  unsigned __int8 CurrentIrql; // di
  unsigned int v8; // ebp
  int i; // eax
  KIRQL v10; // al
  bool v11; // zf
  char result; // al

  v5 = (volatile LONG *)a2;
  if ( !a2 || *(_DWORD *)(a1 + 180) == 1 )
    goto LABEL_3;
  a2 = ActivityAttributes;
  if ( a3 == 6 )
  {
    if ( a4 == 6 )
      goto LABEL_3;
  }
  else if ( a3 <= 5 && LOBYTE(ActivityAttributes[17 * (int)a3]) == 1 )
  {
    goto LABEL_3;
  }
  if ( a4 > 5 || LOBYTE(ActivityAttributes[17 * (int)a4]) != 1 )
  {
    v10 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
    v11 = *(_BYTE *)(a1 + 125) == 1;
    *a5 = v10;
    if ( !v11 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel(v5);
      return 0;
    }
    ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 64), v10);
  }
LABEL_3:
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    v8 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 64), 0x1Fu) )
      v8 = ExpWaitForSpinLockExclusiveAndAcquire((int *)(a1 + 64), CurrentIrql);
    for ( i = *(_DWORD *)(a1 + 64); (i & 0xBFFFFFFF) != 0x80000000; i = *(_DWORD *)(a1 + 64) )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr((volatile signed __int32 *)(a1 + 64), 0x40000000u);
      if ( (++v8 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v8);
      }
      else
      {
        _mm_pause();
      }
    }
  }
  else
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented((int *)(a1 + 64), CurrentIrql);
  }
  *a5 = CurrentIrql;
  result = 1;
  *(_BYTE *)(a1 + 125) = 1;
  return result;
}
