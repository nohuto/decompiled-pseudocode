/*
 * XREFs of NvmeControllerInitializeCQIoPolling @ 0x1400F6160
 * Callers:
 *     NvmeControllerIoQueuesInitialize @ 0x1400F71AC (NvmeControllerIoQueuesInitialize.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidAllocatePoolEx @ 0x1400929F4 (RaidAllocatePoolEx.c)
 *     NvmeControllerUninitializeCQIoPolling @ 0x1400FB7A4 (NvmeControllerUninitializeCQIoPolling.c)
 */

__int64 __fastcall NvmeControllerInitializeCQIoPolling(_QWORD *a1, __int64 a2)
{
  _BYTE *v2; // rax
  int v3; // ebx
  _QWORD *v4; // r12
  int v5; // r13d
  __int64 Pool; // rax
  int v9; // ecx
  KDPC_IMPORTANCE v10; // ebp
  __int64 i; // r14
  unsigned __int16 *v12; // rdx
  int v13; // r12d
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rbx
  struct _KDPC *v17; // rcx
  NTSTATUS v18; // eax
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+70h] [rbp+8h] BYREF
  int v21; // [rsp+80h] [rbp+18h]
  _QWORD *v22; // [rsp+88h] [rbp+20h]

  v2 = (_BYTE *)a1[217];
  v3 = 0;
  v4 = g_CpuInfo;
  v5 = 0;
  ProcNumber = 0;
  v22 = g_CpuInfo;
  if ( *v2 && *(_BYTE *)(a2 + 80) )
  {
    Pool = RaidAllocatePool(72LL, 8LL * *((unsigned int *)g_CpuInfo + 2), 1363763538LL, *(_QWORD *)(a1[16] + 8LL));
    *(_QWORD *)(a2 + 88) = Pool;
    if ( Pool )
    {
      v9 = *(_DWORD *)(a1[131] + 36LL);
      v10 = ((*(_DWORD *)(a1[217] + 12LL) & 4) == 0) | 2;
      if ( v9 )
        v5 = -10 * v9;
      *(_DWORD *)(a2 + 84) = v5;
      v21 = *(_DWORD *)(a1[217] + 12LL) & 2;
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)v4 + 2); i = (unsigned int)(i + 1) )
      {
        if ( KeGetProcessorNumberFromIndex(i, &ProcNumber) >= 0 )
        {
          v12 = *(unsigned __int16 **)(56LL * (unsigned int)i + v4[4] + 48);
          if ( v12 )
            v13 = *v12;
          else
            v13 = 0x80000000;
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 8 * i) = RaidAllocatePoolEx(
                                                        72LL,
                                                        32LL,
                                                        1363763538LL,
                                                        *(_QWORD *)(a1[16] + 8LL),
                                                        v13);
          v14 = *(_QWORD *)(a2 + 88);
          v15 = *(_QWORD *)(v14 + 8 * i);
          if ( !v15 )
            goto LABEL_4;
          if ( v5 )
          {
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 8 * i) + 16LL) = ExAllocateTimer(
                                                                              &NvmeControllerIoPollingTimerCallback,
                                                                              v15,
                                                                              4LL);
            v14 = *(_QWORD *)(a2 + 88);
            if ( !*(_QWORD *)(*(_QWORD *)(v14 + 8 * i) + 16LL) )
              goto LABEL_4;
          }
          *(_DWORD *)(*(_QWORD *)(v14 + 8 * i) + 4LL) = i;
          v16 = *(_QWORD *)(*(_QWORD *)(a2 + 88) + 8 * i);
          *(_QWORD *)(v16 + 24) = RaidAllocatePoolEx(72LL, 64LL, 1363763538LL, *(_QWORD *)(a1[16] + 8LL), v13);
          v17 = *(struct _KDPC **)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 8 * i) + 24LL);
          if ( !v17 )
            goto LABEL_4;
          if ( v21 )
            KeInitializeDpc(v17, NvmeIoPollingDpcRoutine, (PVOID)1);
          else
            KeInitializeThreadedDpc(v17, NvmeIoPollingDpcRoutine, (PVOID)1);
          KeSetImportanceDpc(*(PRKDPC *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 8 * i) + 24LL), v10);
          v18 = KeSetTargetProcessorDpcEx(*(PKDPC *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 8 * i) + 24LL), &ProcNumber);
          v4 = v22;
          v3 = v18;
        }
      }
      if ( v3 >= 0 )
        return (unsigned int)v3;
    }
    else
    {
LABEL_4:
      v3 = -1073741670;
    }
    NvmeControllerUninitializeCQIoPolling(a1, a2);
    return (unsigned int)v3;
  }
  return 0LL;
}
