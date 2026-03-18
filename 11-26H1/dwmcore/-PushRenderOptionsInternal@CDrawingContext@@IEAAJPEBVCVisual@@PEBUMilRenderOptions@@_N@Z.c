/*
 * XREFs of ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1801BCE20
 * Callers:
 *     ?RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180078480 (-RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1800D11E8 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180194CF0 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x18022CF50 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     ?RenderLayer@CColorTransformLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x18024FF90 (-RenderLayer@CColorTransformLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CSuperSampleLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1802505C0 (-ApplyState@CSuperSampleLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLayer@CSuperSampleLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x180250800 (-RenderLayer@CSuperSampleLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     _CCaptureRenderTarget::RenderCursors_::_18_::_lambda_2_::operator() @ 0x180256BFC (_CCaptureRenderTarget--RenderCursors_--_18_--_lambda_2_--operator().c)
 *     ?RenderFlipExContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180268C7C (-RenderFlipExContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 * Callees:
 *     ?Push@?$CWatermarkStack@USavedRenderOptions@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUSavedRenderOptions@CDrawingContext@@@Z @ 0x18007F100 (-Push@-$CWatermarkStack@USavedRenderOptions@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUSavedRenderOp.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x18007F250 (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x18007F3A0 (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDrawingContext::PushRenderOptionsInternal(
        CDrawingContext *this,
        const struct CVisual *a2,
        const struct MilRenderOptions *a3,
        char a4)
{
  char *v4; // rsi
  _DWORD *v8; // r14
  int v9; // eax
  unsigned int v10; // ebp
  char *v11; // rcx
  int v13; // eax
  __int128 v14; // [rsp+30h] [rbp-38h] BYREF
  int v15; // [rsp+40h] [rbp-28h]
  int v16; // [rsp+44h] [rbp-24h]

  v4 = (char *)this + 256;
  if ( a4
    && (*((_QWORD *)&v14 + 1) = a2,
        *(_QWORD *)&v14 = 9LL,
        v13 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((__int64)this + 256, &v14),
        v10 = v13,
        v13 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x11C8u, 0LL);
  }
  else
  {
    v8 = (_DWORD *)((char *)this + 240);
    *(_QWORD *)&v14 = *((_QWORD *)this + 29);
    HIDWORD(v14) = *((_DWORD *)this + 60);
    v15 = *((_DWORD *)this + 61);
    v16 = *((_DWORD *)this + 62);
    DWORD2(v14) = 0;
    v9 = CWatermarkStack<CDrawingContext::SavedRenderOptions,64,2,10>::Push((__int64)this + 712, (__int64)&v14);
    v10 = v9;
    if ( v9 < 0 && (MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x11D6u, 0LL), a4) )
    {
      CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((__int64)v4, 0LL);
    }
    else
    {
      v11 = (char *)this + 240;
      if ( (*(_BYTE *)a3 & 2) != 0 )
      {
        v11 = (char *)this + 240;
        *((_DWORD *)this + 58) = *((_DWORD *)a3 + 1);
      }
      if ( (*(_BYTE *)a3 & 4) != 0 )
      {
        v8 = v11;
        *((_DWORD *)this + 59) = *((_DWORD *)a3 + 2);
      }
      if ( (*(_BYTE *)a3 & 8) != 0 )
        *v8 = *((_DWORD *)a3 + 5);
      if ( (*(_BYTE *)a3 & 0x10) != 0 )
        *((_DWORD *)this + 61) = *((_DWORD *)a3 + 6);
      if ( (*(_BYTE *)a3 & 0x20) != 0 )
        *((_DWORD *)this + 62) = *((_DWORD *)a3 + 7);
    }
  }
  return v10;
}
