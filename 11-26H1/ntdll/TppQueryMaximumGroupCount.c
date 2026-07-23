/*
 * XREFs of TppQueryMaximumGroupCount @ 0x1800C8C88
 * Callers:
 *     TpInitializePackage @ 0x1800C8914 (TpInitializePackage.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     NtQuerySystemInformationEx @ 0x180161C10 (NtQuerySystemInformationEx.c)
 */

__int64 TppQueryMaximumGroupCount()
{
  unsigned __int16 v0; // di
  _WORD *Heap_0; // rbx
  ULONG SystemInformationLength; // eax
  NTSTATUS v3; // eax
  ULONG ReturnLength; // [rsp+40h] [rbp+8h] BYREF
  int InputBuffer; // [rsp+48h] [rbp+10h] BYREF

  ReturnLength = 0;
  v0 = 0;
  Heap_0 = 0LL;
  for ( SystemInformationLength = 0; ; SystemInformationLength = ReturnLength )
  {
    InputBuffer = 4;
    v3 = NtQuerySystemInformationEx(
           SystemLogicalProcessorAndGroupInformation,
           &InputBuffer,
           4u,
           Heap_0,
           SystemInformationLength,
           &ReturnLength);
    if ( v3 >= 0 )
      break;
    if ( v3 != -1073741820 )
      goto LABEL_9;
    if ( Heap_0 )
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap_0);
    Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, ReturnLength);
    if ( !Heap_0 )
      return v0;
  }
  v0 = Heap_0[4];
LABEL_9:
  if ( Heap_0 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap_0);
  return v0;
}
