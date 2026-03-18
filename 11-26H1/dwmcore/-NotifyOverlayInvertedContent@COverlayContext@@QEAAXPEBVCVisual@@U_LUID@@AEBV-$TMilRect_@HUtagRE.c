/*
 * XREFs of ?NotifyOverlayInvertedContent@COverlayContext@@QEAAXPEBVCVisual@@U_LUID@@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801BFAA4
 * Callers:
 *     ?PushOverlayClip@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801E610C (-PushOverlayClip@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBV-$TMilRect_@HUtagRECT@@UMil3DRec.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x1800E69E8 (-IsEmpty@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?FindOverlayPlaneIndex@COverlayContext@@IEBAHPEBVCVisual@@U_LUID@@@Z @ 0x1801BFB70 (-FindOverlayPlaneIndex@COverlayContext@@IEBAHPEBVCVisual@@U_LUID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COverlayContext::NotifyOverlayInvertedContent(
        COverlayContext *a1,
        const struct CVisual *a2,
        struct _LUID a3,
        _DWORD *a4)
{
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdi
  bool IsEmpty; // al
  __int64 v10; // r8
  char v11; // dl
  int v12; // eax
  int v13; // eax
  int v14; // eax

  result = COverlayContext::FindOverlayPlaneIndex(a1, a2, a3);
  if ( (_DWORD)result != -1 )
  {
    v7 = *(_QWORD *)(v6 + 12688);
    v8 = 392LL * (int)result;
    TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::IsEmpty((_DWORD *)(v8 + v7 + 260));
    IsEmpty = TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::IsEmpty(a4);
    if ( v11 )
    {
      if ( IsEmpty )
      {
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)v10 = 0LL;
      }
      else
      {
        *(_OWORD *)v10 = *(_OWORD *)a4;
      }
    }
    else if ( !IsEmpty )
    {
      if ( *a4 < *(_DWORD *)v10 )
        *(_DWORD *)v10 = *a4;
      v12 = a4[1];
      if ( v12 < *(_DWORD *)(v10 + 4) )
        *(_DWORD *)(v10 + 4) = v12;
      v13 = a4[2];
      if ( v13 > *(_DWORD *)(v10 + 8) )
        *(_DWORD *)(v10 + 8) = v13;
      v14 = a4[3];
      if ( v14 > *(_DWORD *)(v10 + 12) )
        *(_DWORD *)(v10 + 12) = v14;
    }
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + v7 + 16) + 320LL))(*(_QWORD *)(v8 + v7 + 16));
    *(_DWORD *)(v8 + v7 + 276) = result;
  }
  return result;
}
