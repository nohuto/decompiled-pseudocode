/*
 * XREFs of RtlpNtEnumerateSubKey @ 0x1800E8AD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     NtEnumerateKey @ 0x18015F580 (NtEnumerateKey.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlpNtEnumerateSubKey(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 Heap_0; // rbx
  int v7; // edi
  int v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // ecx
  int v12; // [rsp+68h] [rbp+10h] BYREF

  Heap_0 = 0LL;
  v12 = 0;
  v7 = 0;
  if ( !*(_WORD *)(a2 + 2) || (v7 = *(unsigned __int16 *)(a2 + 2) + 16, (Heap_0 = RtlAllocateHeap_0()) != 0) )
  {
    v8 = NtEnumerateKey(a1, a3, 0LL, Heap_0, v7, &v12);
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
      if ( (unsigned int)*(unsigned __int16 *)(a2 + 2) >= *(_DWORD *)(Heap_0 + 12) )
      {
        v10 = *(unsigned __int16 *)(Heap_0 + 12);
        *(_WORD *)a2 = v10;
        memmove(*(void **)(a2 + 8), (const void *)(Heap_0 + 16), v10);
LABEL_10:
        RtlFreeHeap_0();
        return v9;
      }
      v9 = -2147483643;
    }
    *(_WORD *)a2 = v12 - 16;
LABEL_9:
    if ( Heap_0 )
      goto LABEL_10;
    return v9;
  }
  return 3221225495LL;
}
