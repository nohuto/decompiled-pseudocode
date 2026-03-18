/*
 * XREFs of CommitVirtualAddressRangesInList @ 0x14009D288
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1400CEDF8 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NP.c)
 * Callees:
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1400389C0 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CommitVirtualAddressRangesInList(_QWORD **a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // rbx
  int v4; // r9d
  __int64 i; // rsi
  _QWORD *v9; // rdx
  int v10; // ecx
  _QWORD ***VidMmAllocFromOwner; // rax
  unsigned int v12; // r8d
  unsigned int v13; // r9d

  v3 = *a1;
  v4 = 0;
  for ( i = a2[7]; v3 != a1; v3 = (_QWORD *)*v3 )
  {
    v9 = v3 - 4;
    v10 = *((_DWORD *)v3 + 10);
    if ( (v10 & 0x400) == 0 && (*(_BYTE *)(i + 41064) & 2) != 0
      || (v10 & 0x800) == 0 && (*(_BYTE *)(i + 41064) & 0xC) != 0 )
    {
      *(_QWORD *)(a3 + 8) = v9;
      VidMmAllocFromOwner = (_QWORD ***)GetVidMmAllocFromOwner(v9[9] & 0xF, v9[8]);
      v4 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64 (__fastcall *)(struct VIDMM_PHYSICAL_ADAPTER *, struct VIDMM_PHYSICAL_ALLOC *, const struct VIDMM_ITERATE_PHYSICAL_MEMORY_RANGE_DESC *, _QWORD *), __int64, int, unsigned int, unsigned int))(*a2 + 104LL))(
             a2,
             ***VidMmAllocFromOwner,
             CommitAllocationVirtualAddressCb,
             a3,
             2,
             v13 >> 12,
             v12 >> 12);
      if ( v4 < 0 )
        break;
    }
  }
  return (unsigned int)v4;
}
