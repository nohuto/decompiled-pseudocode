/*
 * XREFs of RtlpHeapTrkAllocCacheAligned @ 0x180110F04
 * Callers:
 *     RtlHeapTrkInitialize @ 0x180110AB0 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     NtQuerySystemInformation @ 0x18015F600 (NtQuerySystemInformation.c)
 */

char __fastcall RtlpHeapTrkAllocCacheAligned(__int64 *a1, unsigned __int64 *a2, int a3, unsigned __int64 a4)
{
  unsigned int v4; // ebx
  __int64 Heap_0; // rax
  unsigned int v10; // ebp
  unsigned __int64 v11; // rax
  unsigned __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  _DWORD v16[6]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  v16[0] = 0;
  if ( NtQuerySystemInformation(SystemRecommendedSharedDataAlignment, v16, 4u, 0LL) < 0 )
    return 0;
  if ( !v16[0] )
    return 0;
  Heap_0 = RtlAllocateHeap_0();
  *a1 = Heap_0;
  if ( !Heap_0 )
    return 0;
  v10 = v16[0] * ((unsigned int)(a3 + v16[0] - 1) / v16[0]);
  if ( !is_mul_ok(v10, a4) || v10 * a4 + v16[0] < v10 * a4 || (v11 = RtlAllocateHeap_0(), (*a2 = v11) == 0) )
  {
    RtlFreeHeap_0();
    *a1 = 0LL;
    return 0;
  }
  v13 = v11 + v16[0] - v11 % v16[0];
  if ( a4 )
  {
    v14 = 0LL;
    do
    {
      v15 = v10 * v4++;
      *(_QWORD *)(*a1 + 8 * v14) = v13 + v15;
      v14 = v4;
    }
    while ( v4 < a4 );
  }
  return 1;
}
