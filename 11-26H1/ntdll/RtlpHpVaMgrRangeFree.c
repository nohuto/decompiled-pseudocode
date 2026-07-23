/*
 * XREFs of RtlpHpVaMgrRangeFree @ 0x180070970
 * Callers:
 *     RtlpHpVaMgrCtxFree @ 0x18006F4F4 (RtlpHpVaMgrCtxFree.c)
 * Callees:
 *     RtlpHpVaMgrRangeCleanup @ 0x180070F48 (RtlpHpVaMgrRangeCleanup.c)
 *     ZwFreeVirtualMemory @ 0x18015F200 (ZwFreeVirtualMemory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

NTSTATUS __fastcall RtlpHpVaMgrRangeFree(__int64 a1, __int64 a2)
{
  bool v3; // zf
  __int64 v4; // rax
  ULONG_PTR RegionSize; // [rsp+40h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp+10h] BYREF

  v3 = (*(_BYTE *)a2 & 4) == 0;
  BaseAddress = (PVOID)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL)
                      + ((unsigned __int64)(a2 - *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL)) >> *(_DWORD *)(*(_QWORD *)(a1 + 24) + 24LL) << 20));
  if ( v3 )
    v4 = *(unsigned __int16 *)(a2 + 24);
  else
    v4 = *(_QWORD *)(a2 + 24);
  RegionSize = v4 << 20;
  RtlpHpVaMgrRangeCleanup(a1);
  if ( (*(_BYTE *)(a1 + 46) & 0xE) == 0xA )
    return ((__int64 (__fastcall *)(__int64, __int64, PVOID *, ULONG_PTR *, int))(RtlpHpHeapGlobals ^ *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) ^ *(_QWORD *)(a1 + 32)))(
             RtlpHpHeapGlobals ^ **(_QWORD **)(a1 + 32) ^ *(_QWORD *)(a1 + 32),
             -1LL,
             &BaseAddress,
             &RegionSize,
             0x8000);
  else
    return ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
}
