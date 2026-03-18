/*
 * XREFs of ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@PEBUCOMMIT_VA_STATE@@_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1401257B4
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DAFA0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x140037EF8 (-GetVidMmGlobalAllocFromOwner@@YAPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     Feature_3358814523__private_IsEnabledDeviceUsageNoInline @ 0x14004DC48 (Feature_3358814523__private_IsEnabledDeviceUsageNoInline.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@PEBUCOMMIT_VA_STATE@@_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400AA114 (-ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PA.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1400D4590 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z @ 0x1400DC714 (-SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DC7DC (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1400DDDD8 (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::ExpandLargePagePte(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        const struct VIDMM_PAGE_TABLE_LEVEL_DESC *a3,
        const struct COMMIT_VA_STATE *a4,
        unsigned __int64 a5,
        unsigned int a6,
        struct VIDMM_ALLOC **a7)
{
  char v12; // r14
  __int64 v13; // rbx
  _QWORD *v14; // rdx
  __int64 v15; // r11
  __int64 v16; // r15
  int v17; // r9d
  unsigned __int64 v18; // rcx
  unsigned __int8 v19; // bl
  char v20; // al
  unsigned __int64 v21; // rbp
  _QWORD *VidMmGlobalAllocFromOwner; // rax
  char v23; // r9
  char v24; // r10^1
  __int64 v25; // r11
  unsigned __int8 v26; // r9
  struct VIDMM_PAGE_TABLE *PageTable; // rbx
  __int64 v28; // rcx
  int v29; // ebp
  struct VIDMM_ALLOC *v30; // rcx
  __int64 v31; // [rsp+50h] [rbp-98h]
  _QWORD v32[12]; // [rsp+60h] [rbp-88h] BYREF

  if ( (unsigned int)Feature_3358814523__private_IsEnabledDeviceUsageNoInline() )
    return VIDMM_PAGE_DIRECTORY::ExpandLargePagePteWithFix(this, a2, a3, a4, a5, a6, a7);
  v12 = *((_BYTE *)a4 + 78);
  v13 = *(_QWORD *)(8LL * a6 + *((_QWORD *)this + 7));
  v31 = 8LL * a6;
  memset(v32, 0, sizeof(v32));
  v14 = *(_QWORD **)v13;
  v15 = *((_QWORD *)this + 6);
  v16 = 16LL * a6;
  v17 = *(_DWORD *)this >> 6;
  LODWORD(v32[7]) = *(_DWORD *)(v13 + 8);
  v32[6] = v14;
  v18 = *(_QWORD *)(v15 + v16);
  BYTE6(v32[9]) = v12;
  v32[0] = v18 & 0xFFFFFFFFFFFFFBFFuLL;
  v32[2] = *(_QWORD *)(v13 + 16);
  v19 = v17 & 1;
  v20 = *((_BYTE *)a4 + 77);
  v21 = 0LL;
  LODWORD(v32[9]) = (v18 >> 5) & 0x1F;
  BYTE5(v32[9]) = v20;
  BYTE4(v32[9]) = v17 & 1;
  VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(v32[7], v14);
  if ( VidMmGlobalAllocFromOwner )
    v21 = (*(_QWORD *)(v25 + v16 + 8) << 12) - *(_QWORD *)(*VidMmGlobalAllocFromOwner + 72LL);
  if ( (v23 & 1) == 0 || (v26 = 1, v12) )
    v26 = 0;
  PageTable = CreatePageTable(a2, v24 & 0x1F, v19, v26);
  if ( PageTable )
  {
    v29 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
            (void **)PageTable,
            (struct VIDMM_GLOBAL **)a2,
            (const struct COMMIT_VA_STATE *)v32,
            v21,
            a5,
            *((_QWORD *)a3 + 5),
            *(_QWORD *)(v16 + *((_QWORD *)this + 6) + 8) << 12,
            0,
            a7);
    if ( v29 >= 0 )
    {
      ExFreeToPagedLookasideList(
        (PPAGED_LOOKASIDE_LIST)(*((_QWORD *)a2 + 12) + 40384LL),
        *(PVOID *)(v31 + *((_QWORD *)this + 7)));
      *(_QWORD *)(v31 + *((_QWORD *)this + 7)) = 0LL;
      *(_QWORD *)(v31 + *((_QWORD *)this + 7)) = PageTable;
      *(_QWORD *)(v16 + *((_QWORD *)this + 6)) &= ~0x400uLL;
      VIDMM_PAGE_DIRECTORY::SetPageTableInPde(this, a2, a6);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry0(3LL);
      v30 = (struct VIDMM_ALLOC *)*((_QWORD *)PageTable + 4);
      WdLogGlobalForLineNumber = 6675;
      if ( *a7 == v30 )
        *a7 = (struct VIDMM_ALLOC *)*((_QWORD *)this + 4);
      VIDMM_PAGE_TABLE::DestroyPageTable((struct VIDMM_GLOBAL_ALLOC **)PageTable, a2, a5);
      return (unsigned int)v29;
    }
  }
  else
  {
    _InterlockedIncrement(&dword_14008A838);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 6656;
    DxgkLogInternalTriageEvent(v28, 262145LL);
    return 3221225495LL;
  }
}
