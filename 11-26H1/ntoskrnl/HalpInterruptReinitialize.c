/*
 * XREFs of HalpInterruptReinitialize @ 0x140BEA368
 * Callers:
 *     HalpAcpiPostSleep @ 0x140BECAA0 (HalpAcpiPostSleep.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     HalpDisableInterrupts @ 0x1402C7D00 (HalpDisableInterrupts.c)
 *     HalGetProcessorIdByNtNumber @ 0x140425B40 (HalGetProcessorIdByNtNumber.c)
 *     KeGetProcessorIndexFromNumber @ 0x140428990 (KeGetProcessorIndexFromNumber.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     HalStartDynamicProcessor @ 0x14057C560 (HalStartDynamicProcessor.c)
 *     HalStartNextProcessor @ 0x1405809B0 (HalStartNextProcessor.c)
 *     HalpInterruptControllerInUse @ 0x140590068 (HalpInterruptControllerInUse.c)
 *     HalpInterruptInitializeController @ 0x1405901D0 (HalpInterruptInitializeController.c)
 *     HalpInterruptStartBlockedProcessors @ 0x1405912A8 (HalpInterruptStartBlockedProcessors.c)
 *     HalpIommuInitializeAll @ 0x140C0D57C (HalpIommuInitializeAll.c)
 */

LARGE_INTEGER __fastcall HalpInterruptReinitialize(int a1)
{
  int started; // r15d
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v4; // rdx
  ULONG_PTR *v5; // rdi
  LARGE_INTEGER v6; // rbp
  ULONG_PTR v7; // rbx
  int v8; // eax
  int v9; // eax
  ULONG_PTR BugCheckParameter4; // rsi
  LARGE_INTEGER v11; // rax
  __int64 v12; // rcx
  LARGE_INTEGER v13; // rbx
  int v14; // eax
  unsigned __int8 CurrentIrql; // cl
  bool v16; // r12
  LARGE_INTEGER v17; // r8
  LARGE_INTEGER v18; // r9
  LARGE_INTEGER v19; // r13
  unsigned int v20; // edi
  unsigned int i; // ebx
  struct _LIST_ENTRY *v22; // r14
  ULONG_PTR v23; // rsi
  unsigned int v24; // edi
  unsigned int j; // ebx
  ULONG_PTR v26; // rsi
  ULONG ProcessorIndexFromNumber; // eax
  ULONG_PTR v28; // rbp
  LARGE_INTEGER result; // rax
  unsigned int v30; // [rsp+60h] [rbp+8h] BYREF

  v30 = 0;
  started = 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v5 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
  v6 = PerformanceCounter;
  while ( v5 != &HalpRegisteredInterruptControllers )
  {
    v7 = (ULONG_PTR)v5;
    v5 = (ULONG_PTR *)*v5;
    v8 = *(_DWORD *)(v7 + 248);
    if ( (v8 & 1) != 0 )
    {
      *(_DWORD *)(v7 + 248) = v8 & 0xFFFFFFFE;
      v9 = HalpInterruptInitializeController(v7, v4.QuadPart);
      BugCheckParameter4 = v9;
      if ( v9 < 0 )
      {
        if ( HalpInterruptControllerInUse(v7) )
          KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, v7, BugCheckParameter4);
      }
    }
  }
  qword_140F87EB8 = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - v6.QuadPart;
  v11 = KeQueryPerformanceCounter(0LL);
  LOBYTE(v12) = 1;
  v13 = v11;
  v14 = HalpIommuInitializeAll(v12, 0LL);
  if ( v14 < 0 )
    KeBugCheckEx(0x5Cu, 0x500uLL, v14, 0LL, 0LL);
  qword_140F87EC0 = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - v13.QuadPart;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  v16 = HalpDisableInterrupts();
  v19 = KeQueryPerformanceCounter(0LL);
  if ( (a1 & 0x10000) != 0 )
  {
    v20 = HalpInterruptProcessorsStarted - HalpInterruptDynamicProcessorCount;
    if ( HalpInterruptBlockedProcessors )
      HalpInterruptStartBlockedProcessors(0);
    for ( i = 1; i < v20; ++i )
    {
      v22 = &HalpDeviceBlockUnblockPushLock.QueueListEntry.Flink[94 * i];
      v23 = HalpInterruptProcessorState + ((unsigned __int64)i << 6);
      if ( (int)HalGetProcessorIdByNtNumber(i, (__int64)&v30, v17.QuadPart, v18.QuadPart) >= 0 )
        started = HalStartNextProcessor((__int64)v22, i, v30);
      if ( started != 4 )
        KeBugCheckEx(0x5Cu, 0x2001uLL, i, (unsigned int)HalpInterruptProcessorCount, v23);
    }
    v24 = HalpInterruptDynamicProcessorCount;
    for ( j = 0; j < v24; ++j )
    {
      v26 = HalpInterruptDynamicProcessorState + ((unsigned __int64)j << 6);
      ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(v26 + 16));
      v28 = ProcessorIndexFromNumber;
      if ( (unsigned int)HalStartDynamicProcessor(
                           (__int64)&HalpDeviceBlockUnblockPushLock.QueueListEntry.Flink[94 * ProcessorIndexFromNumber],
                           ProcessorIndexFromNumber,
                           *(_DWORD *)v26,
                           0xFFFFu) != 4 )
        KeBugCheckEx(0x5Cu, 0x2001uLL, v28, (unsigned int)HalpInterruptProcessorCount, v26);
    }
    HalpInterruptProcessorRestarting = 0;
  }
  result = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - v19.QuadPart);
  HalpInterruptPicStateIntact = 0;
  qword_140F87EC8 = result.QuadPart;
  if ( v16 )
    _enable();
  return result;
}
