/*
 * XREFs of ?PbmmEvictPage@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_PAGE@@_N@Z @ 0x140052EAC
 * Callers:
 *     ?PbmmFreeResources@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@_N@Z @ 0x14004BF48 (-PbmmFreeResources@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@_N@Z.c)
 *     EvictOnePage @ 0x140051444 (EvictOnePage.c)
 * Callees:
 *     ?VidMmPbmmDiscardMemoryCB@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@III_K@Z @ 0x1400B0910 (-VidMmPbmmDiscardMemoryCB@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@III_K@Z.c)
 *     ?VidMmPbmmNotifyEvictedCB@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@III_KPEB_KI@Z @ 0x1400B0AB4 (-VidMmPbmmNotifyEvictedCB@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@III_KPEB_KI@.c)
 *     ?VidMmPbmmTransferMemoryCB@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@III_KI2@Z @ 0x1400B0D6C (-VidMmPbmmTransferMemoryCB@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@III_KI2@Z.c)
 *     ?VidMmPbmmUnlockPagesCB@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@IIPEB_K@Z @ 0x1400B0F18 (-VidMmPbmmUnlockPagesCB@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@IIPEB_K@Z.c)
 */

void __fastcall PbmmEvictPage(
        struct VIDMM_PHYSICAL_ADAPTER **a1,
        struct PBMM_PHYSICAL_ALLOC *a2,
        struct PBMM_PAGE *a3,
        char a4)
{
  unsigned __int64 v8; // rbx
  const unsigned __int64 *v9; // r8
  unsigned int v10; // edi
  unsigned __int64 v11; // rcx
  int v12; // edx
  char v13; // r9
  char v14; // cl
  struct VIDMM_PHYSICAL_ADAPTER *v15; // rcx
  struct VIDMM_PHYSICAL_ALLOC *v16; // rdx
  unsigned int v17; // r8d
  unsigned int v18; // eax
  struct VIDMM_PHYSICAL_ADAPTER *v19; // rcx
  unsigned __int64 *v20; // [rsp+20h] [rbp-38h]

  v8 = 0LL;
  v9 = 0LL;
  v10 = 1 << ((*((_DWORD *)a3 + 16) >> 3) & 0xF);
  v11 = *((unsigned int *)a3 + 17);
  if ( (v11 & 0x1F) != 0 )
    v8 = **((_QWORD **)a3 + 6) + ((v11 >> 5) & 0x7FFF);
  else
    v9 = (const unsigned __int64 *)*((_QWORD *)a3 + 6);
  v12 = *((_DWORD *)a2 + 17);
  v13 = 2;
  if ( v12 != v10 )
    v13 = 0;
  v14 = v13 | 1;
  if ( v12 != *((_DWORD *)a2 + 15) )
    v14 = v13;
  VidMmPbmmNotifyEvictedCB(
    *a1,
    *((struct VIDMM_PHYSICAL_ALLOC **)a2 + 6),
    (*((_DWORD *)a3 + 16) >> 11) & 0xFFFFF,
    v10,
    *((_DWORD *)a3 + 17) & 0x1F,
    v8,
    v9,
    v14);
  v16 = (struct VIDMM_PHYSICAL_ALLOC *)*((_QWORD *)a2 + 6);
  v17 = (*((_DWORD *)a3 + 16) >> 11) & 0xFFFFF;
  v18 = *((_DWORD *)a3 + 17) & 0x1F;
  if ( v18 )
  {
    v19 = *a1;
    if ( a4 )
      VidMmPbmmTransferMemoryCB(v19, v16, v17, v10, v18, v8, 0, 0LL);
    else
      VidMmPbmmDiscardMemoryCB(v19, v16, v17, v10, v18, v8);
  }
  else
  {
    VidMmPbmmUnlockPagesCB(v15, v16, v17, v10, v20);
    *((_QWORD *)a3 + 6) = 0LL;
  }
}
