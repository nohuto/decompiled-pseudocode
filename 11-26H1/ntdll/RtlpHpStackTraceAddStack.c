/*
 * XREFs of RtlpHpStackTraceAddStack @ 0x1800C0100
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x18001AED0 (RtlpReAllocateHeapInternal.c)
 *     RtlpAllocateNTHeapInternal @ 0x18001C810 (RtlpAllocateNTHeapInternal.c)
 *     RtlpHpAllocateHeapSlow @ 0x180097E10 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpReAllocateHeapSlow @ 0x1800B0E90 (RtlpHpReAllocateHeapSlow.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x180010460 (RtlCaptureStackBackTrace.c)
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpMetadataAlloc @ 0x180043620 (RtlpHpMetadataAlloc.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x18004B7F0 (RtlpAcquireSRWLockSharedContended.c)
 *     RtlRunOnceExecuteOnce @ 0x18006EED0 (RtlRunOnceExecuteOnce.c)
 *     RtlpHpMetadataFree @ 0x180087EE8 (RtlpHpMetadataFree.c)
 *     RtlpHpStackTraceAllocAdd @ 0x180115EC4 (RtlpHpStackTraceAllocAdd.c)
 *     RtlStackDbStackAdd @ 0x18011FC7C (RtlStackDbStackAdd.c)
 *     RtlpStackDbEntryCleanup @ 0x18015B258 (RtlpStackDbEntryCleanup.c)
 */

struct _TEB *__fastcall RtlpHpStackTraceAddStack(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  _QWORD *v5; // r9
  _QWORD *SchedulerSharedDataSlot; // r8
  __int64 v7; // rax
  _QWORD *v8; // rdx
  unsigned __int64 v9; // rax
  bool v10; // zf
  __int64 v11; // rcx
  int v12; // eax
  unsigned __int64 v13; // rdi
  int v14; // ecx
  PVOID *v15; // rax
  PVOID *v16; // rbp
  __int64 v17; // rax
  _QWORD *v18; // rbx
  unsigned __int64 v19; // rdx
  signed __int64 v20; // rcx
  signed __int64 v21; // rax
  _QWORD *i; // rcx
  struct _TEB *result; // rax
  __int128 v24[3]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v25; // [rsp+70h] [rbp+18h] BYREF

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
    v5 = &SchedulerSharedDataSlot[v7];
    if ( v5 )
      *v5 = &RtlpHpStackTrackingContext;
  }
LABEL_8:
  v9 = _InterlockedCompareExchange64(&RtlpHpStackTrackingContext, 17LL, 0LL);
  if ( v9 )
    RtlpAcquireSRWLockSharedContended(&RtlpHpStackTrackingContext, (unsigned __int64)v5, v9, (unsigned __int64)v5);
  if ( (dword_1801C7858 & 1) == 0 || (dword_1801C7858 & 2) == 0 )
    goto LABEL_36;
  v10 = *(_DWORD *)(a1 + 16) == -571548178;
  v25 = 0LL;
  v11 = 112LL;
  if ( !v10 )
    v11 = 368LL;
  v12 = RtlRunOnceExecuteOnce(
          (volatile signed __int64 *)(a1 + v11),
          (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))RtlpHpPerHeapStackTraceInitialize,
          0LL,
          &v25);
  v13 = 0LL;
  if ( v12 >= 0 )
    v13 = v25;
  v14 = 0;
  if ( v12 < 0 )
    v14 = v12;
  if ( v14 < 0
    || (v24[0] = RtlpHpEnvHandle,
        v15 = (PVOID *)RtlpHpMetadataAlloc(0x600uLL, 0x600uLL, 0, v24),
        v4 = (__int64)v15,
        (v16 = v15) == 0LL)
    || !RtlCaptureStackBackTrace(1u, 0xC0u, v15, 0LL) )
  {
LABEL_36:
    result = RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
    if ( !v4 )
      return result;
    goto LABEL_37;
  }
  v17 = RtlStackDbStackAdd(&qword_1801C7860, v16);
  v18 = (_QWORD *)v17;
  if ( v17 && !(unsigned int)RtlpHpStackTraceAllocAdd(v13, a2, v17) )
  {
    v20 = v18[2];
    if ( (v20 & 0xFFFFFFFFFFFFFFLL) != 1 )
    {
      do
      {
        v19 = (v20 - 1) ^ (v20 ^ (v20 - 1)) & 0xFF00000000000000uLL;
        v21 = _InterlockedCompareExchange64(v18 + 2, v19, v20);
        if ( v20 == v21 )
          break;
        v20 = v21;
      }
      while ( (v21 & 0xFFFFFFFFFFFFFFLL) != 1 );
    }
    if ( (v20 & 0xFFFFFFFFFFFFFFuLL) <= 1 )
    {
      RtlAcquireSRWLockExclusive(&qword_1801C7880, v19);
      if ( (_InterlockedDecrement64(v18 + 2) & 0xFFFFFFFFFFFFFFLL) != 0 )
      {
        RtlReleaseSRWLockExclusive(&qword_1801C7880);
      }
      else
      {
        *(_QWORD *)&v24[0] = v18[1] & (-1LL << (BYTE4(qword_1801C7870) & 0x1F));
        for ( i = (_QWORD *)(qword_1801C7878
                           + 8LL
                           * (((HIDWORD(qword_1801C7870) >> 5) - 1) & (HIBYTE(*(_QWORD *)&v24[0])
                                                                     + 442596621 * LOBYTE(v24[0])
                                                                     - 877075889
                                                                     + 37
                                                                     * (BYTE6(v24[0])
                                                                      + 37
                                                                      * (BYTE5(v24[0])
                                                                       + 37
                                                                       * (BYTE4(v24[0])
                                                                        + 37
                                                                        * (BYTE3(v24[0])
                                                                         + 37 * (BYTE2(v24[0]) + 37 * BYTE1(v24[0])))))))));
              (*i & 1) == 0;
              i = (_QWORD *)*i )
        {
          if ( (_QWORD *)*i == v18 )
          {
            *i = *v18;
            LODWORD(qword_1801C7870) = qword_1801C7870 - 1;
            *v18 |= 0x8000000000000002uLL;
            break;
          }
        }
        RtlReleaseSRWLockExclusive(&qword_1801C7880);
        RtlpStackDbEntryCleanup(&qword_1801C7860, v18);
      }
    }
    goto LABEL_36;
  }
  RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
LABEL_37:
  v24[0] = RtlpHpEnvHandle;
  return (struct _TEB *)RtlpHpMetadataFree(v4, v24);
}
