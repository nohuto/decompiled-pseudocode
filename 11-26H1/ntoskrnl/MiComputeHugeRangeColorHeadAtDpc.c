/*
 * XREFs of MiComputeHugeRangeColorHeadAtDpc @ 0x140534804
 * Callers:
 *     MiLockHugeRangeColorHeadAtDpc @ 0x140487E90 (MiLockHugeRangeColorHeadAtDpc.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiColorGetCache @ 0x140288F60 (MiColorGetCache.c)
 *     MiPageToChannel @ 0x140294DD0 (MiPageToChannel.c)
 *     MiHugePfnPartition @ 0x140487CC0 (MiHugePfnPartition.c)
 *     MiGetColorHeadHugeRangeBase @ 0x1404883BC (MiGetColorHeadHugeRangeBase.c)
 */

__int64 __fastcall MiComputeHugeRangeColorHeadAtDpc(__int64 *a1)
{
  __int64 v1; // rdi
  ULONG_PTR v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rdx
  int v7; // esi
  __int64 v8; // rdi
  __int64 ColorHeadHugeRangeBase; // r10
  unsigned int v10; // r11d
  unsigned int Cache; // eax
  __int64 v12; // r10

  v1 = *a1;
  v3 = ((((__int64)a1 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFF) << 18;
  v4 = (unsigned int)MiPageToNode(v3);
  v5 = *(_QWORD *)(MiHugePfnPartition(a1) + 16) + 56320 * v4;
  MiPageToChannel(v3);
  v7 = 1;
  v8 = v1 & 7;
  if ( v8 == 1 )
  {
    v7 = 0;
  }
  else if ( v8 != 2 )
  {
    v7 = 5;
  }
  ColorHeadHugeRangeBase = MiGetColorHeadHugeRangeBase(v5, v6, v7);
  if ( v7 != 5 )
  {
    Cache = MiColorGetCache(v10);
    return v12 + 8LL * Cache;
  }
  return ColorHeadHugeRangeBase;
}
