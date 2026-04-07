/*
 * XREFs of ?UpdateBitmap@CImage@@QEAAJXZ @ 0x180021594
 * Callers:
 *     ?ValidateVisual@CImage@@UEAAJXZ @ 0x180021510 (-ValidateVisual@CImage@@UEAAJXZ.c)
 * Callees:
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180006760 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18000723C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDrawNineGridInstruction@CBitmapSource@@QEAAJPEAPEAVCDrawNineGridInstruction@@@Z @ 0x180021664 (-GetDrawNineGridInstruction@CBitmapSource@@QEAAJPEAPEAVCDrawNineGridInstruction@@@Z.c)
 */

__int64 __fastcall CImage::UpdateBitmap(CBitmapSource **this)
{
  CBaseObject *v1; // rdi
  int v3; // eax
  unsigned int v4; // ebx
  CBitmapSource *v5; // rcx
  int DrawNineGridInstruction; // eax
  int v7; // eax
  CBaseObject *v9; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0LL;
  v9 = 0LL;
  v3 = CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x3Fu, 0LL);
  }
  else
  {
    v5 = this[30];
    if ( !v5 )
      return v4;
    DrawNineGridInstruction = CBitmapSource::GetDrawNineGridInstruction(v5, &v9);
    v4 = DrawNineGridInstruction;
    if ( DrawNineGridInstruction < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, DrawNineGridInstruction, 0x43u, 0LL);
      v1 = v9;
    }
    else
    {
      v1 = v9;
      v7 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v9);
      v4 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x44u, 0LL);
    }
  }
  if ( v1 )
    CBaseObject::Release(v1);
  return v4;
}
