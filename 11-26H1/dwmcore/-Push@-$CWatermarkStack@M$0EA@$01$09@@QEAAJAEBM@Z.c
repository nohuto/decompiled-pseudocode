/*
 * XREFs of ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x1800D1830
 * Callers:
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18007FB10 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x1800C70F0 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1800D11E8 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?BeginFrame@CSubDrawingContext@@AEAAJAEBVCMILMatrix@@@Z @ 0x1800D1420 (-BeginFrame@CSubDrawingContext@@AEAAJAEBVCMILMatrix@@@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1800D2B38 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVMILMatrix3x2@@M@Z @ 0x180203840 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_ea_180203840.c)
 *     ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@PEAVCDrawListEntryBuilder@@@Z @ 0x180236200 (-FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$de.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<float,64,2,10>::Push(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  unsigned int v6; // eax
  unsigned int v8; // edx
  __int64 v9; // rdx
  unsigned int v10; // ebx
  __int64 v11; // rbp
  unsigned int v12; // r15d
  void *v13; // rax
  void *v14; // r14
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(unsigned int *)(a1 + 12);
  v4 = *(unsigned int *)(a1 + 8);
  if ( (_DWORD)v4 == (_DWORD)v2 )
  {
    v8 = 2 * v2;
    if ( (unsigned __int64)(2 * v2) <= 0xFFFFFFFF )
    {
      v11 = 64LL;
      if ( v8 > 0x40 )
        v11 = v8;
      v12 = 4 * v4;
      if ( (unsigned __int64)(4 * v4) <= 0xFFFFFFFF )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v11 <= 4 )
        {
          v10 = -2147024809;
        }
        else
        {
          v13 = MIDL_user_allocate(4 * v11);
          v14 = v13;
          if ( v13 )
          {
            memcpy_0(v13, *(const void **)a1, v12);
            operator delete(*(void **)a1);
            *(_QWORD *)a1 = v14;
            *(_DWORD *)(a1 + 12) = v11;
            goto LABEL_2;
          }
          v10 = -2147024882;
        }
        v9 = 104LL;
LABEL_8:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v10);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v10);
        return v10;
      }
      v9 = 101LL;
    }
    else
    {
      v9 = 98LL;
    }
    v10 = -2147024362;
    goto LABEL_8;
  }
LABEL_2:
  *(_DWORD *)(*(_QWORD *)a1 + 4LL * (unsigned int)(*(_DWORD *)(a1 + 8))++) = *a2;
  v6 = *(_DWORD *)(a1 + 20);
  if ( v6 <= *(_DWORD *)(a1 + 8) )
    v6 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 20) = v6;
  return 0LL;
}
