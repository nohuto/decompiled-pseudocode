/*
 * XREFs of EtwpInitLoggerContext @ 0x180077550
 * Callers:
 *     EtwpStartUmLogger @ 0x180076EBC (EtwpStartUmLogger.c)
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x18000E5E0 (RtlQueryPerformanceCounter.c)
 *     RtlGetSystemTimePrecise @ 0x180011550 (RtlGetSystemTimePrecise.c)
 *     RtlCreateUnicodeString @ 0x18003DC10 (RtlCreateUnicodeString.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlFreeAnsiString @ 0x180056B20 (RtlFreeAnsiString.c)
 *     RtlGetMultiTimePrecise @ 0x180077A60 (RtlGetMultiTimePrecise.c)
 *     EtwpAddInstanceIdToLogFileName @ 0x180077C48 (EtwpAddInstanceIdToLogFileName.c)
 *     EtwpFillProcessorStreamIndexMap @ 0x180077DD8 (EtwpFillProcessorStreamIndexMap.c)
 *     EtwpFreeStreamIndexMap @ 0x180079214 (EtwpFreeStreamIndexMap.c)
 *     RtlInitializeCriticalSectionEx @ 0x18007BB90 (RtlInitializeCriticalSectionEx.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwCreateEvent @ 0x18015F840 (ZwCreateEvent.c)
 */

