/*
 * XREFs of RtlpHpVaMgrCtxAllocatorCompare @ 0x18007064C
 * Callers:
 *     RtlpHpVaMgrCtxAllocatorFind @ 0x1800705AC (RtlpHpVaMgrCtxAllocatorFind.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpVaMgrCtxAllocatorCompare(__int64 a1, __int64 a2, int a3)
{
  if ( ((*(unsigned __int8 *)(a1 + 46) >> 1) & 7) == *(_DWORD *)(a2 + 4)
    && *(unsigned __int8 *)(a1 + 45) == *(_DWORD *)(a2 + 8)
    && *(_QWORD *)(a1 + 32) == *(_QWORD *)(a2 + 16)
    && (!a3 || *(unsigned __int16 *)(a1 + 40) == a3) )
  {
    return (*(_BYTE *)(a2 + 12) ^ (unsigned __int8)~(*(_BYTE *)(a1 + 46) >> 4)) & 1;
  }
  else
  {
    return 0LL;
  }
}
