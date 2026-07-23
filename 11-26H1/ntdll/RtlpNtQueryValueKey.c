/*
 * XREFs of RtlpNtQueryValueKey @ 0x1800E4260
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     NtQueryValueKey @ 0x18015F120 (NtQueryValueKey.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlpNtQueryValueKey(HANDLE KeyHandle, _DWORD *a2, void *a3, int *a4)
{
  int v4; // eax
  char *Heap_0; // rax
  char *v10; // rbx
  NTSTATUS v11; // eax
  int v12; // edi
  _UNICODE_STRING ValueName; // [rsp+38h] [rbp-30h] BYREF
  ULONG Length; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  ValueName = 0LL;
  if ( a4 )
    v4 = *a4;
  Length = v4 + 12;
  Heap_0 = (char *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(v4 + 12));
  v10 = Heap_0;
  if ( Heap_0 )
  {
    v11 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Heap_0, Length, &Length);
    if ( v11 == -1073741772 )
    {
      v12 = 0;
      *(_QWORD *)(v10 + 4) = 0LL;
    }
    else
    {
      v12 = v11;
      if ( v11 < 0 && v11 != -2147483643 )
      {
LABEL_13:
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v10);
        return (unsigned int)v12;
      }
    }
    if ( a4 )
      *a4 = *((_DWORD *)v10 + 2);
    if ( a2 )
      *a2 = *((_DWORD *)v10 + 1);
    if ( v12 >= 0 )
    {
      if ( a3 )
        memmove(a3, v10 + 12, *((unsigned int *)v10 + 2));
    }
    goto LABEL_13;
  }
  return 3221225626LL;
}
