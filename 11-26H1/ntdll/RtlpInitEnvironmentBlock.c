/*
 * XREFs of RtlpInitEnvironmentBlock @ 0x18009F5C8
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpWow64ThunkEnvironmentTo64 @ 0x18009D5C0 (RtlpWow64ThunkEnvironmentTo64.c)
 *     RtlpAllocateEnvBlock @ 0x18009E128 (RtlpAllocateEnvBlock.c)
 *     RtlCreateEnvironmentEx @ 0x18009E1A0 (RtlCreateEnvironmentEx.c)
 *     RtlpGetBlockSizeEx @ 0x18009EB30 (RtlpGetBlockSizeEx.c)
 *     RtlpSetupEnvironmentHashTable @ 0x18009F748 (RtlpSetupEnvironmentHashTable.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

NTSTATUS RtlpInitEnvironmentBlock()
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  void *v1; // rbp
  SIZE_T BlockSize; // rdi
  PVOID EnvBlock; // rax
  PVOID v4; // rsi
  NTSTATUS result; // eax
  PVOID Environment; // [rsp+30h] [rbp+8h] BYREF

  Environment = 0LL;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  v1 = ProcessParameters->Environment;
  if ( v1 )
  {
    BlockSize = RtlpGetBlockSizeEx((char *)ProcessParameters->Environment, 1);
    EnvBlock = RtlpAllocateEnvBlock(BlockSize);
    v4 = EnvBlock;
    if ( !EnvBlock )
      return -1073741670;
    memmove(EnvBlock, v1, BlockSize);
  }
  else
  {
    BlockSize = 4LL;
    result = RtlCreateEnvironmentEx(0LL, &Environment, 4u);
    if ( result < 0 )
      return result;
    v4 = Environment;
  }
  ++ProcessParameters->EnvironmentVersion;
  ProcessParameters->Environment = v4;
  ProcessParameters->EnvironmentSize = BlockSize;
  result = RtlpSetupEnvironmentHashTable();
  if ( result >= 0 )
  {
    RtlpWow64ThunkEnvironmentTo64();
    return 0;
  }
  return result;
}
