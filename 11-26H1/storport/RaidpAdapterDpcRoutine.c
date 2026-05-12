/*
 * XREFs of RaidpAdapterDpcRoutine @ 0x14002FA70
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x140001080 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidUnitCompleteIrpRequest @ 0x140021CC0 (RaidUnitCompleteIrpRequest.c)
 *     McTemplateK0pzqqxxtt_EtwWriteTransfer @ 0x140057BB0 (McTemplateK0pzqqxxtt_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

void __fastcall RaidpAdapterDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        __int64 SystemArgument1,
        __int64 SystemArgument2)
{
  __int64 v4; // rdi
  LARGE_INTEGER v5; // rbx
  char v6; // r12
  unsigned int v7; // r14d
  LARGE_INTEGER PerformanceCounter; // rax
  char v9; // si
  bool v10; // r15
  _QWORD *v11; // rcx
  _QWORD *v12; // rcx
  char v13; // si
  USHORT CurrentNodeNumber; // ax
  unsigned __int64 Mask; // rdx
  unsigned __int8 v16; // cl
  unsigned __int8 v17; // cl
  _QWORD *v18; // rbp
  LARGE_INTEGER v19; // rax
  LARGE_INTEGER v20; // rdx
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // r8
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+60h] [rbp-58h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp-50h] BYREF
  unsigned __int64 v25; // [rsp+70h] [rbp-48h]
  struct _GROUP_AFFINITY Affinity; // [rsp+78h] [rbp-40h] BYREF

  v4 = DeferredContext[8];
  ProcNumber = 0;
  v5.QuadPart = 0LL;
  Affinity = 0LL;
  v6 = 1;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 320), 1, 0) == 1 )
    return;
  v7 = 0;
  v25 = MEMORY[0xFFFFF78000000320];
  if ( StorEtwLoggingEnabled && (byte_140173443 & 4) != 0 )
  {
    if ( UseQPCTime )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v5 = PerformanceCounter;
  }
  v9 = 0;
  v10 = *(_QWORD *)(v4 + 304) || *(_QWORD *)(v4 + 312);
  if ( DpcCompletionLimit )
  {
    do
    {
      if ( !*(_QWORD *)(v4 + 304) && !*(_QWORD *)(v4 + 312) && !v9 )
      {
        *(_QWORD *)(v4 + 304) = ExpInterlockedFlushSList((PSLIST_HEADER)(v4 + 256));
        *(_QWORD *)(v4 + 312) = ExpInterlockedFlushSList((PSLIST_HEADER)(v4 + 272));
        v9 = 1;
      }
      v11 = *(_QWORD **)(v4 + 304);
      if ( v11 )
      {
        v18 = v11 - 4;
        *(_QWORD *)(v4 + 304) = *v11;
        if ( (*((_BYTE *)v11 - 15) & 1) != 0 )
        {
          RaidAdapterPoFxIdleComponentFromMiniport(v4, *((unsigned int *)v18 + 187));
          *((_BYTE *)v18 + 17) &= ~1u;
        }
        ((void (__fastcall *)(_QWORD *, _QWORD *, __int64, __int64))v18[82])(
          v18,
          DeferredContext,
          SystemArgument1,
          SystemArgument2);
      }
      else
      {
        v12 = *(_QWORD **)(v4 + 312);
        if ( !v12 )
          break;
        *(_QWORD *)(v4 + 312) = *v12;
        RaidUnitCompleteIrpRequest((PIRP)(v12 - 16), *(_DWORD *)(v12[7] + 24LL), SystemArgument1, SystemArgument2);
      }
      ++v7;
    }
    while ( v7 < DpcCompletionLimit );
  }
  v13 = *(_QWORD *)(v4 + 304) || *(_QWORD *)(v4 + 312);
  *(_DWORD *)(v4 + 320) = 0;
  if ( v13 )
  {
    CurrentNodeNumber = KeGetCurrentNodeNumber();
    KeQueryNodeActiveAffinity(CurrentNodeNumber, &Affinity, 0LL);
    KeGetCurrentProcessorNumberEx(&ProcNumber);
    Mask = Affinity.Mask;
    v16 = ProcNumber.Number + 1;
    ProcNumber.Number = v16;
    if ( v16 >= 0x40u )
    {
LABEL_24:
      v17 = 0;
      ProcNumber.Number = 0;
      if ( (Affinity.Mask & 1) == 0 )
      {
        do
          ++v17;
        while ( !_bittest64((const __int64 *)&Mask, v17) );
        ProcNumber.Number = v17;
      }
    }
    else
    {
      while ( !_bittest64((const __int64 *)&Mask, v16) )
      {
        ProcNumber.Number = ++v16;
        if ( v16 >= 0x40u )
          goto LABEL_24;
      }
    }
    KeSetTargetProcessorDpcEx((PKDPC)(*(_QWORD *)(v4 + 8) + 200LL), &ProcNumber);
  }
  else
  {
    if ( !v10 )
      *(_WORD *)(*(_QWORD *)(v4 + 8) + 202LL) = 0;
    if ( !FirstEntrySList((PSLIST_HEADER)(v4 + 256)) && !FirstEntrySList((PSLIST_HEADER)(v4 + 272)) )
      goto LABEL_35;
  }
  KeInsertQueueDpc((PRKDPC)(*(_QWORD *)(v4 + 8) + 200LL), 0LL, 0LL);
LABEL_35:
  PerformanceFrequency.HighPart = MEMORY[0xFFFFF78000000324];
  PerformanceFrequency.LowPart = MEMORY[0xFFFFF78000000320] - v25;
  if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - v25) > *(_DWORD *)(v4 + 4776) )
  {
    *(_DWORD *)(v4 + 4776) = PerformanceFrequency.LowPart;
    *(_DWORD *)(v4 + 4780) = v7;
  }
  if ( v7 > *(_DWORD *)(v4 + 4772) )
    *(_DWORD *)(v4 + 4772) = v7;
  if ( StorEtwLoggingEnabled && (byte_140173443 & 4) != 0 && v7 >= 0x19 )
  {
    PerformanceFrequency.QuadPart = 1LL;
    if ( UseQPCTime )
      v19 = KeQueryPerformanceCounter(&PerformanceFrequency);
    else
      v19.QuadPart = KeQueryUnbiasedInterruptTime();
    if ( v19.QuadPart > 0 && v19.QuadPart < v5.QuadPart )
      v21 = v19.QuadPart - v5.QuadPart - 1;
    else
      v21 = v19.QuadPart - v5.QuadPart;
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
    v25 = v22;
    if ( (byte_140173443 & 4) != 0 )
    {
      if ( v13 || v10 )
        v6 = 0;
      McTemplateK0pzqqxxtt_EtwWriteTransfer(
        *(_DWORD *)(v4 + 56),
        v20.LowPart,
        v22,
        (unsigned int)RaidpAdapterDpcRoutine,
        (__int64)L"RaidpAdapterDpcRoutine",
        *(_DWORD *)(v4 + 56),
        v7,
        v21,
        v25,
        v13,
        v6);
    }
  }
}
