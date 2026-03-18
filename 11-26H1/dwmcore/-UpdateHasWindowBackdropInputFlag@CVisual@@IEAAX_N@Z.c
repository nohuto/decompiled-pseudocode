/*
 * XREFs of ?UpdateHasWindowBackdropInputFlag@CVisual@@IEAAX_N@Z @ 0x180174094
 * Callers:
 *     ?UpdateBackdropBlurFlagForTreeEffect@CLayerVisual@@AEAAXXZ @ 0x180173F30 (-UpdateBackdropBlurFlagForTreeEffect@CLayerVisual@@AEAAXXZ.c)
 * Callees:
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18002D018 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?PropagateBackdropUpdates@CVisual@@AEAAXHH@Z @ 0x180174144 (-PropagateBackdropUpdates@CVisual@@AEAAXHH@Z.c)
 *     ?LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z @ 0x18021C1E0 (-LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z.c)
 */

void __fastcall CVisual::UpdateHasWindowBackdropInputFlag(CVisual **this, unsigned __int8 a2)
{
  int v3; // esi
  char v4; // al
  char v5; // cl
  char v6; // al
  CVisual *v7; // rcx
  DwmDbg::DbgString *v8; // rbx
  DwmDbg::DbgString *v9; // rax
  char *v10; // [rsp+40h] [rbp+8h] BYREF
  char *v11; // [rsp+50h] [rbp+18h] BYREF

  v3 = a2;
  if ( a2 != ((*((_BYTE *)this + 103) & 2) != 0) )
  {
    if ( dword_1803DC8B8 )
    {
      v8 = DwmDbg::DbgString::DbgString(&v10, "m_fHasWindowBackdropInput=%d", a2);
      v9 = DwmDbg::DbgString::DbgString(&v11, "Visual-HasWindowBackdropInputFlagChanged");
      DwmDbg::Backdrops::LogBrushEtwEvent(v9, this, v8);
    }
    v4 = *((_BYTE *)this + 103);
    v5 = v4 | 2;
    v6 = v4 & 0xFD;
    if ( !(_BYTE)v3 )
      v5 = v6;
    *((_BYTE *)this + 103) = v5;
    v7 = this[11];
    if ( v7 )
    {
      if ( (*((_BYTE *)this + 102) & 0x20) != 0 )
        CVisual::PropagateBackdropUpdates(v7, 0, 2 * v3 - 1);
    }
  }
}
