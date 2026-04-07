/*
 * XREFs of ??$_Destroy_range@V?$allocator@ULivePreviewResource@@@std@@@std@@YAXPEAULivePreviewResource@@QEAU1@AEAV?$allocator@ULivePreviewResource@@@0@@Z @ 0x1800B8D50
 * Callers:
 *     ??$_Uninitialized_move@PEAULivePreviewResource@@V?$allocator@ULivePreviewResource@@@std@@@std@@YAPEAULivePreviewResource@@QEAU1@0PEAU1@AEAV?$allocator@ULivePreviewResource@@@0@@Z @ 0x1800B8F00 (--$_Uninitialized_move@PEAULivePreviewResource@@V-$allocator@ULivePreviewResource@@@std@@@std@@Y.c)
 *     ??1CLivePreview@@MEAA@XZ @ 0x1800B902C (--1CLivePreview@@MEAA@XZ.c)
 *     ??1_Reallocation_guard@?$vector@ULivePreviewResource@@V?$allocator@ULivePreviewResource@@@std@@@std@@QEAA@XZ @ 0x1800B9268 (--1_Reallocation_guard@-$vector@ULivePreviewResource@@V-$allocator@ULivePreviewResource@@@std@@@.c)
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x1800B9460 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 *     ?_Change_array@?$vector@ULivePreviewResource@@V?$allocator@ULivePreviewResource@@@std@@@std@@AEAAXQEAULivePreviewResource@@_K1@Z @ 0x1800B96A0 (-_Change_array@-$vector@ULivePreviewResource@@V-$allocator@ULivePreviewResource@@@std@@@std@@AEA.c)
 * Callees:
 *     ??1LivePreviewResource@@QEAA@XZ @ 0x1800B920C (--1LivePreviewResource@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<LivePreviewResource>>(
        LivePreviewResource *this,
        LivePreviewResource *a2)
{
  LivePreviewResource *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      LivePreviewResource::~LivePreviewResource(v3);
      v3 = (LivePreviewResource *)((char *)v3 + 96);
    }
    while ( v3 != a2 );
  }
}
