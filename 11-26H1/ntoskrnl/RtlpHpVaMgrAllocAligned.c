/*
 * XREFs of RtlpHpVaMgrAllocAligned @ 0x1403531DC
 * Callers:
 *     RtlpHpVaMgrAlloc @ 0x140352C2C (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x140353158 (RtlpHpVaMgrRegionAllocate.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x140366310 (RtlpHpEnvAllocVA.c)
 */

__int64 __fastcall RtlpHpVaMgrAllocAligned(__int64 a1, int a2, int a3)
{
  unsigned int v3; // r11d
  int v4; // ecx
  __int64 v5; // r10
  int v6; // ecx
  int v7; // r9d
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(unsigned __int8 *)(a1 + 46);
  v9 = 0LL;
  v4 = 0x2000;
  v5 = (v3 >> 1) & 7;
  if ( (unsigned int)`RtlpHpMemoryTypePageSize'::`2'::PageSize[v5] > 0x100000 )
    v4 = 12288;
  v6 = `RtlpHpMemoryTypeAllocFlags'::`2'::AllocFlags[v5] | v4;
  v7 = v6 | 0x40000;
  if ( (v3 & 0x10) == 0 )
    v7 = v6;
  RtlpHpEnvAllocVA((unsigned int)&v9, a2, a3, v7, 4);
  return v9;
}
