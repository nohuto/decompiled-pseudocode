/*
 * XREFs of ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N11PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x14012A730
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0ppq_EtwWriteTransfer @ 0x14003F8FC (McTemplateK0ppq_EtwWriteTransfer.c)
 *     ?StopUpgradingAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400A7EAC (-StopUpgradingAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
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

char __fastcall VIDMM_SYSMEM_SEGMENT::EvictResource(
        VIDMM_SYSMEM_SEGMENT *this,
        struct VIDMM_PHYSICAL_ALLOC_LEGACY *a2,
        char a3,
        char a4,
        bool a5,
        struct VIDMM_LOCAL_ALLOC *a6)
{
  struct VIDMM_GLOBAL_ALLOC *v7; // rbx
  VIDMM_GLOBAL *v11; // rcx
  struct VIDMM_LOCAL_ALLOC *v12; // rbp
  __int64 v14; // r8
  __int64 v15; // rax
  bool v16; // si
  int v17; // eax

  v7 = *(struct VIDMM_GLOBAL_ALLOC **)a2;
  if ( g_Feature_Largify64KBPrototype )
  {
    v11 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
    if ( v7 == *((struct VIDMM_GLOBAL_ALLOC **)v11 + 5579) )
      VIDMM_GLOBAL::StopUpgradingAllocation(v11, *(struct VIDMM_GLOBAL_ALLOC **)a2);
  }
  v12 = a6;
  if ( !a6 )
    v12 = (struct VIDMM_LOCAL_ALLOC *)*((_QWORD *)v7 + 6);
  if ( *(_DWORD *)(*((_QWORD *)this + 1) + 40088LL) )
  {
    if ( a3 )
      VIDMM_SEGMENT::FlushPendingGPUAccess(this, (struct VIDMM_GLOBAL_ALLOC **)a2);
    VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), v7);
    if ( a4 )
      return 0;
  }
  else
  {
    *((_DWORD *)v7 + 6) |= 0x10000u;
  }
  VIDMM_GLOBAL::MakeVirtualAddressRangeNotResident(*((VIDMM_GLOBAL **)this + 1), v7, 1);
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 40098LL) )
    VIDMM_SEGMENT::UnmapAllocationFromIoMmu(this, (void **)v7);
  v15 = *((_QWORD *)v7 + 46);
  v16 = *(_WORD *)(v15 + 8) == 2;
  if ( (*(_DWORD *)v15 & 0x8000000) == 0 )
    goto LABEL_19;
  if ( (*((_DWORD *)v7 + 8) & 2) == 0 )
  {
    if ( (int)VIDMM_GLOBAL::ChargePinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 2)) < 0 )
      goto LABEL_19;
    *((_DWORD *)v7 + 8) |= 2u;
  }
  if ( v16 )
  {
LABEL_19:
    VIDMM_SEGMENT::UnlockAllocationBackingStore(*((struct VIDMM_GLOBAL **)this + 1), v7, v12);
    if ( (*((_DWORD *)v7 + 8) & 2) != 0 )
    {
      VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 2));
      *((_DWORD *)v7 + 8) &= ~2u;
    }
  }
  if ( !a5 && VIDMM_GLOBAL::DiscardOfferedAllocation(*((VIDMM_GLOBAL **)this + 1), v7) )
  {
    VIDMM_GLOBAL::ResetBackingStore(*((_QWORD *)this + 1), (__int64 *)v7, 1);
    *((_DWORD *)v7 + 8) |= 0x10u;
    *((_QWORD *)v7 + 37) = *(_QWORD *)(*((_QWORD *)this + 1) + 4568LL);
  }
  if ( g_Feature_Largify64KBPrototype )
  {
    v17 = *((_DWORD *)v7 + 6);
    if ( (v17 & 0x20000000) != 0 )
      *((_DWORD *)v7 + 6) = v17 & 0xEFFFFFFF;
  }
  if ( (byte_14008A201 & 0x10) != 0 )
    McTemplateK0ppq_EtwWriteTransfer(
      (unsigned __int16)(*((_WORD *)this + 35) + 1),
      &EventPagingOpSysmemUncommit,
      v14,
      *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
      v7,
      (unsigned __int16)(*((_WORD *)this + 35) + 1));
  return 1;
}
