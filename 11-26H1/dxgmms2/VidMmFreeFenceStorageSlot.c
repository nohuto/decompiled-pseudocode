/*
 * XREFs of VidMmFreeFenceStorageSlot @ 0x140036E30
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x14000F5A0 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1400127F0 (VidSchiReleaseSyncObjectReference.c)
 * Callees:
 *     ?FreeSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x140036E7C (-FreeSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@.c)
 *     ?FreeFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x140036F40 (-FreeFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z.c)
 */

void __fastcall VidMmFreeFenceStorageSlot(struct VIDMM_MONITORED_FENCE_STORAGE *a1, char a2)
{
  __int64 v3; // rcx
  VIDMM_PROCESS_FENCE_STORAGE *v4; // rcx

  v3 = *(_QWORD *)a1;
  if ( v3 )
  {
    v4 = *(VIDMM_PROCESS_FENCE_STORAGE **)(v3 + 232);
    if ( a2 || *((_BYTE *)v4 + 128) )
      VIDMM_PROCESS_FENCE_STORAGE::FreeSharedFenceStorageSlot(v4, a1);
    else
      VIDMM_PROCESS_FENCE_STORAGE::FreeFenceStorageSlot(v4, a1);
    *(_QWORD *)a1 = 0LL;
  }
}
