/*
 * XREFs of RtlCreateBoundaryDescriptor @ 0x1800E1E00
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

POBJECT_BOUNDARY_DESCRIPTOR __cdecl RtlCreateBoundaryDescriptor(PUNICODE_STRING Name, ULONG Flags)
{
  char v2; // si
  SIZE_T v4; // rbp
  _OBJECT_BOUNDARY_DESCRIPTOR *Heap_0; // rax
  _OBJECT_BOUNDARY_DESCRIPTOR *v6; // rbx
  int Length; // eax

  v2 = Flags;
  if ( (Flags & 0xFFFFFFFE) != 0 )
    return 0LL;
  if ( !Name->Length )
    return 0LL;
  if ( (Name->Length & 1) != 0 )
    return 0LL;
  v4 = (Name->Length + 31) & 0xFFFFFFF8;
  Heap_0 = (_OBJECT_BOUNDARY_DESCRIPTOR *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, v4);
  v6 = Heap_0;
  if ( !Heap_0 )
    return 0LL;
  Heap_0->Items = 1;
  Heap_0->TotalSize = v4;
  Heap_0->Version = 1;
  if ( (v2 & 1) != 0 )
    Heap_0->Flags = 1;
  Length = Name->Length;
  v6[1].Version = 1;
  v6[1].Items = Length + 8;
  memmove(&v6[1].TotalSize, Name->Buffer, Name->Length);
  return v6;
}
