/*
 * XREFs of VidSchiScheduleCommandToRun @ 0x140021700
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1400E8CE0 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x140006594 (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14000A150 (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     VidSchiSwitchContextWithCheck @ 0x1400202A8 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiUpdateContextStatus @ 0x140020F00 (VidSchiUpdateContextStatus.c)
 *     VidSchiProfilePerformanceTick @ 0x140023500 (VidSchiProfilePerformanceTick.c)
 *     ?VidSchiSelectContextFromThisPriority@@YAPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_NODE@@K_N@Z @ 0x140024900 (-VidSchiSelectContextFromThisPriority@@YAPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_NODE@@K_N@Z.c)
 *     ?VidSchiLogAggregatedTelemetry@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x14002F0E4 (-VidSchiLogAggregatedTelemetry@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x140030808 (-VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiStartNodeYield @ 0x140030A00 (VidSchiStartNodeYield.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x140030D00 (VidSchiCheckConditionDeviceCommand.c)
 *     ?VidMmAddPendingTermination@@YAXPEAUVIDMM_ALLOC@@@Z @ 0x140031278 (-VidMmAddPendingTermination@@YAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1400C4B80 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchiCheckHwProgress @ 0x1400C4FC0 (VidSchiCheckHwProgress.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1400EAA60 (VidSchiSubmitPreemptionCommand.c)
 */

