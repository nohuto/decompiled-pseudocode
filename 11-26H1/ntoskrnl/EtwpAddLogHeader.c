/*
 * XREFs of EtwpAddLogHeader @ 0x140A11F48
 * Callers:
 *     EtwpPreserveLogger @ 0x1408346EC (EtwpPreserveLogger.c)
 *     EtwpUpdateFileHeader @ 0x140A15D84 (EtwpUpdateFileHeader.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     EtwpQueryUsedProcessorCount @ 0x140482564 (EtwpQueryUsedProcessorCount.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwpIsWow64Logger @ 0x140A12520 (EtwpIsWow64Logger.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x140A12544 (RtlpQueryTimeZoneInformationWorker.c)
 *     EtwpPrepareHeader @ 0x140A12BF8 (EtwpPrepareHeader.c)
 *     EtwpAddBinaryInfoEvents @ 0x140ABCE74 (EtwpAddBinaryInfoEvents.c)
 *     EtwpAddDebugInfoEvents @ 0x140ABD02C (EtwpAddDebugInfoEvents.c)
 */

unsigned __int64 __fastcall EtwpAddLogHeader(__int64 a1, unsigned int *a2)
{
  bool v4; // cf
  unsigned __int64 result; // rax
  size_t v6; // r15
  struct _KTHREAD *CurrentThread; // r14
  _QWORD *v8; // r12
  unsigned int UsedProcessorCount; // eax
  char v10; // al
  char v11; // cl
  __int64 v12; // rdx
  char *v13; // r13
  int v14; // eax
  __int64 v15; // rax
  unsigned int *v16; // rbx
  char *v17; // r15
  __int64 v18; // rdx
  unsigned __int64 v19; // xmm0_8
  __int64 v20; // rdx
  unsigned __int64 v21; // xmm0_8
  __int64 v22; // rax
  unsigned int v23; // r8d
  int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int128 v29; // xmm1
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-28h] BYREF
  size_t v31; // [rsp+40h] [rbp-20h]
  __int64 v32; // [rsp+48h] [rbp-18h]
  unsigned int v33; // [rsp+50h] [rbp-10h]

  PerformanceFrequency.QuadPart = 0LL;
  v32 = 0LL;
  v33 = 0;
  v4 = (unsigned __int8)((__int64 (*)(void))EtwpIsWow64Logger)() != 0;
  result = *(unsigned int *)(a1 + 4);
  v6 = (unsigned __int16)(*(_WORD *)(a1 + 152) + *(_WORD *)(a1 + 136) + (v4 ? 276 : 284));
  v31 = v6;
  if ( result >= v6 + 104 )
  {
    if ( (int)guard_dispatch_icall_no_overrides(25LL, 12LL) < 0 )
    {
      v32 = 0LL;
      v33 = 0;
    }
    CurrentThread = KeGetCurrentThread();
    *((_WORD *)a2 + 39) = 0;
    v8 = (_QWORD *)(a1 + 312);
    *((_WORD *)a2 + 38) = v6 + 32;
    a2[18] = -1073610750;
    a2[20] = CurrentThread[1].CurrentRunTime;
    a2[21] = CurrentThread[1].CycleTime;
    a2[24] = CurrentThread->SchedulerApc.SpareLong0;
    a2[25] = CurrentThread->UserTime;
    *((_QWORD *)a2 + 11) = *(_QWORD *)(a1 + 312);
    memset_0(a2 + 26, 0, v6);
    a2[26] = *(_DWORD *)(a1 + 4);
    *((_WORD *)a2 + 54) = 10;
    a2[28] = (unsigned __int16)NtBuildNumber;
    UsedProcessorCount = EtwpQueryUsedProcessorCount(a1);
    a2[29] = UsedProcessorCount;
    if ( (*(_DWORD *)(a1 + 12) & 0x4000000) != 0 || UsedProcessorCount > 0x100 || *(_DWORD *)(a1 + 4) > 0x100000u )
    {
      v10 = 0;
      v11 = 2;
    }
    else
    {
      v10 = 5;
      v11 = 1;
    }
    *((_BYTE *)a2 + 110) = v11;
    *((_BYTE *)a2 + 111) = v10;
    a2[36] = 1;
    a2[34] = *(_DWORD *)(a1 + 12) & 0xFF3FFEFF;
    a2[33] = *(_DWORD *)(a1 + 292);
    a2[32] = KeMaximumIncrement;
    a2[39] = HIDWORD(stru_140F03830.CycleTime);
    KeQueryPerformanceCounter(&PerformanceFrequency);
    _InterlockedExchange64((volatile __int64 *)&stru_140F03830.CurrentRunTime, PerformanceFrequency.QuadPart);
    if ( (unsigned __int8)EtwpIsWow64Logger(a1) )
    {
      a2[18] = -1073676286;
      v13 = (char *)(a2 + 94);
      a2[37] = 4;
      v24 = 1;
      *((_QWORD *)a2 + 44) = v12;
      *((_QWORD *)a2 + 45) = *(_QWORD *)(a1 + 304);
      *((_QWORD *)a2 + 43) = stru_140F03830.AffinityVersion;
      if ( *(_DWORD *)(a1 + 200) != 4 )
        v24 = *(_DWORD *)(a1 + 200);
      a2[92] = v24;
      a2[40] = HIDWORD(v32);
      a2[41] = v33;
      v15 = 16LL;
    }
    else
    {
      *((_QWORD *)a2 + 45) = v12;
      v13 = (char *)(a2 + 96);
      *((_QWORD *)a2 + 46) = *(_QWORD *)(a1 + 304);
      *((_QWORD *)a2 + 44) = stru_140F03830.AffinityVersion;
      v14 = 1;
      a2[37] = 8;
      if ( *(_DWORD *)(a1 + 200) != 4 )
        v14 = *(_DWORD *)(a1 + 200);
      a2[94] = v14;
      *((_QWORD *)a2 + 20) = HIDWORD(v32);
      *((_QWORD *)a2 + 21) = v33;
      v15 = 18LL;
    }
    v16 = &a2[v15 + 26];
    v17 = &v13[*(unsigned __int16 *)(a1 + 136)];
    RtlpQueryTimeZoneInformationWorker(v16, 0xACuLL);
    v18 = *(_QWORD *)(v16 + 17);
    v19 = _mm_srli_si128(*(__m128i *)(v16 + 17), 8).m128i_u64[0];
    *((_WORD *)v16 + 34) = v18;
    *((_WORD *)v16 + 39) = v19;
    *((_WORD *)v16 + 35) = WORD1(v18);
    *((_WORD *)v16 + 37) = WORD2(v18);
    *((_WORD *)v16 + 36) = HIWORD(v19);
    *((_WORD *)v16 + 40) = WORD1(v19);
    *((_WORD *)v16 + 38) = HIWORD(v18);
    *((_WORD *)v16 + 41) = WORD2(v19);
    v20 = *((_QWORD *)v16 + 19);
    v21 = _mm_srli_si128(*(__m128i *)(v16 + 38), 8).m128i_u64[0];
    *((_WORD *)v16 + 76) = v20;
    *((_WORD *)v16 + 81) = v21;
    *((_WORD *)v16 + 77) = WORD1(v20);
    *((_WORD *)v16 + 79) = WORD2(v20);
    *((_WORD *)v16 + 78) = HIWORD(v21);
    *((_WORD *)v16 + 83) = WORD2(v21);
    *((_WORD *)v16 + 80) = HIWORD(v20);
    *((_WORD *)v16 + 82) = WORD1(v21);
    memmove(v13, *(const void **)(a1 + 144), *(unsigned __int16 *)(a1 + 136) + 2LL);
    memmove(v17 + 2, *(const void **)(a1 + 160), *(unsigned __int16 *)(a1 + 152) + 2LL);
    a2[2] += ((unsigned __int16)v31 + 39) & 0xFFFFFFF8;
    if ( (*(_DWORD *)(a1 + 12) & 0x2000000) != 0 && a2[2] + 68 <= *a2 )
    {
      v25 = a2[2];
      v26 = v25;
      *(unsigned int *)((char *)a2 + v25 + 4) = 327748;
      *(unsigned int *)((char *)a2 + v25) = -1073610750;
      *(unsigned int *)((char *)a2 + v25 + 8) = CurrentThread[1].CurrentRunTime;
      *(unsigned int *)((char *)a2 + v25 + 12) = CurrentThread[1].CycleTime;
      *(unsigned int *)((char *)a2 + v25 + 24) = CurrentThread->SchedulerApc.SpareLong0;
      *(unsigned int *)((char *)a2 + v25 + 28) = CurrentThread->UserTime;
      *(_QWORD *)((char *)a2 + v25 + 16) = *v8;
      v27 = *(_QWORD *)(a1 + 1360);
      v28 = 32LL * *(unsigned __int8 *)(a1 + 818);
      *(_OWORD *)((char *)a2 + v26 + 32) = *(_OWORD *)(v28 + v27 + 4556);
      v29 = *(_OWORD *)(v28 + v27 + 4572);
      *(unsigned int *)((char *)a2 + v26 + 64) = 85;
      *(_OWORD *)((char *)a2 + v26 + 48) = v29;
      a2[2] += 72;
    }
    if ( a2[2] + 80 <= *a2 )
    {
      v22 = a2[2];
      *(unsigned int *)((char *)a2 + v22 + 4) = 5242960;
      *(unsigned int *)((char *)a2 + v22) = -1073610750;
      *(unsigned int *)((char *)a2 + v22 + 8) = CurrentThread[1].CurrentRunTime;
      *(unsigned int *)((char *)a2 + v22 + 12) = CurrentThread[1].CycleTime;
      *(unsigned int *)((char *)a2 + v22 + 24) = CurrentThread->SchedulerApc.SpareLong0;
      *(unsigned int *)((char *)a2 + v22 + 28) = CurrentThread->UserTime;
      *(_QWORD *)((char *)a2 + v22 + 16) = *v8;
      *(unsigned int *)((char *)a2 + v22 + 32) = 0;
      *(unsigned int *)((char *)a2 + v22 + 36) = *(_DWORD *)(*(_QWORD *)(a1 + 1360) + 4500LL);
      *(_OWORD *)((char *)a2 + v22 + 48) = *(_OWORD *)(*(_QWORD *)(a1 + 1360) + 4448LL);
      *(_QWORD *)((char *)a2 + v22 + 40) = *(_QWORD *)(a1 + 1544);
      *(_OWORD *)((char *)a2 + v22 + 64) = *(_OWORD *)(*(_QWORD *)(a1 + 1360) + 4464LL);
      a2[2] += 80;
    }
    v23 = *a2;
    a2[12] = a2[2];
    if ( a2[2] < v23 )
    {
      if ( *(_QWORD *)(a1 + 96) != a1 + 96 || *(_DWORD *)(a1 + 120) )
        EtwpAddDebugInfoEvents(a1, (_DWORD)a2, v23, a1 + 312, 3);
      if ( *(_QWORD *)(a1 + 1304) != a1 + 1304 )
        EtwpAddBinaryInfoEvents(a1, a2, *a2, 2LL);
    }
    a2[1] = a2[12];
    a2[11] = 3;
    EtwpPrepareHeader(a1, a2, 1LL);
    result = a2[2];
    a2[1] = result;
  }
  return result;
}
