/*
 * XREFs of RtlpNtEnumerateSubKey @ 0x1800E7CE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     NtEnumerateKey @ 0x18015F480 (NtEnumerateKey.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlpNtEnumerateSubKey(HANDLE KeyHandle, __int64 a2, ULONG a3)
{
  unsigned __int16 *Heap_0; // rbx
  ULONG Length; // edi
  NTSTATUS v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // ecx
  ULONG ResultLength; // [rsp+68h] [rbp+10h] BYREF

  Heap_0 = 0LL;
  ResultLength = 0;
  Length = 0;
  if ( !*(_WORD *)(a2 + 2)
    || (Length = *(unsigned __int16 *)(a2 + 2) + 16,
        (Heap_0 = (unsigned __int16 *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, Length)) != 0LL) )
  {
    v8 = NtEnumerateKey(KeyHandle, a3, KeyBasicInformation, Heap_0, Length, &ResultLength);
    v9 = v8;
    if ( v8 < 0 )
    {
      if ( v8 != -2147483643 )
        goto LABEL_9;
    }
    else
    {
      if ( !Heap_0 )
        return v9;
      if ( (unsigned int)*(unsigned __int16 *)(a2 + 2) >= *((_DWORD *)Heap_0 + 3) )
      {
        v10 = Heap_0[6];
        *(_WORD *)a2 = v10;
        memmove(*(void **)(a2 + 8), Heap_0 + 8, v10);
LABEL_10:
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
        return v9;
      }
      v9 = -2147483643;
    }
    *(_WORD *)a2 = ResultLength - 16;
LABEL_9:
    if ( Heap_0 )
      goto LABEL_10;
    return v9;
  }
  return 3221225495LL;
}
