/*
 * XREFs of RtlCreateEnvironmentEx @ 0x18009E1A0
 * Callers:
 *     RtlCreateEnvironment @ 0x18009E180 (RtlCreateEnvironment.c)
 *     RtlpInitEnvironmentBlock @ 0x18009F5C8 (RtlpInitEnvironmentBlock.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     RtlMultiByteToUnicodeN @ 0x180025AE0 (RtlMultiByteToUnicodeN.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlpAllocateEnvBlock @ 0x18009E128 (RtlpAllocateEnvBlock.c)
 *     RtlpGetBlockSizeEx @ 0x18009EB30 (RtlpGetBlockSizeEx.c)
 *     RtlOemToUnicodeN @ 0x18009EDD0 (RtlOemToUnicodeN.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

NTSTATUS __cdecl RtlCreateEnvironmentEx(PVOID SourceEnvironment, PVOID *Environment, ULONG Flags)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // r15
  PVOID v5; // rbp
  int v6; // r14d
  ULONG v7; // esi
  ULONG v8; // r12d
  ULONG v9; // r8d
  _DWORD *Heap_0; // rax
  unsigned int v12; // esi
  unsigned __int64 BlockSize; // rbx
  PVOID EnvBlock; // rdi
  bool v15; // cc
  NTSTATUS v16; // eax
  NTSTATUS v17; // ebx
  ULONG BytesInOemString; // [rsp+20h] [rbp-38h]

  ProcessParameters = 0LL;
  v5 = SourceEnvironment;
  if ( (Flags & 0xFFFFFFF8) != 0 )
    return -1073741583;
  if ( (((Flags & 5) - 1) & Flags & 5) != 0 )
    return -1073741583;
  v6 = 1;
  v7 = Flags & 1;
  v8 = Flags & 2;
  if ( (Flags & 2) != 0 && (Flags & 1) == 0 )
    return -1073741583;
  v9 = Flags & 4;
  if ( SourceEnvironment )
  {
    if ( !v9 )
    {
      v12 = v7 ^ 1;
      v6 = 0;
      BlockSize = RtlpGetBlockSizeEx(SourceEnvironment, v12);
      goto LABEL_12;
    }
    return -1073741776;
  }
  if ( v7 )
    return -1073741776;
  if ( v9 )
    goto LABEL_8;
  v12 = 1;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  RtlEnterCriticalSection(&FastPebLock);
  v5 = ProcessParameters->Environment;
  BlockSize = ProcessParameters->EnvironmentSize;
  RtlLeaveCriticalSection(&FastPebLock);
  if ( !v5 )
    goto LABEL_8;
  while ( 1 )
  {
LABEL_12:
    EnvBlock = RtlpAllocateEnvBlock(BlockSize);
    if ( !EnvBlock )
      return -1073741670;
    if ( !v6 )
      goto LABEL_14;
    RtlEnterCriticalSection(&FastPebLock);
    v5 = ProcessParameters->Environment;
    if ( !v5 )
      break;
    v15 = ProcessParameters->EnvironmentSize <= BlockSize;
    BlockSize = ProcessParameters->EnvironmentSize;
    if ( v15 )
    {
LABEL_14:
      if ( v12 )
      {
        memmove(EnvBlock, v5, BlockSize);
        if ( v6 )
          RtlLeaveCriticalSection(&FastPebLock);
LABEL_17:
        *Environment = EnvBlock;
        return 0;
      }
      if ( BlockSize > 0xFFFFFFFF )
      {
        v17 = -2147483643;
      }
      else
      {
        BytesInOemString = BlockSize >> 1;
        if ( v8 )
          v16 = RtlOemToUnicodeN((PWSTR)EnvBlock, BlockSize, 0LL, (PCCH)v5, BytesInOemString);
        else
          v16 = RtlMultiByteToUnicodeN((PWCH)EnvBlock, BlockSize, 0LL, (PCSTR)v5, BytesInOemString);
        v17 = v16;
        if ( v16 >= 0 )
          goto LABEL_17;
      }
      RtlpSysVolFree(EnvBlock);
      return v17;
    }
    RtlLeaveCriticalSection(&FastPebLock);
    RtlpSysVolFree(EnvBlock);
  }
  RtlLeaveCriticalSection(&FastPebLock);
  RtlpSysVolFree(EnvBlock);
LABEL_8:
  Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, 4uLL);
  if ( !Heap_0 )
    return -1073741670;
  *Heap_0 = 0;
  *Environment = Heap_0;
  return 0;
}
