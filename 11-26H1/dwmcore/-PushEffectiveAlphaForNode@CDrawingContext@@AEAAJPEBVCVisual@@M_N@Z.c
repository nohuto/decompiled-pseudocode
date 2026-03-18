/*
 * XREFs of ?PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z @ 0x18005CB60
 * Callers:
 *     ?RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x18005C744 (-RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_.c)
 * Callees:
 *     ?Grow@?$CWatermarkStack@M$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x18005CCE4 (-Grow@-$CWatermarkStack@M$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Grow@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x1800C90E8 (-Grow@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 */

__int64 __fastcall CDrawingContext::PushEffectiveAlphaForNode(
        CDrawingContext *this,
        const struct CVisual *a2,
        float a3,
        char a4)
{
  char v4; // si
  char *v6; // rbx
  unsigned int v7; // eax
  unsigned int v8; // eax
  int v10; // eax
  unsigned int v11; // esi
  int v12; // eax
  unsigned int v13; // ebp
  int v14; // eax
  __int128 v15; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = 0;
  if ( a4 )
  {
    v6 = (char *)this + 256;
    *(_QWORD *)&v15 = 8LL;
    *((_QWORD *)&v15 + 1) = a2;
    if ( *((_DWORD *)this + 66) == *((_DWORD *)this + 67) )
    {
      v10 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Grow((char *)this + 256);
      v11 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)(unsigned int)v10,
          (int)v6);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x11A3u, 0LL);
        return v11;
      }
    }
    v4 = 1;
    *(_OWORD *)(*(_QWORD *)v6 + 16LL * *((unsigned int *)v6 + 2)) = v15;
    v7 = *((_DWORD *)v6 + 5);
    if ( v7 <= ++*((_DWORD *)v6 + 2) )
      v7 = *((_DWORD *)v6 + 2);
    *((_DWORD *)v6 + 5) = v7;
  }
  if ( *((_DWORD *)this + 790) == *((_DWORD *)this + 791)
    && (v12 = CWatermarkStack<float,64,2,10>::Grow((char *)this + 3152, a2), v13 = v12, v12 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)(unsigned int)v12,
      (_DWORD)this + 3152);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x11A7u, 0LL);
    if ( v4 )
    {
      v14 = *((_DWORD *)this + 66);
      if ( v14 )
        *((_DWORD *)this + 66) = v14 - 1;
    }
    return v13;
  }
  else
  {
    *(float *)(*((_QWORD *)this + 394) + 4LL * (unsigned int)(*((_DWORD *)this + 790))++) = a3;
    v8 = *((_DWORD *)this + 793);
    if ( v8 <= *((_DWORD *)this + 790) )
      v8 = *((_DWORD *)this + 790);
    *((_DWORD *)this + 793) = v8;
    return 0LL;
  }
}
