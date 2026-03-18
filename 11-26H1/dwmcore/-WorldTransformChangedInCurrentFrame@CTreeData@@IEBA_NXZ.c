/*
 * XREFs of ?WorldTransformChangedInCurrentFrame@CTreeData@@IEBA_NXZ @ 0x18022CEC8
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A01C4 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A1720 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?UpdateWorldTransform@CVisual@@AEBAXPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x1802611CC (-UpdateWorldTransform@CVisual@@AEBAXPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTreeData::WorldTransformChangedInCurrentFrame(CTreeData *this)
{
  char v1; // r9

  v1 = 0;
  if ( *((_BYTE *)this + 15) )
    return *((_QWORD *)this + 28) == *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 31) + 24LL) + 880LL);
  return v1;
}
