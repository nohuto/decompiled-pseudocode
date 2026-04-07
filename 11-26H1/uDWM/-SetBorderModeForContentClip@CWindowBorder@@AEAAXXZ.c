/*
 * XREFs of ?SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ @ 0x18000FC00
 * Callers:
 *     ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x18000B550 (-CreateBorderStructure@CWindowBorder@@AEAAJXZ.c)
 *     ?EnableBorder@CWindowBorder@@QEAAJ_N@Z @ 0x18000F71C (-EnableBorder@CWindowBorder@@QEAAJ_N@Z.c)
 *     ?SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z @ 0x18000FAD4 (-SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4ShadowStyle@1@@Z @ 0x18001007C (-SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4Sh.c)
 * Callees:
 *     <none>
 */

void __fastcall CWindowBorder::SetBorderModeForContentClip(CWindowBorder *this)
{
  if ( *((_QWORD *)this + 27) && *((_QWORD *)this + 28) && *((float *)this + 62) > 0.0 )
    CVisual::SetBorderMode(this, 0LL);
  else
    CVisual::ClearBorderMode(this);
}
