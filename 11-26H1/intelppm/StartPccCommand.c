/*
 * XREFs of StartPccCommand @ 0x14002989C
 * Callers:
 *     InitAcpiCpc @ 0x14002DDA0 (InitAcpiCpc.c)
 *     AcquirePccSubspace @ 0x1400322D0 (AcquirePccSubspace.c)
 *     InitCpcStatesInternal @ 0x140036530 (InitCpcStatesInternal.c)
 *     CpcHighestNotifyWorker @ 0x140045AFC (CpcHighestNotifyWorker.c)
 *     CpcGuaranteedNotifyWorker @ 0x1400480FC (CpcGuaranteedNotifyWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 */

__int64 __fastcall StartPccCommand(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(a1 + 104))(*(_QWORD *)(a1 + 72));
  *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0xFFFFFFFE | ((int)result >= 0);
  return result;
}
