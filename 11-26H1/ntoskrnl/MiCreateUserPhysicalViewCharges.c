/*
 * XREFs of MiCreateUserPhysicalViewCharges @ 0x140773E70
 * Callers:
 *     MiReserveUserMemoryFinishVad @ 0x140A01EA0 (MiReserveUserMemoryFinishVad.c)
 * Callees:
 *     MiChargeResident @ 0x14031A5D0 (MiChargeResident.c)
 *     MiLocateLockedVadEvent @ 0x1403C6AA0 (MiLocateLockedVadEvent.c)
 *     MiGetProcessPartition @ 0x1404441E0 (MiGetProcessPartition.c)
 *     MiGetAweViewPageSize @ 0x14047165C (MiGetAweViewPageSize.c)
 *     MiPageSizeToPteLevel @ 0x140471ED0 (MiPageSizeToPteLevel.c)
 *     MiPageChainCount @ 0x140474500 (MiPageChainCount.c)
 *     MiResidentPagesForSpan @ 0x140A03850 (MiResidentPagesForSpan.c)
 */

__int64 __fastcall MiCreateUserPhysicalViewCharges(__int64 a1)
{
  _KPROCESS *Process; // rsi
  unsigned __int64 LockedVadEvent; // rax
  unsigned __int64 AweViewPageSize; // rcx
  __int64 v4; // rbx
  __int64 v5; // r8
  unsigned int v6; // eax
  __int64 v7; // r9
  unsigned __int64 v8; // rdi
  ULONG *ProcessPartition; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  LockedVadEvent = MiLocateLockedVadEvent(a1, 0x100u);
  AweViewPageSize = 1LL;
  v4 = LockedVadEvent + 24;
  if ( (*(_DWORD *)(*(_QWORD *)(LockedVadEvent + 72) + 8LL) & 1) == 0 )
  {
    AweViewPageSize = MiGetAweViewPageSize(v4);
    if ( !AweViewPageSize )
      AweViewPageSize = MiPageChainCount(v5);
  }
  v6 = MiPageSizeToPteLevel(AweViewPageSize);
  v8 = MiResidentPagesForSpan(
         (*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32)) << 12,
         ((*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32)) << 12) | 0xFFF,
         v6);
  ProcessPartition = (ULONG *)MiGetProcessPartition((__int64)Process);
  if ( !(unsigned int)MiChargeResident(ProcessPartition, v8, 128LL) )
    return 3221225626LL;
  *(_QWORD *)(v4 + 64) = v8;
  return 0LL;
}
