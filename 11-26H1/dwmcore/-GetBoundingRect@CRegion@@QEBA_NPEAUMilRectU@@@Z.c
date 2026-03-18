/*
 * XREFs of ?GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z @ 0x18018658C
 * Callers:
 *     ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x180186130 (-GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z.c)
 *     ?DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_N_NPEBUCSM_RGNDATA_@@PEBUScrollOptimization@@PEAVCRegion@@@Z @ 0x18018634C (-DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_N_NPEBUCSM_RGNDATA_@@PEBUScrollOp.c)
 * Callees:
 *     <none>
 */

char __fastcall CRegion::GetBoundingRect(int **this, struct MilRectU *a2)
{
  int *v2; // r11
  int v4; // ecx
  int v5; // r8d
  char v6; // r10
  int v7; // edx
  int v8; // r9d
  int v9; // eax
  int v10; // eax
  int v11; // ecx

  v2 = *this;
  if ( !**this )
    return 0;
  v4 = v2[3];
  v5 = -1;
  v6 = 1;
  v7 = v2[2];
  v8 = v2[2 * *v2 + 1];
  v9 = -1;
  if ( v2[1] >= 0 )
    v9 = v2[1];
  *(_DWORD *)a2 = v9;
  v10 = -1;
  if ( v4 >= 0 )
    v10 = v4;
  v11 = -1;
  *((_DWORD *)a2 + 1) = v10;
  if ( v7 >= 0 )
    v11 = v7;
  *((_DWORD *)a2 + 2) = v11;
  if ( v8 >= 0 )
    v5 = v8;
  *((_DWORD *)a2 + 3) = v5;
  return v6;
}
