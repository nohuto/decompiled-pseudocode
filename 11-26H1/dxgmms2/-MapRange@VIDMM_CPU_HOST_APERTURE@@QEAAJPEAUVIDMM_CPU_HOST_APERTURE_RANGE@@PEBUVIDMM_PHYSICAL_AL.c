/*
 * XREFs of ?MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@PEBUVIDMM_PHYSICAL_ALLOC@@_K2_N@Z @ 0x14010384C
 * Callers:
 *     AcquireResidentSystemAddressInCpuHostAperture @ 0x1400B10FC (AcquireResidentSystemAddressInCpuHostAperture.c)
 *     MapInCpuHostAperture @ 0x140103194 (MapInCpuHostAperture.c)
 *     ?GetAddressForPageTableInCpuHostAperture@VIDMM_MEMORY_SEGMENT@@QEAAPEAX_KI@Z @ 0x1401036CC (-GetAddressForPageTableInCpuHostAperture@VIDMM_MEMORY_SEGMENT@@QEAAPEAX_KI@Z.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x14012AEC0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140037CC0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DdiMapCpuHostAperture@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_MAPCPUHOSTAPERTURE@@@Z @ 0x14003A594 (-DdiMapCpuHostAperture@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_MAPCPUHOSTAPERTURE@@@Z.c)
 *     McTemplateK0ppqqxQR3_EtwWriteTransfer @ 0x140046A98 (McTemplateK0ppqqxQR3_EtwWriteTransfer.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x140103BD0 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_CPU_HOST_APERTURE::MapRange(
        VIDMM_CPU_HOST_APERTURE *this,
        struct VIDMM_CPU_HOST_APERTURE_RANGE *a2,
        const struct VIDMM_PHYSICAL_ALLOC *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        bool a6)
{
  __int64 v6; // r14
  unsigned __int64 v7; // r11
  UINT32 *v10; // r12
  __int64 v11; // rax
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rbp
  __int64 v14; // r15
  UINT64 *v15; // rsi
  UINT32 v16; // eax
  UINT32 *v17; // r8
  int v18; // r9d
  UINT32 *i; // rdx
  unsigned __int64 v20; // rax
  UINT64 *v21; // rcx
  unsigned __int64 v22; // rdx
  void *v23; // rax
  WORD *v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 result; // rax
  UINT64 *v30; // r14
  __int64 v31; // rax
  _DXGKARG_MAPCPUHOSTAPERTURE v32; // [rsp+50h] [rbp-58h] BYREF
  int v33; // [rsp+B8h] [rbp+10h]

  v6 = 0LL;
  v7 = a4;
  if ( a3 )
    v6 = *(_QWORD *)a3;
  v10 = (UINT32 *)((char *)a2 + 36);
  if ( *((_DWORD *)a2 + 9) != -1 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 44LL, this, a2, 0LL);
    WdLogGlobalForLineNumber = 213;
    goto LABEL_38;
  }
  v11 = *((_QWORD *)this + 6);
  v12 = *(unsigned int *)(v11 + 124);
  v33 = *(_DWORD *)(v11 + 124);
  if ( a6 )
    v13 = (~(unsigned __int64)(unsigned int)(v12 - 1) & (a5
                                                       + a4
                                                       + (unsigned int)(v12 - 1)
                                                       - (a4 & ~(unsigned __int64)(unsigned int)(v12 - 1))))
        / v12;
  else
    LODWORD(v13) = *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * *((unsigned int *)a2 + 8));
  v14 = (unsigned int)v13;
  if ( *((_DWORD *)this + 16) < (unsigned int)v13 )
  {
    v31 = 8LL * (unsigned int)v13;
    if ( !is_mul_ok((unsigned int)v13, 8uLL) )
      v31 = -1LL;
    v15 = (UINT64 *)operator new[](v31, 0x36346956u, 258LL);
    if ( v15 )
    {
      LODWORD(v12) = v33;
      v7 = a4;
      goto LABEL_8;
    }
LABEL_38:
    WdLogSingleEntry0(3LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 827;
    return result;
  }
  v15 = (UINT64 *)*((_QWORD *)this + 7);
LABEL_8:
  v16 = *((_DWORD *)a2 + 7);
  v17 = &v10[(unsigned int)v13];
  v18 = *((_DWORD *)a2 + 8);
  for ( i = v10; i != v17; ++i )
  {
    *i = v16;
    if ( v16 == v18 )
      goto LABEL_11;
LABEL_21:
    v16 = *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * v16);
  }
  if ( !a6 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    v16 = WdLogSingleEntry5(0LL, 270LL, 47LL, this, a2, 0LL);
    WdLogGlobalForLineNumber = 213;
    goto LABEL_21;
  }
LABEL_11:
  v20 = v7 / (unsigned int)v12;
  v21 = v15;
  v22 = v20 + (unsigned int)v13;
  while ( v20 < v22 )
    *v21++ = v20++;
  *(_DWORD *)(&v32.PhysicalAdapterIndex + 1) = 0;
  if ( v6 )
    v23 = *(void **)(*(_QWORD *)(v6 + 368) + 48LL);
  else
    v23 = 0LL;
  v24 = (WORD *)*((_QWORD *)this + 6);
  v32.hAllocation = v23;
  v32.NumberOfPages = (unsigned int)v13;
  v32.pCpuHostAperturePages = v10;
  v32.pMemorySegmentPages = v15;
  v32.SegmentId = v24[32];
  v32.PhysicalAdapterIndex = v24[30];
  v25 = ADAPTER_RENDER::DdiMapCpuHostAperture(*(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)v24 + 24LL) + 3168LL), &v32);
  v28 = *(_QWORD *)this;
  if ( *(VIDMM_CPU_HOST_APERTURE **)(*(_QWORD *)this + 8LL) != this )
    __fastfail(3u);
  *(_QWORD *)a2 = v28;
  *((_QWORD *)a2 + 1) = this;
  *(_QWORD *)(v28 + 8) = a2;
  *(_QWORD *)this = a2;
  if ( v25 < 0 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 45LL, this, v6, &v32);
    WdLogGlobalForLineNumber = 213;
    goto LABEL_40;
  }
  if ( (byte_14008A201 & 0x10) != 0 )
LABEL_40:
    McTemplateK0ppqqxQR3_EtwWriteTransfer(v28, v26, v27, **((_QWORD **)this + 6), *((_QWORD *)a2 + 2));
  if ( *(_QWORD *)(**((_QWORD **)this + 6) + 41200LL) && (_DWORD)v13 )
  {
    v30 = v15;
    do
    {
      VIDMM_GLOBAL::RecordPageMappingHistory(**((_QWORD **)this + 6), v32.SegmentId, *v30++, 1LL, 2, 0LL);
      --v14;
    }
    while ( v14 );
  }
  if ( v15 != *((UINT64 **)this + 7) )
    operator delete(v15);
  *((_DWORD *)a2 + 6) = v13;
  return 0LL;
}
