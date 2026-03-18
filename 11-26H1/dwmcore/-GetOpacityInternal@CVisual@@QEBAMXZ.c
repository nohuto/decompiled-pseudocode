/*
 * XREFs of ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x1800D5440
 * Callers:
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18007FB10 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?GetProperty@CVisual@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x1800D3710 (-GetProperty@CVisual@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z.c)
 *     ?ComputeEffectiveAlpha@CProjectedShadowCaster@@AEBAMPEBVCVisualTree@@PEA_N@Z @ 0x1800D5360 (-ComputeEffectiveAlpha@CProjectedShadowCaster@@AEBAMPEBVCVisualTree@@PEA_N@Z.c)
 *     ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z @ 0x1801C1BC0 (-NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CVisual::GetOpacityInternal(CVisual *this)
{
  __int64 v1; // rax
  int v3; // edx
  float *v4; // rcx

  v1 = *((_QWORD *)this + 27);
  if ( (*(_DWORD *)(v1 + 4) & 0x8000000) == 0 )
    return FLOAT_1_0;
  v3 = *(_DWORD *)(v1 + 12);
  v4 = (float *)(v1 + 12);
  if ( (v3 & 0x7F000000) != 0x5000000 )
  {
    do
    {
      v4 = (float *)((char *)v4 + (v3 & 0xFFFFFF) + 4);
      v3 = *(_DWORD *)v4;
    }
    while ( (*(_DWORD *)v4 & 0x7F000000) != 0x5000000 );
  }
  return v4[1];
}
