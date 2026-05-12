/*
 * XREFs of NvmeStartIoPolling @ 0x14011E230
 * Callers:
 *     NvmeSubmitIoToSQ @ 0x140020590 (NvmeSubmitIoToSQ.c)
 *     NvmeSendSplitIo @ 0x140040110 (NvmeSendSplitIo.c)
 *     NvmeControllerSubmitCommandToSQ @ 0x140043110 (NvmeControllerSubmitCommandToSQ.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeStartIoPolling(_QWORD *SystemArgument2, __int64 a2, ULONG ProcessorIndexFromNumber)
{
  unsigned __int64 v4; // r9
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  _BYTE ProcNumber[6]; // [rsp+30h] [rbp+8h] BYREF

  v4 = SystemArgument2[108] + ((unsigned __int64)*(unsigned __int16 *)(a2 + 138) << 7);
  *(_DWORD *)ProcNumber = 0;
  if ( *(_BYTE *)(v4 - 48) && !*((_BYTE *)SystemArgument2 + 1228) && !*(_DWORD *)SystemArgument2[161] )
  {
    v5 = (_QWORD *)(v4 - 40);
    if ( *(_DWORD *)(SystemArgument2[131] + 36LL)
      && (v6 = *(_QWORD *)(8LL * ProcessorIndexFromNumber + *v5), *(_QWORD *)(v6 + 16)) )
    {
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)v6, 1, 0) )
        ExSetTimer(*(_QWORD *)(*(_QWORD *)(*v5 + 8LL * ProcessorIndexFromNumber) + 16LL), *(int *)(v4 - 44), 0LL, 0LL);
    }
    else
    {
      if ( (*(_DWORD *)(SystemArgument2[217] + 12LL) & 0x10) != 0 )
      {
        v7 = *((_QWORD *)g_CpuInfo + 4) + 56LL * ProcessorIndexFromNumber;
        if ( *(_QWORD *)(v7 + 8) )
        {
          *(_WORD *)ProcNumber = *(_WORD *)(v7 + 16);
          _BitScanForward64(&v8, *(_QWORD *)(v7 + 8));
          *(_DWORD *)&ProcNumber[2] = v8;
          ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)ProcNumber);
        }
      }
      KeInsertQueueDpc(
        *(PRKDPC *)(*(_QWORD *)(*v5 + 8LL * ProcessorIndexFromNumber) + 24LL),
        *(PVOID *)(*v5 + 8LL * ProcessorIndexFromNumber),
        SystemArgument2);
    }
  }
}
