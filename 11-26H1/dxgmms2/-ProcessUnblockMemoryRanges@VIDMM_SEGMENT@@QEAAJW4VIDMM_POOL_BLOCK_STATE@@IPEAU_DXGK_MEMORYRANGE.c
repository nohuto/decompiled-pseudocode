/*
 * XREFs of ?ProcessUnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x140099728
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D09E8 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?FreeMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1400997B0 (-FreeMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z.c)
 *     ?ReleaseRangeInternal@VIDMM_CPU_HOST_APERTURE@@AEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1401245B4 (-ReleaseRangeInternal@VIDMM_CPU_HOST_APERTURE@@AEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::ProcessUnblockMemoryRanges(
        __int64 a1,
        struct VIDMM_CPU_HOST_APERTURE_RANGE *a2,
        __int64 a3,
        __int64 a4)
{
  char v5; // si
  VIDMM_CPU_HOST_APERTURE *v7; // rbx

  v5 = (char)a2;
  if ( (*(_DWORD *)(a1 + 64) & 0x2000) != 0 && (_BYTE)a2 == 7 )
  {
    a2 = (struct VIDMM_CPU_HOST_APERTURE_RANGE *)(a1 + 184);
    if ( *(_DWORD *)(a1 + 212) != -1 )
    {
      v7 = *(VIDMM_CPU_HOST_APERTURE **)(a1 + 512);
      VIDMM_CPU_HOST_APERTURE::ReleaseRangeInternal(v7, a2);
      *((_DWORD *)v7 + 20) = 0;
      *(_QWORD *)(a1 + 212) = -1LL;
    }
  }
  LOBYTE(a2) = v5;
  return VIDMM_LINEAR_POOL::FreeMemoryBlocks(*(_QWORD *)(a1 + 256), a2, a3, a4);
}
