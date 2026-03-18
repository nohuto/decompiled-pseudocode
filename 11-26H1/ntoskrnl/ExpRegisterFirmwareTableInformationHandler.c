/*
 * XREFs of ExpRegisterFirmwareTableInformationHandler @ 0x14083306C
 * Callers:
 *     NtSetSystemInformation @ 0x140833840 (NtSetSystemInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpRegisterFirmwareTableInformationHandler(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v3; // ebx
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY **i; // rdi
  struct _LIST_ENTRY *v7; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v9; // rax
  __int64 Pool2; // rax
  struct _LIST_ENTRY *v11; // rdi
  struct _LIST_ENTRY *Blink; // rax

  v3 = 0;
  if ( a3 )
  {
    return (unsigned int)-1073741727;
  }
  else if ( a1 && a2 >= 0x18 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)&ExpSysDbgLock.792, 1u);
    for ( i = &ExpSysDbgLock.ThreadListEntry.Flink[-2].Blink; ; i = &v7->Flink[-2].Blink )
    {
      v7 = (struct _LIST_ENTRY *)(i + 3);
      if ( &ExpSysDbgLock.ThreadListEntry == (_LIST_ENTRY *)(i + 3) )
        break;
      if ( *(_DWORD *)i == *(_DWORD *)a1 )
      {
        if ( *(_BYTE *)(a1 + 4) )
        {
          v3 = 0x40000000;
          goto LABEL_22;
        }
        if ( i[2] == *(struct _LIST_ENTRY **)(a1 + 16) )
        {
          Flink = v7->Flink;
          if ( v7->Flink->Blink == v7 )
          {
            v9 = i[4];
            if ( v9->Flink == v7 )
            {
              v9->Flink = Flink;
              Flink->Blink = v9;
              ObfDereferenceObject(i[2]);
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
      v11 = (struct _LIST_ENTRY *)(Pool2 + 24);
      *(_DWORD *)Pool2 = *(_DWORD *)a1;
      *(_QWORD *)(Pool2 + 8) = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(Pool2 + 16) = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(Pool2 + 32) = Pool2 + 24;
      *(_QWORD *)(Pool2 + 24) = Pool2 + 24;
      *(_QWORD *)(Pool2 + 48) = Pool2 + 40;
      *(_QWORD *)(Pool2 + 40) = Pool2 + 40;
      PsReferenceSiloContext(*(void **)(Pool2 + 16));
      Blink = ExpSysDbgLock.ThreadListEntry.Blink;
      if ( ExpSysDbgLock.ThreadListEntry.Blink->Flink != &ExpSysDbgLock.ThreadListEntry )
        goto LABEL_19;
      v11->Flink = &ExpSysDbgLock.ThreadListEntry;
      v11->Blink = Blink;
      Blink->Flink = v11;
      ExpSysDbgLock.ThreadListEntry.Blink = v11;
    }
    else
    {
      v3 = -1073741670;
    }
LABEL_22:
    ExReleaseResourceLite((PERESOURCE)&ExpSysDbgLock.792);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741820;
  }
  return v3;
}
