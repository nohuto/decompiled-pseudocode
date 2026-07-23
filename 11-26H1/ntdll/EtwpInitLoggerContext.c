/*
 * XREFs of EtwpInitLoggerContext @ 0x180065D70
 * Callers:
 *     EtwpStartUmLogger @ 0x1800656DC (EtwpStartUmLogger.c)
 * Callees:
 *     RtlCreateUnicodeString @ 0x180028180 (RtlCreateUnicodeString.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlFreeAnsiString @ 0x1800410A0 (RtlFreeAnsiString.c)
 *     RtlQueryPerformanceCounter @ 0x180059D10 (RtlQueryPerformanceCounter.c)
 *     RtlGetSystemTimePrecise @ 0x18005CC80 (RtlGetSystemTimePrecise.c)
 *     RtlGetMultiTimePrecise @ 0x180066280 (RtlGetMultiTimePrecise.c)
 *     EtwpAddInstanceIdToLogFileName @ 0x180066468 (EtwpAddInstanceIdToLogFileName.c)
 *     EtwpFillProcessorStreamIndexMap @ 0x1800665F8 (EtwpFillProcessorStreamIndexMap.c)
 *     EtwpFreeStreamIndexMap @ 0x180067A34 (EtwpFreeStreamIndexMap.c)
 *     RtlInitializeCriticalSectionEx @ 0x18006A3B0 (RtlInitializeCriticalSectionEx.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwCreateEvent @ 0x18015F740 (ZwCreateEvent.c)
 */

