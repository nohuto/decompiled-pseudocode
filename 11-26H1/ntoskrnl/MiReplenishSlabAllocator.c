/*
 * XREFs of MiReplenishSlabAllocator @ 0x14020607C
 * Callers:
 *     MiFastReplenishWithAsync @ 0x1402A5938 (MiFastReplenishWithAsync.c)
 *     MiSharePagePrepare @ 0x140307910 (MiSharePagePrepare.c)
 *     MiAllocateSlabPageForMdl @ 0x14033A080 (MiAllocateSlabPageForMdl.c)
 *     MiGetSlabPage @ 0x14033A284 (MiGetSlabPage.c)
 *     MmAccessFault @ 0x1403A2390 (MmAccessFault.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403A2E0C (MiCopyOnWriteCheckConditions.c)
 *     MiReplenishSlabAllocatorWorker @ 0x1404C9090 (MiReplenishSlabAllocatorWorker.c)
 *     MmAllocateSecureKernelPages @ 0x1404E93EC (MmAllocateSecureKernelPages.c)
 *     MiProtectDriverSectionPte @ 0x1406E5D50 (MiProtectDriverSectionPte.c)
 *     MiInitialSlabPopulate @ 0x140707210 (MiInitialSlabPopulate.c)
 * Callees:
 *     KeQueryPriorityThread @ 0x1402052D0 (KeQueryPriorityThread.c)
 *     MiCreateSlabEntry @ 0x140206284 (MiCreateSlabEntry.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     MiReleaseNonPagedResources @ 0x14028C070 (MiReleaseNonPagedResources.c)
 *     MiFreeSlabEntry @ 0x1402A7A6C (MiFreeSlabEntry.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x14037B2F0 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x140395420 (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 *     MiInsertSlabEntry @ 0x1404C33F4 (MiInsertSlabEntry.c)
 *     MiReplenishSlabAllocatorByIdentity @ 0x140506498 (MiReplenishSlabAllocatorByIdentity.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiReplenishSlabAllocator(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // ebp
  __int64 v5; // r12
  struct _KTHREAD *CurrentThread; // rbx
  int v8; // r15d
  unsigned __int8 CurrentIrql; // r14
  unsigned int v10; // r8d
  __int64 SlabEntry; // rax
  __int64 v12; // r13
  unsigned int v13; // ebp
  int v16; // ebp
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v22; // [rsp+70h] [rbp+18h]

  v22 = a3;
  v4 = a3;
  v5 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(a1 + 128) != 8 && *(_QWORD *)(a1 + 96) + *(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL) >= a2 )
    return 1LL;
  CurrentThread = 0LL;
  v8 = 32;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    if ( !KeQueryPriorityThread(CurrentThread) )
    {
      v8 = 1;
      KiSetSystemPriorityThread((ULONG_PTR)CurrentThread, 1, v10);
    }
  }
  if ( *(_DWORD *)(a1 + 128) == 8 )
  {
    v13 = MiReplenishSlabAllocatorByIdentity(a1);
    if ( !v13 )
      goto LABEL_32;
  }
  else
  {
    while ( 1 )
    {
      LOBYTE(a4) = CurrentIrql;
      SlabEntry = MiCreateSlabEntry(a1, v5, v4, a4);
      v12 = SlabEntry;
      if ( !SlabEntry )
      {
        v13 = 0;
        goto LABEL_9;
      }
      v16 = *(_DWORD *)(SlabEntry + 92) & 2;
      v17 = 3LL;
      if ( CurrentIrql != 2 )
        v17 = 1LL;
      if ( !(unsigned int)MiInsertSlabEntry(v5, a1, SlabEntry, v17) )
        break;
      if ( CurrentIrql < 2u )
      {
        v20 = KeGetCurrentIrql();
        if ( (_BYTE)v20 != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v18) = 2;
          KiRaiseIrqlProcessIrqlFlags(v20, v18);
        }
      }
      MiFreeSlabEntry(a1, v12);
      if ( !v16 )
        MiReleaseNonPagedResources(
          v5,
          LODWORD(MiPageSizes[((unsigned __int64)*(unsigned __int16 *)(a1 + 136) >> 3) & 3]));
      v4 = v22;
      if ( CurrentIrql < 2u )
      {
        if ( KiIrqlFlags )
        {
          LOBYTE(v19) = CurrentIrql;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v19);
        }
        __writecr8(CurrentIrql);
LABEL_32:
        v4 = v22;
      }
    }
    if ( !v16 )
      MiReleaseNonPagedResources(v5, LODWORD(MiPageSizes[((unsigned __int64)*(unsigned __int16 *)(a1 + 136) >> 3) & 3]));
    v13 = 1;
  }
LABEL_9:
  if ( CurrentThread )
  {
    if ( v8 != 32 )
    {
      v21 = v8;
      KiClearSystemPriority((ULONG_PTR)CurrentThread, &v21);
    }
    if ( CurrentThread->SpecialApcDisable++ == -1
      && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v13;
}
