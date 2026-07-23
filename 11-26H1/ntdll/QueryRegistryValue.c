/*
 * XREFs of QueryRegistryValue @ 0x1800DC55C
 * Callers:
 *     _GetOverlayPackagePathFromKey @ 0x18001E478 (_GetOverlayPackagePathFromKey.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     NtQueryValueKey @ 0x18015F120 (NtQueryValueKey.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall QueryRegistryValue(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        _DWORD *a3,
        void *a4,
        unsigned int *a5)
{
  ULONG Length; // ebx
  _DWORD *Heap_0; // rdi
  NTSTATUS ValueKey; // eax
  unsigned int v12; // ebx
  unsigned int v13; // eax
  ULONG ResultLength[10]; // [rsp+30h] [rbp-28h] BYREF

  ResultLength[0] = 0;
  if ( !a5 )
    return 3221225485LL;
  Length = *a5 + 12;
  Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, Length);
  if ( Heap_0 )
  {
    ValueKey = NtQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, Heap_0, Length, ResultLength);
    v12 = ValueKey;
    if ( ValueKey < 0 )
    {
      if ( ValueKey != -2147483643 && ValueKey != -1073741789 )
        goto LABEL_12;
    }
    else
    {
      v13 = Heap_0[2];
      if ( !v13 )
      {
        v12 = -1073741811;
LABEL_12:
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
        return v12;
      }
      if ( v13 <= *a5 )
      {
        *a5 = v13;
        if ( a4 )
          memmove(a4, Heap_0 + 3, v13);
        if ( a3 )
          *a3 = Heap_0[1];
        goto LABEL_12;
      }
    }
    v12 = -1073741789;
    *a5 = Heap_0[2];
    goto LABEL_12;
  }
  return 3221225626LL;
}