__int64 __fastcall VidSchiScheduleCommandToRun(struct _VIDSCH_GLOBAL *a1, _BYTE *a2)
{
  __int64 v2; // r13
  int v4; // eax
  __int64 v5; // rcx
  struct _VIDSCH_GLOBAL *v6; // r10
  struct _KEVENT **v7; // rbx
  struct _KEVENT *v8; // rcx
  char v9; // r8
  volatile LONG Lock; // eax
  __int64 *v11; // rdx
  struct _VIDSCH_GLOBAL *v12; // r14
  struct _VIDSCH_GLOBAL **v13; // rsi
  _QWORD **v14; // rsi
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  _QWORD **v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // rdx
  struct _VIDSCH_GLOBAL *v22; // r9
  bool v23; // zf
  struct _VIDSCH_GLOBAL **v24; // r8
  struct _VIDSCH_CONTEXT *v25; // rsi
  __int64 v26; // rax
  __int64 SetBits; // rax
  __int64 *v28; // rbx
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rdx
  CCHAR v32; // al
  int v33; // eax
  int v34; // r12d
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rbx
  __int64 v38; // rdx
  int v39; // eax
  int v40; // ecx
  unsigned int v41; // eax
  int v42; // ecx
  unsigned int v43; // ecx
  int v44; // eax
  unsigned int v45; // eax
  int v46; // ecx
  unsigned int v47; // ecx
  struct _KEVENT **v48; // rbx
  struct _KEVENT *v49; // rcx
  char v50; // r8
  volatile LONG v51; // eax
  __int64 *v52; // rcx
  struct _VIDSCH_GLOBAL *i; // r14
  struct _VIDSCH_GLOBAL *v55; // rcx
  struct _VIDSCH_GLOBAL **v56; // rax
  struct _VIDSCH_GLOBAL *v57; // rcx
  struct _VIDSCH_GLOBAL **v58; // rax
  __int64 *v59; // r9
  __int64 *v60; // r9
  __int64 v61; // rax
  CCHAR MostSignificantBit; // al
  struct _VIDSCH_GLOBAL *v63; // rsi
  _QWORD *v64; // r10
  __int64 v65; // rdx
  _QWORD *v66; // rax
  CCHAR v67; // al
  LARGE_INTEGER v68; // r14
  unsigned int v69; // edx
  __int64 v70; // rcx
  __int64 v71; // r9
  LARGE_INTEGER v72; // r14
  unsigned int v73; // edx
  __int64 v74; // rcx
  __int64 v75; // r9
  _QWORD *v76; // r10
  char *v77; // rdx
  char **Flink; // r8
  struct _KEVENT *v79; // r9
  __int64 v80; // rax
  __int64 **v81; // rax
  __int64 v82; // rax
  struct _LIST_ENTRY *v83; // r8
  _QWORD *v84; // r10
  struct _VIDSCH_GLOBAL **v85; // r8
  struct _VIDSCH_GLOBAL *v86; // r9
  char *v87; // rdx
  struct _VIDSCH_GLOBAL **v88; // rcx
  __int64 **v89; // rax
  __int64 v90; // rax
  struct _LIST_ENTRY *v91; // r8
  struct _KLOCK_QUEUE_HANDLE v92; // [rsp+40h] [rbp-29h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-11h] BYREF
  _QWORD v94[10]; // [rsp+70h] [rbp+7h] BYREF
  char v95; // [rsp+D0h] [rbp+67h] BYREF
  _BYTE *v96; // [rsp+D8h] [rbp+6Fh]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+E0h] [rbp+77h] BYREF

  v96 = a2;
  v2 = 0LL;
  *a2 = 0;
  v95 = 0;
  memset(&v92, 0, sizeof(v92));
  while ( 1 )
  {
    v4 = *((_DWORD *)a1 + 815);
    if ( v4 != 2 && v4 != 3 && !(unsigned int)VidSchiCheckHwProgress(a1, &v95) )
      break;
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 256, &LockHandle);
    v6 = (struct _VIDSCH_GLOBAL *)*((_QWORD *)a1 + 260);
    if ( v6 != (struct _VIDSCH_GLOBAL *)((char *)a1 + 2080) )
    {
      do
      {
        v63 = *(struct _VIDSCH_GLOBAL **)v6;
        if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v5, (char *)v6 - 736) )
        {
          v65 = *v64;
          if ( *(_QWORD **)(*v64 + 8LL) != v64 )
            goto LABEL_40;
          v66 = (_QWORD *)v64[1];
          if ( (_QWORD *)*v66 != v64 )
            goto LABEL_40;
          *v66 = v65;
          *(_QWORD *)(v65 + 8) = v66;
          VidMmAddPendingTermination((struct VIDMM_ALLOC *)(v64 - 92));
        }
        v6 = v63;
      }
      while ( v63 != (struct _VIDSCH_GLOBAL *)((char *)a1 + 2080) );
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    *((_QWORD *)a1 + 196) = MEMORY[0xFFFFF78000000320];
    if ( KeReadStateEvent((PRKEVENT)((char *)a1 + 1520)) > 0 )
      goto LABEL_84;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 252, &v92);
    v7 = (struct _KEVENT **)((char *)a1 + 280);
    if ( *((_DWORD *)a1 + 77) == 1 )
    {
      v8 = *v7;
      v9 = 0;
      Lock = (*v7)[13].Header.Lock;
      if ( Lock == 1 )
      {
        v76 = (_QWORD *)*((_QWORD *)a1 + 36);
        v77 = (char *)a1 + 288;
        if ( v76 != (_QWORD *)((char *)a1 + 288) )
        {
          Flink = (char **)v8[12].Header.WaitListHead.Flink;
          v79 = v8 + 12;
          if ( *(struct _KEVENT **)(*(_QWORD *)&v8[12].Header.Lock + 8LL) != &v8[12] )
            goto LABEL_40;
          if ( *Flink != (char *)v79 )
            goto LABEL_40;
          if ( (char *)v76[1] != v77 )
            goto LABEL_40;
          if ( **((char ***)a1 + 37) != v77 )
            goto LABEL_40;
          *Flink = v77;
          v8[12].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)*((_QWORD *)a1 + 37);
          **((_QWORD **)a1 + 37) = v79;
          *((_QWORD *)a1 + 37) = Flink;
          v80 = *(_QWORD *)v77;
          if ( *(char **)(*(_QWORD *)v77 + 8LL) != v77 || *Flink != v77 )
            goto LABEL_40;
          *Flink = (char *)v80;
          *(_QWORD *)(v80 + 8) = Flink;
          *((_QWORD *)a1 + 37) = v77;
          *(_QWORD *)v77 = v77;
LABEL_107:
          LOBYTE((*v7)[12].Header.WaitListHead.Blink) = 0;
          (*v7)[62].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
          KeSetEvent(*v7 + 61, 0, 0);
        }
      }
      else if ( Lock == 2 )
      {
        v11 = (__int64 *)*((_QWORD *)a1 + 36);
        if ( v11 != (__int64 *)((char *)a1 + 288) )
        {
          do
          {
            v59 = (__int64 *)*v11;
            if ( *((_BYTE *)v11 - 29) )
            {
              if ( (__int64 *)v59[1] != v11 )
                goto LABEL_40;
              v81 = (__int64 **)v11[1];
              if ( *v81 != v11 )
                goto LABEL_40;
              *v81 = v59;
              v59[1] = (__int64)v81;
              v82 = (__int64)&(*v7)[12];
              v83 = (*v7)[12].Header.WaitListHead.Flink;
              if ( v83->Flink != (struct _LIST_ENTRY *)v82 )
                goto LABEL_40;
              v11[1] = (__int64)v83;
              *v11 = v82;
              v83->Flink = (struct _LIST_ENTRY *)v11;
              v9 = 1;
              *(_QWORD *)(v82 + 8) = v11;
            }
            v11 = v59;
          }
          while ( v59 != (__int64 *)((char *)a1 + 288) );
          if ( v9 )
            goto LABEL_107;
        }
      }
    }
    v12 = (struct _VIDSCH_GLOBAL *)*((_QWORD *)a1 + 36);
    v13 = (struct _VIDSCH_GLOBAL **)((char *)a1 + 288);
    if ( v12 != (struct _VIDSCH_GLOBAL *)((char *)a1 + 288) )
    {
      while ( 1 )
      {
        HwQueueStagingList::ProcessHwQueue(
          (struct _VIDSCH_GLOBAL *)((char *)a1 + 280),
          (struct _VIDSCH_GLOBAL *)((char *)v12 - 176),
          &v92);
        v55 = *(struct _VIDSCH_GLOBAL **)v12;
        if ( *(struct _VIDSCH_GLOBAL **)(*(_QWORD *)v12 + 8LL) != v12 )
          break;
        v56 = (struct _VIDSCH_GLOBAL **)*((_QWORD *)v12 + 1);
        if ( *v56 != v12 )
          break;
        *v56 = v55;
        *((_QWORD *)v55 + 1) = v56;
        *(_QWORD *)v12 = 0LL;
        *((_QWORD *)v12 + 1) = 0LL;
        v12 = *v13;
        if ( *v13 == (struct _VIDSCH_GLOBAL *)v13 )
          goto LABEL_12;
      }
LABEL_40:
      __fastfail(3u);
    }
