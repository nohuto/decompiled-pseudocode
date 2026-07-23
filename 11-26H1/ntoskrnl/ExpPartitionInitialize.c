/*
 * XREFs of ExpPartitionInitialize @ 0x140845EE4
 * Callers:
 *     PspAllocatePartition @ 0x140803608 (PspAllocatePartition.c)
 *     ExpWorkerInitialization @ 0x140CECB08 (ExpWorkerInitialization.c)
 * Callees:
 *     KeIsNodeInitialized @ 0x14038402C (KeIsNodeInitialized.c)
 *     ExpPartitionDestroy @ 0x140845D08 (ExpPartitionDestroy.c)
 *     ExpWorkQueueManagerInitialize @ 0x1408464F8 (ExpWorkQueueManagerInitialize.c)
 *     ExpPartitionCreatePoolInternal @ 0x140B6F508 (ExpPartitionCreatePoolInternal.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall ExpPartitionInitialize(__int64 a1)
{
  _QWORD *Pool2; // rax
  _QWORD *v3; // rdi
  int PoolInternal; // ebx
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int16 i; // bp
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned int j; // esi
  __int64 result; // rax

  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
  v3 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  *Pool2 = a1;
  v5 = ExAllocatePool2(0x40uLL);
  v3[1] = v5;
  if ( !v5 || (v6 = ExAllocatePool2(0x40uLL), (v3[2] = v6) == 0LL) )
  {
LABEL_17:
    PoolInternal = -1073741801;
LABEL_18:
    ExpPartitionDestroy(v3);
    return (unsigned int)PoolInternal;
  }
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    if ( KeIsNodeInitialized(i) )
      v8 = KeNodeBlock[i];
    else
      v8 = 0LL;
    v9 = v3[2];
    *(_QWORD *)(v9 + 8LL * i) = ExAllocatePool2(0x40uLL);
    v10 = *(_QWORD *)(v3[2] + 8LL * i);
    if ( !v10 )
      goto LABEL_17;
    ExpWorkQueueManagerInitialize(v10, v3, v8);
    for ( j = 0; j < *(_DWORD *)(v8 + 120); ++j )
    {
      PoolInternal = ExpPartitionCreatePoolInternal((_DWORD)v3, 0, ExpMaximumKernelWorkerThreads, v8, 0, j);
      if ( PoolInternal < 0 )
        goto LABEL_18;
      PoolInternal = ExpPartitionCreatePoolInternal((_DWORD)v3, 0, ExpMaximumKernelWorkerThreads, v8, 1, j);
      if ( PoolInternal < 0 )
        goto LABEL_18;
    }
  }
  *((_DWORD *)v3 + 6) = 252;
  result = 0LL;
  *(_QWORD *)(a1 + 16) = v3;
  return result;
}
