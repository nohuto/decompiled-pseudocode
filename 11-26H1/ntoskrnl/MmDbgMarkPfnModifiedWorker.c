/*
 * XREFs of MmDbgMarkPfnModifiedWorker @ 0x1406FEFFC
 * Callers:
 *     ExpDebuggerWorker @ 0x140C16D60 (ExpDebuggerWorker.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x1402DAD50 (MiReleasePageFileInfo.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402E8BF0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031AE30 (MiCaptureDirtyBitToPfn.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiDbgCompactPatchTable @ 0x1406FD354 (MiDbgCompactPatchTable.c)
 */

void MmDbgMarkPfnModifiedWorker()
{
  __int64 v0; // r14
  volatile __int64 *p_Blink; // rsi
  volatile __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // bp
  unsigned __int64 v4; // rbx
  struct _KEVENT *v5; // r15
  int v6; // [rsp+50h] [rbp+8h] BYREF

  v0 = 32LL;
  p_Blink = (volatile __int64 *)&stru_140E2EB88.ThreadListEntry.Blink;
  do
  {
    v2 = *p_Blink;
    if ( (*p_Blink & 1) != 0 )
    {
      _InterlockedExchange64(p_Blink, 0LL);
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
      v6 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 23), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v6);
        while ( *(__int64 *)(v2 + 23) < 0 );
      }
      v4 = MiCaptureDirtyBitToPfn(v2 - 1);
      MiRemoveLockedPageChargeAndDecRef(v2 - 1);
      v5 = *(struct _KEVENT **)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(v2 + 39) >> 43) & 0x3FFLL));
      _InterlockedAnd64((volatile signed __int64 *)(v2 + 23), 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      if ( v4 )
        MiReleasePageFileInfo(v5, v4, 0);
    }
    ++p_Blink;
    --v0;
  }
  while ( v0 );
  MiDbgCompactPatchTable(0);
}