LABEL_12:
    *((_BYTE *)a1 + 304) = 1;
    if ( *((_DWORD *)a1 + 860) || *((_BYTE *)a1 + 3444) )
      VidSchiProcessCrossAdapterSignaledSyncObjects((struct _VIDSCH_GLOBAL *)((char *)a1 + 280), (__int64)a1);
    if ( *((_BYTE *)a1 + 59) )
    {
      v14 = (_QWORD **)((char *)a1 + 3768);
      while ( 1 )
      {
        v15 = *v14;
        if ( *v14 == v14 )
          break;
        if ( (_QWORD **)v15[1] != v14 )
          goto LABEL_40;
        v16 = (_QWORD *)*v15;
        if ( *(_QWORD **)(*v15 + 8LL) != v15 )
          goto LABEL_40;
        *v14 = v16;
        v17 = (__int64)(v15 - 5);
        v16[1] = v14;
        *v15 = 0LL;
        v15[1] = 0LL;
        if ( (v15[19] & 0x10) != 0 )
        {
          *(_DWORD *)(v17 + 192) &= ~0x10u;
          if ( (*(_DWORD *)(v17 + 192) & 0x100) == 0 )
          {
            if ( (*(_DWORD *)(v17 + 192) & 0x200) != 0 )
            {
              if ( (*(_DWORD *)(v17 + 192) & 2) == 0 )
                VidSchiUpdateContextStatus(v17, 10, 25297LL);
            }
            else if ( *(_QWORD *)(v17 + 672) == v17 + 672 )
            {
              VidSchiUpdateContextStatus(v17, 0, 25314LL);
            }
            else if ( *(_DWORD *)(v17 + 788) )
            {
              if ( (*(_DWORD *)(v17 + 192) & 0x20) != 0 )
              {
                VidSchiUpdateContextStatus(v17, 4, 23565LL);
              }
              else if ( (*(_DWORD *)(v17 + 192) & 0x80u) != 0 )
              {
                VidSchiUpdateContextStatus(v17, 8, 23565LL);
              }
              else if ( (*(_DWORD *)(v17 + 192) & 0x10) != 0 )
              {
                VidSchiUpdateContextStatus(v17, 3, 23565LL);
              }
              else if ( (*(_DWORD *)(v17 + 192) & 0x40) != 0 )
              {
                VidSchiUpdateContextStatus(v17, 7, 23565LL);
              }
              else if ( (*(_DWORD *)(v17 + 192) & 8) != 0 )
              {
                VidSchiUpdateContextStatus(v17, 2, 23565LL);
              }
              else if ( (*(_DWORD *)(v17 + 192) & 1) == 0 && (*(_DWORD *)(v17 + 192) & 0x100) == 0 )
              {
                if ( _InterlockedCompareExchange((volatile signed __int32 *)(v17 + 444), 0, 0) == 2 )
                {
                  v18 = *(_QWORD *)(v17 + 96);
                  LOBYTE(PerformanceFrequency.LowPart) = 0;
                  DpSynchronizeExecution(
                    *(_QWORD *)(*(_QWORD *)(v18 + 24) + 32LL),
                    VidSchiResetContextQuantumAtISR,
                    v17,
                    *(unsigned int *)(*(_QWORD *)(v18 + 24) + 40LL),
                    &PerformanceFrequency);
                }
                VidSchiUpdateContextStatus(v17, 5, 23565LL);
              }
            }
            else
            {
              VidSchiUpdateContextStatus(v17, 1, 25380LL);
            }
          }
        }
      }
      v19 = (_QWORD **)((char *)a1 + 3784);
      while ( 1 )
      {
        v20 = *v19;
        if ( *v19 == v19 )
          goto LABEL_41;
        if ( (_QWORD **)v20[1] != v19 )
          goto LABEL_40;
        v21 = (_QWORD *)*v20;
        if ( *(_QWORD **)(*v20 + 8LL) != v20 )
          goto LABEL_40;
        *v19 = v21;
        v22 = (struct _VIDSCH_GLOBAL *)(v20 + 19);
        v21[1] = v19;
        v23 = v20[19] == 0LL;
        *v20 = 0LL;
        v20[1] = 0LL;
        if ( v23 )
        {
          v24 = (struct _VIDSCH_GLOBAL **)*((_QWORD *)a1 + 37);
          if ( *v24 != (struct _VIDSCH_GLOBAL *)((char *)a1 + 288) )
            goto LABEL_40;
          *(_QWORD *)v22 = (char *)a1 + 288;
          v20[20] = v24;
          *v24 = v22;
          *((_QWORD *)a1 + 37) = v22;
          *((_BYTE *)a1 + 304) = 0;
        }
      }
    }
    while ( 1 )
    {
LABEL_41:
      v25 = 0LL;
      memset(&LockHandle, 0, sizeof(LockHandle));
      if ( *((_DWORD *)a1 + 196) )
      {
        v26 = *((_QWORD *)a1 + 34);
        if ( v26 && (*(_DWORD *)(v26 + 192) & 1) != 0 )
        {
          v25 = (struct _VIDSCH_CONTEXT *)*((_QWORD *)a1 + 34);
        }
        else
        {
          RtlCopyBitMapEx((char *)a1 + 504, (char *)a1 + 600, 0LL);
          RtlIntersectBitMapsEx((char *)a1 + 600, (char *)a1 + 552);
          if ( (unsigned __int8)RtlAreBitsClearEx((char *)a1 + 600, 0LL, *((_QWORD *)a1 + 75)) )
            RtlCopyBitMapEx((char *)a1 + 504, (char *)a1 + 600, 0LL);
          SetBits = RtlFindSetBitsEx((char *)a1 + 600, 1LL, (unsigned int)(*((_DWORD *)a1 + 194) + 1));
          if ( SetBits != -1 )
          {
            v28 = (__int64 *)*((_QWORD *)a1 + 87);
            if ( (unsigned int)SetBits < *((_DWORD *)a1 + 192) )
              v28 += (unsigned int)SetBits;
            v29 = *v28;
            *((_DWORD *)a1 + 194) = SetBits;
            if ( v29 )
            {
              if ( *(_DWORD *)(v29 + 1892) )
              {
                v30 = *(_QWORD *)(v29 + 24);
                LOBYTE(PerformanceFrequency.LowPart) = 0;
                v94[0] = v29;
                memset(&v94[1], 0, 24);
                DpSynchronizeExecution(
                  *(_QWORD *)(v30 + 32),
                  VidSchiUpdateNodeRunningTimeAtISR,
                  v94,
                  *(unsigned int *)(v30 + 40),
                  &PerformanceFrequency);
              }
              v31 = *(unsigned int *)(v29 + 1888);
              if ( *(_BYTE *)(v29 + 2144)
                && (v31 & 0xC0000000) == 0
                && (v61 = *(_QWORD *)(v29 + 24), (v31 & (0xFFFFFFFFuLL >> (31 - *(_BYTE *)(v61 + 224)))) != 0) )
              {
                MostSignificantBit = RtlFindMostSignificantBit(v31 & (0xFFFFFFFFuLL >> (31 - *(_BYTE *)(v61 + 224))));
                v25 = VidSchiSelectContextFromThisPriority((struct _VIDSCH_NODE *)v29, MostSignificantBit, 1);
                if ( v25 )
                {
                  VidSchiUpdateNodeYieldStatus((struct _VIDSCH_NODE *)v29);
                }
                else
                {
                  v67 = RtlFindMostSignificantBit(*(unsigned int *)(v29 + 1888));
                  v25 = VidSchiSelectContextFromThisPriority((struct _VIDSCH_NODE *)v29, v67, 0);
                  if ( !*(_QWORD *)(v29 + 2120) )
                  {
                    PerformanceFrequency.QuadPart = 0LL;
                    v68 = KeQueryPerformanceCounter(&PerformanceFrequency);
                    v69 = *(_DWORD *)(*((_QWORD *)v25 + 13) + 512LL);
                    v70 = 0LL;
                    if ( v69 <= *((_DWORD *)a1 + 12) )
                      v70 = v69;
                    v71 = *(unsigned int *)(*((_QWORD *)a1 + v70 + 431) + 83104LL);
                    if ( !(_DWORD)v71 )
                    {
                      WdLogSingleEntry1(3LL, (unsigned int)v70);
                      v71 = 16LL;
                      WdLogGlobalForLineNumber = 18892;
                    }
                    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
                      v29,
                      (LARGE_INTEGER)v68.QuadPart,
                      (union _LARGE_INTEGER)PerformanceFrequency.QuadPart,
                      v71);
                  }
                  VidSchiProfilePerformanceTick(20, (_DWORD)a1, v29, 0, (__int64)v25, 0LL, 0LL, 1LL);
                }
              }
              else
              {
                v32 = RtlFindMostSignificantBit(*(unsigned int *)(v29 + 1888));
                v25 = VidSchiSelectContextFromThisPriority((struct _VIDSCH_NODE *)v29, v32, 0);
                if ( (*((_DWORD *)a1 + 706) & 8) != 0 && *(_BYTE *)(v29 + 2144) && !*(_QWORD *)(v29 + 2120) )
                {
                  PerformanceFrequency.QuadPart = 0LL;
                  v72 = KeQueryPerformanceCounter(&PerformanceFrequency);
                  v73 = *(_DWORD *)(*((_QWORD *)v25 + 13) + 512LL);
                  v74 = 0LL;
                  if ( v73 <= *((_DWORD *)a1 + 12) )
                    v74 = v73;
                  v75 = *(unsigned int *)(*((_QWORD *)a1 + v74 + 431) + 83104LL);
                  if ( !(_DWORD)v75 )
                  {
                    WdLogSingleEntry1(3LL, (unsigned int)v74);
                    v75 = 16LL;
                    WdLogGlobalForLineNumber = 18892;
                  }
                  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
                    v29,
                    (LARGE_INTEGER)v72.QuadPart,
                    (union _LARGE_INTEGER)PerformanceFrequency.QuadPart,
                    v75);
                }
                VidSchiProfilePerformanceTick(20, (_DWORD)a1, v29, 0, (__int64)v25, 0LL, 0LL, 0LL);
              }
            }
          }
        }
      }
      VidSchiProfilePerformanceTick(2, (_DWORD)a1, 0, 0, (__int64)v25, 0LL, 0LL, 0LL);
      if ( !v25 )
      {
        v34 = 0;
        VidSchiLogAggregatedTelemetry(a1);
        goto LABEL_73;
      }
      v33 = VidSchiSwitchContextWithCheck((__int64)v25);
      v34 = v33;
      if ( v33 == 1 )
        break;
      if ( v33 != 3 )
        goto LABEL_73;
    }
    v35 = *((_QWORD *)v25 + 12);
    v36 = *((_DWORD *)v25 + 48);
    v2 = 0LL;
    memset(v94, 0, 24);
    v37 = *(_QWORD *)(v35 + 24);
    if ( (v36 & 1) != 0 )
    {
      v2 = *((_QWORD *)v25 + 82);
      if ( v2 )
      {
        --*((_DWORD *)v25 + 197);
        --*(_DWORD *)(v35 + 3008);
        --*(_DWORD *)(v37 + 784);
        v38 = *(_QWORD *)(v2 + 32);
        if ( (struct _VIDSCH_CONTEXT *)v38 == (struct _VIDSCH_CONTEXT *)((char *)v25 + 672) )
        {
          *((_QWORD *)v25 + 82) = 0LL;
          *((_DWORD *)v25 + 163) &= 0xFFFFFFF0;
          VidSchiUpdateContextStatus((__int64)v25, 1, 19163LL);
        }
        else
        {
          *((_QWORD *)v25 + 82) = v38 - 32;
          if ( v38 == 32 )
          {
            *((_DWORD *)v25 + 163) &= 0xFFFFFFF8;
            v47 = *((_DWORD *)v25 + 163) & 0xFFFFFFF7;
          }
          else
          {
            v39 = *(_DWORD *)(v38 + 16);
            if ( v39 == 5 || (v40 = 0, v39 == 4) )
              v40 = 1;
            v41 = v40 | *((_DWORD *)v25 + 163) & 0xFFFFFFFE;
            v42 = 0;
            *((_DWORD *)v25 + 163) = v41;
            if ( *(_DWORD *)(v38 + 16) == 3 )
              v42 = 2;
            v43 = v41 & 0xFFFFFFFD | v42;
            *((_DWORD *)v25 + 163) = v43;
            v44 = 0;
            if ( *(_DWORD *)(v38 + 16) == 7 )
              v44 = 4;
            v45 = v43 & 0xFFFFFFFB | v44;
            v46 = 0;
            *((_DWORD *)v25 + 163) = v45;
            if ( *(_DWORD *)(v38 + 16) == 6 )
              v46 = 8;
            v47 = v45 & 0xFFFFFFF7 | v46;
          }
          *((_DWORD *)v25 + 163) = v47;
        }
        VidSchiProfilePerformanceTick(5, v37, 0, 0, 0LL, v2, 0LL, 0LL);
      }
    }
    *((_DWORD *)v25 + 48) |= 0x400u;
