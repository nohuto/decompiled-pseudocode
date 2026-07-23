/*
 * XREFs of RtlpHeapTrkAllocCacheAligned @ 0x180110A94
 * Callers:
 *     RtlHeapTrkInitialize @ 0x180110640 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     NtQuerySystemInformation @ 0x18015F500 (NtQuerySystemInformation.c)
 */

char __fastcall RtlpHeapTrkAllocCacheAligned(void **a1, unsigned __int64 *a2, int a3, unsigned __int64 a4)
{
  unsigned int v4; // ebx
  PVOID Heap_0; // rax
  void *v10; // r8
  unsigned int v11; // ebp
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  char *v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  unsigned int v18[6]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  v18[0] = 0;
  if ( NtQuerySystemInformation(SystemRecommendedSharedDataAlignment, v18, 4u, 0LL) < 0 )
    return 0;
  if ( !v18[0] )
    return 0;
  Heap_0 = RtlAllocateHeap_0(HeapHandle, 0, 8 * a4);
  *a1 = Heap_0;
  v10 = Heap_0;
  if ( !Heap_0 )
    return 0;
  v11 = v18[0] * ((a3 + v18[0] - 1) / v18[0]);
  v12 = v11 * a4;
  if ( !is_mul_ok(v11, a4) || v12 + v18[0] < v12 )
  {
LABEL_8:
    RtlFreeHeap_0(HeapHandle, 0, v10);
    *a1 = 0LL;
    return 0;
  }
  v13 = (unsigned __int64)RtlAllocateHeap_0(HeapHandle, 8u, v12 + v18[0]);
  *a2 = v13;
  if ( !v13 )
  {
    v10 = *a1;
    goto LABEL_8;
  }
  v15 = (char *)(v13 + v18[0] - v13 % v18[0]);
  if ( a4 )
  {
    v16 = 0LL;
    do
    {
      v17 = v11 * v4++;
      *((_QWORD *)*a1 + v16) = &v15[v17];
      v16 = v4;
    }
    while ( v4 < a4 );
  }
  return 1;
}
