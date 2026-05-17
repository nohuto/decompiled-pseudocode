/*
 * XREFs of RtlpNtQueryValueKey @ 0x1800E6050
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     NtQueryValueKey @ 0x18015F220 (NtQueryValueKey.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlpNtQueryValueKey(__int64 a1, _DWORD *a2, void *a3, int *a4)
{
  int v4; // eax
  __int64 Heap_0; // rax
  __int64 v10; // rbx
  int v11; // eax
  int v12; // edi
  _OWORD v14[3]; // [rsp+38h] [rbp-30h] BYREF
  int v15; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v14[0] = 0LL;
  if ( a4 )
    v4 = *a4;
  v15 = v4 + 12;
  Heap_0 = RtlAllocateHeap_0();
  v10 = Heap_0;
  if ( Heap_0 )
  {
    v11 = NtQueryValueKey(a1, v14, 2LL, Heap_0, v15, &v15);
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
        RtlFreeHeap_0();
        return (unsigned int)v12;
      }
    }
    if ( a4 )
      *a4 = *(_DWORD *)(v10 + 8);
    if ( a2 )
      *a2 = *(_DWORD *)(v10 + 4);
    if ( v12 >= 0 )
    {
      if ( a3 )
        memmove(a3, (const void *)(v10 + 12), *(unsigned int *)(v10 + 8));
    }
    goto LABEL_13;
  }
  return 3221225626LL;
}
