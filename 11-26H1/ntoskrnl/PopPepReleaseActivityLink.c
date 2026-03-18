/*
 * XREFs of PopPepReleaseActivityLink @ 0x1403B0E80
 * Callers:
 *     PopPepProcessEvent @ 0x1403AFCF0 (PopPepProcessEvent.c)
 *     PopPepUpdateConstraints @ 0x1403B37EC (PopPepUpdateConstraints.c)
 *     PopPepSurprisePowerOn @ 0x1403B755C (PopPepSurprisePowerOn.c)
 *     PopPepComponentSetWakeHint @ 0x1404F524C (PopPepComponentSetWakeHint.c)
 *     PopPepCompleteComponentIdleState @ 0x140506C08 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetResidency @ 0x140611524 (PopPepComponentSetResidency.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036A848 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

void __fastcall PopPepReleaseActivityLink(__int64 a1, _DWORD *a2, char a3, KIRQL a4)
{
  unsigned __int64 v4; // rdi
  __int64 i; // rax
  _DWORD *v7; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v4 = a4;
  if ( a3 == 1 )
  {
    for ( i = 0LL; (unsigned int)i < 6; i = (unsigned int)(i + 1) )
    {
      v7 = *(_DWORD **)(a1 + 8 * i + 72);
      if ( v7 && *v7 )
      {
        ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64), a4);
        return;
      }
    }
    if ( *(_BYTE *)(a1 + 136) )
      *(_BYTE *)(a1 + 125) = 0;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      *(_DWORD *)(a1 + 64) = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(a1 + 64), retaddr);
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      *a2 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a2, retaddr);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    {
      _InterlockedAnd((volatile signed __int32 *)(a1 + 64), 0xBFFFFFFF);
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 64));
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented((volatile signed __int32 *)(a1 + 64), retaddr);
    }
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
  __writecr8(v4);
}
