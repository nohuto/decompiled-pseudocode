/*
 * XREFs of HvpViewMapFreeView @ 0x1408BE3D0
 * Callers:
 *     HvpViewMapShrinkStorage @ 0x140862EC8 (HvpViewMapShrinkStorage.c)
 *     HvpViewMapDeleteViewTreeNode @ 0x1408BE3B0 (HvpViewMapDeleteViewTreeNode.c)
 *     HvpViewMapCreateViewsForRegion @ 0x1408BE958 (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapCreateView @ 0x1408BEC5C (HvpViewMapCreateView.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x1408E37B4 (HvpViewMapPromoteRangeToMapping.c)
 * Callees:
 *     CmSiReleaseProcessLockedPagesCharge @ 0x1403C619C (CmSiReleaseProcessLockedPagesCharge.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     CmSiUnmapViewOfSection @ 0x1404D0360 (CmSiUnmapViewOfSection.c)
 *     HvcallpNoHypervisorPresent @ 0x1404DF730 (HvcallpNoHypervisorPresent.c)
 */

void __fastcall HvpViewMapFreeView(__int64 a1, __int64 a2)
{
  void *v2; // r8
  __int64 v5; // rax
  __int64 v6; // rcx

  v2 = *(void **)(a2 + 56);
  if ( v2 )
  {
    CmSiUnmapViewOfSection(a1, *(HANDLE **)(a1 + 24), v2);
    if ( *(_QWORD *)(a2 + 64) )
    {
      v5 = HvcallpNoHypervisorPresent();
      CmSiReleaseProcessLockedPagesCharge(*(_QWORD *)(a1 + 24), v6 * v5);
    }
  }
  CmSiFreeMemory((PPRIVILEGE_SET)a2);
}
