/*
 * XREFs of RtlQueryPerformanceCounter @ 0x18000E5E0
 * Callers:
 *     RtlCapabilityCheck @ 0x18000DFF0 (RtlCapabilityCheck.c)
 *     EtwpWriteToPrivateBuffers @ 0x18000F710 (EtwpWriteToPrivateBuffers.c)
 *     EtwpReserveTraceBuffer @ 0x180011230 (EtwpReserveTraceBuffer.c)
 *     EtwpInitLoggerContext @ 0x180077550 (EtwpInitLoggerContext.c)
 *     RtlGetMultiTimePrecise @ 0x180077A60 (RtlGetMultiTimePrecise.c)
 *     PssNtCaptureSnapshot @ 0x1800B4D70 (PssNtCaptureSnapshot.c)
 *     RtlDelayExecution @ 0x1800BCA00 (RtlDelayExecution.c)
 *     PsspSampleCounters @ 0x18010E2B0 (PsspSampleCounters.c)
 * Callees:
 *     NtQueryPerformanceCounter @ 0x18015F560 (NtQueryPerformanceCounter.c)
 */

__int64 __fastcall RtlQueryPerformanceCounter(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  if ( (MEMORY[0x7FFE03C6] & 1) == 0 )
    goto LABEL_2;
  if ( (MEMORY[0x7FFE03C6] & 2) != 0 )
  {
    if ( !RtlpHypervisorSharedUserVa || !*(_DWORD *)RtlpHypervisorSharedUserVa )
    {
LABEL_2:
      NtQueryPerformanceCounter(&v6, 0LL);
      *a1 = v6;
      return 1LL;
    }
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
      v2 = __rdtsc();
      LODWORD(a2) = HIDWORD(v2);
      v2 = (unsigned int)v2;
      a2 = (unsigned int)a2;
    }
    else
    {
      __asm { rdtscp }
    }
    v5 = *(_QWORD *)(RtlpHypervisorSharedUserVa + 16)
       + (((v2 | (a2 << 32)) * (unsigned __int128)*(unsigned __int64 *)(RtlpHypervisorSharedUserVa + 8)) >> 64);
  }
  else if ( MEMORY[0x7FFE03C6] < 0 )
  {
    __asm { rdtscp }
    v5 = v2 | (a2 << 32);
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
    v5 = __rdtsc();
  }
  *a1 = v5 + MEMORY[0x7FFE03B8];
  return 1LL;
}
