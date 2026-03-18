/*
 * XREFs of ?VidMmPbmmNotifyResidentCB@@YAJPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@III_KPEB_KI@Z @ 0x1400B0B90
 * Callers:
 *     ?PbmmMakePageResident@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_PAGE@@@Z @ 0x140052FE4 (-PbmmMakePageResident@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_PAGE@@@Z.c)
 * Callees:
 *     ?NotifyResidency2@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@_N2III_KPEB_K@Z @ 0x1400A1848 (-NotifyResidency2@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@_N2II.c)
 */

__int64 __fastcall VidMmPbmmNotifyResidentCB(
        VIDMM_GLOBAL **a1,
        void ***a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned __int64 *a7,
        char a8)
{
  void **v9; // rbp
  unsigned int v12; // r11d
  int v13; // eax
  int v14; // edx
  int v15; // r9d
  void **v16; // r8
  int v17; // ecx
  unsigned int v18; // r10d
  int v19; // ecx
  unsigned int v20; // r10d
  unsigned int v21; // r10d

  v9 = *a2;
  VIDMM_GLOBAL::NotifyResidency2(a1[7], (struct VIDMM_PHYSICAL_ADAPTER *)a1, a2, 1u, 1, a3, a4, a5, a6, a7);
  v12 = a4 + *((_DWORD *)a2 + 22);
  *((_DWORD *)a2 + 22) = v12;
  v13 = *((_DWORD *)a1 + 24);
  if ( _bittest(&v13, a5) )
    *((_DWORD *)a2 + 23) += a4;
  v14 = *((_DWORD *)a2 + 23);
  v15 = 0;
  v16 = a2[2];
  v17 = 0;
  if ( (void **)((unsigned __int64)v12 << 12) == v16 )
    v17 = 2;
  v18 = v17 | (v14 != v12 ? 0x10 : 0) | (_DWORD)a2[7] & 0xFFFFFFE9 | (v14 != 0 ? 4 : 0);
  v19 = 0;
  v20 = v18 & 0xFFFFFFF7;
  if ( (void **)((unsigned __int64)*((unsigned int *)a2 + 23) << 12) == v16 )
    v19 = 8;
  v21 = (v19 | v20) & 0xFFFFFFDF;
  if ( (void **)((v12 - v14) << 12) == v16 )
    v15 = 32;
  *((_DWORD *)a2 + 14) = v15 | v21 | 1;
  if ( (a8 & 1) != 0 )
  {
    *((_DWORD *)v9 + 18) = 2;
    *((_BYTE *)v9 + 42) = 1;
  }
  return 0LL;
}
