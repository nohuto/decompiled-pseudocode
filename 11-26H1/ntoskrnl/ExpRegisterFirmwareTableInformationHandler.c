/*
 * XREFs of ExpRegisterFirmwareTableInformationHandler @ 0x1408392AC
 * Callers:
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpRegisterFirmwareTableInformationHandler(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v3; // ebx
  struct _KTHREAD *CurrentThread; // rax
  struct _SINGLE_LIST_ENTRY *i; // rdi
  struct _SINGLE_LIST_ENTRY *v7; // rcx
  struct _SINGLE_LIST_ENTRY *Next; // rdx
  struct _SINGLE_LIST_ENTRY *v9; // rax
  __int64 Pool2; // rax
  _SINGLE_LIST_ENTRY **v11; // rdi
  _SINGLE_LIST_ENTRY *v12; // rax

  v3 = 0;
  if ( a3 )
  {
    return (unsigned int)-1073741727;
  }
  else if ( a1 && a2 >= 0x18 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)&ExpSysDbgLock.PriorityFloorCounts[24], 1u);
    for ( i = ExpSysDbgLock.IoSelfBoostsEntry.Next - 3; ; i = v7->Next - 3 )
    {
      v7 = i + 3;
      if ( &ExpSysDbgLock.IoSelfBoostsEntry == &i[3] )
        break;
      if ( LODWORD(i->Next) == *(_DWORD *)a1 )
      {
        if ( *(_BYTE *)(a1 + 4) )
        {
          v3 = 0x40000000;
          goto LABEL_22;
        }
        if ( i[2].Next == *(struct _SINGLE_LIST_ENTRY **)(a1 + 16) )
        {
          Next = v7->Next;
          if ( v7->Next[1].Next == v7 )
          {
            v9 = i[4].Next;
            if ( v9->Next == v7 )
            {
              v9->Next = Next;
              Next[1].Next = v9;
              ObfDereferenceObject(i[2].Next);
              ExFreePoolWithTag(i, 0x54465241u);
              goto LABEL_22;
            }
          }
LABEL_19:
          __fastfail(3u);
        }
        goto LABEL_21;
      }
    }
    if ( !*(_BYTE *)(a1 + 4) )
    {
LABEL_21:
      v3 = -1073741811;
      goto LABEL_22;
    }
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      v11 = (_SINGLE_LIST_ENTRY **)(Pool2 + 24);
      *(_DWORD *)Pool2 = *(_DWORD *)a1;
      *(_QWORD *)(Pool2 + 8) = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(Pool2 + 16) = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(Pool2 + 32) = Pool2 + 24;
      *(_QWORD *)(Pool2 + 24) = Pool2 + 24;
      *(_QWORD *)(Pool2 + 48) = Pool2 + 40;
      *(_QWORD *)(Pool2 + 40) = Pool2 + 40;
      PsReferenceSiloContext(*(void **)(Pool2 + 16));
      v12 = *(_SINGLE_LIST_ENTRY **)ExpSysDbgLock.PriorityFloorCounts;
      if ( **(struct _KTHREAD ***)ExpSysDbgLock.PriorityFloorCounts != (struct _KTHREAD *)&ExpSysDbgLock.IoSelfBoostsEntry )
        goto LABEL_19;
      *v11 = &ExpSysDbgLock.IoSelfBoostsEntry;
      v11[1] = v12;
      v12->Next = (struct _SINGLE_LIST_ENTRY *)v11;
      *(_QWORD *)ExpSysDbgLock.PriorityFloorCounts = v11;
    }
    else
    {
      v3 = -1073741670;
    }
LABEL_22:
    ExReleaseResourceLite((PERESOURCE)&ExpSysDbgLock.PriorityFloorCounts[24]);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741820;
  }
  return v3;
}
