/*
 * XREFs of RtlpCreateHeapEncoding @ 0x14061E3EC
 * Callers:
 *     RtlpCreateHeap @ 0x1404DCF18 (RtlpCreateHeap.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 */

__int64 __fastcall RtlpCreateHeapEncoding(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // ebx
  __int64 v5; // rdx

  result = *(unsigned int *)(a1 + 120);
  if ( (result & 2) == 0 && (*(_DWORD *)(a1 + 112) & 0x4000000) == 0 )
  {
    *(_DWORD *)(a1 + 136) = 0;
    *(_BYTE *)(a1 + 138) = 16;
    v4 = *(_DWORD *)(a1 + 136);
    *(_DWORD *)(a1 + 124) = v4;
    *(_DWORD *)(a1 + 136) = v4 | ExGenRandom(1, a2);
    result = ExGenRandom(1, v5);
    *(_DWORD *)(a1 + 140) = (unsigned __int16)result;
  }
  return result;
}
