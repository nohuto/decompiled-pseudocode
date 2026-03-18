/*
 * XREFs of EtwpAllocateTraceBuffer @ 0x1404BCFC4
 * Callers:
 *     EtwpAllocateFreeBuffers @ 0x1402199DC (EtwpAllocateFreeBuffers.c)
 *     EtwpPreserveLogger @ 0x14082E4AC (EtwpPreserveLogger.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x1403454C0 (MiFreePagesFromMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035D330 (MmMapLockedPagesSpecifyCache.c)
 *     EtwpAllocatePartitionMemory @ 0x1404BD074 (EtwpAllocatePartitionMemory.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     EtwpAllocatePhysicalPages @ 0x140825018 (EtwpAllocatePhysicalPages.c)
 *     EtwpMdlInit @ 0x140826DC4 (EtwpMdlInit.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

PVOID __fastcall EtwpAllocateTraceBuffer(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  _QWORD *v3; // rcx
  ULONG_PTR v4; // rcx
  PVOID result; // rax
  ULONG_PTR *v6; // rcx
  struct _MDL *v7; // rsi
  ULONG_PTR v8; // rdi
  ULONG_PTR v9; // rax
  __int64 PhysicalPages; // r9
  ULONG v11; // r8d
  int v12; // r9d

  v3 = (_QWORD *)(BugCheckParameter2 + 1584);
  if ( *v3 )
    return (PVOID)EtwpAllocatePartitionMemory(v3, a2);
  if ( (*(_DWORD *)(BugCheckParameter2 + 816) & 0x20000000) != 0 )
  {
    v6 = *(ULONG_PTR **)(BugCheckParameter2 + 1600);
    v7 = *(struct _MDL **)(BugCheckParameter2 + 1592);
    v8 = *(_DWORD *)(BugCheckParameter2 + 4) >> 12;
    if ( v6 )
    {
      v9 = *v6;
      if ( *v6 < v8 )
        KeBugCheckEx(0x11Du, 0x100uLL, BugCheckParameter2, v9, *(_DWORD *)(BugCheckParameter2 + 4) >> 12);
      memmove(&v7[1], &v6[v9 - v8 + 1], 8 * v8);
      PhysicalPages = (unsigned int)v8;
      **(_QWORD **)(BugCheckParameter2 + 1600) -= v8;
    }
    else
    {
      PhysicalPages = EtwpAllocatePhysicalPages(&v7[1]);
    }
    EtwpMdlInit(*(_QWORD *)(BugCheckParameter2 + 1592), (unsigned int)PhysicalPages, 0LL, PhysicalPages);
    if ( v12 != (_DWORD)v8 || (result = MmMapLockedPagesSpecifyCache(v7, 0, MmCached, 0LL, v11, 0x40000020u)) == 0LL )
    {
      while ( 1 )
        MiFreePagesFromMdl((ULONG_PTR)v7, 0, 0, 0);
    }
  }
  else
  {
    v4 = 258LL;
    if ( *(_DWORD *)(BugCheckParameter2 + 300) != 1 )
      v4 = 66LL;
    return (PVOID)ExAllocatePool2(v4);
  }
  return result;
}
