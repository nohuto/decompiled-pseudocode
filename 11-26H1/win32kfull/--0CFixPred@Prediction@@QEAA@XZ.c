/*
 * XREFs of ??0CFixPred@Prediction@@QEAA@XZ @ 0x1400FE9F8
 * Callers:
 *     NtGdiGetFontFileData @ 0x1400CF300 (NtGdiGetFontFileData.c)
 *     NtGdiGetFontFileInfo @ 0x1400FE220 (NtGdiGetFontFileInfo.c)
 *     ??0?$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x140196714 (--0-$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 *     ??0?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x140196784 (--0-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

Prediction::CFixPred *__fastcall Prediction::CFixPred::CFixPred(Prediction::CFixPred *this)
{
  *(_QWORD *)this = 0LL;
  return this;
}
