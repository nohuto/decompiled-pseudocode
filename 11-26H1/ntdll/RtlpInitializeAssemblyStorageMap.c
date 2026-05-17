/*
 * XREFs of RtlpInitializeAssemblyStorageMap @ 0x1800A2738
 * Callers:
 *     RtlCreateActivationContext @ 0x1800A1F40 (RtlCreateActivationContext.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x1800A23B0 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 * Callees:
 *     DbgPrintEx @ 0x1800413D0 (DbgPrintEx.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpInitializeAssemblyStorageMap(int *a1, unsigned int a2, void *a3)
{
  unsigned int v3; // ebx
  void *Heap_0; // rbp
  int v7; // r15d

  v3 = 0;
  Heap_0 = a3;
  v7 = 0;
  if ( a1 && a2 )
  {
    if ( !a3 )
    {
      if ( !is_mul_ok(a2, 8uLL) )
        return (unsigned int)-1073741675;
      Heap_0 = (void *)RtlAllocateHeap_0();
      if ( !Heap_0 )
        return (unsigned int)-1073741801;
      v7 = 1;
    }
    if ( a2 )
      memset_thunk_772440563353939046(Heap_0, 0, 8LL * a2);
    *a1 = v7;
    a1[1] = a2;
    *((_QWORD *)a1 + 1) = Heap_0;
  }
  else
  {
    DbgPrintEx(
      51,
      0,
      "SXS: %s() bad parameters:\nSXS:    Map        : 0x%p\nSXS:    EntryCount : 0x%lx\n",
      "RtlpInitializeAssemblyStorageMap",
      a1,
      a2);
    return (unsigned int)-1073741811;
  }
  return v3;
}
