/*
 * XREFs of ?PushLayerTransformOnExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ @ 0x18005CE3C
 * Callers:
 *     ?RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x18005C744 (-RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_.c)
 * Callees:
 *     ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ @ 0x18005E3C4 (-IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ.c)
 *     ?GetInput@CEffectBrush@@QEBAPEAVCBrush@@I@Z @ 0x1801FE584 (-GetInput@CEffectBrush@@QEBAPEAVCBrush@@I@Z.c)
 *     ?GetTransformToLayerSpace@CTreeEffectLayer@@AEBA?AVMatrix3x2F@D2D1@@XZ @ 0x1802502C4 (-GetTransformToLayerSpace@CTreeEffectLayer@@AEBA-AVMatrix3x2F@D2D1@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CTreeEffectLayer::PushLayerTransformOnExplicitSurfaceInput(CTreeEffectLayer *this)
{
  CLayerVisual *v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  unsigned int v5; // ebp
  struct CBrush *Input; // rax
  struct CBrush *v7; // rdi
  __int64 v8; // xmm0_8
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  v2 = (CLayerVisual *)*((_QWORD *)this + 32);
  if ( v2 )
  {
    if ( CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled(v2) )
    {
      v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 31) + 112LL) + 80LL) + 56LL);
      v4 = 0;
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
      if ( v5 )
      {
        do
        {
          Input = CEffectBrush::GetInput(*((CEffectBrush **)this + 31), v4);
          v7 = Input;
          if ( Input )
          {
            if ( (*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)Input + 64LL))(Input, 142LL) )
            {
              CTreeEffectLayer::GetTransformToLayerSpace(this, &v9);
              v8 = v10;
              *(_OWORD *)((char *)v7 + 216) = v9;
              *((_QWORD *)v7 + 29) = v8;
            }
          }
          ++v4;
        }
        while ( v4 < v5 );
      }
    }
  }
}
