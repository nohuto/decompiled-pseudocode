/*
 * XREFs of KeLoadMTRR @ 0x140C0CF60
 * Callers:
 *     HalpPostSleepMP @ 0x140BF2EF0 (HalpPostSleepMP.c)
 *     KiLoadMTRRTarget @ 0x140BFB310 (KiLoadMTRRTarget.c)
 * Callees:
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KeFlushCurrentTbImmediately @ 0x1404E0E70 (KeFlushCurrentTbImmediately.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KiWriteFixedMtrr @ 0x140BFB354 (KiWriteFixedMtrr.c)
 *     KiCompareVarMtrr @ 0x140C0D15C (KiCompareVarMtrr.c)
 *     KiLockStepExecution @ 0x140C0D210 (KiLockStepExecution.c)
 *     KiReadFixedMtrr @ 0x140C0D254 (KiReadFixedMtrr.c)
 */

__int64 __fastcall KeLoadMTRR(__int64 a1)
{
  bool v3; // r15
  volatile signed __int32 *v4; // r8
  volatile signed __int32 v5; // ecx
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  unsigned int v9; // r12d
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  __int64 i; // rdx
  __int64 v15; // r9
  unsigned int v16; // r10d
  _QWORD *v17; // r8
  __int64 v18; // r9
  _QWORD v19[12]; // [rsp+20h] [rbp-78h] BYREF

  if ( byte_140F15090 )
  {
    if ( !(unsigned __int8)KiCompareVarMtrr() )
      KeMtrrComparisonFailed = 1;
    if ( qword_140F150A0 )
    {
      KiReadFixedMtrr(v19);
      if ( !KeGetCurrentPrcb()->Number )
      {
        for ( i = 0LL; (unsigned int)i < 0xB; i = (unsigned int)(i + 1) )
        {
          if ( *((_QWORD *)qword_140F150A0 + i) != v19[i] )
          {
            KeMtrrComparisonFailed = 1;
            break;
          }
        }
      }
    }
    v3 = KeDisableInterrupts();
    v4 = *(volatile signed __int32 **)(a1 + 16);
    if ( KeGetCurrentPrcb()->Number == *(_DWORD *)a1 )
    {
      while ( *(_DWORD *)(a1 + 8) != *(_DWORD *)(a1 + 4) )
        _mm_pause();
      *(_DWORD *)(a1 + 8) = 0;
      _InterlockedIncrement(v4);
    }
    else
    {
      v5 = *v4;
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
      while ( *v4 == v5 )
        _mm_pause();
    }
    v6 = __readcr0();
    __writecr0(v6 & 0xFFFFFFFF9FFFFFFFuLL | 0x40000000);
    __wbinvd();
    v7 = __readcr4();
    if ( (v7 & 0x80) != 0 )
      __writecr4(v7 & 0xFFFFFFFFFFFFFF7FuLL);
    else
      KeFlushCurrentTbImmediately();
    v8 = KiMtrrInfo & 0xFFFFFFFFFFFFF7FFuLL;
    __writemsr(0x2FFu, KiMtrrInfo & 0xFFFFFFFFFFFFF7FFuLL);
    v9 = 0;
    if ( (_BYTE)qword_140F15088 )
    {
      v15 = 0LL;
      v16 = 513;
      do
      {
        v17 = qword_140F15098;
        v18 = 2 * v15;
        __writemsr(v16 - 1, *((_QWORD *)qword_140F15098 + v18));
        __writemsr(v16, v17[v18 + 1]);
        v15 = ++v9;
        v16 += 2;
      }
      while ( v9 < (unsigned __int64)(unsigned __int8)qword_140F15088 );
    }
    if ( qword_140F150A0 )
      KiWriteFixedMtrr((unsigned __int64 *)qword_140F150A0);
    __writemsr(0x2FFu, v8 | 0x800);
    __wbinvd();
    KeFlushCurrentTbImmediately();
    __writecr0(v6);
    if ( (v7 & 0x80) != 0 )
      __writecr4(v7);
    KiLockStepExecution(a1);
    if ( v3 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v12 = *SchedulerAssist;
        do
        {
          v13 = v12;
          v12 = _InterlockedCompareExchange(SchedulerAssist, v12 & 0xFFDFFFFF, v12);
        }
        while ( v13 != v12 );
        if ( (v12 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
    }
  }
  return 0LL;
}
