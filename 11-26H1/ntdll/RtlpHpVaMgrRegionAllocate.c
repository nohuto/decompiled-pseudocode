/*
 * XREFs of RtlpHpVaMgrRegionAllocate @ 0x18008A9A4
 * Callers:
 *     RtlpHpVaMgrAlloc @ 0x18008C3AC (RtlpHpVaMgrAlloc.c)
 * Callees:
 *     RtlpHpVaMgrAllocAligned @ 0x18008AA8C (RtlpHpVaMgrAllocAligned.c)
 *     RtlpHpVaMgrRangeCreate @ 0x18008B22C (RtlpHpVaMgrRangeCreate.c)
 *     ZwFreeVirtualMemory @ 0x18015F300 (ZwFreeVirtualMemory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpVaMgrRegionAllocate(__int64 a1)
{
  __int64 v2; // rdx
  __int16 v3; // ax
  __int64 v4; // rdi
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF
  __int128 v7; // [rsp+40h] [rbp-18h]
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+68h] [rbp+10h] BYREF

  v9 = (unsigned __int64)*(unsigned __int16 *)(a1 + 40) << 20;
  v8 = RtlpHpVaMgrAllocAligned(a1, &v9);
  v2 = v8;
  if ( v8 )
  {
    v3 = *(_WORD *)(a1 + 40);
    v7 = 0LL;
    WORD4(v7) = v3;
    v6 = 0LL;
    v4 = RtlpHpVaMgrRangeCreate(a1, v8, &v6);
    if ( v4 )
    {
      v2 = 0LL;
      v8 = 0LL;
    }
    else
    {
      v2 = v8;
    }
  }
  else
  {
    v4 = 0LL;
  }
  if ( v2 )
  {
    if ( (*(_BYTE *)(a1 + 46) & 0xE) == 0xA )
      ((void (__fastcall *)(__int64, __int64, __int64 *, unsigned __int64 *, int))(RtlpHpHeapGlobals ^ *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) ^ *(_QWORD *)(a1 + 32)))(
        RtlpHpHeapGlobals ^ **(_QWORD **)(a1 + 32) ^ *(_QWORD *)(a1 + 32),
        -1LL,
        &v8,
        &v9,
        0x8000);
    else
      ZwFreeVirtualMemory(-1LL, &v8, &v9, 0x8000LL);
  }
  return v4;
}
