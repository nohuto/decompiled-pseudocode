/*
 * XREFs of RtlpHpEnvFreeVA @ 0x180070900
 * Callers:
 *     RtlpHpVaMgrCtxFree @ 0x18006F4F4 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrRangeDecommit @ 0x18011D744 (RtlpHpVaMgrRangeDecommit.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

NTSTATUS __fastcall RtlpHpEnvFreeVA(PVOID *BaseAddress, PSIZE_T RegionSize, __int16 a3, int a4, __int64 a5)
{
  ULONG v5; // r8d

  v5 = a3 & 0xC000;
  if ( a4 == 5 )
    return ((__int64 (__fastcall *)(__int64, __int64, PVOID *, PSIZE_T, ULONG))(a5 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a5 + 16)))(
             a5 ^ RtlpHpHeapGlobals ^ *(_QWORD *)a5,
             -1LL,
             BaseAddress,
             RegionSize,
             v5);
  else
    return ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, RegionSize, v5);
}
