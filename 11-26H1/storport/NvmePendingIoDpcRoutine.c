/*
 * XREFs of NvmePendingIoDpcRoutine @ 0x14011B340
 * Callers:
 *     <none>
 * Callees:
 *     NvmeProcessPendingIoInSpecifiedGroup @ 0x14011D160 (NvmeProcessPendingIoInSpecifiedGroup.c)
 */

void __fastcall NvmePendingIoDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ULONG CurrentProcessorNumber; // eax
  __int64 v6; // rdi
  LARGE_INTEGER v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  char v10; // al
  _DWORD *v11; // rax

  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  v6 = 8LL * CurrentProcessorNumber;
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(DeferredContext[138] + v6) + 128LL), 0);
  if ( !*((_DWORD *)DeferredContext + 237) )
  {
    if ( (unsigned __int8)NvmeProcessPendingIoInSpecifiedGroup(DeferredContext, CurrentProcessorNumber) )
    {
      v7.QuadPart = -600LL;
LABEL_9:
      v11 = (_DWORD *)DeferredContext[161];
      if ( (!v11 || !*v11)
        && !_InterlockedCompareExchange(
              (volatile signed __int32 *)(*(_QWORD *)(DeferredContext[138] + v6) + 128LL),
              1,
              0) )
      {
        KeSetTimer(
          *(PKTIMER *)(*(_QWORD *)(v6 + DeferredContext[138]) + 16LL),
          v7,
          *(PKDPC *)(*(_QWORD *)(v6 + DeferredContext[138]) + 8LL));
      }
    }
    else
    {
      v8 = 0LL;
      v9 = *(_QWORD *)(v6 + DeferredContext[138]);
      while ( (unsigned int)v8 < *(_DWORD *)(v9 + 4) )
      {
        v10 = *(_BYTE *)(*(_QWORD *)(v9 + 8 * v8 + 264) + 72LL);
        *(_BYTE *)(*(_QWORD *)(v9 + 8 * v8 + 264) + 72LL) = 0;
        if ( v10 )
        {
          v7.QuadPart = -40LL;
          goto LABEL_9;
        }
        v8 = (unsigned int)(v8 + 1);
      }
    }
  }
}
