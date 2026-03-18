/*
 * XREFs of PpmBeginActiveTimeAccumulation @ 0x1403ECAA4
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1403EB78C (PpmIdleExecuteTransition.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     KeDisableInterrupts @ 0x1402BA170 (KeDisableInterrupts.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     PpmUpdateTimeAccumulation @ 0x1403ED358 (PpmUpdateTimeAccumulation.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmPerfFeedbackCounterUpdate @ 0x1406064D8 (PpmPerfFeedbackCounterUpdate.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

LARGE_INTEGER __fastcall PpmBeginActiveTimeAccumulation(__int64 a1)
{
  unsigned int *v2; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v5; // rsi
  _QWORD *v6; // r14
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // r9
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *SchedulerAssist; // rdx
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  bool v15; // [rsp+38h] [rbp-89h]
  __int64 v16; // [rsp+40h] [rbp-81h] BYREF
  __int64 v17; // [rsp+48h] [rbp-79h] BYREF
  int v18; // [rsp+50h] [rbp-71h] BYREF
  unsigned __int64 v19; // [rsp+58h] [rbp-69h] BYREF
  LARGE_INTEGER v20; // [rsp+60h] [rbp-61h]
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+68h] [rbp-59h] BYREF
  int *v22; // [rsp+88h] [rbp-39h]
  __int64 v23; // [rsp+90h] [rbp-31h]
  __int64 *v24; // [rsp+98h] [rbp-29h]
  __int64 v25; // [rsp+A0h] [rbp-21h]
  unsigned __int64 *v26; // [rsp+A8h] [rbp-19h]
  __int64 v27; // [rsp+B0h] [rbp-11h]
  __int64 *v28; // [rsp+B8h] [rbp-9h]
  __int64 v29; // [rsp+C0h] [rbp-1h]
  _DWORD *v30; // [rsp+C8h] [rbp+7h]
  __int64 v31; // [rsp+D0h] [rbp+Fh]
  _DWORD *v32; // [rsp+D8h] [rbp+17h]
  __int64 v33; // [rsp+E0h] [rbp+1Fh]

  v16 = 0LL;
  v17 = 0LL;
  v2 = 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 34928));
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)(a1 + 34936) = 0LL;
  v20 = PerformanceCounter;
  if ( *(_BYTE *)(a1 + 35113) )
  {
    v15 = KeDisableInterrupts();
    KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 34976));
    v5 = *(_QWORD *)(a1 + 35272);
    if ( v5 )
    {
      v2 = (unsigned int *)(v5 + ((unsigned __int64)*(unsigned int *)(v5 + 184) << 7) + 192);
      memset_0(v2, 0, 0x80uLL);
      if ( ++*(_DWORD *)(v5 + 184) == 8 )
        *(_DWORD *)(v5 + 184) = 0;
      *v2 = KeGetPcr()->Prcb.Number;
      *((_QWORD *)v2 + 1) = RtlGetInterruptTimePrecise(&v19);
      *((_BYTE *)v2 + 4) = 1;
    }
    v6 = v2 + 10;
    v7 = a1 + 34976 - (_QWORD)v2;
    v8 = 2LL;
    do
    {
      v9 = *(_QWORD *)((char *)v6 + v7 - 16);
      if ( v9 )
      {
        if ( *(_BYTE *)(v9 + 34) )
        {
          PpmPerfFeedbackCounterUpdate(*(_QWORD *)((char *)v6 + v7 - 16), &v16, &v17);
          if ( v2 )
          {
            if ( *(_BYTE *)(v9 + 33) )
            {
              *v6 = v17;
              v6[2] = v16;
            }
          }
        }
      }
      ++v6;
      --v8;
    }
    while ( v8 );
    if ( v2 && (unsigned int)dword_140E075D0 > 5 )
    {
      v18 = *(_DWORD *)(v5 + 184);
      v23 = 4LL;
      v22 = &v18;
      LODWORD(v16) = *(_DWORD *)(a1 + 36);
      v24 = &v16;
      v19 = *((_QWORD *)v2 + 1);
      v26 = &v19;
      LODWORD(v17) = *v2;
      v28 = &v17;
      v30 = v2 + 10;
      v32 = v2 + 14;
      v25 = 4LL;
      v27 = 8LL;
      v29 = 4LL;
      v31 = 16LL;
      v33 = 16LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E075D0,
        (unsigned __int8 *)word_1400498C2,
        0LL,
        0LL,
        8u,
        &v21);
    }
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 34976));
    if ( v15 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v13 = *SchedulerAssist;
        do
        {
          v14 = v13;
          v13 = _InterlockedCompareExchange(SchedulerAssist, v13 & 0xFFDFFFFF, v13);
        }
        while ( v14 != v13 );
        if ( (v13 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, SchedulerAssist, CurrentPrcb, v10);
      }
      _enable();
    }
  }
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))PpmUpdateTimeAccumulation)(a1, (LARGE_INTEGER)v20.QuadPart, 0LL);
  return v20;
}
