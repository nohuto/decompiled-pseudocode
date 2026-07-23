/*
 * XREFs of KiInvokeInterruptServiceRoutine @ 0x14030E430
 * Callers:
 *     KiInterruptDispatchCommon @ 0x14030DED8 (KiInterruptDispatchCommon.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     PerfInfoLogInterrupt @ 0x14030E640 (PerfInfoLogInterrupt.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     EtwGetKernelTraceTimestamp @ 0x14032F2E0 (EtwGetKernelTraceTimestamp.c)
 *     KiCallInterruptServiceRoutine @ 0x14032F7F0 (KiCallInterruptServiceRoutine.c)
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1403B74A0 (KeCancelTimer.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

bool __fastcall KiInvokeInterruptServiceRoutine(__int64 a1, unsigned __int8 CurrentIrql, int a3)
{
  char v3; // r13
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx
  char v10; // r12
  bool v11; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v13; // al
  unsigned __int8 v14; // r12
  __int64 v16; // rax
  __int128 Object; // [rsp+30h] [rbp-A9h] BYREF
  __int128 v18; // [rsp+40h] [rbp-99h]
  int v19; // [rsp+50h] [rbp-89h] BYREF
  __int64 v20; // [rsp+54h] [rbp-85h]
  int v21; // [rsp+5Ch] [rbp-7Dh]
  __int64 v22; // [rsp+60h] [rbp-79h]
  void *v23; // [rsp+68h] [rbp-71h]
  __int128 *p_Object; // [rsp+70h] [rbp-69h]
  __int64 v25; // [rsp+78h] [rbp-61h]
  __int64 v26; // [rsp+80h] [rbp-59h]
  __int64 v27; // [rsp+88h] [rbp-51h]
  struct _KTIMER v28; // [rsp+90h] [rbp-49h] BYREF
  _OWORD v29[2]; // [rsp+D0h] [rbp-9h] BYREF

  v3 = 0;
  v20 = 0LL;
  v21 = 0;
  v25 = 0LL;
  v26 = 0LL;
  memset(v29, 0, sizeof(v29));
  Object = 0LL;
  v18 = 0LL;
  memset_0(&v28, 0, sizeof(v28));
  v8 = *(unsigned __int8 *)(a1 + 93);
  v9 = 0LL;
  v10 = 1;
  v11 = 0;
  if ( (_BYTE)v8 )
  {
    if ( CurrentIrql != (_BYTE)v8 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != (_BYTE)v8 )
        __writecr8(v8);
      if ( KiIrqlFlags )
      {
        LOBYTE(v9) = v8;
        LOBYTE(v7) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v7, v9);
        v9 = 0LL;
      }
    }
    v16 = *(_QWORD *)(a1 + 72);
    if ( v16 == -3 || v16 == -1 )
      v10 = 0;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(*(PVOID *)(a1 + 128), Executive, 0, 0, 0LL);
    v9 = 0LL;
    v11 = (WORD2(PerfGlobalGroupMask) & 0x4000) != 0;
    if ( (_BYTE)KdDebuggerEnabled && KiPassiveWatchdogTimeout )
    {
      DWORD1(Object) = 0;
      *(_QWORD *)&v18 = (char *)&Object + 8;
      v28.Header.SignalState = 0;
      *((_QWORD *)&Object + 1) = (char *)&Object + 8;
      v28.DueTime.QuadPart = 0LL;
      v28.Header.WaitListHead.Blink = &v28.Header.WaitListHead;
      v28.Header.WaitListHead.Flink = &v28.Header.WaitListHead;
      v23 = &KiPassiveIsrWatchdog;
      v28.Period = 0;
      v28.Processor = 0;
      v28.TimerDifObjTracking = 0;
      v27 = 0LL;
      v22 = 0LL;
      p_Object = &Object;
      *((_QWORD *)&v18 + 1) = a1;
      LOWORD(Object) = 1;
      BYTE2(Object) = 6;
      v28.Header.Type = 8;
      v19 = 275;
      KiSetTimerEx((unsigned int)&v28, -10000000 * KiPassiveWatchdogTimeout, 0, 0, (__int64)&v19);
      v3 = 1;
    }
  }
  *(_QWORD *)(a1 + 152) = KeGetCurrentThread();
  if ( v11 )
    EtwGetKernelTraceTimestamp(v29, 536887296LL);
  LOBYTE(v9) = v10;
  v13 = KiCallInterruptServiceRoutine(a1, v9);
  v14 = v13;
  if ( v11 )
    PerfInfoLogInterrupt(a1, (a3 << 8) | (unsigned int)v13, v29);
  if ( v3 && !KeCancelTimer(&v28) )
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  *(_QWORD *)(a1 + 152) = 0LL;
  if ( (_BYTE)v8 )
  {
    if ( CurrentIrql != (_BYTE)v8 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
  }
  else
  {
    KeSetEvent(*(PRKEVENT *)(a1 + 128), 0, 0);
    KeLeaveCriticalRegion();
  }
  return v14 == 1;
}
