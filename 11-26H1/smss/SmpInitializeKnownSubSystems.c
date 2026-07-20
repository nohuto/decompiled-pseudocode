/*
 * XREFs of SmpInitializeKnownSubSystems @ 0x14000E0C0
 * Callers:
 *     SmpInit @ 0x140014CEC (SmpInit.c)
 * Callees:
 *     <none>
 */

__int64 SmpInitializeKnownSubSystems()
{
  char *Heap; // rax
  __int64 v1; // rbx
  __int64 v3; // rdi
  char *v4; // rcx

  Heap = (char *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, 0x300uLL);
  v1 = 0LL;
  SmpKnownSubSysTable = (__int64)Heap;
  if ( !Heap )
    return 3221225495LL;
  v3 = 32LL;
  while ( 1 )
  {
    v4 = &Heap[v1];
    *((_QWORD *)v4 + 1) = v4;
    *(_QWORD *)v4 = v4;
    RtlInitializeSRWLock(&Heap[v1 + 16]);
    v1 += 24LL;
    if ( !--v3 )
      break;
    Heap = (char *)SmpKnownSubSysTable;
  }
  RtlInitializeConditionVariable(&SmpSubSysReadyCondition);
  qword_140031498 = (__int64)&SmpOverflowSubSysList;
  SmpOverflowSubSysList = (__int64)&SmpOverflowSubSysList;
  return 0LL;
}
