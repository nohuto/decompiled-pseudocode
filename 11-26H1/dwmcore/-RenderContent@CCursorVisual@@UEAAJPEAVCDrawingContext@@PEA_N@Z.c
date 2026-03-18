/*
 * XREFs of ?RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180078480
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x180046630 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 *     ?DrawCrosshair@CCursorVisual@@AEBAJPEAVCDrawingContext@@@Z @ 0x1800780F8 (-DrawCrosshair@CCursorVisual@@AEBAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180079E90 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x18016C2C0 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1801BCE20 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVMILMatrix3x2@@M@Z @ 0x180203840 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_ea_180203840.c)
 *     ?HasVisibleCursor@CCursorVisual@@UEBA_NXZ @ 0x18021F4C0 (-HasVisibleCursor@CCursorVisual@@UEBA_NXZ.c)
 *     gsl::final_action__CCursorVisual::RenderContent_::_2_::_lambda_1___::_final_action__CCursorVisual::RenderContent_::_2_::_lambda_1___ @ 0x18021F610 (gsl--final_action__CCursorVisual--RenderContent_--_2_--_lambda_1___--_final_action__CCursorVisua.c)
 *     ?EnsureCompositionResources@CCursorState@@QEAAXXZ @ 0x180291690 (-EnsureCompositionResources@CCursorState@@QEAAXXZ.c)
 */

__int64 __fastcall CCursorVisual::RenderContent(CComposition **this, struct CDrawingContext *a2, bool *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  unsigned __int64 FrameTargetTime; // r12
  int v9; // eax
  __int64 **v10; // rdi
  __int64 *i; // rbx
  int v12; // eax
  unsigned int v13; // r14d
  __int64 v14; // rcx
  float v15; // xmm1_4
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  float v18; // xmm0_4
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // [rsp+20h] [rbp-60h]
  _QWORD v22[2]; // [rsp+30h] [rbp-50h] BYREF
  char v23; // [rsp+40h] [rbp-40h]
  int v24; // [rsp+48h] [rbp-38h] BYREF
  __int128 v25; // [rsp+4Ch] [rbp-34h]
  __int128 v26; // [rsp+5Ch] [rbp-24h]
  int v27; // [rsp+6Ch] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  char v29; // [rsp+C8h] [rbp+48h] BYREF

  v5 = CVisual::RenderContent((CVisual *)this, a2, a3);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x127,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\global\\cursorvisual.cpp",
      (const char *)(unsigned int)v5,
      v21);
    return v6;
  }
  v29 = 0;
  v22[0] = &v29;
  v22[1] = a2;
  v23 = 1;
  if ( this[87] )
  {
    FrameTargetTime = CComposition::GetFrameTargetTime(this[3]);
    if ( *((_BYTE *)this[87] + 112) )
    {
      v9 = CCursorVisual::DrawCrosshair((CCursorVisual *)this, a2);
      v6 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x13D,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\global\\cursorvisual.cpp",
          (const char *)(unsigned int)v9,
          v21);
        if ( v29 )
          CDrawingContext::PopRenderOptionsInternal(a2, 1);
        return v6;
      }
    }
    v10 = (__int64 **)*((_QWORD *)this[87] + 32);
    for ( i = *v10; i != (__int64 *)v10; i = (__int64 *)*i )
    {
      if ( *((_BYTE *)i + 32) )
      {
        if ( !v29 )
        {
          v24 = 8;
          v26 = 0LL;
          LODWORD(v26) = 2;
          v27 = 0;
          v25 = 0LL;
          v12 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)&v24, 1);
          v13 = v12;
          if ( v12 < 0 )
          {
            v19 = 329LL;
LABEL_27:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v19,
              (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\global\\cursorvisual.cpp",
              (const char *)(unsigned int)v12,
              v21);
            goto LABEL_42;
          }
          v29 = 1;
        }
      }
      else if ( v29 )
      {
        CDrawingContext::PopRenderOptionsInternal(a2, 1);
        v29 = 0;
      }
      v14 = FrameTargetTime - i[2];
      if ( v14 < 0 )
      {
        v16 = v14 & 1 | ((FrameTargetTime - i[2]) >> 1);
        v15 = (float)(int)v16 + (float)(int)v16;
      }
      else
      {
        v15 = (float)(int)v14;
      }
      v17 = *((_QWORD *)this[87] + 34);
      if ( ((5 * v17) & 0x4000000000000000LL) != 0 )
        v18 = (float)(int)((unsigned __int64)(10 * v17) >> 1) + (float)(int)((unsigned __int64)(10 * v17) >> 1);
      else
        v18 = (float)(10 * v17);
      v12 = CDrawingContext::DrawBitmapRealization(a2, COERCE_INT(1.0 - (float)(v15 / v18)));
      v13 = v12;
      if ( v12 < 0 )
      {
        v19 = 345LL;
        goto LABEL_27;
      }
    }
    if ( CCursorVisual::HasVisibleCursor((CCursorVisual *)this) )
    {
      v20 = *((_QWORD *)a2 + 5);
      if ( !v20 || *(CComposition ***)(v20 + 19136) != this )
      {
        if ( *((_BYTE *)this[87] + 81) )
        {
          if ( !v29 )
          {
            v24 = 8;
            v26 = 0LL;
            LODWORD(v26) = 2;
            v27 = 0;
            v25 = 0LL;
            v12 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)&v24, 1);
            v13 = v12;
            if ( v12 < 0 )
            {
              v19 = 357LL;
              goto LABEL_27;
            }
            v29 = 1;
          }
        }
        else if ( v29 )
        {
          CDrawingContext::PopRenderOptionsInternal(a2, 1);
          v29 = 0;
        }
        CCursorState::EnsureCompositionResources(this[87]);
        v12 = CDrawingContext::DrawBitmapRealization(a2, SLODWORD(FLOAT_1_0));
        v13 = v12;
        if ( v12 < 0 )
        {
          v19 = 373LL;
          goto LABEL_27;
        }
        this[88] = (CComposition *)*((_QWORD *)this[3] + 110);
      }
    }
  }
  v13 = 0;
LABEL_42:
  gsl::final_action__CCursorVisual::RenderContent_::_2_::_lambda_1___::_final_action__CCursorVisual::RenderContent_::_2_::_lambda_1___(v22);
  return v13;
}
