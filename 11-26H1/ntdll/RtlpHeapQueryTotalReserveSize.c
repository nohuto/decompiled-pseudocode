/*
 * XREFs of RtlpHeapQueryTotalReserveSize @ 0x180092950
 * Callers:
 *     <none>
 * Callees:
 *     RtlpQueryMemoryUsageHeap @ 0x1800929D0 (RtlpQueryMemoryUsageHeap.c)
 */

__int64 __fastcall RtlpHeapQueryTotalReserveSize(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v2 = *(_DWORD *)(a1 + 16) == -571548178;
  v7 = 0LL;
  v8 = 0LL;
  if ( v2 )
  {
    v6 = (*(_QWORD *)(a1 + 128) + *(_QWORD *)(a1 + 88)) << 12;
    v5 = (*(_QWORD *)(a1 + 136) + *(_QWORD *)(a1 + 96)) << 12;
    result = 0LL;
  }
  else
  {
    result = RtlpQueryMemoryUsageHeap(a1, &v8, &v7);
    if ( (int)result < 0 )
      return result;
    v5 = v7;
    v6 = v8;
  }
  *(_QWORD *)(a2 + 8) += v5;
  *(_QWORD *)a2 += v6;
  ++*(_DWORD *)(a2 + 16);
  return result;
}
