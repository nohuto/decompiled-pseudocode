/*
 * XREFs of PipGetDeviceObjectLocation @ 0x14079FCD4
 * Callers:
 *     IoReserveKsrPersistentMemoryEx @ 0x14079F6D0 (IoReserveKsrPersistentMemoryEx.c)
 *     PipMatchPersistentMemory @ 0x1407A07C4 (PipMatchPersistentMemory.c)
 *     PipMatchPersistentMemoryV1 @ 0x1407A08A4 (PipMatchPersistentMemoryV1.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipGetDeviceObjectLocation(ULONG_PTR BugCheckParameter2, unsigned int *a2, _QWORD *a3)
{
  __int64 v6; // rsi
  unsigned int v7; // eax
  void *Pool2; // rdi
  int ObjectProperty; // ebx
  __int64 v11; // rcx
  _WORD *v12; // rcx
  __int64 v13; // rcx
  unsigned __int16 *v14; // rdi
  _WORD *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // [rsp+90h] [rbp+8h] BYREF
  int v19; // [rsp+A8h] [rbp+20h] BYREF

  v19 = 0;
  if ( !BugCheckParameter2 )
    goto LABEL_28;
  v6 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL);
  if ( !v6 || (*(_DWORD *)(v6 + 396) & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock(BugCheckParameter2, (PVOID)*(unsigned __int16 *)(BugCheckParameter2 + 2));
    v11 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v11 )
    {
      IoAddTriageDumpDataBlock(v11, (PVOID)(unsigned int)*(__int16 *)(v11 + 2));
      v12 = (_WORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL);
      if ( *v12 )
      {
        IoAddTriageDumpDataBlock((ULONG)v12, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
      }
    }
    v13 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL);
    if ( v13 )
    {
      v14 = (unsigned __int16 *)(v13 + 40);
      IoAddTriageDumpDataBlock(v13, (PVOID)0x388);
      if ( *v14 )
      {
        IoAddTriageDumpDataBlock((ULONG)v14, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v14 + 1), (PVOID)*v14);
      }
      v15 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 56LL);
      if ( *v15 )
      {
        IoAddTriageDumpDataBlock((ULONG)v15, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 56LL));
      }
      v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 16LL);
      if ( v16 && *(_WORD *)(v16 + 56) )
      {
        IoAddTriageDumpDataBlock(v16 + 56, (PVOID)2);
        v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 16LL);
        IoAddTriageDumpDataBlock(*(_QWORD *)(v17 + 64), (PVOID)*(unsigned __int16 *)(v17 + 56));
      }
    }
LABEL_28:
    KeBugCheckEx(0xCAu, 2uLL, BugCheckParameter2, 0LL, 0LL);
  }
  v7 = 0;
  Pool2 = 0LL;
  v18 = 0;
  ObjectProperty = -1073741789;
  while ( ObjectProperty == -1073741789 )
  {
    ObjectProperty = PnpGetObjectProperty(
                       PiPnpRtlCtx,
                       *(_QWORD *)(v6 + 48),
                       1,
                       0,
                       0LL,
                       (__int64)&DEVPKEY_Device_LocationPaths,
                       (__int64)&v19,
                       (__int64)Pool2,
                       v7,
                       (__int64)&v18,
                       0);
    if ( ObjectProperty == -1073741789 )
    {
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x61706E50u);
      Pool2 = (void *)ExAllocatePool2(0x40uLL);
      if ( !Pool2 )
        return (unsigned int)-1073741670;
    }
    v7 = v18;
  }
  if ( ObjectProperty < 0 )
  {
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x61706E50u);
  }
  else
  {
    *a2 = v7 >> 1;
    *a3 = Pool2;
  }
  return (unsigned int)ObjectProperty;
}
