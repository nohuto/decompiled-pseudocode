/*
 * XREFs of TpCancelAsyncIoOperation @ 0x1800DDAF0
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x180018390 (TppBarrierAdjust.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __cdecl TpCancelAsyncIoOperation(PTP_IO Io)
{
  volatile int Flags; // eax
  volatile int PendingIrpCount; // eax
  volatile int v4; // ett

  if ( !Io
    || (Flags = Io->CleanupGroupMember.Flags, (Flags & 0x10000) != 0)
    || (Flags & 0x20000) != 0
    || (__int64 (__fastcall **)(PVOID))Io->CleanupGroupMember.VFuncs != &TppIopCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter();
  }
  else
  {
    _m_prefetchw((const void *)&Io->PendingIrpCount);
    PendingIrpCount = Io->PendingIrpCount;
    while ( PendingIrpCount > 0 )
    {
      v4 = PendingIrpCount;
      PendingIrpCount = _InterlockedCompareExchange(&Io->PendingIrpCount, PendingIrpCount - 1, PendingIrpCount);
      if ( v4 == PendingIrpCount )
      {
        TppBarrierAdjust((_RTL_SRWLOCK *)&Io->CleanupGroupMember.CallbackBarrier, -1, 0);
        break;
      }
    }
    if ( _InterlockedExchangeAdd(&Io->CleanupGroupMember.Refcount.Refcount, 0xFFFFFFFF) == 1 )
      Io->CleanupGroupMember.VFuncs->Free(&Io->CleanupGroupMember);
  }
}
