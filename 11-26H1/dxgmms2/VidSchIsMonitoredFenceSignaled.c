/*
 * XREFs of VidSchIsMonitoredFenceSignaled @ 0x14003B0B8
 * Callers:
 *     ?IsAllocationInUse@VIDMM_GLOBAL@@QEBAEPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400D8388 (-IsAllocationInUse@VIDMM_GLOBAL@@QEBAEPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEBAEPEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400E4CD8 (-IsPagingOperationPending@VIDMM_GLOBAL@@QEBAEPEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z @ 0x1400E72E0 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x140105B64 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall VidSchIsMonitoredFenceSignaled(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // rax
  unsigned __int64 v3; // rax

  if ( *(_BYTE *)(a1 + 29) )
    return 1;
  if ( *(_DWORD *)(a1 + 48) == 6 )
  {
    v3 = *(_QWORD *)(*(unsigned int *)(a1 + 80) + *(_QWORD *)(*(_QWORD *)(a1 + 64) + 192LL));
    return v3 >= a2;
  }
  v2 = *(unsigned __int64 **)(a1 + 72);
  if ( *(_BYTE *)(a1 + 30) )
  {
    v3 = *v2;
    return v3 >= a2;
  }
  return *(_DWORD *)v2 - (int)a2 >= 0;
}
