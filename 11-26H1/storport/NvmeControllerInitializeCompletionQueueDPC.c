/*
 * XREFs of NvmeControllerInitializeCompletionQueueDPC @ 0x1400F63DC
 * Callers:
 *     NvmeControllerInitializeAdminQueue @ 0x1400F5F24 (NvmeControllerInitializeAdminQueue.c)
 *     NvmeControllerIoQueuesInitialize @ 0x1400F71AC (NvmeControllerIoQueuesInitialize.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 */

__int64 __fastcall NvmeControllerInitializeCompletionQueueDPC(__int64 a1, __int64 a2)
{
  unsigned __int16 *v2; // rbp
  unsigned int v3; // r14d
  void *v5; // rcx
  NTSTATUS v7; // ebx
  unsigned int v8; // r12d
  __int64 Pool; // rax
  KDEFERRED_ROUTINE *v10; // r13
  __int64 v11; // rax
  unsigned int v12; // esi
  __int64 v13; // rax
  __int64 v14; // r15
  unsigned __int64 v15; // rbx
  void *v16; // rcx
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+60h] [rbp+8h] BYREF

  v2 = (unsigned __int16 *)g_CpuInfo;
  v3 = 0;
  ProcNumber = 0;
  v5 = *(void **)(a2 + 64);
  v7 = 0;
  v8 = 0;
  if ( v5 )
    ExFreePoolWithTag(v5, 0x72446152u);
  Pool = RaidAllocatePool(
           72LL,
           68LL * *((unsigned int *)v2 + 3),
           1917083986LL,
           *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
  *(_QWORD *)(a2 + 64) = Pool;
  if ( Pool )
  {
    v10 = (KDEFERRED_ROUTINE *)NvmeStorMQCompletionDpcRoutine;
    *(_QWORD *)(a2 + 72) = Pool + ((unsigned __int64)*((unsigned int *)v2 + 3) << 6);
    v11 = *(_QWORD *)(a1 + 128);
    v12 = 0;
    if ( (*(_DWORD *)(v11 + 416) & 0x40) == 0 )
      v10 = (KDEFERRED_ROUTINE *)NvmeCompletionDpcRoutine;
    while ( v12 < *v2 )
    {
      v13 = *((_QWORD *)v2 + 2);
      ProcNumber.Group = v12;
      ProcNumber.Reserved = 0;
      v14 = *(_QWORD *)(v13 + 16LL * v12 + 8);
      if ( *(_WORD *)(v13 + 16LL * v12 + 2) )
      {
        while ( 1 )
        {
          if ( !v14 )
          {
            v3 = 0;
            goto LABEL_15;
          }
          if ( v8 >= *((_DWORD *)v2 + 3) )
            break;
          if ( _bittest64(&v14, v3) )
          {
            ProcNumber.Number = v3;
            KeGetProcessorIndexFromNumber(&ProcNumber);
            v15 = (unsigned __int64)v8 << 6;
            KeInitializeDpc((PRKDPC)(v15 + *(_QWORD *)(a2 + 64)), v10, 0LL);
            KeSetImportanceDpc((PRKDPC)(v15 + *(_QWORD *)(a2 + 64)), MediumHighImportance);
            v7 = KeSetTargetProcessorDpcEx((PKDPC)(v15 + *(_QWORD *)(a2 + 64)), &ProcNumber);
            ++v8;
            _bittestandreset64(&v14, v3);
          }
          ++v3;
        }
        v7 = -1073741595;
        goto LABEL_18;
      }
LABEL_15:
      ++v12;
    }
    if ( v7 >= 0 )
      return (unsigned int)v7;
  }
  else
  {
    v7 = -1073741670;
  }
LABEL_18:
  v16 = *(void **)(a2 + 64);
  if ( v16 )
  {
    ExFreePoolWithTag(v16, 0x72446152u);
    *(_QWORD *)(a2 + 64) = 0LL;
    *(_QWORD *)(a2 + 72) = 0LL;
  }
  return (unsigned int)v7;
}
