/*
 * XREFs of RtlGetSystemTimePrecise @ 0x180011550
 * Callers:
 *     EtwpWriteToPrivateBuffers @ 0x18000F710 (EtwpWriteToPrivateBuffers.c)
 *     EtwpReserveTraceBuffer @ 0x180011230 (EtwpReserveTraceBuffer.c)
 *     EtwpInitLoggerContext @ 0x180077550 (EtwpInitLoggerContext.c)
 *     EtwpFinalizeLogFileHeader @ 0x180078A04 (EtwpFinalizeLogFileHeader.c)
 *     EtwpFinalizeRelogFileHeaderStats @ 0x180078F90 (EtwpFinalizeRelogFileHeaderStats.c)
 * Callees:
 *     NtQueryPerformanceCounter @ 0x18015F560 (NtQueryPerformanceCounter.c)
 */

__int64 RtlGetSystemTimePrecise()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  unsigned __int64 i; // rax
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // r14
  char v5; // di
  __int64 v6; // rbp
  unsigned __int64 v7; // rdx
  __int64 v8; // rdx
  unsigned __int64 v10; // [rsp+68h] [rbp+10h] BYREF

  while ( 1 )
  {
    v0 = MEMORY[0x7FFE0340];
    v1 = 2147352596LL;
    for ( i = 2147353432LL; (MEMORY[0x7FFE0340] & 1) != 0; v0 = MEMORY[0x7FFE0340] )
      _mm_pause();
    v3 = MEMORY[0x7FFE0348];
    v4 = MEMORY[0x7FFE0358];
    v5 = MEMORY[0x7FFE0368];
    v6 = MEMORY[0x7FFE0014];
    if ( (MEMORY[0x7FFE03C6] & 1) == 0 )
    {
LABEL_4:
      NtQueryPerformanceCounter(&v10, 0LL);
      v7 = v10;
      goto LABEL_5;
    }
    if ( (MEMORY[0x7FFE03C6] & 2) != 0 )
    {
      if ( !RtlpHypervisorSharedUserVa || !*(_DWORD *)RtlpHypervisorSharedUserVa )
        goto LABEL_4;
      if ( MEMORY[0x7FFE03C6] >= 0 )
      {
        if ( (MEMORY[0x7FFE03C6] & 0x20) != 0 )
        {
          _mm_lfence();
        }
        else if ( (MEMORY[0x7FFE03C6] & 0x10) != 0 )
        {
          _mm_mfence();
        }
        i = __rdtsc();
        LODWORD(v1) = HIDWORD(i);
        i = (unsigned int)i;
        v1 = (unsigned int)v1;
      }
      else
      {
        __asm { rdtscp }
      }
      v7 = MEMORY[0x7FFE03B8]
         + *(_QWORD *)(RtlpHypervisorSharedUserVa + 16)
         + (((i | (v1 << 32)) * (unsigned __int128)*(unsigned __int64 *)(RtlpHypervisorSharedUserVa + 8)) >> 64);
    }
    else if ( MEMORY[0x7FFE03C6] < 0 )
    {
      __asm { rdtscp }
      v7 = MEMORY[0x7FFE03B8] + 0x7FFE00147FFE0358LL;
    }
    else
    {
      if ( (MEMORY[0x7FFE03C6] & 0x20) != 0 )
      {
        _mm_lfence();
      }
      else if ( (MEMORY[0x7FFE03C6] & 0x10) != 0 )
      {
        _mm_mfence();
      }
      v7 = MEMORY[0x7FFE03B8] + __rdtsc();
    }
LABEL_5:
    if ( MEMORY[0x7FFE0340] == v0 )
      break;
    _mm_pause();
  }
  if ( v7 <= v3 )
    return v6;
  v8 = v7 - v3 - 1;
  if ( v5 )
    v8 <<= v5;
  return (((unsigned __int64)v8 * (unsigned __int128)v4) >> 64) + v6;
}
