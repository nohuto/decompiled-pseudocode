/*
 * XREFs of CmpTransMgrFreeVolatileData @ 0x1408BC6D0
 * Callers:
 *     CmpRmUnDoPhase @ 0x14085E718 (CmpRmUnDoPhase.c)
 *     CmpCleanupTransactionState @ 0x1408ACEE8 (CmpCleanupTransactionState.c)
 *     CmpCleanupLightWeightTransaction @ 0x1408AECE8 (CmpCleanupLightWeightTransaction.c)
 *     CmRmFinalizeRecovery @ 0x140B3A6E8 (CmRmFinalizeRecovery.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x140446E30 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14044EE20 (CmpInitializeDelayDerefContext.c)
 *     CmpDereferenceSecurityNode @ 0x1404C83A0 (CmpDereferenceSecurityNode.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x14085ED00 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x14085EEFC (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x1408AF9AC (CmpPrepareForSubtreeInvalidation.c)
 *     CmpDiscardKcb @ 0x1408B9D6C (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1408BA08C (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1408BA114 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1408BC670 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmEqualTrans @ 0x1408BC9D0 (CmEqualTrans.c)
 *     CmpRebuildKcbCache @ 0x1408BCBD8 (CmpRebuildKcbCache.c)
 *     CmpFreeKeyByCell @ 0x1408BCC94 (CmpFreeKeyByCell.c)
 *     CmpLockRegistryExclusive @ 0x1408C2148 (CmpLockRegistryExclusive.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1408C3970 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpRundownUnitOfWork @ 0x1408D0A08 (CmpRundownUnitOfWork.c)
 *     CmpFreeValue @ 0x1408D0BF4 (CmpFreeValue.c)
 *     HvFreeCell @ 0x1408D1528 (HvFreeCell.c)
 *     HvpMarkCellDirty @ 0x1408D4AB0 (HvpMarkCellDirty.c)
 *     CmpInvalidateSubtree @ 0x140B474C4 (CmpInvalidateSubtree.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 */

void __fastcall CmpTransMgrFreeVolatileData(ULONG_PTR BugCheckParameter2, int a2)
{
  __int64 v4; // rcx
  ULONG_PTR v5; // rdi
  __int64 v6; // rcx
  int v7; // ecx
  __int64 v8; // r8
  ULONG_PTR v9; // rbx
  __int64 v10; // rcx
  unsigned int v11; // ebp
  ULONG_PTR v12; // rbx
  ULONG_PTR v13; // rdx
  int v14; // edx
  _OWORD v15[2]; // [rsp+30h] [rbp-28h] BYREF

  v15[0] = 0LL;
  CmpInitializeDelayDerefContext(v15);
  while ( *(_QWORD *)(BugCheckParameter2 + 16) != BugCheckParameter2 + 16 )
  {
    v5 = *(_QWORD *)(BugCheckParameter2 + 24);
    if ( *(_QWORD *)(*(_QWORD *)(v5 + 48) + 32LL) )
    {
      CmpLockRegistryExclusive(v4);
      v6 = *(unsigned int *)(v5 + 68);
      if ( (_DWORD)v6 )
      {
        v7 = v6 - 4;
        if ( v7 && (v6 = (unsigned int)(v7 - 1), (_DWORD)v6) )
        {
          if ( (_DWORD)v6 == 4 )
          {
            v11 = *(_DWORD *)(v5 + 96);
            v12 = *(_QWORD *)(*(_QWORD *)(v5 + 48) + 32LL);
            if ( (int)HvpMarkCellDirty(v12, v11) >= 0 )
              CmpDereferenceSecurityNode(v12, v11);
          }
        }
        else
        {
          CmpFreeValue(*(_QWORD *)(*(_QWORD *)(v5 + 48) + 32LL), *(unsigned int *)(v5 + 92));
        }
      }
      else
      {
        v14 = *(_DWORD *)(v5 + 88);
        if ( v14 && v14 != -1 )
          CmpFreeKeyByCell(*(_QWORD *)(*(_QWORD *)(v5 + 48) + 32LL));
      }
      CmpUnlockRegistry(v6);
    }
    CmpLockRegistryExclusive(v4);
    v9 = *(_QWORD *)(v5 + 48);
    if ( *(_QWORD *)(v9 + 288) == BugCheckParameter2 )
    {
      v13 = *(unsigned int *)(v9 + 284);
      if ( (_DWORD)v13 != -1 )
      {
        HvFreeCell(*(_QWORD *)(v9 + 32), v13);
        *(_DWORD *)(v9 + 280) = 0;
        *(_DWORD *)(v9 + 284) = -1;
      }
      *(_QWORD *)(v9 + 288) = 0LL;
    }
    if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(v9 + 240), BugCheckParameter2, v8) && !*(_DWORD *)(v5 + 68) )
    {
      if ( a2 == 8 )
      {
        if ( (int)CmpPrepareToInvalidateAllHigherLayerKcbs(v9, 6, 0LL) < 0 )
          KeBugCheckEx(0x51u, 0x33uLL, BugCheckParameter2, v9, 0x10000uLL);
        if ( (int)CmpPrepareForSubtreeInvalidation(v9, 4, 0LL) < 0 )
          KeBugCheckEx(0x51u, 0x33uLL, BugCheckParameter2, v9, 0x10100uLL);
        CmpInvalidateAllHigherLayerKcbs(v9, 8, 6, (int)v15);
        CmpInvalidateSubtree(v9, 8, 4, (unsigned int)v15, 0LL);
        CmpFlushNotifiesOnKeyBodyList(v9, 8LL, (__int64)v15, 0);
        *(_WORD *)(v9 + 8) |= 0x20u;
        CmpMarkKeyUnbacked(v9);
        if ( (*(_DWORD *)(v9 + 8) & 0x20000) == 0 )
          CmpDiscardKcb(v9);
      }
      *(_QWORD *)(v9 + 240) = 0LL;
    }
    if ( *(_DWORD *)(v9 + 40) != -1 )
    {
      if ( *(_QWORD *)(v9 + 32) )
        CmpRebuildKcbCache(v9);
    }
    CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v9);
    CmpRundownUnitOfWork(v5);
    ExFreePoolWithTag((PVOID)v5, 0x77554D43u);
    CmpDereferenceKeyControlBlockWithLock(v9);
    CmpDrainDelayDerefContext((_QWORD **)v15);
    CmpUnlockRegistry(v10);
  }
}
