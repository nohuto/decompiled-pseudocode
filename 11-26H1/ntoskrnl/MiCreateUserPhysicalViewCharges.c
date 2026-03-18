/*
 * XREFs of MiCreateUserPhysicalViewCharges @ 0x140770E70
 * Callers:
 *     MiReserveUserMemoryFinishVad @ 0x14095C5E0 (MiReserveUserMemoryFinishVad.c)
 * Callees:
 *     MiChargeResident @ 0x1403185A0 (MiChargeResident.c)
 *     MiLocateLockedVadEvent @ 0x1403BCC30 (MiLocateLockedVadEvent.c)
 *     MiGetProcessPartition @ 0x14044C0C0 (MiGetProcessPartition.c)
 *     MiGetAweViewPageSize @ 0x140477EDC (MiGetAweViewPageSize.c)
 *     MiPageSizeToPteLevel @ 0x140478750 (MiPageSizeToPteLevel.c)
 *     MiPageChainCount @ 0x14047AB90 (MiPageChainCount.c)
 *     MiResidentPagesForSpan @ 0x14095DF90 (MiResidentPagesForSpan.c)
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
