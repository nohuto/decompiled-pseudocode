/*
 * XREFs of ExDeleteResourceLite @ 0x140474A20
 * Callers:
 *     CcDeallocateBcb @ 0x1404749E4 (CcDeallocateBcb.c)
 *     RtlpCreateHeap @ 0x1404E3978 (RtlpCreateHeap.c)
 *     DifExDeleteResourceLiteWrapper @ 0x140650D40 (DifExDeleteResourceLiteWrapper.c)
 *     PiDrvDbDestroyNode @ 0x1407B5328 (PiDrvDbDestroyNode.c)
 *     TtmpDeleteQueue @ 0x1407ED2A0 (TtmpDeleteQueue.c)
 *     _PnpCtxCloseMachine @ 0x140895BF8 (_PnpCtxCloseMachine.c)
 *     DrvDbOpenContext @ 0x14089F29C (DrvDbOpenContext.c)
 *     DrvDbDestroyDatabaseNode @ 0x14089F990 (DrvDbDestroyDatabaseNode.c)
 *     PnpDereferenceNotify @ 0x1409DD548 (PnpDereferenceNotify.c)
 *     CmpInitCmRM @ 0x140A75780 (CmpInitCmRM.c)
 *     MUIInitializeResourceLock @ 0x140AE5278 (MUIInitializeResourceLock.c)
 *     RtlDestroyHeap @ 0x140B3BB10 (RtlDestroyHeap.c)
 *     CmpDelayFreeRMWorker @ 0x140B43590 (CmpDelayFreeRMWorker.c)
 *     SepTokenDeleteMethod @ 0x140B7CB10 (SepTokenDeleteMethod.c)
 * Callees:
 *     PsBoostThreadIoQoS @ 0x140205500 (PsBoostThreadIoQoS.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027C870 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x1402B6320 (ExpResourceEnforcesOwnershipTransfer.c)
 *     PsBoostThreadIo @ 0x1402BA700 (PsBoostThreadIo.c)
 *     DifObjTrkRemoveItem @ 0x1403ADC70 (DifObjTrkRemoveItem.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     DifIsPluginEnabled @ 0x14064C7D0 (DifIsPluginEnabled.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall ExDeleteResourceLite(PERESOURCE Resource)
{
  KIRQL v2; // al
  struct _LIST_ENTRY *Flink; // r8
  struct _LIST_ENTRY *Blink; // rdx
  unsigned __int64 v5; // rbx
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 TableSize; // ebx
  ERESOURCE_THREAD OwnerThread; // rbp
  POWNER_ENTRY OwnerTable; // r15
  unsigned int i; // r14d
  POWNER_ENTRY v11; // rcx
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 v12; // eax
  char v13; // bl
  ULONG_PTR v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // r8
  struct _SINGLE_LIST_ENTRY *v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  struct _SINGLE_LIST_ENTRY *v20; // r9
  unsigned int v21; // r9d
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  __incgsdword(0x90A0u);
  v2 = ExAcquireSpinLockExclusive(&ExpResourceSpinLock);
  Flink = Resource->SystemResourcesList.Flink;
  Blink = Resource->SystemResourcesList.Blink;
  v5 = v2;
  if ( (PERESOURCE)Resource->SystemResourcesList.Flink->Blink != Resource || (PERESOURCE)Blink->Flink != Resource )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    ExpResourceSpinLock = 0;
  else
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&ExpResourceSpinLock, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
  __writecr8(v5);
  Resource->SystemResourcesList.Flink = 0LL;
  Resource->SystemResourcesList.Blink = 0LL;
  TableSize = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
  OwnerThread = Resource->OwnerEntry.OwnerThread;
  if ( ((*(unsigned int *)&TableSize >> 1) & 1) != 0 )
  {
    OwnerThread &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (OwnerThread & 3) != 0 )
  {
    goto LABEL_11;
  }
  if ( OwnerThread )
  {
    if ( ExpResourceEnforcesOwnershipTransfer((__int64)Resource)
      && !(_DWORD)v15
      && (struct _KTHREAD *)OwnerThread != KeGetCurrentThread() )
    {
      KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), OwnerThread, 1uLL);
    }
    if ( (*(_BYTE *)&TableSize & 1) != 0 )
    {
      LOBYTE(v15) = 1;
      PsBoostThreadIo((LegacyAutoBoost *)OwnerThread, v15, v16, v17);
      *(_BYTE *)&TableSize &= ~1u;
    }
    if ( (*(_BYTE *)&TableSize & 4) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(OwnerThread + 1508));
      *(_BYTE *)&TableSize &= ~4u;
    }
    if ( (*(_BYTE *)&TableSize & 2) != 0 )
      ObDereferenceObjectDeferDeleteWithTag((PVOID)OwnerThread, 0x746C6644u);
  }
LABEL_11:
  OwnerTable = Resource->OwnerTable;
  if ( OwnerTable )
  {
    for ( i = 1; ; ++i )
    {
      v11 = Resource->OwnerTable;
      if ( i >= v11->TableSize )
      {
        ExFreePoolWithTag(v11, 0);
        break;
      }
      v12 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)OwnerTable[1].TableSize;
      ++OwnerTable;
      v13 = (char)v12;
      v14 = OwnerTable->OwnerThread;
      if ( ((*(unsigned int *)&v12 >> 1) & 1) != 0 )
      {
        v14 &= 0xFFFFFFFFFFFFFFFCuLL;
      }
      else if ( (v14 & 3) != 0 )
      {
        continue;
      }
      if ( v14 )
      {
        if ( ExpResourceEnforcesOwnershipTransfer((__int64)Resource)
          && !(_DWORD)v18
          && (struct _KTHREAD *)v14 != KeGetCurrentThread() )
        {
          KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), v14, 2uLL);
        }
        if ( (v13 & 1) != 0 )
        {
          LOBYTE(v18) = 1;
          PsBoostThreadIo((LegacyAutoBoost *)v14, v18, v19, v20);
          v13 &= ~1u;
        }
        if ( (v13 & 4) != 0 )
        {
          PsBoostThreadIoQoS((AutoBoost *)v14, 1LL, v19, v20);
          v13 &= ~4u;
        }
        if ( (v13 & 2) != 0 )
          ObDereferenceObjectDeferDeleteWithTag((PVOID)v14, 0x746C6644u);
      }
    }
  }
  if ( KernelVerifier == 1 && (unsigned __int8)DifIsPluginEnabled(48LL) )
    DifObjTrkRemoveItem(v21, (_RTL_BALANCED_LINKS *)Resource, v21 + 56);
  return 0;
}
