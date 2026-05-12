/*
 * XREFs of NvmePnPPassToStorMQMiniPort @ 0x1400E2330
 * Callers:
 *     NvmeAdapterReleaseResources @ 0x14019DE88 (NvmeAdapterReleaseResources.c)
 * Callees:
 *     RaidZeroXrb @ 0x140011A50 (RaidZeroXrb.c)
 *     RaSrbSetMiniportContext @ 0x140011BB0 (RaSrbSetMiniportContext.c)
 *     RaidXrbDeallocateResources @ 0x1400127A0 (RaidXrbDeallocateResources.c)
 *     StorAllocateStorMQSrb @ 0x140082C34 (StorAllocateStorMQSrb.c)
 *     NVMeAllocateContiguousIoResources @ 0x14008F140 (NVMeAllocateContiguousIoResources.c)
 *     NVMeFreeContiguousIoResources @ 0x14008F268 (NVMeFreeContiguousIoResources.c)
 *     NvmeAdapterExecuteXrb @ 0x1400D51D4 (NvmeAdapterExecuteXrb.c)
 *     NvmeAdapterRaiseIrqlAndExecuteXrb @ 0x1400DBD38 (NvmeAdapterRaiseIrqlAndExecuteXrb.c)
 */

__int64 NvmePnPPassToStorMQMiniPort(__int64 a1, int a2, __int64 a3, ...)
{
  __int64 v3; // rdi
  __int64 StorMQSrb; // rbx
  int v7; // eax
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 ContiguousIoResources; // r15
  unsigned int v11; // ebp
  __int64 v12; // rax
  unsigned int v13; // esi
  unsigned int v14; // ecx
  __int64 v15; // rbp
  char v16; // cl
  unsigned int v17; // r8d
  unsigned int i; // ecx
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // r11
  int v22; // eax
  __int64 v23; // rdx
  int v24; // eax
  int v25; // r14d
  unsigned int v26; // esi
  union _LARGE_INTEGER Interval; // [rsp+88h] [rbp+20h] BYREF
  va_list Intervala; // [rsp+88h] [rbp+20h]
  va_list va1; // [rsp+90h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(Intervala, a3);
  Interval.QuadPart = va_arg(va1, _QWORD);
  v3 = *(_QWORD *)(a1 + 64);
  StorMQSrb = 0LL;
  v7 = *(_DWORD *)v3;
  if ( *(_DWORD *)v3 == 1314278989 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    v3 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 128LL);
    v7 = *(_DWORD *)v3;
  }
  else
  {
    v8 = 0LL;
  }
  v9 = 1314275652LL;
  if ( v7 != 1314275652 || *(_BYTE *)(v3 + 274) != 1 )
    return 3221225485LL;
  if ( !*(_QWORD *)(v3 + 400) || !*(_QWORD *)(v3 + 408) )
    return 0LL;
  ContiguousIoResources = 0LL;
  Interval.QuadPart = -1000LL;
  v11 = 0;
  v12 = 316LL;
  if ( *(_DWORD *)v3 != 1314275652 )
    v12 = 524LL;
  v13 = (*(_DWORD *)(v12 + v3) + 7) & 0xFFFFFFF8;
  while ( 1 )
  {
    if ( !StorMQSrb )
      StorMQSrb = StorAllocateStorMQSrb(*(_QWORD *)(v3 + 8), 37);
    if ( !ContiguousIoResources )
      ContiguousIoResources = NVMeAllocateContiguousIoResources(v13 + 1200, v9, (_QWORD *)v3);
    if ( StorMQSrb && ContiguousIoResources )
    {
      v15 = ContiguousIoResources + 48;
      RaidZeroXrb(ContiguousIoResources + 48, v9, 0, 0LL);
      *(_QWORD *)(ContiguousIoResources + 216) = StorMQSrb;
      v16 = *(_BYTE *)(StorMQSrb + 2);
      *(_QWORD *)(StorMQSrb + 96) = ContiguousIoResources + 48;
      *(_DWORD *)(StorMQSrb + 24) = 256;
      *(_DWORD *)(StorMQSrb + 40) = 10;
      *(_QWORD *)(StorMQSrb + 64) = 0LL;
      *(_DWORD *)(StorMQSrb + 60) = 0;
      if ( v16 == 40 )
      {
        v17 = *(_DWORD *)(StorMQSrb + 56);
        if ( v17 )
        {
          for ( i = 0; i < v17; ++i )
          {
            v19 = *(unsigned int *)(StorMQSrb + 4LL * i + 120);
            if ( (unsigned int)v19 >= 0x80 && (unsigned int)v19 < *(_DWORD *)(StorMQSrb + 16) )
            {
              v20 = StorMQSrb + v19;
              if ( *(_DWORD *)(StorMQSrb + v19) == 98 )
                goto LABEL_28;
            }
          }
        }
      }
      v20 = 0LL;
LABEL_28:
      *(_DWORD *)(v20 + 12) = a2;
      *(_BYTE *)(v20 + 8) = 0;
      *(_QWORD *)(ContiguousIoResources + 232) = *(_QWORD *)(StorMQSrb + 64);
      RaSrbSetMiniportContext((int *)v3, StorMQSrb, ContiguousIoResources + 1200);
      if ( **(_DWORD **)(a1 + 64) == 1314278989 )
      {
        *(_WORD *)(v21 + 2) = *(_WORD *)(v3 + 56);
        *(_QWORD *)(v21 + 8) = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 1648LL) + 64LL;
        v22 = *(_DWORD *)(v8 + 56);
      }
      else
      {
        *(_DWORD *)(v20 + 16) = 1;
        *(_WORD *)(v21 + 2) = *(_WORD *)(v3 + 56);
        v22 = 0;
        *(_QWORD *)(v21 + 8) = 0LL;
      }
      *(_DWORD *)(v21 + 16) = v22;
      KeInitializeEvent((PRKEVENT)(ContiguousIoResources + 712), NotificationEvent, 0);
      v23 = ContiguousIoResources + 48;
      *(_QWORD *)(ContiguousIoResources + 704) = RaidXrbSignalCompletion;
      if ( (*(_DWORD *)(v3 + 144) & 0x1000LL) != 0 )
        v24 = NvmeAdapterRaiseIrqlAndExecuteXrb(v3, v23);
      else
        v24 = NvmeAdapterExecuteXrb(v3, v23);
      v25 = v24;
      if ( v24 >= 0 )
        KeWaitForSingleObject((PVOID)(ContiguousIoResources + 712), Executive, 0, 0, 0LL);
      v26 = 0;
      if ( v25 == 258 )
        v26 = -1073741643;
      goto LABEL_40;
    }
    v14 = v11++;
    if ( v14 >= 3 )
      break;
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)Intervala);
  }
  v15 = 0LL;
  v26 = -1073741801;
  if ( !ContiguousIoResources )
    goto LABEL_41;
LABEL_40:
  RaidXrbDeallocateResources(v15, 0);
  NVMeFreeContiguousIoResources(v3);
LABEL_41:
  if ( StorMQSrb )
  {
    *(_QWORD *)(StorMQSrb + 80) = 0LL;
    *(_QWORD *)(StorMQSrb + 104) = 0LL;
    ExFreePoolWithTag((PVOID)StorMQSrb, 0x72536152u);
  }
  return v26;
}
