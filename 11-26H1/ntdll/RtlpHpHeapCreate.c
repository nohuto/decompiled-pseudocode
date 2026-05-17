/*
 * XREFs of RtlpHpHeapCreate @ 0x18008DE64
 * Callers:
 *     RtlpCreateHeap @ 0x18007C890 (RtlpCreateHeap.c)
 *     RtlpHpMetadataHeapCreate @ 0x18008DE20 (RtlpHpMetadataHeapCreate.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlGetNtProductType @ 0x180063CA0 (RtlGetNtProductType.c)
 *     RtlpLogHeapCreateEvent @ 0x180071D10 (RtlpLogHeapCreateEvent.c)
 *     RtlpHpVsContextStart @ 0x1800756B8 (RtlpHpVsContextStart.c)
 *     RtlpHpSegContextReserve @ 0x18008A09C (RtlpHpSegContextReserve.c)
 *     RtlpHpRegisterEnvironment @ 0x18008D258 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpHeapAllocate @ 0x18008D814 (RtlpHpHeapAllocate.c)
 *     RtlpHpVsContextInitialize @ 0x18008DBB0 (RtlpHpVsContextInitialize.c)
 *     RtlpHpHeapDestroy @ 0x18008E4B4 (RtlpHpHeapDestroy.c)
 *     RtlpHpLfhContextInitialize @ 0x1800DF1E0 (RtlpHpLfhContextInitialize.c)
 *     RtlpHpSegContextInitialize @ 0x1800EBA58 (RtlpHpSegContextInitialize.c)
 *     RtlpHpLfhContextEnable @ 0x1800EBEC8 (RtlpHpLfhContextEnable.c)
 *     RtlpHpEnvQueryProcessorCount @ 0x1800F85C4 (RtlpHpEnvQueryProcessorCount.c)
 *     RtlpHpHeapLoggingStateSync @ 0x1800FCB60 (RtlpHpHeapLoggingStateSync.c)
 *     RtlpHpPgContextInitialize @ 0x1801124A4 (RtlpHpPgContextInitialize.c)
 *     RtlpHeapLogRangeCreate @ 0x180113E50 (RtlpHeapLogRangeCreate.c)
 *     RtlpHpLfhContextStart @ 0x1801142B8 (RtlpHpLfhContextStart.c)
 *     RtlpGetHeapInterceptorIndex @ 0x18011FA10 (RtlpGetHeapInterceptorIndex.c)
 *     RtlpHpHeapSetInterceptor @ 0x180158280 (RtlpHpHeapSetInterceptor.c)
 */