char *__fastcall EtwpInitLoggerContext(__int64 a1, int a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // r12d
  int v8; // r13d
  unsigned __int16 v10; // r14
  unsigned __int16 v11; // r8
  unsigned int v12; // edx
  LARGE_INTEGER SystemTimePrecise; // rax
  char *Heap_0; // rbx
  PVOID v15; // rax
  PVOID v16; // rax
  unsigned int v17; // eax
  int v18; // eax
  void *v19; // rax
  int v20; // ecx
  int v21; // eax
  char *result; // rax
  void *v23; // rcx
  void *v24; // rcx
  void *v25; // r8
  void *v26; // r8
  unsigned int v27; // edx
  __int64 v28; // rcx
  __int128 v29; // [rsp+30h] [rbp-40h]
  __int128 v30; // [rsp+40h] [rbp-30h] BYREF
  __int128 v31; // [rsp+50h] [rbp-20h] BYREF
  LARGE_INTEGER v32; // [rsp+60h] [rbp-10h]
  LARGE_INTEGER PerformanceCounter; // [rsp+B0h] [rbp+40h] BYREF
  int v34; // [rsp+B8h] [rbp+48h]
  int v35; // [rsp+C0h] [rbp+50h] BYREF

  v34 = a2;
  v5 = a5;
  v8 = a2;
  v10 = 1;
  v30 = 0LL;
  if ( a4 )
  {
    v11 = 0;
    v10 = 0;
    v12 = 0;
    if ( a5 )
    {
      do
      {
        ++v10;
        v11 += *(_WORD *)(v12 + a4 + 44);
        v12 += (*(unsigned __int16 *)(v12 + a4 + 4) + 7) & 0xFFFFFFF8;
      }
      while ( v12 < a5 );
      v8 = v34;
    }
    a3 = v11;
  }
  v35 = 0;
  v32.QuadPart = 0LL;
  v31 = 0LL;
  RtlGetMultiTimePrecise(&v31, 5LL, &v35);
  if ( (v35 & 4) != 0 )
    SystemTimePrecise = v32;
  else
    SystemTimePrecise = RtlGetSystemTimePrecise();
  *(LARGE_INTEGER *)&v29 = SystemTimePrecise;
  if ( *(_DWORD *)(a1 + 40) != 2 )
  {
    if ( *(_DWORD *)(a1 + 40) == 3 )
    {
      SystemTimePrecise.QuadPart = __rdtsc();
    }
    else if ( (v35 & 1) != 0 )
    {
      SystemTimePrecise.QuadPart = v31;
    }
    else
    {
      PerformanceCounter.QuadPart = 0LL;
      RtlQueryPerformanceCounter(&PerformanceCounter);
      SystemTimePrecise = PerformanceCounter;
    }
  }
  *((LARGE_INTEGER *)&v29 + 1) = SystemTimePrecise;
  Heap_0 = (char *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 8 * a3 + 568);
  if ( !Heap_0 )
    return 0LL;
  v15 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 4 * a3);
  *((_QWORD *)Heap_0 + 67) = v15;
  if ( v15 )
  {
    if ( a4 )
    {
      if ( (unsigned int)EtwpFillProcessorStreamIndexMap(Heap_0, v10, a4, v5) )
        goto LABEL_32;
      v16 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 12LL * v10);
      *((_QWORD *)Heap_0 + 62) = v16;
      if ( !v16 )
        goto LABEL_32;
    }
    else
    {
      v27 = 0;
      if ( a3 )
      {
        v28 = 0LL;
        do
        {
          *(_WORD *)(v28 + *((_QWORD *)Heap_0 + 67)) = 0;
          v28 += 4LL;
          *(_WORD *)(v28 + *((_QWORD *)Heap_0 + 67) - 2) = v27++;
        }
        while ( v27 < a3 );
      }
    }
    v17 = *(_DWORD *)(a1 + 48);
    if ( v17 )
    {
      if ( v17 > 0x4000 )
      {
        *(_DWORD *)(a1 + 48) = 0x4000;
        v17 = 0x4000;
      }
      v18 = v17 << 10;
    }
    else
    {
      v18 = 4096;
    }
    *((_DWORD *)Heap_0 + 48) = v18;
    if ( RtlCreateUnicodeString((PUNICODE_STRING)(Heap_0 + 136), *(PCWSTR *)(a1 + 152))
      && !(unsigned int)EtwpAddInstanceIdToLogFileName(a1, *(unsigned int *)(a1 + 96), &v30) )
    {
      if ( (*(_DWORD *)(a1 + 64) & 0x4000) != 0 )
      {
        v19 = &EtwpGlobalSequence;
      }
      else
      {
        if ( (*(_DWORD *)(a1 + 64) & 0x8000) == 0 )
        {
LABEL_21:
          v20 = 2048;
          *((_DWORD *)Heap_0 + 5) = v8;
          *((_DWORD *)Heap_0 + 77) = 2048;
          *((_DWORD *)Heap_0 + 47) = a3;
          v21 = *(_DWORD *)(a1 + 64);
          if ( (v21 & 0x400) != 0 )
          {
            v20 = 3072;
          }
          else
          {
            if ( (v21 & 2) != 0 )
            {
              v20 = 2050;
            }
            else
            {
              if ( (v21 & 8) != 0 )
              {
                v20 = 2056;
                *(_OWORD *)(Heap_0 + 168) = v30;
                goto LABEL_27;
              }
              if ( (v21 & 1) == 0 )
              {
LABEL_28:
                *((_DWORD *)Heap_0 + 77) = v20 | *(_DWORD *)(a1 + 64) & 0x34133024;
                *((_DWORD *)Heap_0 + 94) = *(_DWORD *)(a1 + 108);
                *((_DWORD *)Heap_0 + 53) = *((_DWORD *)Heap_0 + 52);
                *(_OWORD *)(Heap_0 + 44) = *(_OWORD *)(a1 + 24);
                *((_DWORD *)Heap_0 + 76) = *(_DWORD *)(a1 + 60);
                *((_DWORD *)Heap_0 + 50) = *(_DWORD *)(a1 + 56);
                *((_DWORD *)Heap_0 + 51) = *(_DWORD *)(a1 + 52);
                *((_QWORD *)Heap_0 + 28) = Heap_0 + 216;
                *((_QWORD *)Heap_0 + 27) = Heap_0 + 216;
                *((_QWORD *)Heap_0 + 31) = 0LL;
                *((_QWORD *)Heap_0 + 29) = Heap_0 + 248;
                *((_QWORD *)Heap_0 + 30) = Heap_0 + 248;
                *((_QWORD *)Heap_0 + 34) = 0LL;
                *((_QWORD *)Heap_0 + 32) = Heap_0 + 272;
                *((_QWORD *)Heap_0 + 33) = Heap_0 + 272;
                *((_QWORD *)Heap_0 + 37) = 0LL;
                *((_QWORD *)Heap_0 + 35) = Heap_0 + 296;
                *((_QWORD *)Heap_0 + 36) = Heap_0 + 296;
                *((_QWORD *)Heap_0 + 57) = Heap_0 + 448;
                *((_QWORD *)Heap_0 + 56) = Heap_0 + 448;
                *((_QWORD *)Heap_0 + 59) = Heap_0 + 464;
                *((_QWORD *)Heap_0 + 58) = Heap_0 + 464;
                *((_DWORD *)Heap_0 + 4) = *(_DWORD *)(a1 + 40);
                *((_DWORD *)Heap_0 + 15) = *(_DWORD *)(a1 + 96);
                *((_DWORD *)Heap_0 + 88) = *(_DWORD *)(a1 + 76);
                if ( ZwCreateEvent((PHANDLE)Heap_0 + 14, 0x1F0003u, 0LL, SynchronizationEvent, 0) >= 0
                  && ZwCreateEvent((PHANDLE)Heap_0 + 15, 0x1F0003u, 0LL, SynchronizationEvent, 0) >= 0 )
                {
                  RtlInitializeCriticalSectionEx((PRTL_CRITICAL_SECTION)(Heap_0 + 72), 0, 0);
                  *((_QWORD *)Heap_0 + 8) = 0LL;
                  result = Heap_0;
                  *((_DWORD *)Heap_0 + 78) = 1;
                  *(_OWORD *)Heap_0 = v29;
                  return result;
                }
                goto LABEL_32;
              }
              v20 = 2049;
            }
            *(_OWORD *)(Heap_0 + 152) = v30;
          }
LABEL_27:
          *((_DWORD *)Heap_0 + 77) = v20;
          goto LABEL_28;
        }
        v19 = Heap_0 + 392;
      }
      *((_QWORD *)Heap_0 + 48) = v19;
      goto LABEL_21;
    }
  }
LABEL_32:
  v23 = (void *)*((_QWORD *)Heap_0 + 15);
  if ( v23 )
  {
    NtClose(v23);
    *((_QWORD *)Heap_0 + 15) = 0LL;
  }
  v24 = (void *)*((_QWORD *)Heap_0 + 14);
  if ( v24 )
  {
    NtClose(v24);
    *((_QWORD *)Heap_0 + 14) = 0LL;
  }
  v25 = (void *)*((_QWORD *)Heap_0 + 62);
  if ( v25 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v25);
  v26 = (void *)*((_QWORD *)Heap_0 + 67);
  if ( v26 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v26);
  EtwpFreeStreamIndexMap(Heap_0);
  RtlFreeAnsiString((PUNICODE_STRING)(Heap_0 + 136));
  RtlFreeAnsiString((PUNICODE_STRING)(Heap_0 + 152));
  RtlFreeAnsiString((PUNICODE_STRING)(Heap_0 + 168));
  RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
  return 0LL;
}