LABEL_73:
    v48 = (struct _KEVENT **)((char *)a1 + 280);
    if ( *((_DWORD *)a1 + 77) != 1 )
      goto LABEL_77;
    v49 = *v48;
    v50 = 0;
    v51 = (*v48)[13].Header.Lock;
    if ( v51 == 1 )
    {
      v84 = (_QWORD *)*((_QWORD *)a1 + 36);
      if ( v84 == (_QWORD *)((char *)a1 + 288) )
        goto LABEL_77;
      v85 = (struct _VIDSCH_GLOBAL **)v49[12].Header.WaitListHead.Flink;
      v86 = (struct _VIDSCH_GLOBAL *)&v49[12];
      v87 = (char *)a1 + 288;
      if ( *(struct _KEVENT **)(*(_QWORD *)&v49[12].Header.Lock + 8LL) != &v49[12] )
        goto LABEL_40;
      if ( *v85 != v86 )
        goto LABEL_40;
      if ( (char *)v84[1] != v87 )
        goto LABEL_40;
      if ( **((char ***)a1 + 37) != v87 )
        goto LABEL_40;
      *v85 = (struct _VIDSCH_GLOBAL *)v87;
      v49[12].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)*((_QWORD *)a1 + 37);
      **((_QWORD **)a1 + 37) = v86;
      *((_QWORD *)a1 + 37) = v85;
      v88 = (struct _VIDSCH_GLOBAL **)*((_QWORD *)a1 + 36);
      if ( v88[1] != (struct _VIDSCH_GLOBAL *)((char *)a1 + 288) || *v85 != (struct _VIDSCH_GLOBAL *)((char *)a1 + 288) )
        goto LABEL_40;
      *v85 = (struct _VIDSCH_GLOBAL *)v88;
      v88[1] = (struct _VIDSCH_GLOBAL *)v85;
      *((_QWORD *)a1 + 37) = (char *)a1 + 288;
      *((_QWORD *)a1 + 36) = (char *)a1 + 288;
    }
    else
    {
      if ( v51 != 2 )
        goto LABEL_77;
      v52 = (__int64 *)*((_QWORD *)a1 + 36);
      if ( v52 == (__int64 *)((char *)a1 + 288) )
        goto LABEL_77;
      do
      {
        v60 = (__int64 *)*v52;
        if ( *((_BYTE *)v52 - 29) )
        {
          if ( (__int64 *)v60[1] != v52 )
            goto LABEL_40;
          v89 = (__int64 **)v52[1];
          if ( *v89 != v52 )
            goto LABEL_40;
          *v89 = v60;
          v60[1] = (__int64)v89;
          v90 = (__int64)&(*v48)[12];
          v91 = (*v48)[12].Header.WaitListHead.Flink;
          if ( v91->Flink != (struct _LIST_ENTRY *)v90 )
            goto LABEL_40;
          v52[1] = (__int64)v91;
          *v52 = v90;
          v91->Flink = (struct _LIST_ENTRY *)v52;
          v50 = 1;
          *(_QWORD *)(v90 + 8) = v52;
        }
        v52 = v60;
      }
      while ( v60 != (__int64 *)((char *)a1 + 288) );
      if ( !v50 )
        goto LABEL_77;
    }
    LOBYTE((*v48)[12].Header.WaitListHead.Blink) = 0;
    (*v48)[62].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
    KeSetEvent(*v48 + 61, 0, 0);
