/*
 * XREFs of RaGetBusData @ 0x14007062C
 * Callers:
 *     RaidAdapterHack @ 0x1400476EC (RaidAdapterHack.c)
 *     RaidAdapterStartDevice @ 0x140068EBC (RaidAdapterStartDevice.c)
 *     StorPortGetBusData @ 0x14007B660 (StorPortGetBusData.c)
 *     NvmeAdapterStartDevice @ 0x1400DDCA8 (NvmeAdapterStartDevice.c)
 *     StorQueryDARTNVMeRegisters @ 0x140196450 (StorQueryDARTNVMeRegisters.c)
 *     StorSetDARTNVMeRegisters @ 0x140196778 (StorSetDARTNVMeRegisters.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaGetBusData(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int))(a1 + 64))(
           *(_QWORD *)(a1 + 16),
           a2,
           a3,
           0LL,
           a5);
}
