/*
 * XREFs of ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N11PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x14012ACD0
 * Callers:
 *     <none>
 * Callees:
 *     ?StopUpgradingAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400A7EAC (-StopUpgradingAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapApertureRange@VIDMM_APERTURE_SEGMENT@@AEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_K11PEBU_MDL@@_N@Z @ 0x1400D969C (-UnmapApertureRange@VIDMM_APERTURE_SEGMENT@@AEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_K11PEBU_MDL@@.c)
 *     ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z @ 0x1400E5F94 (-MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E71D0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1400ECB3C (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1400ECCA4 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x14010B890 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVI.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010E984 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_RESET_BACKING_STORE_REASON@@@Z @ 0x14010FE30 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_RESET_BACKING_STORE_REASON.c)
 *     ?UnmapAllocationFromIoMmu@VIDMM_SEGMENT@@IEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1401246A4 (-UnmapAllocationFromIoMmu@VIDMM_SEGMENT@@IEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushPendingGPUAccess@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x14012A078 (-FlushPendingGPUAccess@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 */

char __fastcall VIDMM_APERTURE_SEGMENT::EvictResource(
        VIDMM_APERTURE_SEGMENT *this,
        struct VIDMM_PHYSICAL_ALLOC_LEGACY *a2,
        char a3,
        char a4,
        bool a5,
        struct VIDMM_LOCAL_ALLOC *a6)
{
  struct VIDMM_LOCAL_ALLOC *v6; // r13
  struct VIDMM_GLOBAL_ALLOC *v8; // rbx
  VIDMM_GLOBAL *v12; // rcx
  int v13; // ecx
  VIDMM_GLOBAL **v14; // r15
  VIDMM_GLOBAL **v16; // r14
  __int64 *v17; // rsi
  _DWORD *v18; // rdi
  unsigned __int64 v19; // [rsp+20h] [rbp-48h]
  const struct _MDL *v20; // [rsp+28h] [rbp-40h]

  v6 = a6;
  v8 = *(struct VIDMM_GLOBAL_ALLOC **)a2;
  if ( !a6 )
    v6 = (struct VIDMM_LOCAL_ALLOC *)*((_QWORD *)v8 + 6);
  if ( g_Feature_Largify64KBPrototype )
  {
    v12 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
    if ( v8 == *((struct VIDMM_GLOBAL_ALLOC **)v12 + 5579) )
      VIDMM_GLOBAL::StopUpgradingAllocation(v12, *(struct VIDMM_GLOBAL_ALLOC **)a2);
  }
  v13 = *((_DWORD *)v8 + 6);
  if ( (v13 & 0x10000) != 0 || (*((_DWORD *)v8 + 7) & 2) != 0 )
    a3 = 0;
  v14 = (VIDMM_GLOBAL **)((char *)this + 8);
  if ( *(_DWORD *)(*((_QWORD *)this + 1) + 40088LL) )
  {
    if ( a3 )
      VIDMM_SEGMENT::FlushPendingGPUAccess(this, (struct VIDMM_GLOBAL_ALLOC **)a2);
    if ( (*((_DWORD *)v8 + 6) & 0x80000) == 0 && (!a4 || (*((_DWORD *)this + 16) & 0x400000) == 0) )
      VIDMM_APERTURE_SEGMENT::UnmapApertureRange(
        (VIDMM_GLOBAL **)this,
        (struct VIDMM_GLOBAL_ALLOC **)a2,
        (LARGE_INTEGER)(*((_QWORD *)a2 + 2) >> 12),
        *((_QWORD *)a2 + 9) / 4096LL,
        v19,
        v20,
        0);
    VIDMM_GLOBAL::WaitForAllPagingEngines(*v14, v8);
    if ( a4 )
      return 0;
    v16 = (VIDMM_GLOBAL **)((char *)this + 8);
  }
  else
  {
    v16 = (VIDMM_GLOBAL **)((char *)this + 8);
    *((_DWORD *)v8 + 6) = v13 | 0x10000;
  }
  VIDMM_GLOBAL::MakeVirtualAddressRangeNotResident(*v14, v8, 1);
  if ( *((_BYTE *)*v14 + 40098) )
    VIDMM_SEGMENT::UnmapAllocationFromIoMmu(this, (void **)v8);
  v17 = (__int64 *)v16;
  if ( (**((_DWORD **)v8 + 46) & 0x8000000) == 0 )
    goto LABEL_26;
  v18 = (_DWORD *)((char *)v8 + 32);
  if ( (*((_DWORD *)v8 + 8) & 2) == 0 )
  {
    v17 = (__int64 *)((char *)this + 8);
    if ( (int)VIDMM_GLOBAL::ChargePinnedBackingStore(*v14, *((_QWORD *)a2 + 2)) >= 0 )
    {
      *v18 |= 2u;
      goto LABEL_28;
    }
LABEL_26:
    VIDMM_SEGMENT::UnlockAllocationBackingStore(*v14, v8, v6);
    v18 = (_DWORD *)((char *)v8 + 32);
    if ( (*((_DWORD *)v8 + 8) & 2) != 0 )
    {
      VIDMM_GLOBAL::ReturnPinnedBackingStore(*v16, *((_QWORD *)a2 + 2));
      *v18 &= ~2u;
    }
  }
LABEL_28:
  if ( !a5 )
  {
    if ( VIDMM_GLOBAL::DiscardOfferedAllocation(*((VIDMM_GLOBAL **)this + 1), v8) )
    {
      VIDMM_GLOBAL::ResetBackingStore(*v17, (__int64 *)v8, 1);
      *v18 |= 0x10u;
      *((_QWORD *)v8 + 37) = *(_QWORD *)(*v17 + 4568);
    }
  }
  return 1;
}
