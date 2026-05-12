/*
 * XREFs of NvmeIoPollingDpcRoutine @ 0x14011A450
 * Callers:
 *     <none>
 * Callees:
 *     NvmeCompletionDpcRoutine @ 0x140030E20 (NvmeCompletionDpcRoutine.c)
 *     IsOutstandingRequestInNvmeControllerQueue @ 0x1400D1B5C (IsOutstandingRequestInNvmeControllerQueue.c)
 */

void __fastcall NvmeIoPollingDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        _QWORD *SystemArgument1,
        _BYTE *SystemArgument2)
{
  __int64 v4; // r15
  ULONG CurrentProcessorNumber; // eax
  char v9; // r8
  _QWORD *v10; // rbx
  __int64 v11; // rbp
  unsigned __int64 v12; // rsi
  char *v13; // r14
  KIRQL v14; // bl
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  PRKDPC *v19; // rdx
  _BYTE ProcNumber[6]; // [rsp+70h] [rbp+18h] BYREF
  _QWORD *v21; // [rsp+78h] [rbp+20h]

  v4 = SystemArgument1[1];
  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  v9 = SystemArgument2[1228];
  v10 = g_CpuInfo;
  v11 = CurrentProcessorNumber;
  v21 = g_CpuInfo;
  *(_DWORD *)ProcNumber = 0;
  if ( !v9 && !**((_DWORD **)SystemArgument2 + 161) )
  {
    v12 = *((_QWORD *)SystemArgument2 + 108) + ((unsigned __int64)*(unsigned __int16 *)(v4 + 138) << 7);
    v13 = SystemArgument2 + 1736;
    if ( (*(_WORD *)(*(_QWORD *)(v12 - 128) + 16LL * *(unsigned __int16 *)(v12 - 94) + 14) & 1) != *(_WORD *)(v12 - 92) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)v13 + 12LL) & 2) != 0 )
      {
        NvmeCompletionDpcRoutine(
          Dpc,
          DeferredContext,
          (volatile signed __int32 *)(v12 - 128),
          (_QWORD **)SystemArgument2);
      }
      else
      {
        v14 = KfRaiseIrql(2u);
        NvmeCompletionDpcRoutine(
          Dpc,
          DeferredContext,
          (volatile signed __int32 *)(v12 - 128),
          (_QWORD **)SystemArgument2);
        KeLowerIrql(v14);
        v10 = v21;
      }
    }
    if ( IsOutstandingRequestInNvmeControllerQueue((__int64)SystemArgument2, v4) )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(v12 - 40) + 8 * v11);
      if ( *(_QWORD *)(v15 + 16) && (*(_DWORD *)(*((_QWORD *)SystemArgument2 + 131) + 76LL) & 0x200) != 0 )
      {
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)v15, 1, 0) )
          ExSetTimer(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 - 40) + 8 * v11) + 16LL), *(int *)(v12 - 44), 0LL, 0LL);
      }
      else
      {
        if ( (*(_DWORD *)(*(_QWORD *)v13 + 12LL) & 0x10) != 0 )
        {
          v16 = v10[4];
          v17 = 56 * v11;
          if ( *(_QWORD *)(56 * v11 + v16 + 8) )
          {
            *(_WORD *)ProcNumber = *(_WORD *)(v17 + v16 + 16);
            _BitScanForward64(&v18, *(_QWORD *)(v10[4] + v17 + 8));
            *(_DWORD *)&ProcNumber[2] = v18;
            LODWORD(v11) = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)ProcNumber);
          }
        }
        v19 = *(PRKDPC **)(*(_QWORD *)(v12 - 40) + 8LL * (unsigned int)v11);
        KeInsertQueueDpc(v19[3], v19, SystemArgument2);
      }
    }
  }
}
