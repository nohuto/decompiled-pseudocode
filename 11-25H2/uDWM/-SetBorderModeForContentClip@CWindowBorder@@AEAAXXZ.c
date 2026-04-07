/*
 * XREFs of ?SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ @ 0x180011894
 * Callers:
 *     ?SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z @ 0x180011704 (-SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z.c)
 *     ?EnableBorder@CWindowBorder@@QEAAJ_N@Z @ 0x18003A7B4 (-EnableBorder@CWindowBorder@@QEAAJ_N@Z.c)
 *     ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x18003C544 (-CreateBorderStructure@CWindowBorder@@AEAAJXZ.c)
 *     ?SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4ShadowStyle@1@@Z @ 0x18006D584 (-SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4Sh.c)
 * Callees:
 *     <none>
 */

void __fastcall CWindowBorder::SetBorderModeForContentClip(CWindowBorder *this)
{
  if ( *((_QWORD *)this + 26) && *((_QWORD *)this + 27) && *((float *)this + 68) > 0.0 )
    CVisual::SetBorderMode(this, 0LL);
  else
    CVisual::ClearBorderMode(this);
}
