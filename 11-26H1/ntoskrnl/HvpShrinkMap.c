/*
 * XREFs of HvpShrinkMap @ 0x140866938
 * Callers:
 *     HvpAddBin @ 0x140B87980 (HvpAddBin.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     HvpFreeMap @ 0x1408BDF90 (HvpFreeMap.c)
 *     HvpGetCellMap @ 0x140C5E690 (HvpGetCellMap.c)
 */

__int64 __fastcall HvpShrinkMap(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rsi
  unsigned int v5; // r10d
  __int64 v7; // r11
  __int64 v8; // rcx
  __int64 result; // rax
  unsigned int i; // edi
  __int64 CellMap; // rax
  unsigned int v12; // r10d
  unsigned int v13; // ebx

  v4 = a2;
  v5 = a4;
  v7 = a1;
  if ( !a4 )
  {
    v8 = *(_QWORD *)(632LL * a2 + a1 + 296);
    if ( v8 == *(_QWORD *)(632LL * a2 + v7 + 288) )
      return guard_dispatch_icall_no_overrides(v8, 12288LL);
  }
  for ( i = (a2 << 31) + a4; i < ((_DWORD)v4 << 31) + a3; i += 4096 )
  {
    CellMap = HvpGetCellMap(v7, i);
    *(_OWORD *)CellMap = 0LL;
    *(_QWORD *)(CellMap + 16) = 0LL;
  }
  result = 511LL;
  v12 = ((v5 >> 12) + 511) >> 9;
  v13 = ((a3 >> 12) + 511) >> 9;
  if ( v12 < v13 )
    return HvpFreeMap(v7, *(_QWORD *)(632 * v4 + v7 + 288), v12, v13 - 1);
  return result;
}
