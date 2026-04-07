/*
 * XREFs of ?GetDrawNineGridInstruction@CBitmapSource@@QEAAJPEAPEAVCDrawNineGridInstruction@@@Z @ 0x180021664
 * Callers:
 *     ?UpdateBitmap@CImage@@QEAAJXZ @ 0x180021594 (-UpdateBitmap@CImage@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x1800216A4 (-Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CBitmapSource::GetDrawNineGridInstruction(CBitmapSource *this, struct CDrawNineGridInstruction **a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CDrawNineGridInstruction::Create(this, a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x1A9u, 0LL);
  return v3;
}
