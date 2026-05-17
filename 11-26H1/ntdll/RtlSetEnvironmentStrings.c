/*
 * XREFs of RtlSetEnvironmentStrings @ 0x1800A06D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlpClearEnvironmentHashTable @ 0x18009EEDC (RtlpClearEnvironmentHashTable.c)
 *     RtlpAllocationSize @ 0x18009EFD8 (RtlpAllocationSize.c)
 *     RtlpAllocateEnvBlock @ 0x18009EFF8 (RtlpAllocateEnvBlock.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlSetEnvironmentStrings(void *Src, size_t Size)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  void *Environment; // rsi
  unsigned __int64 v6; // r14
  void *EnvBlock; // rax
  void *v9; // rsi
  __int64 v10; // r14

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  RtlEnterCriticalSection((__int64)&FastPebLock);
  Environment = ProcessParameters->Environment;
  v6 = RtlpAllocationSize((unsigned __int64)Environment);
  if ( v6 >= Size )
  {
    memmove(Environment, Src, Size);
    ProcessParameters->Environment = Environment;
    ProcessParameters->EnvironmentSize = Size;
    ++ProcessParameters->EnvironmentVersion;
    RtlpClearEnvironmentHashTable();
  }
  RtlLeaveCriticalSection((__int64)&FastPebLock);
  if ( v6 >= Size )
    return 0LL;
  EnvBlock = (void *)RtlpAllocateEnvBlock(Size);
  v9 = EnvBlock;
  if ( EnvBlock )
  {
    memmove(EnvBlock, Src, Size);
    RtlEnterCriticalSection((__int64)&FastPebLock);
    v10 = (__int64)ProcessParameters->Environment;
    RtlpClearEnvironmentHashTable();
    ProcessParameters->Environment = v9;
    ProcessParameters->EnvironmentSize = Size;
    ++ProcessParameters->EnvironmentVersion;
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    RtlpSysVolFree(v10);
    return 0LL;
  }
  return 3221225626LL;
}
