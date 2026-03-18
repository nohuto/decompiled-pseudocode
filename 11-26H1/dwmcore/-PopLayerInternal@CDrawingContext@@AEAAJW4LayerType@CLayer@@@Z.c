/*
 * XREFs of ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x180184B40
 * Callers:
 *     ?RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180056BA0 (-RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180124D00 (-Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@MPEAVCVisual@@@Z @ 0x180200410 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::PopLayerInternal(__int64 a1)
{
  unsigned int v1; // esi
  __int64 v2; // rdx
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v9; // eax

  v1 = 0;
  v2 = (unsigned int)(*(_DWORD *)(a1 + 376) - 1);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 352) + 8 * v2);
  *(_DWORD *)(a1 + 376) = v2;
  v5 = *(_QWORD *)(a1 + 744);
  if ( v5 == *(_QWORD *)(a1 + 736) || !*(_QWORD *)(v5 - 176) )
    v6 = 0LL;
  else
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 2688) - 16LL);
  if ( v4 == v6 )
  {
    v7 = *(_QWORD *)(a1 + 2688);
    if ( *(_QWORD *)(v7 - 16) )
      --*(_QWORD *)(v5 - 160);
    *(_QWORD *)(v7 - 16) = 0LL;
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 32LL))(v4, a1);
    v1 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x1069u, 0LL);
    }
    else if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4) == 1 )
    {
      *(_BYTE *)(a1 + 8065) = 1;
    }
  }
  if ( v4 )
    (**(void (__fastcall ***)(__int64, __int64))v4)(v4, 1LL);
  return v1;
}
