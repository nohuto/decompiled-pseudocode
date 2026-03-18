/*
 * XREFs of ?VidMmPbmmSubtractResidentBytesCB@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@II@Z @ 0x1400B0D1C
 * Callers:
 *     ?PbmmDecrementResidentPfns@@YAXPEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_SEGMENT@@W4PBMM_PAGE_SIZE@@2I@Z @ 0x140052A58 (-PbmmDecrementResidentPfns@@YAXPEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_SEGMENT@@W4PBMM_PAGE_SIZE@@2I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VidMmPbmmSubtractResidentBytesCB(
        struct VIDMM_PHYSICAL_ADAPTER *a1,
        struct VIDMM_PHYSICAL_ALLOC *a2,
        unsigned int a3,
        unsigned int a4)
{
  int v4; // eax
  unsigned __int64 v5; // r10
  __int64 v6; // rdx
  __int64 v7; // rax

  v4 = *((_DWORD *)a1 + 24);
  v5 = (unsigned __int64)a4 << 12;
  if ( _bittest(&v4, a3) )
    *(_QWORD *)(**(_QWORD **)(*(_QWORD *)a2 + 328LL) + 64LL) -= v5;
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 219) + 8LL * a3);
  v7 = v6 + 96;
  if ( !v6 )
    v7 = 88LL;
  *(_QWORD *)v7 -= v5;
}
