/*
 * XREFs of BasepInitializeFindFileHandle @ 0x14001D544
 * Callers:
 *     InternalFindFirstFileExW @ 0x14001D704 (InternalFindFirstFileExW.c)
 * Callees:
 *     <none>
 */

struct _RTL_CRITICAL_SECTION *__fastcall BasepInitializeFindFileHandle(struct _RTL_CRITICAL_SECTION_DEBUG *a1)
{
  struct _RTL_CRITICAL_SECTION *Heap; // rax
  struct _RTL_CRITICAL_SECTION *v3; // rbx

  Heap = (struct _RTL_CRITICAL_SECTION *)RtlAllocateHeap(
                                           *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                                           KernelBaseGlobalData + 786432,
                                           0x50uLL);
  v3 = Heap;
  if ( Heap )
  {
    Heap->DebugInfo = a1;
    *(_QWORD *)&Heap->LockCount = 0LL;
    Heap->OwningThread = 0LL;
    Heap->LockSemaphore = 0LL;
    Heap->SpinCount = 0LL;
    if ( RtlInitializeCriticalSection(Heap + 1) < 0 )
    {
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v3);
      return 0LL;
    }
  }
  return v3;
}
