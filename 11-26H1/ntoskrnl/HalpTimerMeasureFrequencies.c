/*
 * XREFs of HalpTimerMeasureFrequencies @ 0x1405847E8
 * Callers:
 *     HalpTimerSelectRoles @ 0x14057A3A8 (HalpTimerSelectRoles.c)
 * Callees:
 *     HalpTimerScaleCounter @ 0x140208DE0 (HalpTimerScaleCounter.c)
 *     HalpTimerStallExecutionProcessor @ 0x14037D7D0 (HalpTimerStallExecutionProcessor.c)
 *     KeStallExecutionProcessor @ 0x14037DCA0 (KeStallExecutionProcessor.c)
 *     HalpTimerGetInternalData @ 0x140433FD0 (HalpTimerGetInternalData.c)
 *     HalpTimerInitialize @ 0x140579E08 (HalpTimerInitialize.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x140584520 (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x140585238 (HalpTimerReadTimerPairWithLatencyLimit.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpTimerMeasureFrequencies(__int64 a1)
{
  ULONG_PTR *v1; // rbx
  int v2; // r15d
  char v3; // dl
  ULONG_PTR v5; // rcx
  ULONG_PTR *v6; // rbx
  __int64 v7; // rcx
  ULONG_PTR *v8; // rdi
  __int64 InternalData; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  ULONG_PTR *v13; // rbx
  ULONG_PTR *v14; // rdi
  ULONG_PTR *v15; // r10
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r14
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  ULONG_PTR *v23; // rbx
  ULONG_PTR *v24; // rdi
  ULONG_PTR *v25; // r10
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  ULONG_PTR *v29; // rbx
  ULONG_PTR *v30; // rcx
  __int64 v31; // r11
  int v32; // edi
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rbp
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // r9
  unsigned int v37; // edi
  __int64 v38; // rax
  __int64 v39; // rdx

  v1 = (ULONG_PTR *)HalpRegisteredTimers;
  v2 = *(_DWORD *)(a1 + 224) & 2;
  v3 = 0;
  if ( (ULONG_PTR *)HalpRegisteredTimers != &HalpRegisteredTimers )
  {
    do
    {
      v5 = (ULONG_PTR)v1;
      v1 = (ULONG_PTR *)*v1;
      if ( (!*(_QWORD *)(v5 + 192) || (*(_DWORD *)(v5 + 184) & 8) != 0) && (*(_DWORD *)(v5 + 224) & 2) != 0 )
      {
        HalpTimerInitialize(v5);
        v3 = 1;
      }
    }
    while ( v1 != &HalpRegisteredTimers );
    if ( v3 )
    {
      KeStallExecutionProcessor(0x5DCu);
      v6 = (ULONG_PTR *)HalpRegisteredTimers;
      while ( v6 != &HalpRegisteredTimers )
      {
        v7 = (__int64)v6;
        v8 = v6;
        v6 = (ULONG_PTR *)*v6;
        if ( (!*(_QWORD *)(v7 + 192) || (*(_DWORD *)(v7 + 184) & 8) != 0)
          && (v8[28] & 2) != 0
          && (*(_DWORD *)(v7 + 184) & 2) != 0 )
        {
          if ( v2 )
          {
            *((_DWORD *)v8 + 12) = HalpTimerDetermineValidTimerPairReadLatency(v7, a1);
          }
          else
          {
            InternalData = HalpTimerGetInternalData(v7);
            v8[2] = guard_dispatch_icall_no_overrides(InternalData, v10);
          }
        }
      }
      v11 = __readcr2();
      __writecr2(v11);
      if ( (*(_DWORD *)(a1 + 224) & 2) == 0 )
      {
        v12 = HalpTimerGetInternalData(a1);
        guard_dispatch_icall_no_overrides(v12, 0LL);
      }
      v13 = (ULONG_PTR *)HalpRegisteredTimers;
      while ( v13 != &HalpRegisteredTimers )
      {
        v14 = v13;
        v15 = v13;
        v16 = (__int64)v13;
        v13 = (ULONG_PTR *)*v13;
        if ( (!v14[24] || (*(_DWORD *)(v16 + 184) & 8) != 0) && (v15[28] & 2) != 0 && (*(_DWORD *)(v16 + 184) & 2) != 0 )
        {
          if ( v2 )
          {
            HalpTimerReadTimerPairWithLatencyLimit(
              *((_DWORD *)v15 + 12),
              (_DWORD)v15,
              a1,
              (_DWORD)v14 + 16,
              (__int64)(v15 + 3));
          }
          else
          {
            v17 = HalpTimerGetInternalData(v16);
            v14[2] = guard_dispatch_icall_no_overrides(v17, v18);
          }
        }
      }
      v19 = __readcr2();
      __writecr2(v19);
      if ( (*(_DWORD *)(a1 + 224) & 2) != 0 )
      {
        v20 = 1250000LL;
        HalpTimerStallExecutionProcessor(a1, 1250000LL, 0LL);
      }
      else
      {
        v21 = HalpTimerGetInternalData(a1);
        v20 = guard_dispatch_icall_no_overrides(v21, 1250000LL);
      }
      v22 = __readcr2();
      __writecr2(v22);
      v23 = (ULONG_PTR *)HalpRegisteredTimers;
      while ( v23 != &HalpRegisteredTimers )
      {
        v24 = v23;
        v25 = v23;
        v26 = (__int64)v23;
        v23 = (ULONG_PTR *)*v23;
        if ( (!v24[24] || (*(_DWORD *)(v26 + 184) & 8) != 0) && (v25[28] & 2) != 0 && (*(_DWORD *)(v26 + 184) & 2) != 0 )
        {
          if ( v2 )
          {
            HalpTimerReadTimerPairWithLatencyLimit(
              *((_DWORD *)v25 + 12),
              (_DWORD)v25,
              a1,
              (_DWORD)v24 + 32,
              (__int64)(v25 + 5));
          }
          else
          {
            v27 = HalpTimerGetInternalData(v26);
            v24[4] = guard_dispatch_icall_no_overrides(v27, v28);
          }
        }
      }
      v29 = (ULONG_PTR *)HalpRegisteredTimers;
      while ( v29 != &HalpRegisteredTimers )
      {
        v30 = v29;
        v31 = (__int64)v29;
        v29 = (ULONG_PTR *)*v29;
        if ( (!v30[24] || (v30[23] & 8) != 0) && (*(_DWORD *)(v31 + 224) & 2) != 0 )
        {
          v32 = *((_DWORD *)v30 + 46);
          if ( (v32 & 2) != 0 )
          {
            v33 = *(_QWORD *)(v31 + 16);
            v34 = *(_QWORD *)(v31 + 32) - v33;
            v35 = *(_QWORD *)(v31 + 24);
            v36 = *(_QWORD *)(v31 + 40) - v35;
            if ( *(_QWORD *)(v31 + 32) < v33 )
              v34 += 1LL << *(_DWORD *)(v31 + 220);
            if ( *(_QWORD *)(v31 + 40) < v35 )
              v36 += 1LL << *(_DWORD *)(a1 + 220);
            if ( v2 )
              v20 = HalpTimerScaleCounter(v36, *(_QWORD *)(a1 + 192), 10000000LL);
            v37 = v32 & 0xFFFFFFF7;
            *(_DWORD *)(v31 + 184) = v37;
            *(_QWORD *)(v31 + 192) = 10000000 * v34 / v20;
            if ( v31 != a1 && (v37 & 4) == 0 )
            {
              if ( *(_QWORD *)(v31 + 136) )
              {
                v38 = HalpTimerGetInternalData(v31);
                guard_dispatch_icall_no_overrides(v38, v39);
              }
            }
          }
        }
      }
    }
  }
}