__int64 __fastcall EtwpInitLoggerContext(__int64 a1, int a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // r12d
  int v8; // r13d
  unsigned __int16 v10; // r14
  unsigned __int16 v11; // r8
  unsigned int v12; // edx
  __int64 v13; // rdx
  __int64 SystemTimePrecise; // rax
  __int64 Heap_0; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // eax
  int v19; // eax
  void *v20; // rax
  int v21; // ecx
  int v22; // eax
  __int64 result; // rax
  void *v24; // rcx
  void *v25; // rcx
  unsigned int v26; // edx
  __int64 v27; // rcx
  int v28; // [rsp+20h] [rbp-50h]
  __int128 v29; // [rsp+30h] [rbp-40h]
  __int128 v30; // [rsp+40h] [rbp-30h] BYREF
  __int128 v31; // [rsp+50h] [rbp-20h] BYREF
  __int64 v32; // [rsp+60h] [rbp-10h]
  __int64 v33; // [rsp+B0h] [rbp+40h] BYREF
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
  v32 = 0LL;
  v31 = 0LL;
  RtlGetMultiTimePrecise(&v31, 5LL, &v35);
  if ( (v35 & 4) != 0 )
    SystemTimePrecise = v32;
  else
    SystemTimePrecise = RtlGetSystemTimePrecise();
  *(_QWORD *)&v29 = SystemTimePrecise;
  if ( *(_DWORD *)(a1 + 40) != 2 )
  {
    if ( *(_DWORD *)(a1 + 40) == 3 )
    {
      SystemTimePrecise = __rdtsc();
    }
    else if ( (v35 & 1) != 0 )
    {
      SystemTimePrecise = v31;
    }
    else
    {
      v33 = 0LL;
      RtlQueryPerformanceCounter(&v33, v13);
      SystemTimePrecise = v33;
    }
  }
  *((_QWORD *)&v29 + 1) = SystemTimePrecise;
  Heap_0 = RtlAllocateHeap_0();
  if ( !Heap_0 )
    return 0LL;
  v16 = RtlAllocateHeap_0();
  *(_QWORD *)(Heap_0 + 536) = v16;
  if ( v16 )
  {
    if ( a4 )
    {
      if ( (unsigned int)EtwpFillProcessorStreamIndexMap(Heap_0, v10, a4, v5) )
        goto LABEL_32;
      v17 = RtlAllocateHeap_0();
      *(_QWORD *)(Heap_0 + 496) = v17;
      if ( !v17 )
        goto LABEL_32;
    }
    else
    {
      v26 = 0;
      if ( a3 )
      {
        v27 = 0LL;
        do
        {
          *(_WORD *)(v27 + *(_QWORD *)(Heap_0 + 536)) = 0;
          v27 += 4LL;
          *(_WORD *)(v27 + *(_QWORD *)(Heap_0 + 536) - 2) = v26++;
        }
        while ( v26 < a3 );
      }
    }
    v18 = *(_DWORD *)(a1 + 48);
    if ( v18 )
    {
      if ( v18 > 0x4000 )
      {
        *(_DWORD *)(a1 + 48) = 0x4000;
        v18 = 0x4000;
      }
      v19 = v18 << 10;
    }
    else
    {
      v19 = 4096;
    }
    *(_DWORD *)(Heap_0 + 192) = v19;
    if ( RtlCreateUnicodeString(Heap_0 + 136, *(const wchar_t **)(a1 + 152))
      && !(unsigned int)EtwpAddInstanceIdToLogFileName(a1, *(unsigned int *)(a1 + 96), &v30) )
    {
      if ( (*(_DWORD *)(a1 + 64) & 0x4000) != 0 )
      {
        v20 = &EtwpGlobalSequence;
      }
      else
      {
        if ( (*(_DWORD *)(a1 + 64) & 0x8000) == 0 )
        {
LABEL_21:
          v21 = 2048;
          *(_DWORD *)(Heap_0 + 20) = v8;
          *(_DWORD *)(Heap_0 + 308) = 2048;
          *(_DWORD *)(Heap_0 + 188) = a3;
          v22 = *(_DWORD *)(a1 + 64);
          if ( (v22 & 0x400) != 0 )
          {
            v21 = 3072;
          }
          else
          {
            if ( (v22 & 2) != 0 )
            {
              v21 = 2050;
            }
            else
            {
              if ( (v22 & 8) != 0 )
              {
                v21 = 2056;
                *(_OWORD *)(Heap_0 + 168) = v30;
                goto LABEL_27;
              }
              if ( (v22 & 1) == 0 )
              {
LABEL_28:
                *(_DWORD *)(Heap_0 + 308) = v21 | *(_DWORD *)(a1 + 64) & 0x34133024;
                *(_DWORD *)(Heap_0 + 376) = *(_DWORD *)(a1 + 108);
                *(_DWORD *)(Heap_0 + 212) = *(_DWORD *)(Heap_0 + 208);
                *(_OWORD *)(Heap_0 + 44) = *(_OWORD *)(a1 + 24);
                *(_DWORD *)(Heap_0 + 304) = *(_DWORD *)(a1 + 60);
                *(_DWORD *)(Heap_0 + 200) = *(_DWORD *)(a1 + 56);
                *(_DWORD *)(Heap_0 + 204) = *(_DWORD *)(a1 + 52);
                *(_QWORD *)(Heap_0 + 224) = Heap_0 + 216;
                *(_QWORD *)(Heap_0 + 216) = Heap_0 + 216;
                *(_QWORD *)(Heap_0 + 248) = 0LL;
                *(_QWORD *)(Heap_0 + 232) = Heap_0 + 248;
                *(_QWORD *)(Heap_0 + 240) = Heap_0 + 248;
                *(_QWORD *)(Heap_0 + 272) = 0LL;
                *(_QWORD *)(Heap_0 + 256) = Heap_0 + 272;
                *(_QWORD *)(Heap_0 + 264) = Heap_0 + 272;
                *(_QWORD *)(Heap_0 + 296) = 0LL;
                *(_QWORD *)(Heap_0 + 280) = Heap_0 + 296;
                *(_QWORD *)(Heap_0 + 288) = Heap_0 + 296;
                *(_QWORD *)(Heap_0 + 456) = Heap_0 + 448;
                *(_QWORD *)(Heap_0 + 448) = Heap_0 + 448;
                *(_QWORD *)(Heap_0 + 472) = Heap_0 + 464;
                *(_QWORD *)(Heap_0 + 464) = Heap_0 + 464;
                *(_DWORD *)(Heap_0 + 16) = *(_DWORD *)(a1 + 40);
                *(_DWORD *)(Heap_0 + 60) = *(_DWORD *)(a1 + 96);
                *(_DWORD *)(Heap_0 + 352) = *(_DWORD *)(a1 + 76);
                if ( (int)ZwCreateEvent(Heap_0 + 112, 2031619LL, 0LL, 1LL, 0) >= 0 )
                {
                  LOBYTE(v28) = 0;
                  if ( (int)ZwCreateEvent(Heap_0 + 120, 2031619LL, 0LL, 1LL, v28) >= 0 )
                  {
                    RtlInitializeCriticalSectionEx(Heap_0 + 72, 0LL, 0LL);
                    *(_QWORD *)(Heap_0 + 64) = 0LL;
                    result = Heap_0;
                    *(_DWORD *)(Heap_0 + 312) = 1;
                    *(_OWORD *)Heap_0 = v29;
                    return result;
                  }
                }
                goto LABEL_32;
              }
              v21 = 2049;
            }
            *(_OWORD *)(Heap_0 + 152) = v30;
          }
LABEL_27:
          *(_DWORD *)(Heap_0 + 308) = v21;
          goto LABEL_28;
        }
        v20 = (void *)(Heap_0 + 392);
      }
      *(_QWORD *)(Heap_0 + 384) = v20;
      goto LABEL_21;
    }
  }
LABEL_32:
  v24 = *(void **)(Heap_0 + 120);
  if ( v24 )
  {
    NtClose(v24);
    *(_QWORD *)(Heap_0 + 120) = 0LL;
  }
  v25 = *(void **)(Heap_0 + 112);
  if ( v25 )
  {
    NtClose(v25);
    *(_QWORD *)(Heap_0 + 112) = 0LL;
  }
  if ( *(_QWORD *)(Heap_0 + 496) )
    RtlFreeHeap_0();
  if ( *(_QWORD *)(Heap_0 + 536) )
    RtlFreeHeap_0();
  EtwpFreeStreamIndexMap(Heap_0);
  RtlFreeAnsiString((PUNICODE_STRING)(Heap_0 + 136));
  RtlFreeAnsiString((PUNICODE_STRING)(Heap_0 + 152));
  RtlFreeAnsiString((PUNICODE_STRING)(Heap_0 + 168));
  RtlFreeHeap_0();
  return 0LL;
}
