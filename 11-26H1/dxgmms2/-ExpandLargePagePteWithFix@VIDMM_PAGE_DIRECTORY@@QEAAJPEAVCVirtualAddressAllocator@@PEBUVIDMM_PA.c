/*
 * XREFs of ?ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@PEBUCOMMIT_VA_STATE@@_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400AA114
 * Callers:
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@PEBUCOMMIT_VA_STATE@@_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1401257B4 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x140037EF8 (-GetVidMmGlobalAllocFromOwner@@YAPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?EnsureResident@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400AA0B4 (-EnsureResident@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_KPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1400D4590 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z @ 0x1400DC714 (-SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DC7DC (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1400DDDD8 (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::ExpandLargePagePteWithFix(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        const struct VIDMM_PAGE_TABLE_LEVEL_DESC *a3,
        const struct COMMIT_VA_STATE *a4,
        unsigned __int64 a5,
        unsigned int a6,
        struct VIDMM_ALLOC **a7)
{
  bool v10; // zf
  unsigned __int8 v11; // r9
  VIDMM_PAGE_TABLE *PageTable; // rax
  __int64 v13; // r8
  VIDMM_PAGE_TABLE *v14; // r15
  __int64 v15; // rcx
  int v16; // edi
  __int64 v17; // r12
  __int64 v18; // rdi
  _QWORD *v19; // rdx
  __int64 v20; // r9
  __int64 v21; // r13
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r8
  _QWORD *VidMmGlobalAllocFromOwner; // rax
  unsigned __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  unsigned int v28; // r8d
  _QWORD v30[18]; // [rsp+58h] [rbp-51h] BYREF
  struct VIDMM_ALLOC *v31; // [rsp+F8h] [rbp+4Fh] BYREF
  const struct VIDMM_PAGE_TABLE_LEVEL_DESC *v32; // [rsp+108h] [rbp+5Fh]
  const struct COMMIT_VA_STATE *v33; // [rsp+110h] [rbp+67h]

  v33 = a4;
  v32 = a3;
  ++*((_DWORD *)this + 1);
  v31 = 0LL;
  if ( (*(_DWORD *)this & 0x40) == 0 || (v10 = *((_BYTE *)a4 + 78) == 0, v11 = 1, v10) )
    v11 = 0;
  PageTable = CreatePageTable(a2, (*(_DWORD *)this >> 8) & 0x1F, (*(_DWORD *)this & 0x40) != 0, v11);
  v14 = PageTable;
  if ( !PageTable )
  {
    _InterlockedIncrement(&dword_14008A838);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 6728;
    DxgkLogInternalTriageEvent(v15, 262145LL);
    v16 = -1073741801;
    goto LABEL_14;
  }
  v16 = VIDMM_PAGE_TABLE::EnsureResident(PageTable, a2, v13, &v31);
  if ( v16 >= 0 )
  {
    v17 = 8LL * a6;
    v18 = *(_QWORD *)(v17 + *((_QWORD *)this + 7));
    if ( v18 )
    {
      memset(v30, 0, 0x60uLL);
      v19 = *(_QWORD **)v18;
      v20 = *((_QWORD *)this + 6);
      v21 = 16LL * a6;
      LODWORD(v30[7]) = *(_DWORD *)(v18 + 8);
      v30[6] = v19;
      v22 = *(_QWORD *)(v20 + v21);
      v23 = v22 >> 5;
      v30[0] = v22 & 0xFFFFFFFFFFFFFBFFuLL;
      v30[2] = *(_QWORD *)(v18 + 16);
      BYTE6(v30[9]) = *((_BYTE *)a4 + 78);
      LOBYTE(v22) = (*(_DWORD *)this & 0x40) != 0;
      LODWORD(v30[9]) = v23 & 0x1F;
      BYTE4(v30[9]) = v22;
      BYTE5(v30[9]) = *((_BYTE *)v33 + 77);
      VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(v30[7], v19);
      v27 = v26 + v21;
      if ( VidMmGlobalAllocFromOwner )
        v25 = (*(_QWORD *)(v27 + 8) << 12) - *(_QWORD *)(*VidMmGlobalAllocFromOwner + 72LL);
      v16 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
              v14,
              a2,
              (const struct COMMIT_VA_STATE *)v30,
              v25,
              a5,
              *((_QWORD *)v32 + 5),
              *(_QWORD *)(v27 + 8) << 12,
              0,
              &v31);
      if ( v16 < 0 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 6801;
        goto LABEL_13;
      }
      ExFreeToPagedLookasideList(
        (PPAGED_LOOKASIDE_LIST)(*((_QWORD *)a2 + 12) + 40384LL),
        *(PVOID *)(v17 + *((_QWORD *)this + 7)));
      *(_QWORD *)(v17 + *((_QWORD *)this + 7)) = 0LL;
      *(_QWORD *)(*((_QWORD *)this + 6) + v21) &= ~0x400uLL;
    }
    v28 = a6;
    *(_QWORD *)(v17 + *((_QWORD *)this + 7)) = v14;
    VIDMM_PAGE_DIRECTORY::SetPageTableInPde(this, a2, v28);
    v16 = 0;
    goto LABEL_18;
  }
  WdLogSingleEntry0(3LL);
  WdLogGlobalForLineNumber = 6744;
LABEL_13:
  VIDMM_PAGE_TABLE::DestroyPageTable(v14, a2, a5);
LABEL_14:
  if ( v31 )
    *a7 = (struct VIDMM_ALLOC *)*((_QWORD *)this + 4);
LABEL_18:
  --*((_DWORD *)this + 1);
  return (unsigned int)v16;
}
