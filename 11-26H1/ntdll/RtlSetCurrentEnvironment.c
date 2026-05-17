/*
 * XREFs of RtlSetCurrentEnvironment @ 0x1800A0570
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlpClearEnvironmentHashTable @ 0x18009EEDC (RtlpClearEnvironmentHashTable.c)
 *     RtlpAllocationSize @ 0x18009EFD8 (RtlpAllocationSize.c)
 */

__int64 __fastcall RtlSetCurrentEnvironment(unsigned __int64 a1, __int64 *a2)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rsi
  __int64 v5; // rbx
  __int64 Environment; // rbp

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  v5 = RtlpAllocationSize(a1);
  RtlEnterCriticalSection((__int64)&FastPebLock);
  RtlpClearEnvironmentHashTable();
  Environment = (__int64)ProcessParameters->Environment;
  ++ProcessParameters->EnvironmentVersion;
  ProcessParameters->Environment = (void *)a1;
  ProcessParameters->EnvironmentSize = v5;
  RtlLeaveCriticalSection((__int64)&FastPebLock);
  if ( a2 )
  {
    *a2 = Environment;
  }
  else if ( Environment )
  {
    RtlpSysVolFree(Environment);
  }
  return 0LL;
}
