/*
 * XREFs of ?PbmmMakePageResident@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_PAGE@@@Z @ 0x140052FE4
 * Callers:
 *     CommitResources @ 0x1400510F4 (CommitResources.c)
 * Callees:
 *     ?VidMmPbmmFillMemoryCB@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@III_KI@Z @ 0x1400B0960 (-VidMmPbmmFillMemoryCB@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@III_KI@Z.c)
 *     ?VidMmPbmmHasContentCB@@YA_NPEBUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400B09E4 (-VidMmPbmmHasContentCB@@YA_NPEBUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?VidMmPbmmLockPagesCB@@YAPEB_KPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@II@Z @ 0x1400B09F8 (-VidMmPbmmLockPagesCB@@YAPEB_KPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@II@Z.c)
 *     ?VidMmPbmmNotifyResidentCB@@YAJPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@III_KPEB_KI@Z @ 0x1400B0B90 (-VidMmPbmmNotifyResidentCB@@YAJPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@III_KPEB_KI.c)
 *     ?VidMmPbmmTransferMemoryCB@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@III_KI2@Z @ 0x1400B0D6C (-VidMmPbmmTransferMemoryCB@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@III_KI2@Z.c)
 */

__int64 __fastcall PbmmMakePageResident(
        struct VIDMM_PHYSICAL_ADAPTER **a1,
        const struct VIDMM_PHYSICAL_ALLOC **a2,
        struct PBMM_PAGE *a3)
{
  _DWORD *v4; // rbx
  const unsigned __int64 *v5; // rdi
  VIDMM_GLOBAL *v8; // rbp
  unsigned int v9; // r14d
  const unsigned __int64 *v10; // rax
  unsigned int v12; // edx
  struct VIDMM_PHYSICAL_ALLOC *v13; // rcx
  unsigned int v14; // r8d
  struct VIDMM_PHYSICAL_ADAPTER *v15; // r10
  unsigned int v16; // edx
  unsigned int v17; // [rsp+30h] [rbp-28h]

  v4 = (_DWORD *)((char *)a3 + 8);
  v5 = 0LL;
  v8 = 0LL;
  v9 = 1 << ((*((_DWORD *)a3 + 16) >> 3) & 0xF);
  if ( (*((_DWORD *)a3 + 17) & 0x1F) != 0 )
  {
    v8 = (VIDMM_GLOBAL *)(**((_QWORD **)a3 + 6) + (((unsigned __int64)*((unsigned int *)a3 + 17) >> 5) & 0x7FFF));
    if ( (*v4 & 0x100000) == 0 )
    {
      if ( VidMmPbmmHasContentCB(a2[6]) )
        VidMmPbmmTransferMemoryCB(v15, v13, v14, v9, 0, 0LL, v12, v8);
      else
        VidMmPbmmFillMemoryCB(v15, v13, v14, v9, v12, (unsigned __int64)v8, v17);
      *v4 |= 0x100000u;
    }
  }
  else
  {
    v10 = (const unsigned __int64 *)*((_QWORD *)a3 + 6);
    if ( !v10 )
    {
      v10 = VidMmPbmmLockPagesCB(*a1, a2[6], *v4 & 0xFFFFF, v9);
      *((_QWORD *)a3 + 6) = v10;
      if ( !v10 )
        return 3221225495LL;
    }
    v5 = v10;
  }
  v16 = (*((_DWORD *)a2 + 17) == 0 ? 2 : 0) | 1;
  if ( v9 + *((_DWORD *)a2 + 17) != *((_DWORD *)a2 + 15) )
    v16 = *((_DWORD *)a2 + 17) == 0 ? 2 : 0;
  return VidMmPbmmNotifyResidentCB(
           *a1,
           a2[6],
           *v4 & 0xFFFFF,
           v9,
           *((_DWORD *)a3 + 17) & 0x1F,
           (unsigned __int64)v8,
           v5,
           v16);
}
