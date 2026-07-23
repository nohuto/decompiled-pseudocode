/*
 * XREFs of RtlQueryRegistryValueWithFallback @ 0x180125130
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     NtQueryValueKey @ 0x18015F120 (NtQueryValueKey.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

NTSTATUS __cdecl RtlQueryRegistryValueWithFallback(
        HANDLE PrimaryHandle,
        HANDLE FallbackHandle,
        PUNICODE_STRING ValueName,
        ULONG ValueLength,
        PULONG ValueType,
        PVOID ValueData,
        PULONG ResultLength)
{
  ULONG Length; // esi
  ULONG *Heap_0; // rdi
  int v14; // ebx
  ULONG v15; // [rsp+60h] [rbp+8h] BYREF

  v15 = 0;
  if ( __PAIR128__((unsigned __int64)PrimaryHandle, (unsigned __int64)FallbackHandle) == 0 )
    return -1073741811;
  Length = ValueLength + 16;
  if ( ValueLength >= 0xFFFFFFF0 )
    return -1073741675;
  Heap_0 = (ULONG *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, Length);
  if ( Heap_0 )
  {
    v14 = -1073741772;
    if ( !PrimaryHandle
      || (v14 = NtQueryValueKey(PrimaryHandle, ValueName, KeyValuePartialInformation, Heap_0, Length, &v15),
          v14 == -1073741772) )
    {
      if ( !FallbackHandle )
      {
LABEL_19:
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
        return v14;
      }
      v14 = NtQueryValueKey(FallbackHandle, ValueName, KeyValuePartialInformation, Heap_0, Length, &v15);
    }
    if ( (int)(v14 + 0x80000000) < 0 || v14 == -2147483643 )
    {
      if ( ValueType )
        *ValueType = Heap_0[1];
      if ( v14 >= 0 )
      {
        if ( ValueLength < Heap_0[2] )
          v14 = -2147483643;
        else
          memmove(ValueData, Heap_0 + 3, Heap_0[2]);
      }
      *ResultLength = Heap_0[2];
    }
    goto LABEL_19;
  }
  return -1073741801;
}