LABEL_77:
    for ( i = (struct _VIDSCH_GLOBAL *)*((_QWORD *)a1 + 36);
          i != (struct _VIDSCH_GLOBAL *)((char *)a1 + 288);
          i = (struct _VIDSCH_GLOBAL *)*((_QWORD *)a1 + 36) )
    {
      HwQueueStagingList::ProcessHwQueue(
        (struct _VIDSCH_GLOBAL *)((char *)a1 + 280),
        (struct _VIDSCH_GLOBAL *)((char *)i - 176),
        &v92);
      v57 = *(struct _VIDSCH_GLOBAL **)i;
      if ( *(struct _VIDSCH_GLOBAL **)(*(_QWORD *)i + 8LL) != i )
        goto LABEL_40;
      v58 = (struct _VIDSCH_GLOBAL **)*((_QWORD *)i + 1);
      if ( *v58 != i )
        goto LABEL_40;
      *v58 = v57;
      *((_QWORD *)v57 + 1) = v58;
      *(_QWORD *)i = 0LL;
      *((_QWORD *)i + 1) = 0LL;
    }
    *((_BYTE *)a1 + 304) = 1;
    KeReleaseInStackQueuedSpinLock(&v92);
    if ( v34 == 1 )
      break;
    if ( v34 == 4 )
    {
      *(_QWORD *)(*((_QWORD *)v25 + 12) + 232LL) = 0LL;
      VidSchiSubmitPreemptionCommand(*((_QWORD *)v25 + 12));
    }
    else if ( (v34 & 0xFFFFFFFD) == 0 )
    {
LABEL_84:
      if ( (unsigned int)VidSchiWaitForSchedulerEvents(a1) == 258 )
        break;
    }
  }
  if ( *((_DWORD *)a1 + 815) )
    *v96 = 1;
  return v2;
}
