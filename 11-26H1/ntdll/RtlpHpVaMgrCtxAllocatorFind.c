/*
 * XREFs of RtlpHpVaMgrCtxAllocatorFind @ 0x1800705AC
 * Callers:
 *     RtlpHpAllocVA @ 0x18006EF50 (RtlpHpAllocVA.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x180070444 (RtlpHpVaMgrCtxAllocatorReference.c)
 * Callees:
 *     RtlpHpVaMgrCtxAllocatorCompare @ 0x18007064C (RtlpHpVaMgrCtxAllocatorCompare.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxAllocatorFind(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // r10
  __int64 v5; // r11
  unsigned int v6; // esi
  __int64 v10; // rax

  v4 = 0LL;
  v5 = a1 + 2160;
  v6 = 0;
  while ( v6 < *(_DWORD *)(a1 + 2156) )
  {
    if ( *(_QWORD *)(v5 + 24) )
    {
      ++v6;
      if ( (unsigned int)RtlpHpVaMgrCtxAllocatorCompare(v5) )
        return v5;
    }
    else
    {
      v10 = v5;
      if ( v4 )
        v10 = v4;
      v4 = v10;
    }
    v5 += 48LL;
  }
  if ( !v4 && *(_DWORD *)(a1 + 2156) < 0xFFu )
    v4 = a1 + 48 * (*(unsigned int *)(a1 + 2156) + 45LL);
  if ( a4 )
    *a4 = v4;
  return 0LL;
}
