/*
 * XREFs of ??0LivePreviewResource@@QEAA@AEBU0@@Z @ 0x1800B8FB0
 * Callers:
 *     ??$_Emplace_reallocate@ULivePreviewResource@@@?$vector@ULivePreviewResource@@V?$allocator@ULivePreviewResource@@@std@@@std@@AEAAPEAULivePreviewResource@@QEAU2@$$QEAU2@@Z @ 0x1800B8D88 (--$_Emplace_reallocate@ULivePreviewResource@@@-$vector@ULivePreviewResource@@V-$allocator@ULiveP.c)
 *     ??$_Uninitialized_move@PEAULivePreviewResource@@V?$allocator@ULivePreviewResource@@@std@@@std@@YAPEAULivePreviewResource@@QEAU1@0PEAU1@AEAV?$allocator@ULivePreviewResource@@@0@@Z @ 0x1800B8F00 (--$_Uninitialized_move@PEAULivePreviewResource@@V-$allocator@ULivePreviewResource@@@std@@@std@@Y.c)
 *     ??$emplace_back@ULivePreviewResource@@@?$vector@ULivePreviewResource@@V?$allocator@ULivePreviewResource@@@std@@@std@@QEAAAEAULivePreviewResource@@$$QEAU2@@Z @ 0x1800B8F68 (--$emplace_back@ULivePreviewResource@@@-$vector@ULivePreviewResource@@V-$allocator@ULivePreviewR.c)
 * Callees:
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ??0CVisualBrush@@QEAA@AEBV0@@Z @ 0x180083D50 (--0CVisualBrush@@QEAA@AEBV0@@Z.c)
 */

LivePreviewResource *__fastcall LivePreviewResource::LivePreviewResource(
        LivePreviewResource *this,
        const struct LivePreviewResource *a2)
{
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  LivePreviewResource *result; // rax

  v4 = *(CBaseObject **)a2;
  *(_QWORD *)this = *(_QWORD *)a2;
  if ( v4 )
    CBaseObject::AddRef(v4);
  CVisualBrush::CVisualBrush(
    (LivePreviewResource *)((char *)this + 8),
    (const struct LivePreviewResource *)((char *)a2 + 8));
  *(_OWORD *)((char *)this + 24) = *(_OWORD *)((char *)a2 + 24);
  v5 = (CBaseObject *)*((_QWORD *)a2 + 5);
  *((_QWORD *)this + 5) = v5;
  if ( v5 )
    CBaseObject::AddRef(v5);
  CVisualBrush::CVisualBrush(
    (LivePreviewResource *)((char *)this + 48),
    (const struct LivePreviewResource *)((char *)a2 + 48));
  result = this;
  *((_OWORD *)this + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)this + 5) = *((_OWORD *)a2 + 5);
  return result;
}
