/*
 * XREFs of TpReleaseWork @ 0x1800850B0
 * Callers:
 *     RtlpFcFreeChangeRegistration @ 0x180084F5C (RtlpFcFreeChangeRegistration.c)
 *     LdrpDetectDetour @ 0x180084FB0 (LdrpDetectDetour.c)
 *     RtlpCtContextFree @ 0x1801494FC (RtlpCtContextFree.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x180088448 (TppRaiseInvalidParameter.c)
 */

void __cdecl TpReleaseWork(PTP_WORK Work)
{
  _PEB_LDR_DATA *Ldr; // rdx
  volatile int Flags; // eax
  volatile unsigned int v3; // eax
  volatile unsigned int v4; // ett
  void *ThreadPoolData; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !Work
    || (Flags = Work->CleanupGroupMember.Flags, (Flags & 0x10000) != 0)
    || (Flags & 0x20000) != 0
    && ((ThreadPoolData = NtCurrentTeb()->ThreadPoolData) == 0LL
     || *(PTP_WORK *)(*(_QWORD *)ThreadPoolData + 240LL) != Work)
    || (__int64 (__fastcall **)(PVOID))Work->CleanupGroupMember.VFuncs != &TppWorkpCleanupGroupMemberVFuncs
    || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    Work = (PTP_WORK)NtCurrentPeb()->Ldr;
    if ( LOBYTE(Work->CleanupGroupMember.CallbackBarrier.WaitList.First) )
      return;
LABEL_15:
    TppRaiseInvalidParameter(Work, Ldr);
    return;
  }
  _m_prefetchw(&Work->CleanupGroupMember.168);
  v3 = Work->CleanupGroupMember.Flags;
  do
  {
    Ldr = (_PEB_LDR_DATA *)v3;
    LODWORD(Ldr) = v3 | 0x10000;
    v4 = v3;
    v3 = _InterlockedCompareExchange(&Work->CleanupGroupMember.Flags, v3 | 0x10000, v3);
  }
  while ( v4 != v3 );
  if ( (v3 & 0x10000) != 0 )
    goto LABEL_15;
  if ( (v3 & 0x30000) == 0 )
  {
    Work->CleanupGroupMember.ReleaseCaller.ReturnAddress = retaddr;
    if ( _InterlockedExchangeAdd(&Work->CleanupGroupMember.Refcount.Refcount, 0xFFFFFFFF) == 1 )
      ((void (*)(void))Work->CleanupGroupMember.VFuncs->Free)();
  }
}
