/*
 * XREFs of CcBcbProfiler @ 0x1405424B0
 * Callers:
 *     <none>
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     KeSetCoalescableTimer @ 0x140219CA0 (KeSetCoalescableTimer.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14040B5E0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeExitRetpoline @ 0x14048727C (KeExitRetpoline.c)
 *     VslVerifyPage @ 0x1405C6BF0 (VslVerifyPage.c)
 *     CcAdjustBcbDepth @ 0x1407379C0 (CcAdjustBcbDepth.c)
 */

void __fastcall CcBcbProfiler(__int64 a1, __int64 a2)
{
  _QWORD *v3; // r10
  unsigned int v4; // r8d
  char v5; // r14
  int v6; // ebx
  unsigned __int64 v7; // r15
  _QWORD *v8; // r9
  const char *v9; // rax
  unsigned int v10; // r11d
  __int64 i; // rdi
  __int64 v12; // rax
  __int64 v13; // rdi
  _QWORD *v14; // r9
  __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  unsigned int v17; // r8d
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  const char *v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rdx
  unsigned __int8 *v23; // r10
  __int64 v24; // rax
  bool v25; // zf
  unsigned int v26; // eax
  unsigned __int64 v27; // rbx
  unsigned int v28; // eax
  int v29; // r13d
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // r14
  int v33; // eax
  unsigned __int64 v34; // rsi
  struct _KPRCB *CurrentPrcb; // rdx
  char *ExceptionStack; // rbx
  char *DpcStack; // r8
  _KTHREAD *CurrentThread; // r9
  _BYTE v39[16]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v40; // [rsp+88h] [rbp+10h]

  KeExitRetpoline();
  if ( *(_DWORD *)(a2 + 172) )
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 184), DelayedWorkQueue);
  }
  else
  {
    v3 = *(_QWORD **)(a2 + 128);
    v4 = *(_DWORD *)(a2 + 144);
    v5 = *(_BYTE *)(a2 + 168);
    LOBYTE(v6) = v5;
    v7 = *(_QWORD *)(a2 + 136) + *(unsigned int *)v3;
    v40 = v4;
    v8 = (_QWORD *)v7;
    v9 = (const char *)v7;
    if ( v7 < v7 + v4 )
    {
      do
      {
        _mm_prefetch(v9, 0);
        v9 += 64;
      }
      while ( (unsigned __int64)v9 < v7 + v4 );
    }
    v10 = v4 >> 7;
    for ( i = *(_QWORD *)(a2 + 160); v10; --v10 )
    {
      v12 = 8LL;
      do
      {
        v13 = *v8 ^ i;
        v14 = v8 + 1;
        v15 = *v14 ^ __ROL8__(v13, v6);
        v8 = v14 + 1;
        i = __ROL8__(v15, v6);
        --v12;
      }
      while ( v12 );
      v16 = __ROL8__(*(_QWORD *)(a2 + 160) ^ ((unsigned __int64)v8 - v7), 17) ^ *(_QWORD *)(a2 + 160) ^ ((unsigned __int64)v8 - v7);
      v6 = ((unsigned __int8)(((v16 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v16) ^ (unsigned __int8)v6) & 0x3F;
      if ( !v6 )
        LOBYTE(v6) = 1;
    }
    v17 = v4 & 0x7F;
    if ( v17 >= 8 )
    {
      v18 = (unsigned __int64)v17 >> 3;
      do
      {
        i = __ROL8__(*v8++ ^ i, v6);
        v17 -= 8;
        --v18;
      }
      while ( v18 );
    }
    for ( ; v17; --v17 )
    {
      v19 = *(unsigned __int8 *)v8;
      v8 = (_QWORD *)((char *)v8 + 1);
      i = __ROL8__(v19 ^ i, v6);
    }
    v20 = *(const char **)(a2 + 128);
    if ( v3 < (_QWORD *)((char *)v3 + 12) )
    {
      do
      {
        _mm_prefetch(v20, 0);
        v20 += 64;
      }
      while ( v20 < (const char *)v3 + 12 );
    }
    v21 = __ROL8__(*v3 ^ i, v5);
    LODWORD(v22) = 4;
    v23 = (unsigned __int8 *)(v3 + 1);
    do
    {
      v24 = *v23++;
      v21 = __ROL8__(v24 ^ v21, v5);
      v25 = (_DWORD)v22 == 1;
      v22 = (unsigned int)(v22 - 1);
    }
    while ( !v25 );
    v26 = ExGenRandom(1, v22);
    v27 = -1200000000LL - v26 % 0x5F5E100uLL;
    v28 = ExGenRandom(1, v26 / 0x5F5E100uLL);
    KeSetCoalescableTimer((PKTIMER)(a2 + 64), (LARGE_INTEGER)v27, 0, v28 % 0x2710, (PKDPC)a2);
    if ( v21 != *(_QWORD *)(a2 + 152) )
    {
      if ( *(_DWORD *)(a2 + 176) )
      {
        v29 = *(_DWORD *)(a2 + 172);
        if ( v40 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          v31 = v7 & 0xFFFFFFFFFFFFF000uLL;
          v32 = (v7 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 1 )
          {
            v33 = VslVerifyPage(v31, 0LL);
            if ( v33 == -1073741267 )
              break;
LABEL_30:
            if ( v33 < 0 )
            {
              __writecr8(CurrentIrql);
              goto LABEL_35;
            }
LABEL_31:
            v31 += 4096LL;
            v32 += 4096LL;
            if ( v32 == ((v7 + v40 - 1) | 0xFFF) )
            {
              __writecr8(CurrentIrql);
              return;
            }
          }
          v34 = CurrentIrql;
          while ( v29 )
          {
            if ( CurrentIrql > 1u )
              goto LABEL_31;
            v34 = CurrentIrql;
            __writecr8(CurrentIrql);
            KeGetCurrentIrql();
            __writecr8(2uLL);
            v33 = VslVerifyPage(v31, 0LL);
            if ( v33 != -1073741267 )
              goto LABEL_30;
          }
          __writecr8(v34);
        }
      }
LABEL_35:
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
      ExTryAcquireSpinLockExclusiveAtDpcLevel(&PsLoadedModuleSpinLock);
      CcAdjustBcbDepth(
        __ROR4__(1085440, 204),
        __ROR8__(0x169D147407EB1239LL, 109),
        0,
        v7,
        (unsigned int)__ROR4__(1098907648, 118),
        (__int64)KeBugCheckEx,
        (__int64)(ExceptionStack - 8));
      JUMPOUT(0x140542895LL);
    }
  }
}
