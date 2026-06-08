/*
 * XREFs of ExecutePccCommand @ 0x14002A0F0
 * Callers:
 *     InitAcpiCpc @ 0x14002DDA0 (InitAcpiCpc.c)
 *     ExecutePccWrite @ 0x140032370 (ExecutePccWrite.c)
 *     InitCpcStatesInternal @ 0x140036530 (InitCpcStatesInternal.c)
 *     CpcHighestNotifyWorker @ 0x140045AFC (CpcHighestNotifyWorker.c)
 *     CpcGuaranteedNotifyWorker @ 0x1400480FC (CpcGuaranteedNotifyWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExecutePccCommand(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(a1 + 120))(*(_QWORD *)(a1 + 72));
  *(_DWORD *)(a1 + 144) &= ~1u;
  return result;
}
