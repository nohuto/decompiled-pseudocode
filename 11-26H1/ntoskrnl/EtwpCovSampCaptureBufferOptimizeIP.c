/*
 * XREFs of EtwpCovSampCaptureBufferOptimizeIP @ 0x1404802F0
 * Callers:
 *     EtwpCovSampCaptureKernelStack @ 0x1406CC658 (EtwpCovSampCaptureKernelStack.c)
 *     EtwpCovSampCaptureUserStack @ 0x140A36CA0 (EtwpCovSampCaptureUserStack.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall EtwpCovSampCaptureBufferOptimizeIP(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r8
  unsigned int v4; // ecx
  __int64 v5; // rdx

  result = *(unsigned int *)(a1 + 56);
  if ( (result & 8) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 64);
    v4 = 1;
    v5 = *(unsigned __int16 *)(a1 + 62);
    while ( v4 < (unsigned int)v5 )
    {
      result = v4;
      if ( v3 == *(_QWORD *)(a1 + 8LL * v4 + 64) )
      {
        memmove((void *)(a1 + 64), (const void *)(a1 + 72), 8 * v5 - 8);
        result = 0xFFFFLL;
        --*(_WORD *)(a1 + 62);
        *(_DWORD *)(a1 + 56) &= ~8u;
        return result;
      }
      ++v4;
    }
  }
  return result;
}
