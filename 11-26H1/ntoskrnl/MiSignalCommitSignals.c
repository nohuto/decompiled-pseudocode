/*
 * XREFs of MiSignalCommitSignals @ 0x14043CAA0
 * Callers:
 *     MiReleaseNonPagedResources @ 0x14028C070 (MiReleaseNonPagedResources.c)
 *     MiDeleteUltraThreadContext @ 0x14028F5E0 (MiDeleteUltraThreadContext.c)
 *     MiReleaseWriteInProgressCharges @ 0x1402CCBF4 (MiReleaseWriteInProgressCharges.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402E8BF0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockPageTableCharges @ 0x140318F40 (MiUnlockPageTableCharges.c)
 *     MiRemoveLockedPageCharge @ 0x14031D180 (MiRemoveLockedPageCharge.c)
 *     MiAddPageToInsertList @ 0x14031EF60 (MiAddPageToInsertList.c)
 *     MiReturnExcessPoolCommit @ 0x140365894 (MiReturnExcessPoolCommit.c)
 *     MiReturnCommit @ 0x14036D2B0 (MiReturnCommit.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14038FB60 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     SmAcquireReleaseCharges @ 0x140394610 (SmAcquireReleaseCharges.c)
 *     MmReleaseResourceCharge @ 0x14045A9A0 (MmReleaseResourceCharge.c)
 *     MiReplenishLocalCommit @ 0x140462B18 (MiReplenishLocalCommit.c)
 *     MiDeleteUltraMapContext @ 0x1404655E0 (MiDeleteUltraMapContext.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 */

int __fastcall MiSignalCommitSignals(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  bool v6; // cf
  _DWORD *v7; // rdi
  volatile LONG *v8; // rcx
  KIRQL v9; // si
  unsigned __int64 v10; // rax
  struct _KEVENT *v11; // rcx
  int v12; // eax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(_QWORD *)(a1 + 17248);
  v5 = *(_QWORD *)(a1 + 17240);
  if ( a2 <= a3 )
  {
    if ( a3 >= v4 && a2 < v4 )
      goto LABEL_11;
    if ( a2 >= v5 )
      return v5;
    v6 = a3 < v5;
  }
  else
  {
    if ( a2 >= v4 && a3 < v4 )
      goto LABEL_11;
    if ( a3 >= v5 )
      return v5;
    v6 = a2 < v5;
  }
  if ( v6 )
    return v5;
LABEL_11:
  v7 = (_DWORD *)(a1 + 17272);
  v8 = (volatile LONG *)(a1 + 17272);
  if ( KeGetCurrentIrql() == 2 )
  {
    v9 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v8);
  }
  else
  {
    v9 = ExAcquireSpinLockExclusive(v8);
  }
  v10 = *(_QWORD *)(a1 + 23104);
  if ( v10 >= *(_QWORD *)(a1 + 17240) )
  {
    v6 = v10 < *(_QWORD *)(a1 + 17248);
    v12 = *(_DWORD *)(*(_QWORD *)(a1 + 376) + 4LL);
    if ( v6 )
    {
      if ( v12 == 1 )
      {
        KeResetEvent(*(PRKEVENT *)(a1 + 376));
        KeResetEvent(*(PRKEVENT *)(a1 + 384));
      }
    }
    else
    {
      if ( !v12 )
        KeSetEvent(*(PRKEVENT *)(a1 + 376), 0, 0);
      if ( *(_QWORD *)(a1 + 23448) == *(_QWORD *)(a1 + 17224) )
        KeSetEvent(*(PRKEVENT *)(a1 + 384), 0, 0);
    }
    v5 = *(_QWORD *)(a1 + 368);
    if ( *(_DWORD *)(v5 + 4) != 1 )
      goto LABEL_29;
    v11 = *(struct _KEVENT **)(a1 + 368);
  }
  else
  {
    if ( !*(_DWORD *)(*(_QWORD *)(a1 + 368) + 4LL) )
      KeSetEvent(*(PRKEVENT *)(a1 + 368), 0, 0);
    v5 = *(_QWORD *)(a1 + 376);
    if ( *(_DWORD *)(v5 + 4) != 1 )
      goto LABEL_29;
    KeResetEvent(*(PRKEVENT *)(a1 + 376));
    v11 = *(struct _KEVENT **)(a1 + 384);
  }
  LODWORD(v5) = KeResetEvent(v11);
LABEL_29:
  if ( v9 == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || (LODWORD(v5) = stru_140F11D08.WaitStatus) != 0 )
      *v7 = 0;
    else
      LODWORD(v5) = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(a1 + 17272), retaddr);
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      *v7 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(a1 + 17272), retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
    LODWORD(v5) = v9;
    __writecr8(v9);
  }
  return v5;
}
