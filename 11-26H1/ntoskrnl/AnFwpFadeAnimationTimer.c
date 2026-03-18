/*
 * XREFs of AnFwpFadeAnimationTimer @ 0x140C52350
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     KeCancelTimer @ 0x1403AD790 (KeCancelTimer.c)
 *     BgpGxDrawRectangle @ 0x1404BFC2C (BgpGxDrawRectangle.c)
 *     BgpGetBitsPerPixel @ 0x1404C009C (BgpGetBitsPerPixel.c)
 *     BgpFwAcquireLock @ 0x1404E7E04 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E81BC (BgpFwReleaseLock.c)
 *     BgpFwQueryPerformanceCounter @ 0x1404F84EC (BgpFwQueryPerformanceCounter.c)
 */

void __fastcall AnFwpFadeAnimationTimer(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v4; // ebx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v6; // rdi
  char v7; // r13
  char v8; // r12
  char v9; // bp
  __int64 v10; // r14
  unsigned int v11; // r15d
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // r11
  int v15; // esi
  int v16; // edi
  __int64 v17; // rbx
  __int64 v18; // r9
  __int64 n; // r11
  __int64 v20; // rdx
  int v21; // r8d
  unsigned int v22; // eax
  bool v23; // zf
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // eax
  unsigned int v27; // ecx
  __int64 v28; // rax
  __int64 v29; // rax
  LARGE_INTEGER v30; // rax
  __int64 v31; // r11
  __int64 v32; // r9
  __int64 v33; // rdi
  __int64 m; // rbx
  __int64 v35; // rdx
  int v36; // r8d
  unsigned int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rcx
  unsigned int v40; // eax
  unsigned int v41; // ecx
  __int64 v42; // r9
  __int64 v43; // r10
  __int64 ii; // r11
  __int64 v45; // rdx
  int v46; // r8d
  unsigned int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rcx
  unsigned int v50; // eax
  unsigned int v51; // ecx
  __int64 v52; // rdx
  unsigned int v53; // ecx
  __int64 v54; // r11
  __int64 i; // r9
  int v56; // eax
  unsigned int v57; // eax
  unsigned int v58; // ecx
  __int64 v59; // r8
  __int64 j; // r9
  int v61; // eax
  unsigned int v62; // eax
  __int64 v63; // r8
  __int64 v64; // rcx
  __int64 k; // r9
  int v66; // eax
  unsigned int v67; // eax
  int v68; // [rsp+20h] [rbp-58h]
  __int64 v69; // [rsp+28h] [rbp-50h]
  __int64 v70; // [rsp+30h] [rbp-48h]
  __int64 v71; // [rsp+38h] [rbp-40h] BYREF
  LARGE_INTEGER v72[2]; // [rsp+40h] [rbp-38h] BYREF

  v4 = 0;
  v71 = 0LL;
  BgpFwAcquireLock();
  if ( WheapPfaLock.SchedulerApc.Size )
  {
    WheapPfaLock.ThreadListEntry.Blink = (struct _LIST_ENTRY *)BgpFwQueryPerformanceCounter(0LL).QuadPart;
    qword_140E64FC0 = (__int64)WheapPfaLock.ThreadListEntry.Blink;
    PerformanceCounter = BgpFwQueryPerformanceCounter(0LL);
    v6 = qword_140E0EFC8;
    v7 = byte_140E0EF80;
    v8 = byte_140E0EF81;
    v9 = byte_140E0EF82;
    v10 = qword_140E0EFF8;
    WheapPfaLock.ThreadListEntry.Blink = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
    qword_140E64FB0 = PerformanceCounter.QuadPart;
    v71 = qword_140E0EF78;
    v68 = HIDWORD(qword_140E0EF70);
    v69 = qword_140E0EFB8;
    v72[0].QuadPart = qword_140E0EFC8;
    v70 = qword_140E0F000;
    v11 = 10
        * (qword_140E0EF70
         - (unsigned int)qword_140E0EF70
         / (*(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[84] - HIDWORD(qword_140E0EF70)));
    if ( (unsigned int)BgpGetBitsPerPixel() == 24 )
    {
      v15 = 0;
      if ( !v9 )
      {
        v52 = qword_140E0EFC0;
        v53 = 0;
        v54 = *(_QWORD *)(v6 + 24);
        for ( i = *(_QWORD *)(qword_140E0EFC0 + 24); v53 < *(_DWORD *)(v52 + 12); ++v53 )
        {
          v56 = *(unsigned __int8 *)(v53 + i);
          if ( (_BYTE)v56 )
          {
            v57 = (v11 * v56) >> 10;
            *(_BYTE *)(v53 + v54) = v57;
            if ( v57 )
              ++v15;
          }
        }
        v14 = v70;
        v12 = v69;
      }
      v16 = 0;
      if ( !v7 )
      {
        v58 = 0;
        v59 = *(_QWORD *)(v13 + 24);
        for ( j = *(_QWORD *)(v12 + 24); v58 < *(_DWORD *)(v13 + 12); ++v58 )
        {
          v61 = *(unsigned __int8 *)(v58 + v59);
          if ( (_BYTE)v61 )
          {
            v62 = (v11 * v61) >> 10;
            *(_BYTE *)(j + v58) = v62;
            if ( v62 )
              ++v16;
          }
        }
      }
      if ( !v8 )
      {
        v63 = *(_QWORD *)(v10 + 24);
        v64 = 0LL;
        for ( k = *(_QWORD *)(v14 + 24); (unsigned int)v64 < *(_DWORD *)(v10 + 12); v64 = (unsigned int)(v64 + 1) )
        {
          v66 = *(unsigned __int8 *)(v64 + v63);
          if ( (_BYTE)v66 )
          {
            v67 = (v11 * v66) >> 10;
            *(_BYTE *)(v64 + k) = v67;
            if ( v67 )
              ++v4;
          }
        }
      }
    }
    else
    {
      v15 = 0;
      if ( !v9 )
      {
        v31 = qword_140E0EFC0;
        v32 = 0LL;
        v33 = *(_QWORD *)(v6 + 24);
        for ( m = *(_QWORD *)(qword_140E0EFC0 + 24);
              (unsigned int)v32 < *(_DWORD *)(v31 + 12);
              v32 = (unsigned int)(v32 + 4) )
        {
          if ( *(_DWORD *)(v32 + m) )
          {
            v35 = (unsigned int)(v32 + 2);
            v36 = v15 + 1;
            v37 = (v11 * *(unsigned __int8 *)(v32 + m)) >> 10;
            v23 = v37 == 0;
            *(_BYTE *)(v32 + v33) = v37;
            v38 = (unsigned int)(v32 + 1);
            if ( v23 )
              v36 = v15;
            v39 = (unsigned int)v38;
            v15 = v36 + 1;
            v40 = (v11 * *(unsigned __int8 *)(v38 + m)) >> 10;
            *(_BYTE *)(v39 + v33) = v40;
            if ( !v40 )
              v15 = v36;
            v41 = (v11 * *(unsigned __int8 *)(v35 + m)) >> 10;
            *(_BYTE *)(v35 + v33) = v41;
            if ( v41 )
              ++v15;
          }
        }
        v12 = v69;
      }
      v16 = 0;
      if ( !v7 )
      {
        v17 = *(_QWORD *)(v12 + 24);
        v18 = 0LL;
        for ( n = *(_QWORD *)(v13 + 24); (unsigned int)v18 < *(_DWORD *)(v13 + 12); v18 = (unsigned int)(v18 + 4) )
        {
          if ( *(_DWORD *)(v18 + n) )
          {
            v20 = (unsigned int)(v18 + 2);
            v21 = v16 + 1;
            v22 = (v11 * *(unsigned __int8 *)(v18 + n)) >> 10;
            v23 = v22 == 0;
            *(_BYTE *)(v18 + v17) = v22;
            v24 = (unsigned int)(v18 + 1);
            if ( v23 )
              v21 = v16;
            v25 = (unsigned int)v24;
            v16 = v21 + 1;
            v26 = (v11 * *(unsigned __int8 *)(v24 + n)) >> 10;
            *(_BYTE *)(v25 + v17) = v26;
            if ( !v26 )
              v16 = v21;
            v27 = (v11 * *(unsigned __int8 *)(v20 + n)) >> 10;
            *(_BYTE *)(v20 + v17) = v27;
            if ( v27 )
              ++v16;
          }
        }
      }
      v4 = 0;
      if ( !v8 )
      {
        v42 = 0LL;
        v43 = *(_QWORD *)(v10 + 24);
        for ( ii = *(_QWORD *)(v70 + 24); (unsigned int)v42 < *(_DWORD *)(v10 + 12); v42 = (unsigned int)(v42 + 4) )
        {
          if ( *(_DWORD *)(v42 + v43) )
          {
            v45 = (unsigned int)(v42 + 2);
            v46 = v4 + 1;
            v47 = (v11 * *(unsigned __int8 *)(v42 + v43)) >> 10;
            v23 = v47 == 0;
            *(_BYTE *)(v42 + ii) = v47;
            v48 = (unsigned int)(v42 + 1);
            if ( v23 )
              v46 = v4;
            v49 = (unsigned int)v48;
            v4 = v46 + 1;
            v50 = (v11 * *(unsigned __int8 *)(v48 + v43)) >> 10;
            *(_BYTE *)(v49 + ii) = v50;
            if ( !v50 )
              v4 = v46;
            v51 = (v11 * *(unsigned __int8 *)(v45 + v43)) >> 10;
            *(_BYTE *)(v45 + ii) = v51;
            if ( v51 )
              ++v4;
          }
        }
      }
    }
    WheapPfaLock.ThreadListEntry.Blink = (struct _LIST_ENTRY *)BgpFwQueryPerformanceCounter(0LL).QuadPart;
    v28 = *(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - qword_140E64FB0;
    *(_QWORD *)&WheapPfaLock.PriorityFloorSummary += v28;
    *(_QWORD *)&WheapPfaLock.PriorityFloorCounts[24] = v28;
    WheapPfaLock.ThreadListEntry.Blink = (struct _LIST_ENTRY *)BgpFwQueryPerformanceCounter(0LL).QuadPart;
    qword_140E64FA8 = (__int64)WheapPfaLock.ThreadListEntry.Blink;
    if ( !v9 )
    {
      BgpGxDrawRectangle(v72[0].QuadPart, (__int64)&v71);
      v9 = v15 == 0;
    }
    if ( !v7 )
    {
      if ( !v68 && !v16 || (BgpGxDrawRectangle(v69, (__int64)&xmmword_140E0EF90), !v16) )
        v7 = 1;
    }
    if ( !v8 )
    {
      if ( !v68 && !v4 || (BgpGxDrawRectangle(v70, (__int64)&xmmword_140E0EFD0), !v4) )
        v8 = 1;
    }
    WheapPfaLock.ThreadListEntry.Blink = (struct _LIST_ENTRY *)BgpFwQueryPerformanceCounter(0LL).QuadPart;
    v29 = *(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - qword_140E64FA8;
    *(_QWORD *)&WheapPfaLock.PriorityFloorCounts[16] += v29;
    *(_QWORD *)&WheapPfaLock.PriorityFloorCounts[24] = v29;
    WheapPfaLock.ThreadListEntry.Blink = (struct _LIST_ENTRY *)BgpFwQueryPerformanceCounter(v72).QuadPart;
    v30.QuadPart = *(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - qword_140E64FC0;
    *(LARGE_INTEGER *)&WheapPfaLock.PriorityFloorCounts[24] = v30;
    if ( v30.QuadPart < qword_140E0F1D8 )
      qword_140E0F1D8 = v30.QuadPart;
    if ( v30.QuadPart > *(__int64 *)&WheapPfaLock.SchedulerApcFill5[80] )
      *(LARGE_INTEGER *)&WheapPfaLock.SchedulerApcFill5[80] = v30;
    WheapPfaLock.SuspendEvent.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)((char *)WheapPfaLock.SuspendEvent.Header.WaitListHead.Blink
                                                                               + v30.QuadPart);
    WheapPfaLock.MutantListHead.Flink = (struct _LIST_ENTRY *)((char *)WheapPfaLock.MutantListHead.Flink + v30.QuadPart);
    ++WheapPfaLock.SuspendEvent.Header.LockNV;
    if ( v15 || v4 || v16 )
    {
      byte_140E0EF80 = v7;
      byte_140E0EF81 = v8;
      LODWORD(qword_140E0EF70) = v11 / 0xA;
      HIDWORD(qword_140E0EF70) = v68 + 1;
      byte_140E0EF82 = v9;
    }
    else
    {
      WheapPfaLock.SchedulerApc.Size = 0;
      KeCancelTimer(&stru_140E64EF0);
      KeSetEvent(&stru_140E64F70, 0, 0);
    }
  }
  BgpFwReleaseLock();
}
