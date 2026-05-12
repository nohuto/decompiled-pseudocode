/*
 * XREFs of StorPortGetUncachedExtension @ 0x14007B850
 * Callers:
 *     StorPortGetUncachedExtensionVrfy @ 0x1401C23E0 (StorPortGetUncachedExtensionVrfy.c)
 * Callees:
 *     StorAllocateContiguousIoResources @ 0x14001B548 (StorAllocateContiguousIoResources.c)
 *     RaMiniportGetRaidAdapter @ 0x140042128 (RaMiniportGetRaidAdapter.c)
 *     MiniportGetNvmeAdapter @ 0x140058B94 (MiniportGetNvmeAdapter.c)
 *     RaidDmaAllocateUncachedExtension @ 0x140072258 (RaidDmaAllocateUncachedExtension.c)
 *     NVMeGetUncachedExtensionEx @ 0x1400797D4 (NVMeGetUncachedExtensionEx.c)
 *     StorpUpdateUncachedExtensionAllocationRegion @ 0x14007DA18 (StorpUpdateUncachedExtensionAllocationRegion.c)
 *     RaidInitializeDma @ 0x140187C24 (RaidInitializeDma.c)
 *     RaidIsDmaInitialized @ 0x140187DDC (RaidIsDmaInitialized.c)
 */

__int64 __fastcall StorPortGetUncachedExtension(__int64 a1, __int64 a2, int a3)
{
  _DWORD *v3; // rcx
  int v4; // esi
  __int64 NvmeAdapter; // rax
  __int64 v8; // rdx
  int v9; // r8d
  __int64 v10; // rdi
  __int64 RaidAdapter; // rax
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rcx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  bool v23; // zf
  __int64 v24; // rcx
  unsigned int v25; // [rsp+70h] [rbp+8h] BYREF

  v3 = *(_DWORD **)(a1 - 16);
  v4 = 0x80000000;
  v25 = 0x80000000;
  if ( (v3[62] & 1) == 0 )
  {
    RaidAdapter = RaMiniportGetRaidAdapter(v3);
    v13 = RaidAdapter;
    if ( !RaidAdapter )
      return 0LL;
    v14 = RaidAdapter + 928;
    if ( *(_DWORD *)(RaidAdapter + 944) )
      return *(_QWORD *)v14;
    v15 = RaidAdapter + 896;
    if ( !(unsigned __int8)RaidIsDmaInitialized(RaidAdapter + 896)
      && (int)RaidInitializeDma(v16, *(_QWORD *)(v13 + 32), v13 + 384) < 0 )
    {
      return 0LL;
    }
    if ( a2 )
    {
      if ( (*(_DWORD *)(a2 + 220) & 4) != 0 )
      {
        v4 = *(_DWORD *)(v13 + 4720);
        v25 = v4;
      }
      if ( *(_BYTE *)(a2 + 144) == 2 )
      {
        if ( *(_QWORD *)(v13 + 4352) < 0x100000000uLL )
          *(_QWORD *)(v13 + 4352) = -1LL;
        *(_QWORD *)(v13 + 4368) = 0x100000000LL;
      }
      else
      {
        if ( *(_BYTE *)(a2 + 144) != 3 )
        {
          if ( *(_BYTE *)(a2 + 144) == 4 )
          {
            v17 = *(_QWORD *)(v13 + 4352);
            if ( v17 < 0x100000000LL )
            {
              *(_QWORD *)(v13 + 4352) = -1LL;
              v17 = -1LL;
            }
            v18 = v17;
            if ( HighestPhysicalAddress != -1 )
            {
              if ( (_DWORD)HighestPhysicalAddress )
              {
                if ( (unsigned __int64)HighestPhysicalAddress > 0x100000000LL )
                {
                  v19 = HighestPhysicalAddress & 0xFFFFFFFF00000000uLL;
                  if ( v17 >= (HighestPhysicalAddress & 0xFFFFFFFF00000000uLL) )
                  {
                    v18 = v19 - 1;
                    *(_QWORD *)(v13 + 4352) = v19 - 1;
                    v20 = (v19 - 1) & 0xFFFFFFFF00000000uLL;
                    if ( *(_QWORD *)(v13 + 4360) > v20 )
                      *(_QWORD *)(v13 + 4360) = v20;
                  }
                }
              }
            }
            *(_QWORD *)(v13 + 4368) = 0x100000000LL;
            *(_QWORD *)(v13 + 4384) = v18;
            StorpUpdateUncachedExtensionAllocationRegion(v13, &v25);
            v4 = v25;
          }
          goto LABEL_31;
        }
        if ( *(_QWORD *)(v13 + 4352) < 0x100000000uLL )
          *(_QWORD *)(v13 + 4352) = -1LL;
        *(_QWORD *)(v13 + 4368) = 0LL;
      }
      *(_QWORD *)(v13 + 4384) = -1LL;
    }
LABEL_31:
    if ( (int)RaidDmaAllocateUncachedExtension(
                v15,
                a3,
                *(_QWORD *)(v13 + 4360),
                *(_QWORD *)(v13 + 4352),
                *(_QWORD *)(v13 + 4368),
                *(_DWORD *)(v13 + 4344),
                v4,
                v14) >= 0
      || v4 != 0x80000000
      && (int)RaidDmaAllocateUncachedExtension(
                v15,
                a3,
                *(_QWORD *)(v13 + 4360),
                *(_QWORD *)(v13 + 4352),
                *(_QWORD *)(v13 + 4368),
                *(_DWORD *)(v13 + 4344),
                0x80000000,
                v14) >= 0 )
    {
      if ( *(_BYTE *)(a2 + 144) == 4 )
      {
        v21 = *(_QWORD *)(v13 + 936);
        v22 = v21 | 0xFFFFFFFFLL;
        *(_QWORD *)(v13 + 4376) = v21 & 0xFFFFFFFF00000000uLL;
        v23 = *(_QWORD *)(v13 + 4360) == 0LL;
        *(_QWORD *)(v13 + 4384) = v21 | 0xFFFFFFFFLL;
        if ( v23 )
          v21 &= 0xFFFFFFFF00000000uLL;
        *(_QWORD *)(v13 + 4352) = v22;
        *(_QWORD *)(v13 + 4360) = v21;
        if ( !*(_QWORD *)(v13 + 120) )
        {
          v24 = 316LL;
          if ( *(_DWORD *)v13 != 1314275652 )
            v24 = 524LL;
          *(_QWORD *)(v13 + 120) = StorAllocateContiguousIoResources(
                                     ((*(_DWORD *)(v24 + v13) + 7) & 0xFFFFFFF8) + 1200,
                                     v21,
                                     (_QWORD *)v13);
        }
      }
      return *(_QWORD *)v14;
    }
    return 0LL;
  }
  NvmeAdapter = MiniportGetNvmeAdapter(v3);
  v10 = 0LL;
  if ( NvmeAdapter )
    return NVMeGetUncachedExtensionEx(NvmeAdapter, v8, v9);
  return v10;
}
