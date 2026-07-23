/*
 * XREFs of MiSignalCommitSignals @ 0x14042F350
 * Callers:
 *     MiReleaseNonPagedResources @ 0x14028B5D0 (MiReleaseNonPagedResources.c)
 *     MiDeleteUltraThreadContext @ 0x14028EB40 (MiDeleteUltraThreadContext.c)
 *     MiReleaseWriteInProgressCharges @ 0x1402AE9B4 (MiReleaseWriteInProgressCharges.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402CAC30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockPageTableCharges @ 0x14031AF70 (MiUnlockPageTableCharges.c)
 *     MiRemoveLockedPageCharge @ 0x14031F1B0 (MiRemoveLockedPageCharge.c)
 *     MiAddPageToInsertList @ 0x140320F90 (MiAddPageToInsertList.c)
 *     MiReturnExcessPoolCommit @ 0x140367634 (MiReturnExcessPoolCommit.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140391910 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     SmAcquireReleaseCharges @ 0x140396390 (SmAcquireReleaseCharges.c)
 *     MmReleaseResourceCharge @ 0x1404541D0 (MmReleaseResourceCharge.c)
 *     MiReplenishLocalCommit @ 0x14045BAD8 (MiReplenishLocalCommit.c)
 *     MiDeleteUltraMapContext @ 0x14045E5A0 (MiDeleteUltraMapContext.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
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
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || (LODWORD(v5) = PopHibernateInProgress) != 0 )
      *v7 = 0;
    else
      LODWORD(v5) = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(a1 + 17272), retaddr);
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
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
