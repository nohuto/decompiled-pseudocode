/*
 * XREFs of StartPccCommand @ 0x14002787C
 * Callers:
 *     CpcGuaranteedNotifyWorker @ 0x140026A40 (CpcGuaranteedNotifyWorker.c)
 *     InitAcpiCpc @ 0x140026F98 (InitAcpiCpc.c)
 *     AcquirePccSubspace @ 0x1400274D0 (AcquirePccSubspace.c)
 *     InitCpcStatesInternal @ 0x140032B70 (InitCpcStatesInternal.c)
 *     CpcHighestNotifyWorker @ 0x140042A28 (CpcHighestNotifyWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall StartPccCommand(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(a1 + 104))(*(_QWORD *)(a1 + 72));
  *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0xFFFFFFFE | ((int)result >= 0);
  return result;
}