__int64 __fastcall RtlpHpHeapCreate(unsigned int a1, unsigned __int64 a2, __int64 a3, __m128i *a4)
{
  __int64 v6; // rsi
  int ProcessorCount; // r15d
  signed __int32 v8; // eax
  unsigned __int64 v9; // rax
  volatile signed __int64 *v10; // rax
  __m128i v11; // xmm0
  char v12; // cl
  char v13; // di
  bool v14; // zf
  unsigned __int16 HeapInterceptorIndex; // ax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v19; // [rsp+30h] [rbp-61h]
  __m128i v20; // [rsp+58h] [rbp-39h] BYREF
  __m128i v21; // [rsp+68h] [rbp-29h] BYREF
  __int128 v22; // [rsp+78h] [rbp-19h] BYREF
  __int64 (__fastcall *v23)(); // [rsp+88h] [rbp-9h]
  __int64 (__fastcall *v24)(); // [rsp+90h] [rbp-1h]
  __int64 (__fastcall *v25)(); // [rsp+98h] [rbp+7h]
  __int64 (__fastcall *v26)(); // [rsp+A0h] [rbp+Fh]
  __int64 (__fastcall *v27)(int, int, int, int, int); // [rsp+A8h] [rbp+17h]

  if ( a2 > 0x7FFFFFFFFFFFFFFFLL || (int)RtlpHpRegisterEnvironment(a4, 1) < 0 )
    return 0LL;
  ProcessorCount = dword_1801CB1C8;
  if ( !dword_1801CB1C8 )
  {
    ProcessorCount = RtlpHpEnvQueryProcessorCount();
    v8 = _InterlockedCompareExchange(&dword_1801CB1C8, ProcessorCount, 0);
    if ( v8 )
      ProcessorCount = v8;
  }
  v20.m128i_i32[0] = 0;
  if ( RtlGetNtProductType(&v20) && v20.m128i_i32[0] == 1 )
  {
    v9 = MEMORY[0x7FFE0310];
    if ( !MEMORY[0x7FFE0310] )
      v9 = MEMORY[0x7FFE02E8];
    if ( v9 <= 0x83400 )
      ProcessorCount = 1;
  }
  if ( (a1 & 0x2000000) != 0 )
    ProcessorCount = 1;
  v20 = *a4;
  v10 = RtlpHpHeapAllocate(a1, ProcessorCount, &v20);
  v20.m128i_i64[0] = (__int64)v10;
  v6 = (__int64)v10;
  if ( v10 )
  {
    v11 = *a4;
    *((_DWORD *)v10 + 4) = -571548178;
    v12 = 0;
    *((_DWORD *)v10 + 5) = a1;
    *(__m128i *)v10 = v11;
    if ( BYTE1(a4->m128i_i64[0]) >= 2u && BYTE1(a4->m128i_i64[0]) < 5u )
      v12 = 16;
    v13 = v12 | 4;
    if ( (a1 & 0x4000000) == 0 )
      v13 = v12;
    v21 = v11;
    RtlpHpSegContextInitialize(
      (_DWORD)v10 + 320,
      0x100000,
      (_DWORD)v10,
      (_DWORD)v10 + 896,
      (__int64)(v10 + 88),
      (__int64)(v10 + 101),
      (_WORD)v10 + 128,
      (_WORD)v10 + 168,
      (__int64)&v21,
      v13);
    v21 = *a4;
    RtlpHpSegContextInitialize(v6 + 512, 0x1000000, v6, 0, 0LL, 0LL, v6 + 128, v6 + 184, (__int64)&v21, v13);
    *(_QWORD *)(v6 + 64) = 0LL;
    *(_QWORD *)(v6 + 72) = 0LL;
    *(_QWORD *)(v6 + 80) = 0LL;
    v14 = (*(_DWORD *)(v6 + 20) & 0x20000000) == 0;
    *(_QWORD *)(v6 + 232) = 0LL;
    if ( !v14 )
    {
      HeapInterceptorIndex = RtlpGetHeapInterceptorIndex(RtlpStackTraceDatabaseLogPrefix);
      RtlpHpHeapSetInterceptor(v6, HeapInterceptorIndex);
    }
    *(_QWORD *)&v22 = RtlpHpSegVsAllocate;
    v26 = 0LL;
    *((_QWORD *)&v22 + 1) = RtlpHpSegSuballocatorFree;
    v27 = 0LL;
    v23 = RtlpHpSegSuballocatorCommit;
    v24 = RtlpHpSegSuballocatorDecommit;
    v25 = RtlpHpSegLfhExtendContext;
    RtlpHpVsContextInitialize(
      v6 + 704,
      v6 + 320,
      &v22,
      a4->m128i_i32[0] & 1,
      ProcessorCount,
      v19,
      (_BYTE *)&qword_1801CB188 + 4,
      v6 + 128);
    *(_QWORD *)&v22 = RtlpHpSegLfhAllocate;
    v27 = 0LL;
    *((_QWORD *)&v22 + 1) = RtlpHpSegSuballocatorFree;
    v23 = RtlpHpSegSuballocatorCommit;
    v24 = RtlpHpSegSuballocatorDecommit;
    v25 = RtlpHpSegLfhExtendContext;
    v26 = RtlpHpSegTlsCleanup;
    RtlpHpLfhContextInitialize(v6 + 896, v6 + 320, ProcessorCount, a4->m128i_i32[0] & 1, (__int64)&v22, v6 + 128);
    v25 = 0LL;
    *(_QWORD *)&v22 = RtlpHpSegPgAllocate;
    *((_QWORD *)&v22 + 1) = RtlpHpSegSuballocatorFree;
    v26 = 0LL;
    v23 = RtlpHpSegSuballocatorCommit;
    v24 = RtlpHpSegSuballocatorDecommit;
    v27 = RtlpHpSegSuballocatorAccessState;
    RtlpHpPgContextInitialize(
      v6 + 808,
      v6 + 320,
      (unsigned int)&v22,
      v6,
      *(unsigned int *)(v6 + 336),
      BYTE1(a4->m128i_i64[0]),
      (__int64)&qword_1801CB188 + 5);
    *(_QWORD *)(v6 + 112) = 0LL;
    if ( (int)RtlpHpLfhContextStart(v6 + 896) >= 0
      && (int)RtlpHpVsContextStart(v6 + 704) >= 0
      && ((a1 & 0x400000) != 0 || (int)RtlpHpLfhContextEnable(v6 + 896, &qword_1801CB188) >= 0)
      && (int)RtlpHpSegContextReserve((_BYTE *)(v6 + 320), a2, a3) >= 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v16 = (__int64)NtCurrentPeb()->SharedData + 558;
      else
        v16 = 2147353480LL;
      if ( *(_BYTE *)v16 )
        RtlpHeapLogRangeCreate(v6, *(_QWORD *)(v6 + 256) - v6, a1);
      RtlpHpHeapLoggingStateSync(v6);
      if ( *(char *)(v6 + 20) < 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v17 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v17 = 2147353472LL;
        RtlpLogHeapCreateEvent(v6, a1, *(_QWORD *)(v6 + 256) - v6, *(_QWORD *)(v6 + 248) - v6, *(unsigned __int8 *)v17);
      }
    }
    else
    {
      v6 = 0LL;
      RtlpHpHeapDestroy(v20.m128i_i64[0]);
    }
  }
  else
  {
    v6 = 0LL;
    RtlpHpRegisterEnvironment(a4, 0);
  }
  return v6;
}
