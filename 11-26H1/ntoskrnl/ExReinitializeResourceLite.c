/*
 * XREFs of ExReinitializeResourceLite @ 0x1404AFB20
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIoQoS @ 0x1402055E0 (PsBoostThreadIoQoS.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027BDE0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x140300FE0 (ExpResourceEnforcesOwnershipTransfer.c)
 *     PsBoostThreadIo @ 0x1403053C0 (PsBoostThreadIo.c)
 *     PerfLogExecutiveResourceInitialize @ 0x140528A54 (PerfLogExecutiveResourceInitialize.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

NTSTATUS __stdcall ExReinitializeResourceLite(PERESOURCE Resource)
{
  POWNER_ENTRY OwnerTable; // r14
  unsigned int v3; // r13d
  unsigned int TableSize; // r15d
  ERESOURCE_THREAD v5; // rax
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 v6; // ebx
  ERESOURCE_THREAD v7; // rbp
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _SINGLE_LIST_ENTRY *v11; // r9
  POWNER_ENTRY v12; // rcx
  unsigned int i; // r12d
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 v14; // eax
  char v15; // bl
  ULONG_PTR OwnerThread; // rbp
  __int64 v17; // rdx
  __int64 v18; // r8
  struct _SINGLE_LIST_ENTRY *v19; // r9
  struct _OWNER_ENTRY *v20; // [rsp+78h] [rbp+10h]

  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  OwnerTable = Resource->OwnerTable;
  v3 = 0;
  if ( OwnerTable )
  {
    TableSize = OwnerTable->TableSize;
    v12 = Resource->OwnerTable;
    for ( i = 1; ; ++i )
    {
      if ( i >= TableSize )
      {
        memset_0(&OwnerTable[1], 0, 16LL * (OwnerTable->TableSize - 1));
        goto LABEL_4;
      }
      v14 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)v12[1].TableSize;
      ++v12;
      v15 = (char)v14;
      v20 = v12;
      OwnerThread = v12->OwnerThread;
      if ( ((*(unsigned int *)&v14 >> 1) & 1) != 0 )
      {
        OwnerThread &= 0xFFFFFFFFFFFFFFFCuLL;
      }
      else if ( (OwnerThread & 3) != 0 )
      {
        continue;
      }
      if ( OwnerThread )
      {
        ++v3;
        if ( ExpResourceEnforcesOwnershipTransfer((__int64)Resource)
          && !(_DWORD)v17
          && (struct _KTHREAD *)OwnerThread != KeGetCurrentThread() )
        {
          KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), OwnerThread, 3uLL);
        }
        if ( (v15 & 1) != 0 )
        {
          LOBYTE(v17) = 1;
          PsBoostThreadIo((LegacyAutoBoost *)OwnerThread, v17, v18, v19);
          v15 &= ~1u;
        }
        if ( (v15 & 4) != 0 )
        {
          PsBoostThreadIoQoS((AutoBoost *)OwnerThread, 1LL, v18, v19);
          v15 &= ~4u;
        }
        if ( (v15 & 2) != 0 )
          ObDereferenceObjectDeferDeleteWithTag((PVOID)OwnerThread, 0x746C6644u);
        v12 = v20;
      }
    }
  }
  TableSize = 0;
LABEL_4:
  v5 = Resource->OwnerEntry.OwnerThread;
  if ( v5 )
  {
    ++TableSize;
    if ( (v5 & 3) == 0 )
      ++v3;
  }
  v6 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
  v7 = Resource->OwnerEntry.OwnerThread;
  if ( ((*(unsigned int *)&v6 >> 1) & 1) != 0 )
  {
    v7 &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (v7 & 3) != 0 )
  {
    goto LABEL_10;
  }
  if ( v7 )
  {
    if ( ExpResourceEnforcesOwnershipTransfer((__int64)Resource)
      && !(_DWORD)v9
      && (struct _KTHREAD *)v7 != KeGetCurrentThread() )
    {
      KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), v7, 4uLL);
    }
    if ( (*(_BYTE *)&v6 & 1) != 0 )
    {
      LOBYTE(v9) = 1;
      PsBoostThreadIo((LegacyAutoBoost *)v7, v9, v10, v11);
      *(_BYTE *)&v6 &= ~1u;
    }
    if ( (*(_BYTE *)&v6 & 4) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 1508));
      *(_BYTE *)&v6 &= ~4u;
    }
    if ( (*(_BYTE *)&v6 & 2) != 0 )
      ObDereferenceObjectDeferDeleteWithTag((PVOID)v7, 0x746C6644u);
  }
LABEL_10:
  Resource->ActiveCount = 0;
  Resource->ActiveEntries = 0;
  Resource->ReservedLowFlags = 0;
  Resource->SharedWaiters = 0LL;
  Resource->ExclusiveWaiters = 0LL;
  Resource->OwnerEntry = 0LL;
  *(_QWORD *)&Resource->ContentionCount = 0LL;
  Resource->NumberOfExclusiveWaiters = 0;
  __incgsdword(0x909Cu);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65560LL, Resource, TableSize, v3);
  return 0;
}
