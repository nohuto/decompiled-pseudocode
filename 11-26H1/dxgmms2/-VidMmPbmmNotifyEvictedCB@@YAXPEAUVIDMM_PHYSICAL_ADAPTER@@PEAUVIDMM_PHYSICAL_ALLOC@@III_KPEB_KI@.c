/*
 * XREFs of ?VidMmPbmmNotifyEvictedCB@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@III_KPEB_KI@Z @ 0x1400B0AB4
 * Callers:
 *     ?PbmmEvictPage@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_PAGE@@_N@Z @ 0x140052EAC (-PbmmEvictPage@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_PAGE@@_N@Z.c)
 * Callees:
 *     ?NotifyResidency2@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@_N2III_KPEB_K@Z @ 0x1400A1848 (-NotifyResidency2@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@_N2II.c)
 */

void __fastcall VidMmPbmmNotifyEvictedCB(
        struct VIDMM_PHYSICAL_ADAPTER *a1,
        struct VIDMM_PHYSICAL_ALLOC *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned __int64 *a7,
        char a8)
{
  unsigned int v8; // r11d
  __int64 v9; // rsi
  int v10; // r10d
  int v11; // eax

  v8 = *((_DWORD *)a2 + 22) - a4;
  v9 = *(_QWORD *)a2;
  v10 = *((_DWORD *)a2 + 23);
  *((_DWORD *)a2 + 22) = v8;
  v11 = *((_DWORD *)a1 + 24);
  if ( _bittest(&v11, a5) )
  {
    v10 -= a4;
    *((_DWORD *)a2 + 23) = v10;
  }
  *((_DWORD *)a2 + 14) = (v10 != v8 ? 0x10 : 0) | (v10 != 0 ? 4 : 0) | *((_DWORD *)a2 + 14) & 0xFFFFFFC0 | (v8 != 0);
  if ( (a8 & 1) != 0 )
    *(_DWORD *)(v9 + 72) = 0;
  VIDMM_GLOBAL::NotifyResidency2(*((VIDMM_GLOBAL **)a1 + 7), a1, (void ***)a2, 0, 1, a3, a4, a5, a6, a7);
}
