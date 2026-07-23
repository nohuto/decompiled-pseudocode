/*
 * XREFs of PspGetCpuAndMemoryPartitionFromJobList @ 0x1407FE5C0
 * Callers:
 *     PspGetCpuAndMemoryPartitionContext @ 0x140AAC4C4 (PspGetCpuAndMemoryPartitionContext.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastResourceExclusive @ 0x140274BD0 (ExAcquireFastResourceExclusive.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseFastResourceExclusive @ 0x14048AE40 (ExReleaseFastResourceExclusive.c)
 */

__int64 __fastcall PspGetCpuAndMemoryPartitionFromJobList(__int64 a1, unsigned __int64 a2, _QWORD *a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  void *v6; // rsi
  void *v7; // rdi
  int v8; // ebx
  unsigned __int64 v9; // r15
  __int64 v12; // rdx
  unsigned __int64 v13; // rbp
  __int64 v14; // r14
  __int64 v15; // r8
  __int64 v16; // r9
  void *v17; // rax
  void *v18; // rax
  bool v19; // zf
  __int64 v21; // [rsp+60h] [rbp+8h]
  struct _KTHREAD *v22; // [rsp+70h] [rbp+18h]

  v21 = a1;
  CurrentThread = KeGetCurrentThread();
  v22 = CurrentThread;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v9 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v12 = 1LL;
  if ( a2 )
  {
    v13 = a2;
    do
    {
      v14 = *(_QWORD *)(a1 + 8 * v9);
      ExAcquireFastResourceExclusive((struct _KTHREAD *)(v14 + 56), 0LL, 1);
      if ( a3 )
      {
        v17 = *(void **)(v14 + 1792);
        if ( v17 == (void *)-1LL )
        {
          v8 = -1073740682;
        }
        else if ( v6 )
        {
          if ( v17 && v17 != v6 )
            v8 = -1073741637;
        }
        else if ( v17 )
        {
          ObfReferenceObjectWithTag(*(PVOID *)(v14 + 1792), 0x72437350u);
          v6 = *(void **)(v14 + 1792);
        }
      }
      if ( a4 )
      {
        v18 = *(void **)(v14 + 1832);
        if ( v7 )
        {
          if ( v18 && v18 != v7 )
            v8 = -1073741637;
        }
        else if ( v18 )
        {
          ObfReferenceObjectWithTag(*(PVOID *)(v14 + 1832), 0x72437350u);
          v7 = *(void **)(v14 + 1832);
        }
      }
      ExReleaseFastResourceExclusive(v14 + 56, 0LL, v15, v16);
      v12 = 1LL;
      if ( v8 < 0 )
        break;
      a1 = v21;
      ++v9;
    }
    while ( v9 < v13 );
    CurrentThread = v22;
  }
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
  {
    v8 = -1073741749;
  }
  else if ( v8 >= 0 )
  {
    goto LABEL_30;
  }
  if ( v6 )
  {
    ObfDereferenceObjectWithTag(v6, 0x72437350u);
    v6 = 0LL;
  }
  if ( v7 )
  {
    ObfDereferenceObjectWithTag(v7, 0x72437350u);
    v7 = 0LL;
  }
LABEL_30:
  v19 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v19 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(1LL, v12);
  if ( a3 )
    *a3 = v6;
  if ( a4 )
    *a4 = v7;
  return (unsigned int)v8;
}
