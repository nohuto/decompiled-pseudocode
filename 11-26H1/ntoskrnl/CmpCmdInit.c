/*
 * XREFs of CmpCmdInit @ 0x14085AB84
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1408547AC (CmCompleteRegistryInitialization.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 *     KeInitializeDpc @ 0x14047B3C0 (KeInitializeDpc.c)
 *     KeInitializeTimer @ 0x14047D670 (KeInitializeTimer.c)
 *     CmpInitializeLazyWriters @ 0x140862FD4 (CmpInitializeLazyWriters.c)
 *     PoRegisterCoalescingCallback @ 0x140B608A0 (PoRegisterCoalescingCallback.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpCmdInit(unsigned __int8 a1)
{
  int v2; // eax
  void *Pool2; // rax
  unsigned __int64 v4; // rsi
  void *v5; // r8
  __int64 v11; // rdx
  __int64 result; // rax

  CmpInitializeLazyWriters();
  CmpForceFlushWorkItem.Parameter = 0LL;
  CmpForceFlushWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CmpForceFlushWorker;
  CmpForceFlushWorkItem.List.Flink = 0LL;
  KeInitializeDpc(&CmpEnableLazyFlushDpc, (PKDEFERRED_ROUTINE)CmpEnableLazyFlushDpcRoutine, &CmpHoldLazyFlush);
  KeInitializeTimer(&CmpEnableLazyFlushTimer);
  v2 = CmpEnableLazyFlushBootDelayInterval;
  if ( CmpEnableLazyFlushBootDelayInterval < 60 )
  {
    v2 = 60;
    CmpEnableLazyFlushBootDelayInterval = 60;
  }
  if ( v2 > 600 )
  {
    v2 = 600;
    CmpEnableLazyFlushBootDelayInterval = 600;
  }
  KiSetTimerEx((__int64)&CmpEnableLazyFlushTimer, -10000000LL * v2, 0, 0, (__int64)&CmpEnableLazyFlushDpc);
  _mm_lfence();
  Pool2 = (void *)ExAllocatePool2(0x40uLL);
  v4 = (unsigned __int64)Pool2;
  if ( Pool2 )
  {
    ExFreePoolWithTag(Pool2, 0);
    _RAX = 2147483656LL;
    __asm { cpuid }
    v5 = (void *)(v4 ^ ((unsigned __int64)(unsigned int)ExGenRandom(0, _RDX) << SBYTE1(_RAX)));
  }
  else
  {
    v5 = 0LL;
  }
  KeInitializeDpc(&CmpFreezeThawDpc, (PKDEFERRED_ROUTINE)CmpFreezeThawDpcRoutine, v5);
  KeInitializeTimer(&CmpFreezeThawTimer);
  CmpFreezeThawWorkItem.Parameter = 0LL;
  CmpFreezeThawWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CmpFreezeThawWorker;
  CmpFreezeThawWorkItem.List.Flink = 0LL;
  LOBYTE(v11) = 1;
  BYTE1(NlsMbOemCodePageTag) = BYTE6(NlsMbOemCodePageTag);
  WheapPfaLock.ApcStateFill[24] = 1;
  CmpContextListLock.ApcStateFill[16] = a1;
  *(_DWORD *)&WheapPfaLock.ApcStateFill[20] = 1;
  result = PoRegisterCoalescingCallback(CmpCoalescingCallback, v11, &CmpCoalescingRegistration, 0LL);
  if ( (int)result >= 0 )
    WheapPfaLock.ApcStateFill[16] = 1;
  return result;
}
