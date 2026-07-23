/*
 * XREFs of RtlpHpStackTraceAddStack @ 0x1800BD890
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180005FB0 (RtlpReAllocateHeapInternal.c)
 *     RtlpAllocateNTHeapInternal @ 0x1800078E0 (RtlpAllocateNTHeapInternal.c)
 *     RtlpHpReAllocateHeapSlow @ 0x180080A04 (RtlpHpReAllocateHeapSlow.c)
 *     RtlpHpAllocateHeapSlow @ 0x180096F60 (RtlpHpAllocateHeapSlow.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpMetadataAlloc @ 0x18002DB90 (RtlpHpMetadataAlloc.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x180035D70 (RtlpAcquireSRWLockSharedContended.c)
 *     RtlCaptureStackBackTrace @ 0x18005BB90 (RtlCaptureStackBackTrace.c)
 *     RtlpHpMetadataFree @ 0x18007F268 (RtlpHpMetadataFree.c)
 *     RtlRunOnceExecuteOnce @ 0x18008F320 (RtlRunOnceExecuteOnce.c)
 *     RtlpHpStackTraceAllocAdd @ 0x1801156A4 (RtlpHpStackTraceAllocAdd.c)
 *     RtlStackDbStackAdd @ 0x18011FA2C (RtlStackDbStackAdd.c)
 *     RtlpStackDbEntryCleanup @ 0x18015B124 (RtlpStackDbEntryCleanup.c)
 */

void __fastcall RtlpHpStackTraceAddStack(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  char *v5; // r9
  _QWORD *SchedulerSharedDataSlot; // r8
  __int64 v7; // rax
  _QWORD *v8; // rdx
  volatile signed __int64 *v9; // rax
  bool v10; // zf
  __int64 v11; // rcx
  NTSTATUS v12; // eax
  PVOID v13; // rdi
  int v14; // ecx
  PVOID *v15; // rax
  PVOID *v16; // rbp
  __int64 v17; // rax
  _QWORD *v18; // rbx
  signed __int64 v19; // rcx
  signed __int64 v20; // rax
  _QWORD *i; // rcx
  __int128 v22[3]; // [rsp+20h] [rbp-38h] BYREF
  PVOID Context; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    v7 = 0LL;
    v8 = SchedulerSharedDataSlot;
    while ( *v8 )
    {
      v7 = (unsigned int)(v7 + 1);
      ++v8;
      if ( (unsigned int)v7 >= 8 )
        goto LABEL_8;
    }
    v5 = (char *)&SchedulerSharedDataSlot[v7];
    if ( v5 )
      *(_QWORD *)v5 = &RtlpHpStackTrackingContext;
  }
LABEL_8:
  v9 = (volatile signed __int64 *)_InterlockedCompareExchange64(
                                    (volatile signed __int64 *)&RtlpHpStackTrackingContext,
                                    17LL,
                                    0LL);
  if ( v9 )
    RtlpAcquireSRWLockSharedContended(
      (volatile signed __int64 *)&RtlpHpStackTrackingContext,
      (unsigned __int64)v5,
      v9,
      v5);
  if ( (dword_1801C68A8 & 1) == 0 || (dword_1801C68A8 & 2) == 0 )
    goto LABEL_36;
  v10 = *(_DWORD *)(a1 + 16) == -571548178;
  Context = 0LL;
  v11 = 112LL;
  if ( !v10 )
    v11 = 368LL;
  v12 = RtlRunOnceExecuteOnce((PRTL_RUN_ONCE)(a1 + v11), RtlpHpPerHeapStackTraceInitialize, 0LL, &Context);
  v13 = 0LL;
  if ( v12 >= 0 )
    v13 = Context;
  v14 = 0;
  if ( v12 < 0 )
    v14 = v12;
  if ( v14 < 0
    || (v22[0] = RtlpHpEnvHandle,
        v15 = (PVOID *)RtlpHpMetadataAlloc(0x600uLL, 0x600uLL, 0, v22),
        v4 = (__int64)v15,
        (v16 = v15) == 0LL)
    || !RtlCaptureStackBackTrace(1u, 0xC0u, v15, 0LL) )
  {
LABEL_36:
    RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
    if ( !v4 )
      return;
    goto LABEL_37;
  }
  v17 = RtlStackDbStackAdd(&qword_1801C68B0, v16);
  v18 = (_QWORD *)v17;
  if ( v17 && !(unsigned int)RtlpHpStackTraceAllocAdd(v13, a2, v17) )
  {
    v19 = v18[2];
    if ( (v19 & 0xFFFFFFFFFFFFFFLL) != 1 )
    {
      do
      {
        v20 = _InterlockedCompareExchange64(v18 + 2, (v19 - 1) ^ (v19 ^ (v19 - 1)) & 0xFF00000000000000uLL, v19);
        if ( v19 == v20 )
          break;
        v19 = v20;
      }
      while ( (v20 & 0xFFFFFFFFFFFFFFLL) != 1 );
    }
    if ( (v19 & 0xFFFFFFFFFFFFFFuLL) <= 1 )
    {
      RtlAcquireSRWLockExclusive(&stru_1801C68D0);
      if ( (_InterlockedDecrement64(v18 + 2) & 0xFFFFFFFFFFFFFFLL) != 0 )
      {
        RtlReleaseSRWLockExclusive(&stru_1801C68D0);
      }
      else
      {
        *(_QWORD *)&v22[0] = v18[1] & (-1LL << (BYTE4(qword_1801C68C0) & 0x1F));
        for ( i = (_QWORD *)(qword_1801C68C8
                           + 8LL
                           * (((HIDWORD(qword_1801C68C0) >> 5) - 1) & (HIBYTE(*(_QWORD *)&v22[0])
                                                                     + 442596621 * LOBYTE(v22[0])
                                                                     - 877075889
                                                                     + 37
                                                                     * (BYTE6(v22[0])
                                                                      + 37
                                                                      * (BYTE5(v22[0])
                                                                       + 37
                                                                       * (BYTE4(v22[0])
                                                                        + 37
                                                                        * (BYTE3(v22[0])
                                                                         + 37 * (BYTE2(v22[0]) + 37 * BYTE1(v22[0])))))))));
              (*i & 1) == 0;
              i = (_QWORD *)*i )
        {
          if ( (_QWORD *)*i == v18 )
          {
            *i = *v18;
            LODWORD(qword_1801C68C0) = qword_1801C68C0 - 1;
            *v18 |= 0x8000000000000002uLL;
            break;
          }
        }
        RtlReleaseSRWLockExclusive(&stru_1801C68D0);
        RtlpStackDbEntryCleanup(&qword_1801C68B0, v18);
      }
    }
    goto LABEL_36;
  }
  RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
LABEL_37:
  v22[0] = RtlpHpEnvHandle;
  RtlpHpMetadataFree(v4, v22);
}
