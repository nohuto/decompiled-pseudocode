/*
 * XREFs of ?HasOutstandingPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEBA_NXZ @ 0x140008B38
 * Callers:
 *     ?VidSchiPacketBlockedOnWaitCondition@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x14000A3C0 (-VidSchiPacketBlockedOnWaitCondition@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiBlockContextOnPendingFlips @ 0x14002013C (VidSchiBlockContextOnPendingFlips.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x140030D00 (VidSchiCheckConditionDeviceCommand.c)
 *     VidSchSubmitDeviceCommand @ 0x140030D50 (VidSchSubmitDeviceCommand.c)
 *     ?IsDisplayingResourceCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x1400B6970 (-IsDisplayingResourceCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 *     ?IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x1400B69E0 (-IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 *     ?IsNonOverlappingResourceCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x1400B6A20 (-IsNonOverlappingResourceCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 *     ?ReserveOutsideRangeCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@Z @ 0x1400B6FE0 (-ReserveOutsideRangeCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@Z.c)
 *     ?ReserveOutsideRangeNoDisplayingCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@Z @ 0x1400B7130 (-ReserveOutsideRangeNoDisplayingCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEA.c)
 *     ?VidMmProcessAsyncOperation@@YAXPEAX@Z @ 0x1400E3900 (-VidMmProcessAsyncOperation@@YAXPEAX@Z.c)
 *     ?IsAllocationInPresentQueue@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_MULTI_ALLOC@@PEAI@Z @ 0x140119364 (-IsAllocationInPresentQueue@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_MULTI_ALLOC@@PEAI@Z.c)
 *     ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@I@Z @ 0x14011B6B8 (-WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@I@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(VIDMM_GLOBAL_ALLOC_NONPAGED *this)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // r8
  _DWORD *v6; // rcx
  unsigned __int64 v7; // rax

  v1 = *((_QWORD *)this + 4);
  if ( !v1 )
  {
    v2 = *((_QWORD *)this + 3);
    if ( v2 )
      return *(_DWORD *)(v2 + 8) > 0;
    return 0;
  }
  v4 = *(_QWORD *)(v1 + 8);
  v5 = *(_QWORD *)(v1 + 24);
  if ( *(_BYTE *)(v4 + 29) )
    return 0;
  if ( *(_DWORD *)(v4 + 48) == 6 )
  {
    v7 = *(_QWORD *)(*(unsigned int *)(v4 + 80) + *(_QWORD *)(*(_QWORD *)(v4 + 64) + 192LL));
  }
  else
  {
    v6 = *(_DWORD **)(v4 + 72);
    if ( !*(_BYTE *)(v4 + 30) )
      return *v6 - (int)v5 < 0;
    v7 = *(_QWORD *)v6;
  }
  return v7 < v5;
}
