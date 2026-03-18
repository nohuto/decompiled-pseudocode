/*
 * XREFs of KeStartDynamicProcessor @ 0x1407BA4E0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403FC2F0 (ExAcquireFastMutexUnsafe.c)
 *     PnpInitializeProcessor @ 0x1405D870C (PnpInitializeProcessor.c)
 *     KiStartDynamicProcessor @ 0x1407B9978 (KiStartDynamicProcessor.c)
 *     PsUpdateActiveProcessAffinity @ 0x1407F0DD8 (PsUpdateActiveProcessAffinity.c)
 */

__int64 __fastcall KeStartDynamicProcessor(__int64 a1, int a2, __int16 a3, _DWORD *a4)
{
  int v7; // ecx
  unsigned int v8; // r9d
  int started; // ebx

  if ( KeGetCurrentThread()->ApcState.Process != PsInitialSystemProcess || !KeDynamicPartitioningSupported )
    return 3221225473LL;
  ExAcquireFastMutexUnsafe((PFAST_MUTEX)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[144]);
  if ( (unsigned int)KeNumberProcessors_0 >= KeMaximumProcessors )
  {
    started = -1073741223;
  }
  else
  {
    v8 = KeNumberProcessors_0;
    *a4 = KeNumberProcessors_0;
    started = KiStartDynamicProcessor(v7, a2, a3, v8);
  }
  ExReleaseFastMutexUnsafe((PFAST_MUTEX)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[144]);
  if ( started >= 0 )
  {
    PnpInitializeProcessor();
    PsUpdateActiveProcessAffinity();
  }
  return (unsigned int)started;
}
