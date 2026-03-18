/*
 * XREFs of ?PostRender@CComputeScribbleRenderer@@QEAAJPEAVIMonitorTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801BA684
 * Callers:
 *     ?RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800EE2B0 (-RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800EE760 (-RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetBackBufferData@CComputeScribbleRenderer@@AEAAPEAVCComputeScribbleFramebuffer@@XZ @ 0x1801310C4 (-GetBackBufferData@CComputeScribbleRenderer@@AEAAPEAVCComputeScribbleFramebuffer@@XZ.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x180199E68 (McTemplateU0xq_EventWriteTransfer.c)
 *     ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801BA72C (-ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV-$TMilRect@I.c)
 */

__int64 __fastcall CComputeScribbleRenderer::PostRender(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  struct CComputeScribbleFramebuffer *BackBufferData; // rax
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
  {
    if ( *(_BYTE *)(a1 + 48) )
    {
      BackBufferData = CComputeScribbleRenderer::GetBackBufferData((CComputeScribbleRenderer *)a1);
      if ( BackBufferData )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
          McTemplateU0xq_EventWriteTransfer(
            v6,
            &EVTDESC_COMPUTESCRIBBLE_POSTRENDER,
            *(_QWORD *)(a1 + 24),
            *((_DWORD *)BackBufferData + 65));
      }
    }
  }
  v2 = CSuperWetInkManager::ScheduleScribblesForRenderTarget(*((CSuperWetInkManager **)g_pComposition + 82));
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFD,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblerenderer.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
