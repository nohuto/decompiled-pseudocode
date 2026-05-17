/*
 * XREFs of RtlpInitEnvironmentBlock @ 0x1800A0498
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpWow64ThunkEnvironmentTo64 @ 0x18009E490 (RtlpWow64ThunkEnvironmentTo64.c)
 *     RtlpAllocateEnvBlock @ 0x18009EFF8 (RtlpAllocateEnvBlock.c)
 *     RtlCreateEnvironmentEx @ 0x18009F070 (RtlCreateEnvironmentEx.c)
 *     RtlpGetBlockSizeEx @ 0x18009FA00 (RtlpGetBlockSizeEx.c)
 *     RtlpSetupEnvironmentHashTable @ 0x1800A0618 (RtlpSetupEnvironmentHashTable.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 RtlpInitEnvironmentBlock()
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  void *Environment; // rbp
  unsigned __int64 BlockSize; // rdi
  void *EnvBlock; // rax
  void *v4; // rsi
  __int64 result; // rax
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  Environment = ProcessParameters->Environment;
  if ( Environment )
  {
    BlockSize = RtlpGetBlockSizeEx((char *)ProcessParameters->Environment, 1);
    EnvBlock = (void *)RtlpAllocateEnvBlock(BlockSize);
    v4 = EnvBlock;
    if ( !EnvBlock )
      return 3221225626LL;
    memmove(EnvBlock, Environment, BlockSize);
  }
  else
  {
    BlockSize = 4LL;
    result = RtlCreateEnvironmentEx(0LL, &v6, 4);
    if ( (int)result < 0 )
      return result;
    v4 = v6;
  }
  ++ProcessParameters->EnvironmentVersion;
  ProcessParameters->Environment = v4;
  ProcessParameters->EnvironmentSize = BlockSize;
  result = RtlpSetupEnvironmentHashTable();
  if ( (int)result >= 0 )
  {
    RtlpWow64ThunkEnvironmentTo64();
    return 0LL;
  }
  return result;
}
