/*
 * XREFs of EtwpCovSampCaptureFlushStats @ 0x14077D150
 * Callers:
 *     EtwpCoverageSamplerQuery @ 0x140A32D00 (EtwpCoverageSamplerQuery.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x140275D20 (KeQueryMaximumProcessorCountEx.c)
 */

ULONG __fastcall EtwpCovSampCaptureFlushStats(__int64 a1, _DWORD *a2)
{
  ULONG result; // eax
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // r11
  unsigned int v8; // ecx
  __int64 v9; // r8
  _DWORD *v10; // rcx
  unsigned __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r9

  result = KeQueryMaximumProcessorCountEx(0xFFFFu);
  if ( result )
  {
    v5 = 0LL;
    v6 = result;
    do
    {
      v7 = ((unsigned int)*(_QWORD *)(a1 + 8) >> 13) & 0x3FFFF;
      _BitScanReverse(&v8, v7);
      v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)((char *)ExSaPageGroupDescriptorArrayLock.SListFaultAddress + v5)
                                 + 8LL * (v8 - 2))
                     + 8 * (v7 ^ (unsigned int)(1 << v8))
                     + 8)
         + 8 * ((*(_QWORD *)(a1 + 8) >> 4) & 0x1FFLL)
         + 15;
      v10 = a2;
      v11 = v9 & 0xFFFFFFFFFFFFFFF0uLL;
      v12 = 0LL;
      v13 = 8LL;
      do
      {
        result = _InterlockedExchange((volatile __int32 *)(v12 + v11 + 304), 0);
        *v10 += result;
        v12 += 4LL;
        ++v10;
        --v13;
      }
      while ( v13 );
      v5 += 8LL;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
