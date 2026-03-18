/*
 * XREFs of ?IsRectInOcclusionRegion@COcclusionContext@@QEBA_NAEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180192304
 * Callers:
 *     ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800AD448 (-DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_R.c)
 *     ?CalcVisibleArea@OverlayPlaneInfo@COverlayContext@@QEAA_NPEBVCDesktopTree@@AEBVCMILMatrix@@_N2@Z @ 0x18023973C (-CalcVisibleArea@OverlayPlaneInfo@COverlayContext@@QEAA_NPEBVCDesktopTree@@AEBVCMILMatrix@@_N2@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall COcclusionContext::IsRectInOcclusionRegion(__int64 a1, int *a2)
{
  char v2; // r8
  __int64 v3; // rax
  int *v4; // rcx
  int v5; // r14d
  int v6; // ebx
  int v7; // esi
  int v8; // ebp
  __int64 i; // rdx
  int *v10; // rax
  int *v11; // r11
  int v12; // r10d
  int *j; // r9
  int v14; // eax

  v2 = 0;
  v3 = 0LL;
  if ( g_pComposition )
    v3 = *((_QWORD *)g_pComposition + 110);
  if ( *(_QWORD *)(a1 + 16) != v3 )
    return 0;
  v4 = *(int **)(a1 + 496);
  if ( *v4 )
  {
    v5 = *a2;
    if ( *a2 >= v4[1] )
    {
      v6 = a2[2];
      if ( v6 <= v4[2] )
      {
        v7 = a2[1];
        if ( v7 >= v4[3] )
        {
          v8 = a2[3];
          if ( v8 <= v4[2 * *v4 + 1] )
          {
            for ( i = 0LL; ; i += 2LL )
            {
              v10 = &v4[i + 3];
              if ( v8 <= *v10 )
                break;
              v11 = &v4[i + 5];
              if ( v7 < *v11 )
              {
                v12 = v5;
                for ( j = (int *)((char *)v10 + v10[1]); j < (int *)((char *)v11 + v11[1]) && *j <= v12; j += 2 )
                {
                  v14 = j[1];
                  if ( v14 <= v12 )
                    v14 = v12;
                  v12 = v14;
                }
                if ( v12 < v6 )
                  return v2;
              }
            }
            return 1;
          }
        }
      }
    }
  }
  return v2;
}
