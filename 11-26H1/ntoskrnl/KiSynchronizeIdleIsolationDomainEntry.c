/*
 * XREFs of KiSynchronizeIdleIsolationDomainEntry @ 0x14049BF54
 * Callers:
 *     KiExecuteSmtIsolationThread @ 0x1405F8FD0 (KiExecuteSmtIsolationThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 */

char KiSynchronizeIdleIsolationDomainEntry()
{
  struct _KPRCB *CurrentPrcb; // rcx
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rax
  __int64 CoreControlBlockIndex; // rdi
  _KCORE_CONTROL_BLOCK_SHADOW *CoreControlBlockShadow; // rbx
  bool v4; // zf
  int v5; // ecx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  CoreControlBlock = CurrentPrcb->CoreControlBlock;
  CoreControlBlockIndex = CurrentPrcb->CoreControlBlockIndex;
  CoreControlBlockShadow = CoreControlBlock->CoreControlBlockShadow;
  if ( CoreControlBlockShadow->TotalProcessors != 1 )
  {
    v7 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)CoreControlBlockShadow, 0LL) )
    {
      do
        KeYieldProcessorEx(&v7);
      while ( CoreControlBlockShadow->Lock );
    }
    LOBYTE(CoreControlBlock) = CoreControlBlockShadow->IdleProcessors + 1;
    v4 = CoreControlBlockShadow->NextIsolationDomain == 1;
    CoreControlBlockShadow->IdleProcessors = (unsigned __int8)CoreControlBlock;
    if ( !v4 )
    {
      v5 = (unsigned __int8)CoreControlBlock + CoreControlBlockShadow->NewDomainProcessors;
      LODWORD(CoreControlBlock) = CoreControlBlockShadow->TotalProcessors;
      if ( (_DWORD)CoreControlBlock == v5 )
      {
        CoreControlBlock = (_KCORE_CONTROL_BLOCK *)CoreControlBlockShadow->NextIsolationDomain;
        CoreControlBlockShadow->CurrentIsolationDomain = (volatile unsigned __int64)CoreControlBlock;
        CoreControlBlockShadow->NewDomainProcessors = 0;
        CoreControlBlockShadow->NextIsolationDomain = 1LL;
      }
    }
    CoreControlBlockShadow->ProcessorStates[CoreControlBlockIndex].AllState = 1;
    _InterlockedAnd64((volatile signed __int64 *)CoreControlBlockShadow, 0LL);
  }
  return (char)CoreControlBlock;
}
