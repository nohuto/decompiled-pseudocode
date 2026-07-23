/*
 * XREFs of PpmBeginActiveTimeAccumulation @ 0x1402F9AE4
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402F87D0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     PpmUpdateTimeAccumulation @ 0x1402F8238 (PpmUpdateTimeAccumulation.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmPerfFeedbackCounterUpdate @ 0x140608FD8 (PpmPerfFeedbackCounterUpdate.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall PpmBeginActiveTimeAccumulation(__int64 a1)
{
  LARGE_INTEGER *v2; // rbx
  LARGE_INTEGER v3; // rax
  LARGE_INTEGER v4; // rdx
  LARGE_INTEGER v5; // rcx
  LARGE_INTEGER v6; // r8
  __int64 v8; // rsi
  LARGE_INTEGER *v9; // r14
  __int64 v10; // r13
  __int64 v11; // r12
  __int64 v12; // r15
  __int64 v13; // r9
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *SchedulerAssist; // rdx
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  char v18; // [rsp+38h] [rbp-89h]
  LARGE_INTEGER v19; // [rsp+40h] [rbp-81h] BYREF
  LONGLONG v20; // [rsp+48h] [rbp-79h] BYREF
  int v21; // [rsp+50h] [rbp-71h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp-69h] BYREF
  __int64 QuadPart; // [rsp+60h] [rbp-61h]
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+68h] [rbp-59h] BYREF
  int *v25; // [rsp+88h] [rbp-39h]
  __int64 v26; // [rsp+90h] [rbp-31h]
  LARGE_INTEGER *v27; // [rsp+98h] [rbp-29h]
  __int64 v28; // [rsp+A0h] [rbp-21h]
  LARGE_INTEGER *p_PerformanceCounter; // [rsp+A8h] [rbp-19h]
  __int64 v30; // [rsp+B0h] [rbp-11h]
  LONGLONG *v31; // [rsp+B8h] [rbp-9h]
  __int64 v32; // [rsp+C0h] [rbp-1h]
  LARGE_INTEGER *v33; // [rsp+C8h] [rbp+7h]
  __int64 v34; // [rsp+D0h] [rbp+Fh]
  LARGE_INTEGER *v35; // [rsp+D8h] [rbp+17h]
  __int64 v36; // [rsp+E0h] [rbp+1Fh]

  v19.QuadPart = 0LL;
  v20 = 0LL;
  v2 = 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 34928));
  v3 = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)(a1 + 34936) = 0LL;
  QuadPart = v3.QuadPart;
  if ( *(_BYTE *)(a1 + 35113) )
  {
    v18 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))KeDisableInterrupts)(
            (LARGE_INTEGER)v5.QuadPart,
            (LARGE_INTEGER)v4.QuadPart,
            (LARGE_INTEGER)v6.QuadPart);
    KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 34976));
    v8 = *(_QWORD *)(a1 + 35272);
    if ( v8 )
    {
      v2 = (LARGE_INTEGER *)(v8 + ((unsigned __int64)*(unsigned int *)(v8 + 184) << 7) + 192);
      memset_0(v2, 0, 0x80uLL);
      if ( ++*(_DWORD *)(v8 + 184) == 8 )
        *(_DWORD *)(v8 + 184) = 0;
      v2->LowPart = KeGetPcr()->Prcb.Number;
      v2[1] = RtlGetInterruptTimePrecise(&PerformanceCounter);
      BYTE4(v2->QuadPart) = 1;
    }
    v9 = v2 + 5;
    v10 = a1 + 34976 - (_QWORD)v2;
    v11 = 2LL;
    do
    {
      v12 = *(LONGLONG *)((char *)&v9[-2].QuadPart + v10);
      if ( v12 )
      {
        if ( *(_BYTE *)(v12 + 34) )
        {
          PpmPerfFeedbackCounterUpdate(*(LONGLONG *)((char *)&v9[-2].QuadPart + v10), &v19, &v20);
          if ( v2 )
          {
            if ( *(_BYTE *)(v12 + 33) )
            {
              v9->QuadPart = v20;
              v9[2] = v19;
            }
          }
        }
      }
      ++v9;
      --v11;
    }
    while ( v11 );
    if ( v2 && (unsigned int)dword_140E07608 > 5 )
    {
      v21 = *(_DWORD *)(v8 + 184);
      v26 = 4LL;
      v25 = &v21;
      v19.LowPart = *(_DWORD *)(a1 + 36);
      v27 = &v19;
      PerformanceCounter = v2[1];
      p_PerformanceCounter = &PerformanceCounter;
      LODWORD(v20) = v2->LowPart;
      v31 = &v20;
      v33 = v2 + 5;
      v35 = v2 + 7;
      v28 = 4LL;
      v30 = 8LL;
      v32 = 4LL;
      v34 = 16LL;
      v36 = 16LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E07608,
        (unsigned __int8 *)word_140049EC2,
        0LL,
        0LL,
        8u,
        &v24);
    }
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 34976));
    if ( v18 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v16 = *SchedulerAssist;
        do
        {
          v17 = v16;
          v16 = _InterlockedCompareExchange(SchedulerAssist, v16 & 0xFFDFFFFF, v16);
        }
        while ( v17 != v16 );
        if ( (v16 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, SchedulerAssist, CurrentPrcb, v13);
      }
      _enable();
    }
  }
  PpmUpdateTimeAccumulation(a1, QuadPart, 0);
  return QuadPart;
}
