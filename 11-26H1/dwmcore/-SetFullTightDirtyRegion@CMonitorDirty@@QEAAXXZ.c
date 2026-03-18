/*
 * XREFs of ?SetFullTightDirtyRegion@CMonitorDirty@@QEAAXXZ @ 0x1801DC5F8
 * Callers:
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1800ED0CC (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180194650 (-RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?AddTightDirtyRect@CMonitorDirty@@MEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180253600 (-AddTightDirtyRect@CMonitorDirty@@MEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 * Callees:
 *     ?SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z @ 0x1800F5C08 (-SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CMonitorDirty::SetFullTightDirtyRegion(CMonitorDirty *this)
{
  CRegion *v2; // rcx
  _DWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+28h] [rbp-20h] BYREF
  int v5; // [rsp+30h] [rbp-18h]
  int v6; // [rsp+34h] [rbp-14h]

  if ( *((_QWORD *)this + 58) )
  {
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL) + 40LL))(
      *((_QWORD *)this + 1) + 8LL,
      v3);
    v2 = (CRegion *)*((_QWORD *)this + 58);
    v5 = v3[0];
    v6 = v3[1];
    v4 = 0LL;
    CRegion::SetRectangle(v2, (const struct MilRectU *)&v4);
  }
}
