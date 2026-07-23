/*
 * XREFs of RtlIdnToAscii @ 0x1800ADCE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpNameprepAsciiRealWorker @ 0x1800AD6E0 (RtlpNameprepAsciiRealWorker.c)
 */

NTSTATUS __cdecl RtlIdnToAscii(
        ULONG Flags,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PWSTR DestinationString,
        PLONG DestinationStringLength)
{
  wchar_t *Heap_0; // rbx
  _WORD *v10; // rax
  void *v11; // rdi
  NTSTATUS v12; // esi
  __int64 v14; // [rsp+38h] [rbp-40h]

  Heap_0 = (wchar_t *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x3FEuLL);
  v10 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x406uLL);
  v11 = v10;
  if ( Heap_0 && v10 )
  {
    v12 = RtlpNameprepAsciiRealWorker(
            Flags,
            (unsigned __int16 *)SourceString,
            SourceStringLength,
            DestinationString,
            DestinationStringLength,
            1,
            Heap_0,
            v14,
            v10);
  }
  else
  {
    v12 = -1073741801;
    if ( !Heap_0 )
      goto LABEL_6;
  }
  RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
LABEL_6:
  if ( v11 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v11);
  return v12;
}
