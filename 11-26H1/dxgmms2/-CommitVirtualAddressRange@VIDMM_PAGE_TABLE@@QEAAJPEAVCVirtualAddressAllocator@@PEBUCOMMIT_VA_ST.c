/*
 * XREFs of ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DC7DC
 * Callers:
 *     ?ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@PEBUCOMMIT_VA_STATE@@_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400AA114 (-ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PA.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DAFA0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DC464 (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@PEBUCOMMIT_VA_STATE@@_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1401257B4 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140037CC0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBA_NXZ @ 0x140039020 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBA_NXZ.c)
 *     Feature_3358814523__private_IsEnabledDeviceUsageNoInline @ 0x14004DC48 (Feature_3358814523__private_IsEnabledDeviceUsageNoInline.c)
 *     ?EnsureResident@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400AA0B4 (-EnsureResident@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_KPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CEC00 (-CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1400D3C74 (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_.c)
 *     ?InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVVIDMM_GLOBAL@@IIPEAUCOMMIT_VA_STATE@@@Z @ 0x1400D4240 (-InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVVIDMM_GLOBAL@@IIPEAUCOMMIT_VA_STATE@@@Z.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@PEBU_DXGK_PTE@@@Z @ 0x1400D5894 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?ModifyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_KPEAE@Z @ 0x1400F8A00 (-ModifyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_KP.c)
 *     ?Convert64K_4K@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K@Z @ 0x140113140 (-Convert64K_4K@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
        void **this,
        struct VIDMM_GLOBAL **a2,
        const struct COMMIT_VA_STATE *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int8 a8,
        struct VIDMM_ALLOC **a9)
{
  struct CVirtualAddressAllocator *v10; // rdi
  __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r13
  unsigned int v15; // r15d
  unsigned int v16; // r12d
  __int64 v17; // rcx
  int v18; // edi
  __int64 v19; // r8
  int v20; // r9d
  struct _DXGK_UPDATEPAGETABLEFLAGS v21; // ebx
  __int64 v22; // rdx
  bool v23; // dl
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned int v30; // r12d
  unsigned int v31; // r13d
  int updated; // eax
  __int64 v33; // rcx
  unsigned int *v34; // rdi
  unsigned int v35; // edi
  unsigned int v36; // edi
  unsigned int v37; // r8d
  __int64 v38; // rax
  struct CVirtualAddressAllocator *v39; // r12
  int v40; // eax
  int v41; // eax
  int v42; // eax
  unsigned __int64 v44; // [rsp+50h] [rbp-48h]
  struct VIDMM_GLOBAL *v45; // [rsp+58h] [rbp-40h]
  __int64 v46; // [rsp+A0h] [rbp+8h]
  unsigned __int64 v49; // [rsp+C0h] [rbp+28h]
  unsigned __int64 v50; // [rsp+C8h] [rbp+30h]
  unsigned __int64 v51; // [rsp+D0h] [rbp+38h]
  unsigned int v52; // [rsp+E0h] [rbp+48h]

  v10 = (struct CVirtualAddressAllocator *)a2;
  v51 = a7 >> 12;
  *a9 = 0LL;
  v45 = a2[12];
  v12 = *(_DWORD *)this & 7;
  v13 = a5 >> 12;
  v14 = (a5 >> 12) + a6;
  v50 = *(_QWORD *)(*((_QWORD *)v45 + 5040) + 8LL * ((*(_DWORD *)this >> 8) & 0x1F));
  v49 = (a5 >> 12) & ~*(_QWORD *)(v50 + 48 * (v12 + 5));
  v46 = *(_QWORD *)(v50 + 48 * v12 + 248);
  v15 = v13 & *(_DWORD *)(v50 + 196);
  v44 = v49 & ~*(_QWORD *)(v50 + 48 * v12 + 224);
  v16 = *(_DWORD *)(v50 + 196) & (v14 - 1);
  if ( v14 <= v13 )
  {
    WdLogSingleEntry2(1LL, v14, v13);
    WdLogGlobalForLineNumber = 6208;
    DxgkLogInternalTriageEvent(v17, 0x40000LL);
    return (unsigned int)-1073741811;
  }
  if ( (unsigned int)Feature_3358814523__private_IsEnabledDeviceUsageNoInline() )
  {
    v18 = VIDMM_PAGE_TABLE::EnsureResident((VIDMM_PAGE_TABLE *)this, v10, v19, a9);
    if ( v18 < 0 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 6222;
      return (unsigned int)v18;
    }
  }
  else
  {
    if ( VIDMM_PAGE_TABLE_BASE::IsResident((VIDMM_PAGE_TABLE_BASE *)this) )
      goto LABEL_11;
    v18 = VIDMM_PAGE_TABLE::CommitPageTable((VIDMM_PAGE_TABLE *)this, v10, a9);
    if ( v18 < 0 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 6236;
      return (unsigned int)v18;
    }
    *(_DWORD *)this &= ~0x20000u;
  }
  v10 = (struct CVirtualAddressAllocator *)a2;
LABEL_11:
  v20 = *(_DWORD *)this;
  v21 = 0;
  if ( (*(_DWORD *)this & 0x20000) == 0 )
    v21 = (struct _DXGK_UPDATEPAGETABLEFLAGS)2;
  v22 = 1LL;
  if ( (v20 & 0x20000) != 0 )
    v22 = a8;
  v52 = v22;
  if ( *((_BYTE *)a3 + 78) )
    goto LABEL_34;
  if ( *((_BYTE *)a3 + 76) )
  {
    v23 = 0;
    if ( (v20 & 0x80u) == 0 )
      v23 = *((_DWORD *)this + 1) == 0;
    if ( v23 && (v20 & 0x40) == 0 )
    {
      operator delete(this[5]);
      v24 = 16LL * *(unsigned int *)(v50 + 204);
      if ( !is_mul_ok(*(unsigned int *)(v50 + 204), 0x10uLL) )
        v24 = -1LL;
      v25 = operator new[](v24, 0x34356956u, 256LL);
      this[5] = (void *)v25;
      if ( !v25 )
      {
        _InterlockedAdd(&dword_14008A840, 1u);
        WdLogSingleEntry0(6LL);
        v27 = 6274;
LABEL_25:
        WdLogGlobalForLineNumber = v27;
        DxgkLogInternalTriageEvent(v26, 262145LL);
        return (unsigned int)-1073741801;
      }
      v28 = 16LL * *(unsigned int *)(v50 + 204);
      if ( !is_mul_ok(*(unsigned int *)(v50 + 204), 0x10uLL) )
        v28 = -1LL;
      v29 = operator new[](v28, 0x34356956u, 256LL);
      this[6] = (void *)v29;
      if ( !v29 )
      {
        _InterlockedAdd(&dword_14008A844, 1u);
        WdLogSingleEntry0(6LL);
        v27 = 6285;
        goto LABEL_25;
      }
      *(_DWORD *)this |= 0x40u;
    }
    goto LABEL_33;
  }
  if ( (v20 & 0x40) != 0 )
  {
    v18 = VIDMM_PAGE_TABLE::Convert64K_4K((VIDMM_PAGE_TABLE *)this, v10, a3, v44);
    if ( v18 < 0 )
      return (unsigned int)v18;
LABEL_33:
    v22 = v52;
  }
LABEL_34:
  if ( (*(_DWORD *)this & 0x40) != 0 || *((_BYTE *)a3 + 77) && *((_BYTE *)a3 + 76) )
  {
    v21 = (struct _DXGK_UPDATEPAGETABLEFLAGS)(*(_DWORD *)&v21 | 8);
    if ( (*(_DWORD *)this & 0x40) != 0 )
    {
      v49 &= 0xFFFFFFFFFFFFFFF0uLL;
      v15 >>= 4;
      v16 >>= 4;
      v46 *= 16LL;
    }
  }
  v30 = v16 + 1;
  v31 = v30 - v15;
  if ( !(_BYTE)v22 )
    goto LABEL_50;
  if ( v15 )
  {
    VIDMM_PAGE_TABLE::InvalidatePageTable((VIDMM_PAGE_TABLE *)this, v45, 0, v15, a3);
    updated = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
                (VIDMM_PAGE_TABLE *)this,
                (struct CVirtualAddressAllocator *)a2,
                0,
                v15,
                v44,
                v21,
                0LL);
    v18 = updated;
    if ( updated < 0 )
    {
      WdLogSingleEntry1(1LL, updated);
      WdLogGlobalForLineNumber = 6347;
LABEL_43:
      DxgkLogInternalTriageEvent(v33, 0x40000LL);
      return (unsigned int)v18;
    }
  }
  v34 = (unsigned int *)((*(_DWORD *)this & 0x40) != 0 ? v50 + 204 : v50 + 200);
  v35 = *v34;
  if ( v30 < v35 )
  {
    v36 = v35 - v30;
    VIDMM_PAGE_TABLE::InvalidatePageTable((VIDMM_PAGE_TABLE *)this, v45, v30, v36, a3);
    v37 = v30;
    v38 = v46 * v30;
    v39 = (struct CVirtualAddressAllocator *)a2;
    v40 = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
            (VIDMM_PAGE_TABLE *)this,
            (struct CVirtualAddressAllocator *)a2,
            v37,
            v36,
            v44 + v38,
            v21,
            0LL);
    v18 = v40;
    if ( v40 < 0 )
    {
      WdLogSingleEntry1(1LL, v40);
      WdLogGlobalForLineNumber = 6365;
      goto LABEL_43;
    }
  }
  else
  {
LABEL_50:
    v39 = (struct CVirtualAddressAllocator *)a2;
  }
  v41 = *((_DWORD *)a3 + 18);
  if ( v41 == -1 || v41 == -3 )
  {
    VIDMM_PAGE_TABLE::InvalidatePageTable((VIDMM_PAGE_TABLE *)this, v45, v15, v31, a3);
    v42 = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate((VIDMM_PAGE_TABLE *)this, v39, v15, v31, v49, v21, 0LL);
  }
  else
  {
    VIDMM_PAGE_TABLE::ModifyPageTable(
      (VIDMM_PAGE_TABLE *)this,
      (struct CVirtualAddressAllocator *)v22,
      a3,
      v15,
      v31,
      v51,
      (unsigned __int8 *)a3 + 84);
    v42 = VIDMM_PAGE_TABLE::UpdatePageTable(
            (VIDMM_PAGE_TABLE_BASE *)this,
            (VIDMM_GLOBAL **)v39,
            (__int64)a3,
            *((struct VIDMM_GLOBAL_ALLOC ****)a3 + 6),
            a4,
            *((_DWORD *)a3 + 14),
            v15,
            v31,
            v49,
            v21);
  }
  v18 = v42;
  if ( v42 >= 0 )
  {
    *(_DWORD *)this |= 0x20000u;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 6405;
  }
  return (unsigned int)v18;
}
