/*
 * XREFs of sub_1406F0690 @ 0x1406F0690
 * Callers:
 *     <none>
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140217CD0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeSetCoalescableTimer @ 0x1402ECF90 (KeSetCoalescableTimer.c)
 *     ExGenRandom @ 0x14041CDD0 (ExGenRandom.c)
 *     KeExitRetpoline @ 0x14046112C (KeExitRetpoline.c)
 *     VslVerifyPage @ 0x14058B220 (VslVerifyPage.c)
 *     CcAdjustBcbDepth @ 0x1406AA790 (CcAdjustBcbDepth.c)
 */

BOOLEAN __fastcall sub_1406F0690(PKDPC Dpc, __int64 a2)
{
  __int64 ProcessorHistory_low; // r8
  _QWORD *v4; // r10
  char SystemArgument1; // r14
  int v6; // ebx
  __int64 v7; // rbp
  _QWORD *v8; // r9
  const char *v9; // rax
  unsigned __int64 v10; // r13
  unsigned int v11; // r11d
  unsigned __int64 i; // rdi
  __int64 v13; // rax
  unsigned __int64 v14; // rdi
  _QWORD *v15; // r9
  __int64 v16; // rdi
  __int64 v17; // rcx
  unsigned int v18; // r8d
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  const char *v21; // rax
  PKDEFERRED_ROUTINE v22; // rdi
  int v23; // edx
  unsigned __int8 *v24; // r10
  __int64 v25; // rax
  unsigned __int64 v26; // rbx
  unsigned int v27; // eax
  BOOLEAN result; // al
  int SystemArgument1_high; // r12d
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // r14
  int v33; // eax
  unsigned __int64 v34; // rsi
  struct _KPRCB *CurrentPrcb; // rdx
  char *ExceptionStack; // rbx
  char *DpcStack; // r8
  _KTHREAD *CurrentThread; // r9
  _BYTE v39[72]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v40; // [rsp+90h] [rbp+8h]

  KeExitRetpoline(Dpc, a2);
  ProcessorHistory_low = LODWORD(Dpc[2].ProcessorHistory);
  v4 = *(_QWORD **)&Dpc[2].TargetInfoAsUlong;
  SystemArgument1 = (char)Dpc[2].SystemArgument1;
  LOBYTE(v6) = SystemArgument1;
  v40 = ProcessorHistory_low;
  v7 = (__int64)Dpc[2].DpcListEntry.Next + *(unsigned int *)v4;
  v8 = (_QWORD *)v7;
  v9 = (const char *)v7;
  v10 = ProcessorHistory_low + v7;
  if ( v7 < (unsigned __int64)(ProcessorHistory_low + v7) )
  {
    do
    {
      _mm_prefetch(v9, 0);
      v9 += 64;
    }
    while ( (unsigned __int64)v9 < v10 );
  }
  v11 = (unsigned int)ProcessorHistory_low >> 7;
  for ( i = (unsigned __int64)Dpc[2].DeferredContext; v11; --v11 )
  {
    v13 = 8LL;
    do
    {
      v14 = *v8 ^ i;
      v15 = v8 + 1;
      v16 = *v15 ^ __ROL8__(v14, v6);
      v8 = v15 + 1;
      i = __ROL8__(v16, v6);
      --v13;
    }
    while ( v13 );
    v17 = __ROL8__((unsigned __int64)Dpc[2].DeferredContext ^ ((unsigned __int64)v8 - v7), 17) ^ (unsigned __int64)Dpc[2].DeferredContext ^ ((unsigned __int64)v8 - v7);
    v6 = ((unsigned __int8)((((unsigned __int64)v17 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v17) ^ (unsigned __int8)v6) & 0x3F;
    if ( !v6 )
      LOBYTE(v6) = 1;
  }
  v18 = Dpc[2].ProcessorHistory & 0x7F;
  if ( v18 >= 8 )
  {
    v19 = (unsigned __int64)v18 >> 3;
    do
    {
      i = __ROL8__(*v8++ ^ i, v6);
      v18 -= 8;
      --v19;
    }
    while ( v19 );
  }
  for ( ; v18; --v18 )
  {
    v20 = *(unsigned __int8 *)v8;
    v8 = (_QWORD *)((char *)v8 + 1);
    i = __ROL8__(v20 ^ i, v6);
  }
  v21 = *(const char **)&Dpc[2].TargetInfoAsUlong;
  if ( v4 < (_QWORD *)((char *)v4 + 12) )
  {
    do
    {
      _mm_prefetch(v21, 0);
      v21 += 64;
    }
    while ( v21 < (const char *)v4 + 12 );
  }
  v22 = (PKDEFERRED_ROUTINE)__ROL8__(*v4 ^ i, SystemArgument1);
  v23 = 4;
  v24 = (unsigned __int8 *)(v4 + 1);
  do
  {
    v25 = *v24++;
    v22 = (PKDEFERRED_ROUTINE)__ROL8__(v25 ^ (unsigned __int64)v22, SystemArgument1);
    --v23;
  }
  while ( v23 );
  v26 = -1200000000LL - (unsigned int)ExGenRandom(1) % 0x5F5E100uLL;
  v27 = ExGenRandom(1);
  result = KeSetCoalescableTimer((PKTIMER)&Dpc[1], (LARGE_INTEGER)v26, 0, v27 % 0x2710, Dpc);
  if ( v22 != Dpc[2].DeferredRoutine )
  {
    if ( LODWORD(Dpc[2].SystemArgument2) )
    {
      SystemArgument1_high = HIDWORD(Dpc[2].SystemArgument1);
      if ( v40 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v31 = v7 & 0xFFFFFFFFFFFFF000uLL;
        v32 = (v7 & 0xFFFFFFFFFFFFF000uLL) - 1;
        while ( 1 )
        {
          v33 = VslVerifyPage(v31, 0);
          if ( v33 == -1073741267 )
            break;
LABEL_27:
          if ( v33 < 0 )
          {
            __writecr8(CurrentIrql);
            goto LABEL_33;
          }
LABEL_28:
          v31 += 4096LL;
          v32 += 4096LL;
          if ( v32 == ((v10 - 1) | 0xFFF) )
          {
            result = CurrentIrql;
            __writecr8(CurrentIrql);
            return result;
          }
        }
        v34 = CurrentIrql;
        while ( SystemArgument1_high )
        {
          if ( CurrentIrql > 1u )
            goto LABEL_28;
          v34 = CurrentIrql;
          __writecr8(CurrentIrql);
          KeGetCurrentIrql();
          __writecr8(2uLL);
          v33 = VslVerifyPage(v31, 0);
          if ( v33 != -1073741267 )
            goto LABEL_27;
        }
        __writecr8(v34);
      }
    }
LABEL_33:
    _disable();
    CurrentPrcb = KeGetCurrentPrcb();
    ExceptionStack = (char *)CurrentPrcb->ExceptionStack;
    DpcStack = (char *)CurrentPrcb->DpcStack;
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( v39 > ExceptionStack || v39 < &ExceptionStack[-(unsigned int)KeExceptionStackSize] )
    {
      if ( CurrentPrcb->DpcRoutineActive && v39 <= DpcStack && v39 >= &DpcStack[-KeDpcStackSize] )
        ExceptionStack = (char *)CurrentPrcb->DpcStack;
      else
        ExceptionStack = (char *)CurrentThread->InitialStack;
    }
    CurrentThread[1].QuantumTarget = 0LL;
    CurrentThread[1].ApcState.ApcListHead[0].Blink = 0LL;
    ExTryAcquireSpinLockExclusiveAtDpcLevel();
    CcAdjustBcbDepth(
      (unsigned int)__ROL4__(277872640, 140),
      __ROR8__(0x7EB1239169D1474LL, 141),
      0LL,
      v7,
      (unsigned int)__ROR4__(17170432, 144),
      (__int64 (__fastcall *)(__int64))KeBugCheckEx,
      (_QWORD *)ExceptionStack - 1);
    JUMPOUT(0x1406F0A47LL);
  }
  return result;
}
