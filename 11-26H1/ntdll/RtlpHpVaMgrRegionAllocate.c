/*
 * XREFs of RtlpHpVaMgrRegionAllocate @ 0x18006DDDC
 * Callers:
 *     RtlpHpVaMgrAlloc @ 0x18006F7E8 (RtlpHpVaMgrAlloc.c)
 * Callees:
 *     RtlpHpVaMgrAllocAligned @ 0x18006DEC4 (RtlpHpVaMgrAllocAligned.c)
 *     RtlpHpVaMgrRangeCreate @ 0x18006E664 (RtlpHpVaMgrRangeCreate.c)
 *     ZwFreeVirtualMemory @ 0x18015F200 (ZwFreeVirtualMemory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpVaMgrRegionAllocate(__int64 a1)
{
  PVOID v2; // rdx
  __int16 v3; // ax
  __int64 v4; // rdi
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF
  __int128 v7; // [rsp+40h] [rbp-18h]
  PVOID BaseAddress; // [rsp+60h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp+10h] BYREF

  RegionSize = (unsigned __int64)*(unsigned __int16 *)(a1 + 40) << 20;
  BaseAddress = (PVOID)RtlpHpVaMgrAllocAligned(a1, &RegionSize);
  v2 = BaseAddress;
  if ( BaseAddress )
  {
    v3 = *(_WORD *)(a1 + 40);
    v7 = 0LL;
    WORD4(v7) = v3;
    v6 = 0LL;
    v4 = RtlpHpVaMgrRangeCreate(a1, BaseAddress, &v6);
    if ( v4 )
    {
      v2 = 0LL;
      BaseAddress = 0LL;
    }
    else
    {
      v2 = BaseAddress;
    }
  }
  else
  {
    v4 = 0LL;
  }
  if ( v2 )
  {
    if ( (*(_BYTE *)(a1 + 46) & 0xE) == 0xA )
      ((void (__fastcall *)(__int64, __int64, PVOID *, ULONG_PTR *, int))(RtlpHpHeapGlobals ^ *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) ^ *(_QWORD *)(a1 + 32)))(
        RtlpHpHeapGlobals ^ **(_QWORD **)(a1 + 32) ^ *(_QWORD *)(a1 + 32),
        -1LL,
        &BaseAddress,
        &RegionSize,
        0x8000);
    else
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  }
  return v4;
}
