/*
 * XREFs of PpmResetPerfTimes @ 0x1404CB840
 * Callers:
 *     PpmCheckReset @ 0x1404CB820 (PpmCheckReset.c)
 *     PpmCheckResetProcessors @ 0x1404FB714 (PpmCheckResetProcessors.c)
 *     PpmResetPerfEngineForProcessor @ 0x140526454 (PpmResetPerfEngineForProcessor.c)
 *     PpmCheckProcessorInit @ 0x14060D220 (PpmCheckProcessorInit.c)
 * Callees:
 *     PpmHvSnapPerformanceAccumulation @ 0x1402540F0 (PpmHvSnapPerformanceAccumulation.c)
 *     PpmSnapPerformanceAccumulation @ 0x14025568C (PpmSnapPerformanceAccumulation.c)
 *     PpmResetPerformanceAccumulation @ 0x1404CB92C (PpmResetPerformanceAccumulation.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall PpmResetPerfTimes(__int64 a1)
{
  __int64 v1; // rdi
  _OWORD *v2; // rsi
  LARGE_INTEGER *v3; // rbp
  LARGE_INTEGER *v4; // rbx
  void *v5; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
  {
    v2 = (_OWORD *)(v1 + 32);
    v3 = *(LARGE_INTEGER **)(v1 + 88);
    if ( *(_BYTE *)(a1 + 68) )
    {
      v4 = (LARGE_INTEGER *)(a1 - 35264);
      PpmResetPerformanceAccumulation(a1 - 35264);
      PpmSnapPerformanceAccumulation(v4, 1, 0, 0, v1 + 32, v3);
    }
    else
    {
      PpmHvSnapPerformanceAccumulation(a1, 1, 0LL, (unsigned __int64 *)(v1 + 32));
    }
    v5 = *(void **)(v1 + 216);
    *(_OWORD *)(v1 + 160) = *v2;
    *(_OWORD *)(v1 + 176) = *(_OWORD *)(v1 + 48);
    *(_OWORD *)(v1 + 192) = *(_OWORD *)(v1 + 64);
    *(_QWORD *)(v1 + 208) = *(_QWORD *)(v1 + 80);
    memmove(v5, v3, 112 * v3[6].LowPart + 56);
    *(_QWORD *)(v1 + 8) = *(_QWORD *)v2;
    *(_QWORD *)v1 = *(_QWORD *)(v1 + 40);
    *(_QWORD *)(v1 + 16) = *(_QWORD *)(v1 + 48);
    result = *(unsigned int *)(v1 + 80);
    *(_DWORD *)(v1 + 24) = result;
  }
  return result;
}
