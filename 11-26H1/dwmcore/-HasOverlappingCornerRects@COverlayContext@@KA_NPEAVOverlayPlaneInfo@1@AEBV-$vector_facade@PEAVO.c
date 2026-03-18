/*
 * XREFs of ?HasOverlappingCornerRects@COverlayContext@@KA_NPEAVOverlayPlaneInfo@1@AEBV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18023C880
 * Callers:
 *     ?InitCheckCandidatesList@COverlayContext@@KA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1801E6DD4 (-InitCheckCandidatesList@COverlayContext@@KA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?GetZ@CVisual@@QEBAHPEBVCVisualTree@@I@Z @ 0x18008CC50 (-GetZ@CVisual@@QEBAHPEBVCVisualTree@@I@Z.c)
 *     ?GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ @ 0x1800D34F8 (-GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ.c)
 *     ?GetSharedOcclusionContext@CDesktopTree@@QEBAPEBVCOcclusionContext@@XZ @ 0x1800EE280 (-GetSharedOcclusionContext@CDesktopTree@@QEBAPEBVCOcclusionContext@@XZ.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x180199E68 (McTemplateU0xq_EventWriteTransfer.c)
 *     ?GetInverseDeviceTransform@COverlayContext@@QEBAAEBVCMILMatrix@@XZ @ 0x1801C9FDC (-GetInverseDeviceTransform@COverlayContext@@QEBAAEBVCMILMatrix@@XZ.c)
 *     ?DoesIntersect@CCornerRects@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18023AEC4 (-DoesIntersect@CCornerRects@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_.c)
 *     ?OptimizeCornerRects@COcclusionContext@@QEBAXPEAVCCornerRects@@H@Z @ 0x18024FBD4 (-OptimizeCornerRects@COcclusionContext@@QEBAXPEAVCCornerRects@@H@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall COverlayContext::HasOverlappingCornerRects(__int64 a1, __int64 **a2)
{
  struct CCornerRects *v2; // rbp
  CDesktopTree *DesktopTree; // rax
  const struct COcclusionContext *SharedOcclusionContext; // rax
  CVisual **v7; // r9
  COcclusionContext *v8; // rbx
  int v9; // eax
  const struct CMILMatrix *InverseDeviceTransform; // r15
  __int64 *v11; // r11
  __int64 *v12; // rbx
  const struct D2D_RECT_F *v13; // rdx
  const struct D2D_RECT_F *v14; // rdx
  float *v15; // r8
  __int64 *v16; // r11
  __int64 *v17; // rbx
  __int64 v18; // r14
  __int64 v19; // r11
  const struct D2D_RECT_F *v20; // rdx
  float *v21; // rdx
  const struct D2D_RECT_F *v22; // r8
  float v24[10]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (struct CCornerRects *)(a1 + 160);
  if ( !*(_BYTE *)(a1 + 224) )
  {
    DesktopTree = CVisual::GetDesktopTree(*(CVisual **)(a1 + 8));
    SharedOcclusionContext = CDesktopTree::GetSharedOcclusionContext(DesktopTree);
    v8 = SharedOcclusionContext;
    if ( SharedOcclusionContext )
    {
      v9 = CVisual::GetZ(*(CVisual **)(a1 + 8), v7, *((_DWORD *)SharedOcclusionContext + 274));
      COcclusionContext::OptimizeCornerRects(v8, v2, v9);
    }
  }
  if ( a2[1] != *a2
    && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 144LL))(*(_QWORD *)(a1 + 16)) )
  {
    InverseDeviceTransform = COverlayContext::GetInverseDeviceTransform(*(COverlayContext **)a1);
    if ( !*(_BYTE *)(a1 + 224) )
    {
      v11 = *a2;
      v12 = a2[1];
      while ( v11 != v12 )
      {
        if ( *(_QWORD *)a1 == *(_QWORD *)*v11
          && *(_DWORD *)(a1 + 376) < *(_DWORD *)(*v11 + 376)
          && !IsEmpty((const struct D2D_RECT_F *)(a1 + 144))
          && !IsEmpty(v13)
          && v15[2] > v14->left
          && v14->right > *v15
          && v15[3] > v14->top
          && v14->bottom > v15[1] )
        {
          *(_OWORD *)v24 = 0LL;
          CMILMatrix::Transform2DBoundsHelper<0>((__int64)InverseDeviceTransform, v14, v24);
          if ( CCornerRects::DoesIntersect((const struct D2D_RECT_F *)v2) )
          {
LABEL_32:
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
              McTemplateU0xq_EventWriteTransfer(
                *(unsigned int *)(*(_QWORD *)(a1 + 16) + 40LL),
                &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE,
                *(unsigned int *)(*(_QWORD *)(a1 + 16) + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 40LL)) << 32),
                11);
            return 1;
          }
        }
        ++v11;
      }
    }
    v16 = *a2;
    v17 = a2[1];
    while ( v16 != v17 )
    {
      v18 = *v16;
      *(_OWORD *)v24 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<0>(
        (__int64)InverseDeviceTransform,
        (const struct D2D_RECT_F *)(a1 + 144),
        v24);
      if ( *(_QWORD *)a1 == *(_QWORD *)v18
        && *(_DWORD *)(a1 + 376) > *(_DWORD *)(v18 + 376)
        && !*(_BYTE *)(v18 + 224)
        && !IsEmpty((const struct D2D_RECT_F *)(a1 + 144))
        && !IsEmpty(v20)
        && *(float *)(a1 + 152) > *v21
        && v21[2] > *(float *)(a1 + 144)
        && *(float *)(a1 + 156) > v21[1]
        && v21[3] > *(float *)(a1 + 148)
        && CCornerRects::DoesIntersect(v22) )
      {
        goto LABEL_32;
      }
      v16 = (__int64 *)(v19 + 8);
    }
  }
  return 0;
}
