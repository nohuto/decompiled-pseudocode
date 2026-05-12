/*
 * XREFs of RaidpAdapterRedirectDpcRoutine @ 0x14002AAB0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x140001080 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidUnitCompleteIrpRequest @ 0x140021CC0 (RaidUnitCompleteIrpRequest.c)
 *     McTemplateK0pzqqxxtt_EtwWriteTransfer @ 0x140057BB0 (McTemplateK0pzqqxxtt_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

void __fastcall RaidpAdapterRedirectDpcRoutine(
        struct _KDPC *Dpc,
        union _SLIST_HEADER *DeferredContext,
        _QWORD *SystemArgument1,
        PVOID SystemArgument2)
{
  LARGE_INTEGER v4; // rbx
  union _SLIST_HEADER *v5; // rdi
  unsigned int v6; // ebp
  union _SLIST_HEADER *v7; // r15
  _DWORD *v9; // r14
  PSLIST_ENTRY i; // rdi
  bool v11; // zf
  PSLIST_ENTRY v12; // rsi
  PSLIST_ENTRY j; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  IRP *v17; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v19; // rax
  LARGE_INTEGER v20; // rdx
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // r8
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+98h] [rbp+10h] BYREF
  unsigned __int64 v24; // [rsp+A0h] [rbp+18h]

  v4.QuadPart = 0LL;
  v5 = DeferredContext + 4;
  v6 = 0;
  v7 = DeferredContext + 5;
  v24 = MEMORY[0xFFFFF78000000320];
  if ( StorEtwLoggingEnabled && (byte_140173443 & 4) != 0 )
  {
    if ( UseQPCTime )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v4 = PerformanceCounter;
  }
  v9 = (_DWORD *)SystemArgument1[8];
  if ( FirstEntrySList(v5) )
  {
    for ( i = ExpInterlockedFlushSList(v5); i; ++v6 )
    {
      v11 = (BYTE1(i[-1].Next) & 1) == 0;
      v12 = i - 2;
      i = i->Next;
      if ( !v11 )
      {
        RaidAdapterPoFxIdleComponentFromMiniport(*((_QWORD *)&v12[13].Next + 1), *((unsigned int *)&v12[46].Next + 3));
        BYTE1(v12[1].Next) &= ~1u;
      }
      ((void (__fastcall *)(PSLIST_ENTRY))v12[41].Next)(v12);
    }
  }
  if ( FirstEntrySList(v7) )
  {
    for ( j = ExpInterlockedFlushSList(v7); j; ++v6 )
    {
      v16 = *((_QWORD *)&j[3].Next + 1);
      v17 = (IRP *)&j[-8];
      j = j->Next;
      RaidUnitCompleteIrpRequest(v17, *(_DWORD *)(v16 + 24), v14, v15);
    }
  }
  PerformanceFrequency.HighPart = MEMORY[0xFFFFF78000000324];
  PerformanceFrequency.LowPart = MEMORY[0xFFFFF78000000320] - v24;
  if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - v24) > v9[1194] )
  {
    v9[1194] = PerformanceFrequency.LowPart;
    v9[1195] = v6;
  }
  if ( v6 > v9[1193] )
    v9[1193] = v6;
  if ( StorEtwLoggingEnabled && (byte_140173443 & 4) != 0 && v6 >= 0x19 )
  {
    PerformanceFrequency.QuadPart = 1LL;
    if ( UseQPCTime )
      v19 = KeQueryPerformanceCounter(&PerformanceFrequency);
    else
      v19.QuadPart = KeQueryUnbiasedInterruptTime();
    if ( v19.QuadPart <= 0 || v19.QuadPart >= v4.QuadPart )
      v21 = v19.QuadPart - v4.QuadPart;
    else
      v21 = v19.QuadPart - v4.QuadPart - 1;
    if ( UseQPCTime )
    {
      v22 = 0LL;
      if ( PerformanceFrequency.QuadPart && v21 )
      {
        v20.QuadPart = 10000 * (1000 * (v21 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart)
                     % PerformanceFrequency.QuadPart;
        v22 = 10000
            * (1000 * (v21 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart)
            / PerformanceFrequency.QuadPart
            + 10000
            * (1000 * (v21 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
             + 1000 * (v21 / PerformanceFrequency.QuadPart));
      }
    }
    else
    {
      v22 = v21;
    }
    v24 = v22;
    if ( (byte_140173443 & 4) != 0 )
      McTemplateK0pzqqxxtt_EtwWriteTransfer(
        v9[14],
        v20.LowPart,
        v22,
        (unsigned int)RaidpAdapterRedirectDpcRoutine,
        (__int64)L"RaidpAdapterRedirectDpcRoutine",
        v9[14],
        v6,
        v21,
        v24,
        0,
        0);
  }
}
