/*
 * XREFs of IopQueueInvalidateBusRelationsRequest @ 0x1404CC4FC
 * Callers:
 *     IoInvalidateDeviceRelations @ 0x1404CC3D0 (IoInvalidateDeviceRelations.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

void __fastcall IopQueueInvalidateBusRelationsRequest(_QWORD *Object, int a2)
{
  __int64 v4; // rax
  unsigned __int8 v5; // si
  __int64 Pool2; // r14
  __int64 v7; // rdx
  __int64 CurrentIrql; // rcx
  char v9; // bl
  __int64 *v10; // rax
  bool v11; // di
  __int64 v12; // rcx
  _WORD *v13; // rcx
  __int64 v14; // rcx
  unsigned __int16 *v15; // rsi
  _WORD *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx

  if ( !Object )
    goto LABEL_2;
  v4 = *(_QWORD *)(Object[39] + 40LL);
  if ( !v4 || (*(_DWORD *)(v4 + 396) & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock((ULONG)Object, (PVOID)*((unsigned __int16 *)Object + 1));
    v12 = Object[1];
    if ( v12 )
    {
      IoAddTriageDumpDataBlock(v12, (PVOID)(unsigned int)*(__int16 *)(v12 + 2));
      v13 = (_WORD *)(Object[1] + 56LL);
      if ( *v13 )
      {
        IoAddTriageDumpDataBlock((ULONG)v13, (PVOID)2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(Object[1] + 64LL), (PVOID)*(unsigned __int16 *)(Object[1] + 56LL));
      }
    }
    v14 = *(_QWORD *)(Object[39] + 40LL);
    if ( v14 )
    {
      v15 = (unsigned __int16 *)(v14 + 40);
      IoAddTriageDumpDataBlock(v14, (PVOID)0x388);
      if ( *v15 )
      {
        IoAddTriageDumpDataBlock((ULONG)v15, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v15 + 1), (PVOID)*v15);
      }
      v16 = (_WORD *)(*(_QWORD *)(Object[39] + 40LL) + 56LL);
      if ( *v16 )
      {
        IoAddTriageDumpDataBlock((ULONG)v16, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(Object[39] + 40LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(Object[39] + 40LL) + 56LL));
      }
      v17 = *(_QWORD *)(*(_QWORD *)(Object[39] + 40LL) + 16LL);
      if ( v17 && *(_WORD *)(v17 + 56) )
      {
        IoAddTriageDumpDataBlock(v17 + 56, (PVOID)2);
        v18 = *(_QWORD *)(*(_QWORD *)(Object[39] + 40LL) + 16LL);
        IoAddTriageDumpDataBlock(*(_QWORD *)(v18 + 64), (PVOID)*(unsigned __int16 *)(v18 + 56));
      }
    }
LABEL_2:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)Object, 0LL, 0LL);
  }
  v5 = 0;
  Pool2 = ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    ObfReferenceObjectWithTag(Object, 0x65706E50u);
    *(_QWORD *)(Pool2 + 16) = Object;
    *(_DWORD *)(Pool2 + 24) = a2;
    CurrentIrql = KeGetCurrentIrql();
    if ( (unsigned __int8)CurrentIrql < 2u )
    {
      v9 = 1;
      v5 = KeGetCurrentIrql();
      if ( v5 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v7) = 2;
        LOBYTE(CurrentIrql) = v5;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v7);
      }
    }
    else
    {
      v9 = 0;
    }
    KxAcquireSpinLock(&IoInvalidateBusRelationsLock);
    v10 = (__int64 *)qword_140F84EA8;
    v11 = IoInvalidateBusRelationsQueue == (_QWORD)&IoInvalidateBusRelationsQueue;
    if ( *(__int64 **)qword_140F84EA8 != &IoInvalidateBusRelationsQueue )
      __fastfail(3u);
    *(_QWORD *)Pool2 = &IoInvalidateBusRelationsQueue;
    *(_QWORD *)(Pool2 + 8) = v10;
    *v10 = Pool2;
    qword_140F84EA8 = Pool2;
    KxReleaseSpinLock(&IoInvalidateBusRelationsLock);
    if ( v9 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
      __writecr8(v5);
    }
    if ( v11 )
      ExQueueWorkItem(&IoInvalidateBusRelationsWorkItem, DelayedWorkQueue);
  }
}
