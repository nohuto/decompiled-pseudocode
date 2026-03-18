/*
 * XREFs of ?GetResampleMode@CVisual@@QEBA?AW4Enum@CompositionResampleMode@@XZ @ 0x1801AA6E0
 * Callers:
 *     ?RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180056BA0 (-RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::GetResampleMode(__int64 a1)
{
  __int64 v1; // rdx
  int *v2; // rdx
  int i; // r8d

  v1 = *(_QWORD *)(a1 + 216);
  if ( (*(_DWORD *)(v1 + 4) & 0x2000000) == 0 )
    return 0LL;
  v2 = (int *)(v1 + 12);
  for ( i = *v2; (*v2 & 0x7F000000) != 0x7000000; i = *v2 )
    v2 = (int *)((char *)v2 + (i & 0xFFFFFF) + 4);
  return (unsigned int)v2[1];
}
