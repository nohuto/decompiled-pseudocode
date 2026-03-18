/*
 * XREFs of ?Pop@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z @ 0x180064250
 * Callers:
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18003F1EC (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x180063680 (-RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z @ 0x1800737B0 (-PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z @ 0x18008D838 (-PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A01C4 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 )
  {
    *(_DWORD *)(a1 + 8) = v1 - 1;
    LOBYTE(v1) = 1;
  }
  return v1;
}
