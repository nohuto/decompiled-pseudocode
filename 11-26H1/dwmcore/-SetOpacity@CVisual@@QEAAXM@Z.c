/*
 * XREFs of ?SetOpacity@CVisual@@QEAAXM@Z @ 0x180110FA0
 * Callers:
 *     ?ProcessSetOpacity@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPACITY@@@Z @ 0x180110F80 (-ProcessSetOpacity@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPACITY@@@Z.c)
 *     ?SetProperty@CVisual@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801112C0 (-SetProperty@CVisual@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180021C20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     ?SetOpacityInternal@CVisual@@QEAAXM@Z @ 0x18011096C (-SetOpacityInternal@CVisual@@QEAAXM@Z.c)
 *     ?NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@M@Z @ 0x18011115C (-NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@M@Z.c)
 */

void __fastcall CVisual::SetOpacity(CVisual *this, float a2)
{
  __int64 v2; // rax
  float v4; // xmm3_4
  float v5; // edx
  float *v6; // rcx
  unsigned int v7; // edi

  v2 = *((_QWORD *)this + 27);
  if ( (*(_DWORD *)(v2 + 4) & 0x8000000) != 0 )
  {
    v5 = *(float *)(v2 + 12);
    v6 = (float *)(v2 + 12);
    if ( (LODWORD(v5) & 0x7F000000) != 0x5000000 )
    {
      do
      {
        v6 = (float *)((char *)v6 + (LODWORD(v5) & 0xFFFFFF) + 4);
        v5 = *v6;
      }
      while ( (*(_DWORD *)v6 & 0x7F000000) != 0x5000000 );
    }
    v4 = v6[1];
  }
  else
  {
    v4 = FLOAT_1_0;
  }
  if ( v4 != a2 )
  {
    v7 = 4;
    if ( COERCE_FLOAT(LODWORD(a2) & _xmm) < 0.0000011920929 != COERCE_FLOAT(LODWORD(v4) & _xmm) < 0.0000011920929 )
      v7 = 5;
    CVisual::SetOpacityInternal(this, a2);
    CVisual::PropagateFlags((__int64)this, v7);
    CPropertyChangeResource::NotifyScalarPropertyChanged(this, 26LL);
    if ( *((_QWORD *)this + 6) )
      CResource::InvalidateConsumingAnimationsInternal((__int64)this);
  }
}
