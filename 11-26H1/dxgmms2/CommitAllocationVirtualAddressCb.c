/*
 * XREFs of CommitAllocationVirtualAddressCb @ 0x14003B630
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z @ 0x1400CB2A0 (-VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z.c)
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400D8DB4 (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400DA3C8 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 */

__int64 __fastcall CommitAllocationVirtualAddressCb(
        struct VIDMM_PHYSICAL_ADAPTER *a1,
        struct VIDMM_PHYSICAL_ALLOC *a2,
        const struct VIDMM_ITERATE_PHYSICAL_MEMORY_RANGE_DESC *a3,
        _QWORD *a4)
{
  __int64 v4; // rax
  __int64 v6; // rbx
  __int64 v8; // rcx
  __int64 v10; // r15
  __int64 v12; // r11
  __int64 v13; // rax
  __int64 v14; // r9
  int v15; // eax
  unsigned __int64 LogicalAddress; // rax
  __int64 v17; // rbx
  __int64 v18; // r8
  int v19; // esi
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int128 v23; // [rsp+60h] [rbp-28h] BYREF
  char v24; // [rsp+90h] [rbp+8h] BYREF

  v4 = *((_QWORD *)a1 + 219);
  v6 = *((unsigned __int16 *)a3 + 8);
  v8 = *(_QWORD *)a2;
  v10 = *a4;
  v12 = *(_QWORD *)(v4 + 8 * v6);
  v13 = v12 + 72;
  if ( !v12 )
    v13 = 64LL;
  v14 = *(unsigned __int16 *)v13;
  v15 = *((_DWORD *)a1 + 24);
  v23 = 0LL;
  if ( _bittest(&v15, v6) )
  {
    LogicalAddress = VidMmiGetLogicalAddress(*(void **)(v8 + 344), *((unsigned int *)a3 + 2));
    VidMmiInitializeAdlForPfnArray(
      (struct _DXGK_ADL *)&v23,
      *(const unsigned __int64 **)a3,
      *((_DWORD *)a3 + 3),
      LogicalAddress);
    v14 = 0LL;
  }
  else
  {
    LODWORD(v23) = *((_DWORD *)a3 + 3);
    *((_QWORD *)&v23 + 1) = *(_QWORD *)a3;
    DWORD1(v23) = 1;
  }
  v17 = a4[1];
  v18 = *((unsigned __int16 *)a1 + 36);
  v24 = 0;
  v19 = CVirtualAddressAllocator::CommitVirtualAddressRange(
          v10,
          v17,
          v18,
          v14,
          *(_QWORD *)(v17 + 80),
          &v23,
          2,
          a4 + 2,
          &v24,
          0,
          0LL);
  if ( v19 < 0 )
  {
    WdLogSingleEntry4(3LL, *(_QWORD *)(v17 + 104), *(_QWORD *)(v17 + 112), a2, *(_QWORD *)(v17 + 80));
    WdLogGlobalForLineNumber = 491;
    if ( v19 == -1073741267 )
      *((_BYTE *)a4 + 24) = 1;
    return (unsigned int)v19;
  }
  else
  {
    if ( v24 )
    {
      v20 = a4[5];
      *((_DWORD *)a4 + 8) |= 1 << (((unsigned __int64)*(unsigned int *)(v17 + 72) >> 4) & 0x3F);
      if ( v20 >= *(_QWORD *)(v17 + 104) )
        v20 = *(_QWORD *)(v17 + 104);
      a4[5] = v20;
      v21 = a4[6];
      if ( v21 <= *(_QWORD *)(v17 + 112) )
        v21 = *(_QWORD *)(v17 + 112);
      a4[6] = v21;
    }
    return 0LL;
  }
}
