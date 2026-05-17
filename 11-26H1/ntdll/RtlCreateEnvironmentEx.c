/*
 * XREFs of RtlCreateEnvironmentEx @ 0x18009F070
 * Callers:
 *     RtlCreateEnvironment @ 0x18009F050 (RtlCreateEnvironment.c)
 *     RtlpInitEnvironmentBlock @ 0x1800A0498 (RtlpInitEnvironmentBlock.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlMultiByteToUnicodeN @ 0x18003B570 (RtlMultiByteToUnicodeN.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlpAllocateEnvBlock @ 0x18009EFF8 (RtlpAllocateEnvBlock.c)
 *     RtlpGetBlockSizeEx @ 0x18009FA00 (RtlpGetBlockSizeEx.c)
 *     RtlOemToUnicodeN @ 0x18009FCA0 (RtlOemToUnicodeN.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlCreateEnvironmentEx(void *a1, _QWORD *a2, int a3)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // r15
  void *Environment; // rbp
  int v6; // r14d
  int v7; // esi
  int v8; // r12d
  int v9; // r8d
  _DWORD *Heap_0; // rax
  unsigned int v12; // esi
  unsigned __int64 BlockSize; // rbx
  _WORD *EnvBlock; // rdi
  bool v15; // cc
  int v16; // eax
  unsigned int v17; // ebx
  unsigned int v18; // [rsp+20h] [rbp-38h]

  ProcessParameters = 0LL;
  Environment = a1;
  if ( (a3 & 0xFFFFFFF8) != 0 )
    return 3221225713LL;
  if ( (((a3 & 5) - 1) & a3 & 5) != 0 )
    return 3221225713LL;
  v6 = 1;
  v7 = a3 & 1;
  v8 = a3 & 2;
  if ( (a3 & 2) != 0 && (a3 & 1) == 0 )
    return 3221225713LL;
  v9 = a3 & 4;
  if ( a1 )
  {
    if ( !v9 )
    {
      v12 = v7 ^ 1;
      v6 = 0;
      BlockSize = RtlpGetBlockSizeEx(a1, v12);
      goto LABEL_12;
    }
    return 3221225520LL;
  }
  if ( v7 )
    return 3221225520LL;
  if ( v9 )
    goto LABEL_8;
  v12 = 1;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  RtlEnterCriticalSection((__int64)&FastPebLock);
  Environment = ProcessParameters->Environment;
  BlockSize = ProcessParameters->EnvironmentSize;
  RtlLeaveCriticalSection((__int64)&FastPebLock);
  if ( !Environment )
    goto LABEL_8;
  while ( 1 )
  {
LABEL_12:
    EnvBlock = (_WORD *)RtlpAllocateEnvBlock(BlockSize);
    if ( !EnvBlock )
      return (unsigned int)-1073741670;
    if ( !v6 )
      goto LABEL_14;
    RtlEnterCriticalSection((__int64)&FastPebLock);
    Environment = ProcessParameters->Environment;
    if ( !Environment )
      break;
    v15 = ProcessParameters->EnvironmentSize <= BlockSize;
    BlockSize = ProcessParameters->EnvironmentSize;
    if ( v15 )
    {
LABEL_14:
      if ( v12 )
      {
        memmove(EnvBlock, Environment, BlockSize);
        if ( v6 )
          RtlLeaveCriticalSection((__int64)&FastPebLock);
LABEL_17:
        *a2 = EnvBlock;
        return 0LL;
      }
      if ( BlockSize > 0xFFFFFFFF )
      {
        v17 = -2147483643;
      }
      else
      {
        v18 = BlockSize >> 1;
        if ( v8 )
          v16 = RtlOemToUnicodeN((_DWORD)EnvBlock, BlockSize, 0, (_DWORD)Environment, v18);
        else
          v16 = RtlMultiByteToUnicodeN(EnvBlock, BlockSize, 0LL, (unsigned __int8 *)Environment, v18);
        v17 = v16;
        if ( v16 >= 0 )
          goto LABEL_17;
      }
      RtlpSysVolFree((__int64)EnvBlock);
      return v17;
    }
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    RtlpSysVolFree((__int64)EnvBlock);
  }
  RtlLeaveCriticalSection((__int64)&FastPebLock);
  RtlpSysVolFree((__int64)EnvBlock);
LABEL_8:
  Heap_0 = (_DWORD *)RtlAllocateHeap_0();
  if ( !Heap_0 )
    return 3221225626LL;
  *Heap_0 = 0;
  *a2 = Heap_0;
  return 0LL;
}
