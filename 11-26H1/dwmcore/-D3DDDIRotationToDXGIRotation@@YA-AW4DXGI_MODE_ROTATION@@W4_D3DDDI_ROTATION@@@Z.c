/*
 * XREFs of ?D3DDDIRotationToDXGIRotation@@YA?AW4DXGI_MODE_ROTATION@@W4_D3DDDI_ROTATION@@@Z @ 0x180186CF0
 * Callers:
 *     ?CalcRotationTransform@CSwapChainRealization@@IEBA_NAEBUD2D_SIZE_U@@PEAVCMILMatrix@@@Z @ 0x1802ACAEC (-CalcRotationTransform@CSwapChainRealization@@IEBA_NAEBUD2D_SIZE_U@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall D3DDDIRotationToDXGIRotation(int a1)
{
  int v1; // ecx
  int v2; // ecx

  v1 = a1 - 2;
  if ( !v1 )
    return 2LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 3LL;
  if ( v2 == 1 )
    return 4LL;
  return 1LL;
}
