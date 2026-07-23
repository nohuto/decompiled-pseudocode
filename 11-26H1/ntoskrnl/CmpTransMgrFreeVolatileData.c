/*
 * XREFs of CmpTransMgrFreeVolatileData @ 0x1408C2CA0
 * Callers:
 *     CmpRmUnDoPhase @ 0x140864A08 (CmpRmUnDoPhase.c)
 *     CmpCleanupTransactionState @ 0x1408B3328 (CmpCleanupTransactionState.c)
 *     CmpCleanupLightWeightTransaction @ 0x1408B5128 (CmpCleanupLightWeightTransaction.c)
 *     CmRmFinalizeRecovery @ 0x140B3CA88 (CmRmFinalizeRecovery.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x14043F920 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140446F50 (CmpInitializeDelayDerefContext.c)
 *     CmpDereferenceSecurityNode @ 0x1404C20E0 (CmpDereferenceSecurityNode.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x140864FF0 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x1408651EC (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x1408B5EAC (CmpPrepareForSubtreeInvalidation.c)
 *     CmpDiscardKcb @ 0x1408C033C (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1408C065C (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1408C06E4 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1408C2C40 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmEqualTrans @ 0x1408C2FA0 (CmEqualTrans.c)
 *     CmpRebuildKcbCache @ 0x1408C31A8 (CmpRebuildKcbCache.c)
 *     CmpFreeKeyByCell @ 0x1408C3264 (CmpFreeKeyByCell.c)
 *     CmpLockRegistryExclusive @ 0x1408C8718 (CmpLockRegistryExclusive.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1408C9F40 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpRundownUnitOfWork @ 0x1408D6FC8 (CmpRundownUnitOfWork.c)
 *     CmpFreeValue @ 0x1408D71B4 (CmpFreeValue.c)
 *     HvFreeCell @ 0x1408D7AE8 (HvFreeCell.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     CmpInvalidateSubtree @ 0x140B494F4 (CmpInvalidateSubtree.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
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
