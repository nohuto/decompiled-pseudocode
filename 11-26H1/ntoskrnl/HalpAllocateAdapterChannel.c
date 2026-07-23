/*
 * XREFs of HalpAllocateAdapterChannel @ 0x140439894
 * Callers:
 *     HalpBuildScatterGatherList @ 0x14043901C (HalpBuildScatterGatherList.c)
 *     HalAllocateAdapterChannelEx @ 0x140439DE0 (HalAllocateAdapterChannelEx.c)
 *     HalAllocateAdapterChannel @ 0x14057BF00 (HalAllocateAdapterChannel.c)
 *     HalRealAllocateAdapterChannelV3 @ 0x14058DF50 (HalRealAllocateAdapterChannelV3.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     HalpAllocateDmaResourcesInternal @ 0x14043721C (HalpAllocateDmaResourcesInternal.c)
 *     HalpDmaStartWcb @ 0x140439A18 (HalpDmaStartWcb.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall HalpAllocateAdapterChannel(__int64 a1, __int64 a2, unsigned int a3, int a4, char a5, __int64 a6)
{
  int v9; // r8d
  __int16 v10; // ax
  __int16 v11; // r8
  __int16 v12; // ax
  int v13; // eax
  __int64 v14; // r8
  unsigned int v15; // eax
  unsigned int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r9
  char v20; // bp
  unsigned __int8 CurrentIrql; // di
  char DmaResourcesInternal; // al
  unsigned int v23; // ecx

  if ( (*(_DWORD *)(a2 + 20) & 2) != 0 )
  {
    _m_prefetchw((const void *)(a2 - 8));
    if ( (_InterlockedOr((volatile signed __int32 *)(a2 - 8), 4u) & 2) != 0 )
      return 3221225760LL;
  }
  if ( *(_BYTE *)(a1 + 440) && a3 > *(_DWORD *)(a1 + 232) )
    return 3221225626LL;
  v9 = *(_DWORD *)(a2 + 20);
  *(_QWORD *)(a2 + 24) = a6;
  v10 = v9;
  v11 = v9 | 4;
  *(_DWORD *)(a2 + 40) = a3;
  v12 = v10 & 0xFFFB;
  *(_DWORD *)(a2 + 16) = 1;
  if ( (a5 & 2) == 0 )
    v11 = v12;
  v13 = (a4 << 12) | v11 & 0xFFF;
  v14 = v13 | 1u;
  v15 = v13 & 0xFFFFFFFE;
  if ( (a5 & 1) == 0 )
    v14 = v15;
  *(_DWORD *)(a2 + 20) = v14;
  LOBYTE(v14) = v14 & 1;
  v16 = (a5 & 1) != 0 ? 0xC000009A : 0;
  if ( (unsigned __int8)HalpDmaStartWcb(a1, a2, v14) )
  {
    *(_DWORD *)(a1 + 248) = a3;
    v20 = 0;
    *(_QWORD *)(a1 + 352) = a2;
    CurrentIrql = 0;
    *(_DWORD *)(a1 + 388) = 1;
    *(_DWORD *)(a1 + 624) = 0;
    if ( KeGetCurrentIrql() < 2u )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v17) = 2;
        LOBYTE(v18) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v18, v17);
      }
      v20 = 1;
    }
    DmaResourcesInternal = HalpAllocateDmaResourcesInternal(a1, 1, 0LL, v19);
    v23 = 0;
    if ( !DmaResourcesInternal )
      v23 = (a5 & 1) != 0 ? 0xC000009A : 0;
    v16 = v23;
    if ( v20 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
  }
  return v16;
}
