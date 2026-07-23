/*
 * XREFs of KiSynchronizeIdleIsolationDomainExit @ 0x14048C980
 * Callers:
 *     KiExecuteSmtIsolationThread @ 0x1405F8FD0 (KiExecuteSmtIsolationThread.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x140232750 (HalpInterruptSendIpi.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 */

_KCORE_CONTROL_BLOCK *KiSynchronizeIdleIsolationDomainExit()
{
  struct _KPRCB *CurrentPrcb; // rcx
  _KCORE_CONTROL_BLOCK *result; // rax
  __int64 CoreControlBlockIndex; // rsi
  _KCORE_CONTROL_BLOCK_SHADOW *CoreControlBlockShadow; // rbx
  unsigned int i; // edi
  struct _KPRCB *v5; // rax
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+2Ch] [rbp-1Ch]
  int v9; // [rsp+50h] [rbp+8h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  result = CurrentPrcb->CoreControlBlock;
  CoreControlBlockIndex = CurrentPrcb->CoreControlBlockIndex;
  CoreControlBlockShadow = result->CoreControlBlockShadow;
  if ( CoreControlBlockShadow->TotalProcessors != 1 )
  {
    v9 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)CoreControlBlockShadow, 0LL) )
    {
      do
      {
        KeYieldProcessorEx(&v9);
        result = (_KCORE_CONTROL_BLOCK *)CoreControlBlockShadow->Lock;
      }
      while ( CoreControlBlockShadow->Lock );
    }
    --CoreControlBlockShadow->IdleProcessors;
    CoreControlBlockShadow->ProcessorStates[CoreControlBlockIndex].AllState = 0;
    if ( !CoreControlBlockShadow->CurrentIsolationDomain )
      goto LABEL_11;
    if ( CoreControlBlockShadow->NextIsolationDomain == 1 )
      CoreControlBlockShadow->NextIsolationDomain = 0LL;
    ++CoreControlBlockShadow->NewDomainProcessors;
    result = (_KCORE_CONTROL_BLOCK *)CoreControlBlockShadow->TotalProcessors;
    if ( (_DWORD)result == CoreControlBlockShadow->NewDomainProcessors + CoreControlBlockShadow->IdleProcessors )
    {
      CoreControlBlockShadow->CurrentIsolationDomain = 0LL;
      CoreControlBlockShadow->NewDomainProcessors = 0;
      CoreControlBlockShadow->NextIsolationDomain = 1LL;
LABEL_11:
      _InterlockedAnd64((volatile signed __int64 *)CoreControlBlockShadow, 0LL);
      return result;
    }
    CoreControlBlockShadow->ProcessorStates[CoreControlBlockIndex].AllState = 2;
    _InterlockedAnd64((volatile signed __int64 *)CoreControlBlockShadow, 0LL);
    for ( i = 0; i < CoreControlBlockShadow->TotalProcessors; ++i )
    {
      if ( (CoreControlBlockShadow->ProcessorStates[i].AllState & 3) == 0 )
      {
        v5 = KeGetCurrentPrcb();
        v7 = CoreControlBlockShadow->InterruptTargets[i];
        v6 = 6LL;
        v8 = 0LL;
        ++v5->SynchCounters.IpiSendSoftwareInterruptCount;
        HalpInterruptSendIpi((unsigned int *)&v6, 0x1Fu);
      }
    }
    while ( 1 )
    {
      result = (_KCORE_CONTROL_BLOCK *)CoreControlBlockShadow->CurrentIsolationDomain;
      if ( !result )
        break;
      _mm_pause();
    }
    CoreControlBlockShadow->ProcessorStates[CoreControlBlockIndex].AllState = 0;
  }
  return result;
}
