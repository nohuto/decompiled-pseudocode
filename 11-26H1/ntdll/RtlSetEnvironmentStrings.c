/*
 * XREFs of RtlSetEnvironmentStrings @ 0x18009F800
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlpClearEnvironmentHashTable @ 0x18009E00C (RtlpClearEnvironmentHashTable.c)
 *     RtlpAllocationSize @ 0x18009E108 (RtlpAllocationSize.c)
 *     RtlpAllocateEnvBlock @ 0x18009E128 (RtlpAllocateEnvBlock.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

NTSTATUS __cdecl RtlSetEnvironmentStrings(PCWCHAR NewEnvironment, SIZE_T NewEnvironmentSize)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  void *Environment; // rsi
  SIZE_T v6; // r14
  PVOID EnvBlock; // rax
  PVOID v9; // rsi
  void *v10; // r14

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  RtlEnterCriticalSection(&FastPebLock);
  Environment = ProcessParameters->Environment;
  v6 = RtlpAllocationSize(Environment);
  if ( v6 >= NewEnvironmentSize )
  {
    memmove(Environment, NewEnvironment, NewEnvironmentSize);
    ProcessParameters->Environment = Environment;
    ProcessParameters->EnvironmentSize = NewEnvironmentSize;
    ++ProcessParameters->EnvironmentVersion;
    RtlpClearEnvironmentHashTable();
  }
  RtlLeaveCriticalSection(&FastPebLock);
  if ( v6 >= NewEnvironmentSize )
    return 0;
  EnvBlock = RtlpAllocateEnvBlock(NewEnvironmentSize);
  v9 = EnvBlock;
  if ( EnvBlock )
  {
    memmove(EnvBlock, NewEnvironment, NewEnvironmentSize);
    RtlEnterCriticalSection(&FastPebLock);
    v10 = ProcessParameters->Environment;
    RtlpClearEnvironmentHashTable();
    ProcessParameters->Environment = v9;
    ProcessParameters->EnvironmentSize = NewEnvironmentSize;
    ++ProcessParameters->EnvironmentVersion;
    RtlLeaveCriticalSection(&FastPebLock);
    RtlpSysVolFree(v10);
    return 0;
  }
  return -1073741670;
}
